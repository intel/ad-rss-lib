# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
import shutil
import sys
import traceback
import warnings

from colcon_core.event.command import Command
from colcon_core.event.command import CommandEnded
from colcon_core.event.job import JobProgress
from colcon_core.event.output import StderrLine
from colcon_core.event.output import StdoutLine
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_name
from colcon_core.subprocess import run as colcon_core_subprocess_run

logger = colcon_logger.getChild(__name__)


class TaskContext:
    """The context provided to tasks."""

    def __init__(self, *, pkg, args, dependencies):
        """
        Construct a TaskContext.

        :param pkg: The package descriptor
        :param args: The parsed command line arguments
        :param dependencies: The ordered dictionary mapping dependency names to
          their paths
        """
        self.event_queue = None
        self.pkg = pkg
        self.args = args
        self.dependencies = dependencies

    def put_event_into_queue(self, event):
        """
        Post a message event into the event queue.

        The method is not implemented by default and will be replaced at
        runtime once the event queue is known.

        :param event: The event
        """
        raise NotImplementedError()


class TaskExtensionPoint:
    """
    The interface for task extensions.

    A task extension performs a specific logic and/or command sequence.

    For each instance the attributes `TASK_NAME` and `PACKAGE_TYPE` are being
    set to the (parent) basename of the entry point registering the extension.
    """

    """The version of the task extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    def add_arguments(self, *, parser):
        """
        Add command line arguments specific to the task.

        The method is intended to be overridden in a subclass.

        :param parser: The argument parser
        """
        pass

    def set_context(self, *, context):
        """
        Set the context before the task is being `__call__`-ed.

        :param context: The task context
        """
        self.context = context

    async def __call__(self, *args, **kwargs):
        """
        Execute the task extension logic.

        This method relays the call to a method named `self.TASK_NAME` which
        should be implemented in subclasses.

        :returns: The return code
        """
        task_method = getattr(self, self.TASK_NAME)
        return await task_method(*args, **kwargs)

    def print(self, msg, *, file=None):  # noqa: A003
        """
        Post a message event into the event queue.

        :param msg: The message
        :param file: The sink to write the message to. An argument of `None` or
          `sys.stdout` posts a `StdoutLine` event, `sys.stderr` posts a
          `StderrLine` event.
        """
        if file is None or file == sys.stdout:
            data = StdoutLine(msg + '\n')
        elif file == sys.stderr:
            data = StderrLine(msg + '\n')
        else:
            assert False, 'Unknown file object: ' + str(file)
        self.context.put_event_into_queue(data)

    def progress(self, message):
        """
        Post a progress event into the event queue.

        :param msg: The message
        """
        self.context.put_event_into_queue(
            JobProgress(self.context.pkg.name, message))


async def check_call(
    context, cmd, *, cwd=None, env=None, shell=False, use_pty=None
):  # pragma: no cover
    """
    Run the command described by cmd.

    Post a `Command` event to the queue describing the exact invocation in
    order to allow reproducing it.
    All output to `stdout` and `stderr` is posted as `StdoutLine` and
    `StderrLine` events to the event queue.

    This function has been depreated, use ``colcon_core.task.run()`` instead.

    :param cmd: The command and its arguments
    :param cwd: the working directory for the subprocess
    :param env: a dictionary with environment variables
    :param shell: whether to use the shell as the program to execute
    :param use_pty: whether to use a pseudo terminal
    :returns: the result of the completed process
    :rtype subprocess.CompletedProcess
    """
    warnings.warn(
        'colcon_core.task.check_call() has been deprecated, use '
        'colcon_core.task.run() instead', stacklevel=2)
    return await run(
        context, cmd, cwd=cwd, env=env, shell=shell, use_pty=use_pty)


async def run(
    context, cmd, *, use_pty=None, capture_output=None, **other_popen_kwargs
):
    """
    Run the command described by cmd.

    Post a `Command` event to the queue describing the exact invocation in
    order to allow reproducing it.
    All output to `stdout` and `stderr` is posted as `StdoutLine` and
    `StderrLine` events to the event queue.

    See the documentation of `subprocess.Popen()
    <https://docs.python.org/3/library/subprocess.html#subprocess.Popen>` for
    other parameters.

    :param cmd: The command and its arguments
    :param use_pty: whether to use a pseudo terminal
    :param capture_output: whether to store stdout and stderr
    :returns: the result of the completed process
    :rtype subprocess.CompletedProcess
    """
    def stdout_callback(line):
        context.put_event_into_queue(StdoutLine(line))

    def stderr_callback(line):
        context.put_event_into_queue(StderrLine(line))

    cwd = other_popen_kwargs.get('cwd', None)
    env = other_popen_kwargs.get('env', None)
    shell = other_popen_kwargs.get('shell', False)

    context.put_event_into_queue(
        Command(cmd, cwd=cwd, env=env, shell=shell))
    completed = await colcon_core_subprocess_run(
        cmd, stdout_callback, stderr_callback,
        use_pty=use_pty, capture_output=capture_output,
        **other_popen_kwargs)
    context.put_event_into_queue(
        CommandEnded(
            cmd, cwd=cwd, env=env, shell=shell,
            returncode=completed.returncode))
    return completed


def get_task_extensions(task_name, *, unique_instance=False):
    """
    Get the available task extensions.

    The extensions are ordered by their entry point name.

    :param str task_name: The entry point name identifying a group of task
      extensions
    :param bool unique_instance: The flag if the returned instances should be
      unique or cached instances can be returned instead
    :rtype: OrderedDict
    """
    extensions = instantiate_extensions(
        task_name, unique_instance=unique_instance)
    task_basename = task_name.split('.')[-1]
    for name in list(extensions.keys()):
        extension = extensions[name]
        assert hasattr(extension, task_basename)
        extension.TASK_NAME = task_basename
        extension.PACKAGE_TYPE = name
    return order_extensions_by_name(extensions)


def add_task_arguments(parser, task_name):
    """
    Add the command line arguments for the task extensions.

    :param parser: The argument parser
    :param str task_name: The entry point name identifying a group of task
      extensions
    """
    extensions = get_task_extensions(task_name, unique_instance=True)
    for extension_name, extension in extensions.items():
        group = parser.add_argument_group(
            title=f"Arguments for '{extension_name}' packages")
        try:
            retval = extension.add_arguments(parser=group)
            assert retval is None, 'add_arguments() should return None'
        except Exception as e:  # noqa: F841
            # catch exceptions raised in task extension
            exc = traceback.format_exc()
            logger.error(
                f"Exception in task extension '{extension.TASK_NAME}."
                f"{extension.PACKAGE_TYPE}': {e}\n{exc}")
            # skip failing extension, continue with next one


def get_task_extension(task_name, package_type):
    """
    Get a specific task extension.

    :param str task_name: The entry point name identifying a group of task
      extensions
    :param str package_type: The package type identifying a task extension
      within the group
    :returns: The task extension
    """
    extensions = instantiate_extensions(
        task_name, unique_instance=True)
    if package_type not in extensions:
        return None
    extension = extensions[package_type]
    extension.TASK_NAME = task_name.split('.')[-1]
    extension.PACKAGE_TYPE = package_type
    return extension


def create_file(args, rel_path, *, content=None):
    """
    Create a file within the install base.

    Creates the containing directory if necessary.

    :param args: The parsed command line arguments containing the install base
    :param str rel_path: The relative path of file
    :param str content: The content of the created file
    :returns: The task extension
    """
    dst = os.path.join(args.install_base, rel_path)
    os.makedirs(os.path.dirname(dst), exist_ok=True)
    with open(dst, 'w') as h:
        if content is not None:
            h.write(content)


def install(args, rel_src, rel_dst):
    """
    Install or symlink a file.

    Creates the containing directory if necessary.

    :param args: The parsed command line arguments containing the source path
      as well as the install base
    :param str rel_src: The source path relative to the path
    :param str rel_dst: The destination path relative to the install base
    """
    src = os.path.join(args.path, rel_src)
    dst = os.path.join(args.install_base, rel_dst)
    os.makedirs(os.path.dirname(dst), exist_ok=True)
    if not args.symlink_install:
        if os.path.islink(dst):
            os.unlink(dst)
        shutil.copy(src, dst)
    else:
        if os.path.islink(dst):
            if not os.path.exists(dst) or not os.path.samefile(src, dst):
                os.unlink(dst)
        elif os.path.isfile(dst):
            os.remove(dst)
        elif os.path.isdir(dst):
            shutil.rmtree(dst)
        if not os.path.exists(dst):
            os.symlink(src, dst)
