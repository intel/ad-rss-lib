# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections.abc import Iterable
import os
from pathlib import Path
import traceback

from colcon_core.location import get_relative_package_index_path
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_priority
from colcon_core.shell import get_shell_extensions

logger = colcon_logger.getChild(__name__)


class EnvironmentExtensionPoint:
    """
    The interface for environment extensions.

    An environment extension creates environment hooks for a specific
    environment variable and uses the shell extensions to generate scripts for
    each supported shell.

    For each instance the attribute `ENVIRONMENT_NAME` is being set to the
    basename of the entry point registering the extension.
    """

    """The version of the environment extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    """The default priority of environment extensions."""
    PRIORITY = 100

    def create_environment_hooks(self, prefix_path, pkg_name):
        """
        Create the environment hooks for a package.

        This method must be overridden in a subclass.

        :param prefix_path: The prefix path of the package
        :param pkg_name: The package name
        :returns: iterable of generated hook paths
        :rtype: Iterable
        """
        raise NotImplementedError()


def get_environment_extensions(*, group_name=None):
    """
    Get the available environment extensions.

    The extensions are ordered by their priority and entry point name.

    :rtype: OrderedDict
    """
    if group_name is None:
        group_name = __name__
    extensions = instantiate_extensions(group_name)
    for name in list(extensions.keys()):
        extension = extensions[name]
        extension.ENVIRONMENT_NAME = name
    return order_extensions_by_priority(extensions)


def create_environment_scripts(
    pkg, args, *, default_hooks=None, additional_hooks=None
):
    """
    Create the environment scripts for a package.

    Also create a file with the runtime dependencies of each packages which can
    be used by the prefix scripts to source all packages in topological order.

    :param pkg: The package descriptor
    :param args: The parsed command line arguments
    :param list default_hooks: If none are parsed explicitly the hooks provided
      by :function:`create_environment_hooks` are used
    :param list additional_hooks: Any additional hooks which should be
      referenced by the generated scripts
    :returns: iterable of generated file paths
    :rtype: Iterable
    """
    prefix_path = Path(args.install_base)
    files = []
    files += create_environment_scripts_only(
        prefix_path, pkg, default_hooks=default_hooks,
        additional_hooks=additional_hooks)
    files.append(
        create_file_with_runtime_dependencies(prefix_path, pkg))
    return files


def create_environment_scripts_only(
    prefix_path, pkg, *, default_hooks=None, additional_hooks=None
):
    """
    Create the environment scripts for a package.

    :param prefix_path: The prefix path
    :param pkg: The package descriptor
    :param list default_hooks: If none are parsed explicitly the hooks provided
      by :function:`create_environment_hooks` are used
    :param list additional_hooks: Any additional hooks which should be
      referenced by the generated scripts
    :returns: iterable of generated script paths
    :rtype: Iterable
    """
    logger.log(1, 'create_environment_scripts_only(%s)', pkg.name)

    hooks = []
    if default_hooks is None:
        default_hooks = create_environment_hooks(prefix_path, pkg.name)
    hooks += default_hooks
    if additional_hooks:
        hooks += additional_hooks
    hooks += pkg.hooks

    # ensure each hook is presented by a tuple
    # with the first element being a relative path
    # and the second element being a list of arguments
    hook_tuples = []
    for hook in hooks:
        hook_args = []
        if isinstance(hook, list) or isinstance(hook, tuple):
            hook_args = hook[1:]
            hook = hook[0]

        if os.path.isabs(str(hook)):
            hook = os.path.relpath(str(hook), start=str(prefix_path))

        hook_tuples.append((hook, hook_args))

    all_scripts = []
    extensions = get_shell_extensions()
    for priority in extensions.keys():
        extensions_same_prio = extensions[priority]
        for extension in extensions_same_prio.values():
            try:
                scripts = extension.create_package_script(
                    prefix_path, pkg.name, hook_tuples)
                # TODO: Disallow 'None' in v3.0 of ShellExtensionPoint
                if scripts is not None:
                    assert isinstance(scripts, list), \
                        'create_package_script() should return a list'
                    all_scripts += scripts
            except Exception as e:  # noqa: F841
                # catch exceptions raised in shell extension
                exc = traceback.format_exc()
                logger.error(
                    f"Exception in shell extension '{extension.SHELL_NAME}': "
                    f'{e}\n{exc}')
                # skip failing extension, continue with next one

    return all_scripts


def create_file_with_runtime_dependencies(prefix_path, pkg):
    """
    Create a file with the runtime dependencies of the package.

    It can be used by the prefix scripts to source all packages in topological
    order.

    :param prefix_path: The prefix path
    :param pkg: The package descriptor
    :returns: generated file path
    :rtype: Path
    """
    path = prefix_path / get_relative_package_index_path() / pkg.name
    logger.log(1, 'create_file_with_runtime_dependencies(%s)', path)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(
        os.pathsep.join(sorted(pkg.dependencies.get('run', set()))))
    return path


def create_environment_hooks(prefix_path, pkg_name):
    """
    Create the environment hooks for a package.

    :param prefix_path: The prefix path of the package
    :param pkg_name: The package name
    :returns: iterable of generated hook paths
    :rtype: Iterable
    """
    prefix_path = Path(prefix_path)
    all_hooks = []
    extensions = get_environment_extensions()
    for extension in extensions.values():
        try:
            hooks = extension.create_environment_hooks(prefix_path, pkg_name)
            assert isinstance(hooks, Iterable), \
                'create_environment_hooks() should return an iterable'
        except Exception as e:  # noqa: F841
            # catch exceptions raised in environment extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in environment extension '
                f"'{extension.ENVIRONMENT_NAME}': {e}\n{exc}")
            # skip failing extension, continue with next one
            continue
        all_hooks += hooks
    return all_hooks
