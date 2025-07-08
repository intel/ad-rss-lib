# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import copy
import errno
import locale
import os
import time

from colcon_core.event.command import Command
from colcon_core.event.job import JobEnded
from colcon_core.event.job import JobStarted
from colcon_core.event.output import StderrLine
from colcon_core.event.output import StdoutLine
from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.event_handler.console_direct import ConsoleDirectEventHandler
from colcon_core.location import create_log_path
from colcon_core.location import get_log_path
from colcon_core.plugin_system import satisfies_version

# when this extension is present it disables the direct console output
ConsoleDirectEventHandler.ENABLED_BY_DEFAULT = False

COMMAND_LOG_FILENAME = 'command.log'
STDOUT_LOG_FILENAME = 'stdout.log'
STDERR_LOG_FILENAME = 'stderr.log'
STDOUT_STDERR_LOG_FILENAME = 'stdout_stderr.log'
ALL_STREAMS_LOG_FILENAME = 'streams.log'

all_log_filenames = [
    COMMAND_LOG_FILENAME,
    STDOUT_LOG_FILENAME,
    STDERR_LOG_FILENAME,
    STDOUT_STDERR_LOG_FILENAME,
    ALL_STREAMS_LOG_FILENAME,
]


class LogEventHandler(EventHandlerExtensionPoint):
    """
    Output task specific log files.

    The following log files are created in the log directory of the specific
    task: `command.log`, `stdout.log`, `stderr.log`.
    Additionally the log file `streams.log` is created with the combined
    content.

    The presence of this extension disables the default console output in order
    to keep the amount of output readable.

    The extension handles events of the following types:
    - :py:class:`colcon_core.event.command.Command`
    - :py:class:`colcon_core.event.job.JobStarted`
    - :py:class:`colcon_core.event.job.JobEnded`
    - :py:class:`colcon_core.event.output.StdoutLine`
    - :py:class:`colcon_core.event.output.StderrLine`
    """

    # the priority should be higher than the default priority
    # in order to write the information to the log files before
    PRIORITY = 150

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self._jobs = set()
        self._file_handles = {}
        self._start_times = {}

    def __call__(self, event):  # noqa: D102
        global all_log_filenames
        data = event[0]
        job = event[1]

        if isinstance(data, JobStarted):
            self._start_times[job] = time.monotonic()

        if isinstance(data, JobEnded):
            # Skip if the log path is /dev/null
            # => is unable to get directory
            base_path = get_log_directory(job)
            if base_path is None:
                return

            for filename in all_log_filenames:
                path = base_path / filename
                if path in self._file_handles:
                    self._file_handles[path].close()
            return

        filenames = copy.copy(all_log_filenames)
        if not isinstance(data, Command):
            filenames.remove(COMMAND_LOG_FILENAME)
        if not isinstance(data, StdoutLine):
            filenames.remove(STDOUT_LOG_FILENAME)
        if not isinstance(data, StderrLine):
            filenames.remove(STDERR_LOG_FILENAME)
        if (
            not isinstance(data, StdoutLine) and
            not isinstance(data, StderrLine)
        ):
            filenames.remove(STDOUT_STDERR_LOG_FILENAME)
        if len(filenames) <= 1:
            # skip if event is neither of the known events
            return

        if not self._init_logs(job):
            return

        if isinstance(data, Command):
            line = data.to_string() + '\n'
        else:
            line = data.line

        if not isinstance(line, bytes):
            # use the same encoding as the default for the opened file
            line = line.encode(encoding=locale.getpreferredencoding(False))

        # Get base path, and return if fails
        base_path = get_log_directory(job)
        if base_path is None:
            return

        for filename in filenames:
            h = self._file_handles[base_path / filename]

            if filename == ALL_STREAMS_LOG_FILENAME:
                # prefix line with relative time
                relative_time = time.monotonic() - self._start_times[job]
                # use the same encoding as the default for the opened file
                prefix = ('[%.3fs] ' % relative_time).encode(
                    encoding=locale.getpreferredencoding(False))
                h.write(prefix)

            h.write(line)
            try:
                h.flush()
            except OSError as e:
                if e.errno == errno.ENOSPC:
                    # for known error code suppress the stacktrace
                    # and only show the exception message
                    raise RuntimeError(
                        str(e) + ' [{h.name}]'.format_map(locals()))
                raise

    def _init_logs(self, job):
        global all_log_filenames
        # only create logs once per task
        if job in self._jobs:
            return True

        # Get directory
        # If this fails, the log directory is /dev/null
        # so function must return with negative result
        base_path = get_log_directory(job)
        if base_path is None:
            return False

        self._jobs.add(job)

        create_log_path(self.context.args.verb_name)

        os.makedirs(str(base_path), exist_ok=True)
        for filename in all_log_filenames:
            path = base_path / filename
            self._file_handles[path] = path.open(mode='wb')
        return True


def get_log_directory(job):
    """
    Get the log directory for a specific job.

    :param job: The job
    :rtype: Path
    """
    log_path = get_log_path()
    if log_path is None:
        return None
    return log_path / job.identifier
