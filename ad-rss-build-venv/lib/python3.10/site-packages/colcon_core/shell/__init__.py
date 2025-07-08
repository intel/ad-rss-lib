# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from asyncio import CancelledError
from collections import OrderedDict
import locale
import os
from pathlib import Path
import re
import sys
import traceback
import warnings

from colcon_core.environment_variable import EnvironmentVariable
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_grouped_by_priority
from colcon_core.plugin_system import SkipExtensionException
from colcon_core.prefix_path import get_chained_prefix_path
from colcon_core.subprocess import check_output

logger = colcon_logger.getChild(__name__)

"""Environment variable to enable all shell extensions."""
ALL_SHELLS_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_ALL_SHELLS', 'Flag to enable all shell extensions')

use_all_shell_extensions = os.environ.get(
    ALL_SHELLS_ENVIRONMENT_VARIABLE.name, False)


class ShellExtensionPoint:
    """
    The interface for shell extensions.

    An shell extension generates the scripts for a specific shell to setup the
    environment.

    For each instance the attribute `SHELL_NAME` is being set to the basename
    of the entry point registering the extension.
    """

    """The version of the shell extension interface."""
    EXTENSION_POINT_VERSION = '2.2'

    """
    The default priority of shell extensions.

    A shell extension must use a higher priority than the default if and only
    if it is a "primary" shell.
    A "primary" shell does not depend on another shell to setup the
    environment, e.g. `sh`.
    An example for a "non-primary" shell would be `bash` which relies on the
    `sh` shell extension to setup environment variables and only contributes
    additional information like completion.

    All "non-primary" shell extensions must use a priority equal to or lower
    than the default.
    """
    PRIORITY = 100

    """
    The format string for a comment line.

    It must have the placeholder {comment}.
    This attribute must be defined in a subclass.
    """
    FORMAT_STR_COMMENT_LINE = None
    """
    The format string to set an environment variable.

    It must have the placeholder {name} and {value}.
    This attribute must be defined in a subclass.
    """
    FORMAT_STR_SET_ENV_VAR = None
    """
    The format string to use an environment variable.

    It must have the placeholder {name}.
    This attribute must be defined in a subclass.
    """
    FORMAT_STR_USE_ENV_VAR = None
    """
    The format string to invoke a script file.

    It must have the placeholder {prefix} and {script_path}.
    This attribute must be defined in a subclass.
    """
    FORMAT_STR_INVOKE_SCRIPT = None
    """
    The format string to remove a leading separator.

    When appending to an environment variable, a leading separator will be
    left behind if the variable was not set previously.
    This command is used to cleanup the leading separarator.

    It must have the placeholder {name} for the environment variable name.
    This attribute is optionally defined in subclasses.
    """
    FORMAT_STR_REMOVE_LEADING_SEPARATOR = None
    """
    The format string to remove a trailing separator.

    When prepending to an environment variable, a trailing separator will be
    left behind if the variable was not set previously.
    This command is used to cleanup the trailing separarator.

    It must have the placeholder {name} for the environment variable name.
    This attribute is optionally defined in subclasses.
    """
    FORMAT_STR_REMOVE_TRAILING_SEPARATOR = None

    def get_file_extensions(self):
        """
        Get the file extensions provided by this extension.

        By default the extension name will be returned.
        The method is intended to be overridden in a subclass.

        :returns: the file extensions
        :rtype: tuple
        """
        return (self.SHELL_NAME, )

    def create_prefix_script(self, prefix_path, merge_install):
        """
        Create a script in the install prefix path.

        The script should call each package specific script in order.

        This method must be overridden in a subclass.

        :param Path prefix_path: The path of the install prefix
        :param bool merge_install: The flag if all packages share the same
          install prefix
        :returns: The relative paths to the created scripts
        :rtype: list
        """
        raise NotImplementedError()

    def _get_prefix_util_path(self):
        """
        Get the absolute path of the `prefix_util.py` module.

        :returns: The path of the module file
        :rtype: Path
        """
        warnings.warn(
            'colcon_core.shell._get_prefix_util_path() will be removed in the '
            'future', DeprecationWarning, stacklevel=2)
        return Path(__file__).parent / 'template' / 'prefix_util.py'

    def _get_prefix_util_template_path(self):
        """
        Get the absolute path of the `prefix_util.py.em` module template.

        :returns: The path of the module file
        :rtype: Path
        """
        return Path(__file__).parent / 'template' / 'prefix_util.py.em'

    def create_package_script(self, prefix_path, pkg_name, hooks):
        """
        Create a script for a specific package.

        The script should call each hook script in order.

        This method must be overridden in a subclass.

        :param Path prefix_path: The package specific install prefix
        :param str pkg_name: The package name
        :param list hooks: The relative paths to the hook scripts
        :returns: The relative paths to the created scripts
        :rtype: list
        """
        raise NotImplementedError()

    def create_hook_set_value(
        self, env_hook_name, prefix_path, pkg_name, name, value,
    ):
        """
        Create a hook script to set an environment variable value.

        This method must be overridden in a subclass.

        :param str env_hook_name: The name of the hook script
        :param Path prefix_path: The path of the install prefix
        :param str pkg_name: The package name
        :param str name: The name of the environment variable
        :param str value: The value to be set. If an empty string is passed the
          environment variable should be set to the prefix path at the time the
          hook is sourced (from COLCON_CURRENT_PREFIX).
          Note that the install-space may have been relocated, and the final
          value may differ from the value of argument prefix_path, where
          the hook was originally installed to.
        :returns: The relative path to the created hook script
        :rtype: Path
        """
        raise NotImplementedError()

    def create_hook_append_value(
        self, env_hook_name, prefix_path, pkg_name, name, subdirectory,
    ):
        """
        Create a hook script to append a value to an environment variable.

        This method must be overridden in a subclass.

        :param str env_hook_name: The name of the hook script
        :param Path prefix_path: The path of the install prefix
        :param str pkg_name: The package name
        :param str name: The name of the environment variable
        :param str subdirectory: The subdirectory of the prefix path
        :returns: The relative path to the created hook script
        :rtype: Path
        """
        raise NotImplementedError()

    def create_hook_prepend_value(
        self, env_hook_name, prefix_path, pkg_name, name, subdirectory,
    ):
        """
        Create a hook script to prepend a value to an environment variable.

        This method must be overridden in a subclass.

        :param str env_hook_name: The name of the hook script
        :param Path prefix_path: The path of the install prefix
        :param str pkg_name: The package name
        :param str name: The name of the environment variable
        :param str subdirectory: The subdirectory of the prefix path
        :returns: The relative path to the created hook script
        :rtype: Path
        """
        raise NotImplementedError()

    def create_hook_include_file(
        self, env_hook_name, prefix_path, pkg_name, relative_path,
    ):
        """
        Create a hook script to include another script.

        This method must be overridden in a subclass.

        :param str env_hook_name: The name of the hook script
        :param Path prefix_path: The path of the install prefix
        :param str pkg_name: The package name
        :param str relative_path: The path of the included scripts
        :returns: The relative path to the created hook script
        :rtype: Path
        """
        raise NotImplementedError()

    async def generate_command_environment(
        self, task_name, build_base, dependencies,
    ):
        """
        Get the environment variables to invoke commands.

        The method must be overridden in a subclass if and only if the shell
        extension represents a "primary" shell (as defined in
        :attribute:`ShellExtensionPoint.PRIORITY`).

        :param str task_name: The name of the task
        :param Path build_base: The base path of the build directory
        :param set dependencies: The ordered dictionary mapping dependency
          names to their paths
        :returns: The environment
        :rtype: dict
        :raises SkipExtensionException: if the shell is not usable on the
          current platform
        """
        raise NotImplementedError()


def get_shell_extensions(*, group_name=None):
    """
    Get the available shell extensions.

    The extensions are grouped by their priority and each group is ordered by
    the entry point name.

    :rtype: OrderedDict
    """
    if group_name is None:
        group_name = __name__
    extensions = instantiate_extensions(group_name)
    for name, extension in extensions.items():
        extension.SHELL_NAME = name
    return order_extensions_grouped_by_priority(extensions)


async def get_command_environment(task_name, build_base, dependencies):
    """
    Get the environment variables to invoke commands.

    :param str task_name: The task name identifying a group of task extensions
    :param str build_base: The path of the build base
    :param dependencies: The ordered dictionary mapping dependency names to
      their paths
    """
    extensions = get_shell_extensions()
    for priority in extensions.keys():
        extensions_same_prio = extensions[priority]
        for extension in extensions_same_prio.values():
            try:
                # use the environment of the first successful shell extension
                return await extension.generate_command_environment(
                    task_name, Path(build_base), dependencies)
            except NotImplementedError:
                # skip extension, continue with next one
                logger.debug(
                    f"Skip shell extension '{extension.SHELL_NAME}' for "
                    'command environment')
            except SkipExtensionException as e:  # noqa: F841
                # skip extension, continue with next one
                logger.info(
                    f"Skip shell extension '{extension.SHELL_NAME}' for "
                    f'command environment: {e}')
            except (CancelledError, RuntimeError):
                # re-raise same exception to handle it in the executor
                # without a traceback
                raise
            except Exception as e:  # noqa: F841
                # catch exceptions raised in shell extension
                exc = traceback.format_exc()
                logger.error(
                    'Exception in shell extension '
                    f"'{extension.SHELL_NAME}': {e}\n{exc}")
                # skip failing extension, continue with next one
    raise RuntimeError(
        'Could not find a shell extension for the command environment')


async def get_null_separated_environment_variables(
    cmd, *, cwd=None, shell=True,
):
    """
    Get null-separated environment variables from the output of the command.

    :param args: the sequence of program arguments
    :param cwd: the working directory for the subprocess
    :param shell: whether to use the shell as the program to execute
    :rtype: dict
    """
    encoding = locale.getpreferredencoding()
    output = await check_output(cmd, cwd=cwd, shell=shell)
    env = OrderedDict()
    for kvp in output.split(b'\0'):
        kvp = kvp.rstrip()
        if not kvp:
            continue
        try:
            parts = kvp.decode(encoding).split('=', 1)
        except UnicodeDecodeError:
            kvp_replaced = kvp.decode(encoding=encoding, errors='replace')
            logger.warning(
                'Failed to decode line from the environment using the '
                f"encoding '{encoding}': {kvp_replaced}")
            continue
        if len(parts) != 2:
            # skip lines which don't contain an equal sign
            continue
        env[parts[0]] = parts[1]
    assert len(env) > 0, "The environment shouldn't be empty"
    return env


async def get_environment_variables(cmd, *, cwd=None, shell=True):
    """
    Get the environment variables from the output of the command.

    :param args: the sequence of program arguments
    :param cwd: the working directory for the subprocess
    :param shell: whether to use the shell as the program to execute
    :rtype: dict
    """
    output = await check_output(cmd, cwd=cwd, shell=shell)
    env = OrderedDict()
    for line in output.splitlines():
        line = line.rstrip()
        if not line:
            continue
        encoding = locale.getpreferredencoding()
        try:
            line = line.decode(encoding)
        except UnicodeDecodeError:
            line_replaced = line.decode(encoding=encoding, errors='replace')
            logger.warning(
                'Failed to decode line from the environment using the '
                f"encoding '{encoding}': {line_replaced}")
            continue
        parts = line.split('=', 1)
        if sys.platform != 'win32':
            regex = '^[a-zA-Z_][a-zA-Z0-9_]*$'
        else:
            regex = '^[a-zA-Z0-9%_' + ''.join(
                '\\' + c for c in r'(){}[]$*+-\/"#\',;.@!?'
            ) + ']+$'
        if len(parts) == 2 and re.match(regex, parts[0]):
            # add new environment variable
            env[parts[0]] = parts[1]
        else:
            # assume a line without an equal sign or with a "key" which is not
            # a valid name is a continuation of the previous line
            if env:
                env[list(env.keys())[-1]] += '\n' + line
    assert len(env) > 0, "The environment shouldn't be empty"
    return env


def create_environment_hook(
    env_hook_name, prefix_path, pkg_name, name, subdirectory, *, mode='prepend'
):
    """
    Create a hook script for each primary shell.

    :param str env_hook_name: The name of the hook script
    :param Path prefix_path: The path of the install prefix
    :param str pkg_name: The package name
    :param str name: The name of the environment variable
    :param str subdirectory: The value to be appended
    :param str mode: The mode how the new value should be combined with an
      existing value, currently only the values `append` and `prepend` are
      supported
    :returns: The relative paths to the created hook scripts
    :rtype: list
    """
    logger.log(
        1, "create_environment_hook('%s', '%s')" % (pkg_name, env_hook_name))

    hooks = []
    extensions = get_shell_extensions()
    for priority in extensions.keys():
        # only consider primary shell extensions
        if priority <= ShellExtensionPoint.PRIORITY:
            break

        extensions_same_prio = extensions[priority]
        for extension in extensions_same_prio.values():
            if mode == 'append':
                try:
                    hook = extension.create_hook_append_value(
                        env_hook_name, prefix_path, pkg_name, name,
                        subdirectory)
                    assert isinstance(hook, Path), \
                        'create_hook_append_value() should return a Path ' \
                        'object'

                except Exception as e:  # noqa: F841
                    # catch exceptions raised in shell extension
                    exc = traceback.format_exc()
                    logger.error(
                        'Exception in shell extension '
                        f"'{extension.SHELL_NAME}': {e}\n{exc}")
                    # skip failing extension, continue with next one
                    continue
                hooks.append(hook)
            elif mode == 'prepend':
                try:
                    hook = extension.create_hook_prepend_value(
                        env_hook_name, prefix_path, pkg_name, name,
                        subdirectory)
                    assert isinstance(hook, Path), \
                        'create_hook_prepend_value() should return a Path ' \
                        'object'

                except Exception as e:  # noqa: F841
                    # catch exceptions raised in shell extension
                    exc = traceback.format_exc()
                    logger.error(
                        'Exception in shell extension '
                        f"'{extension.SHELL_NAME}': {e}\n{exc}")
                    # skip failing extension, continue with next one
                    continue
                hooks.append(hook)
            else:
                raise NotImplementedError()
    if not hooks:
        raise RuntimeError(
            'Could not find a primary shell extension for creating an '
            'environment hook')
    return hooks


_get_colcon_prefix_path_warnings = set()


def get_colcon_prefix_path(*, skip=None):
    """
    Get the paths from the COLCON_PREFIX_PATH environment variable.

    For not existing paths a warning is being printed and the path is being
    skipped.
    Even for repeated invocation a warning is only being printed once for each
    non existing path.

    :param skip: The current prefix path to be skipped and not be included in
      the return value
    :returns: The list of prefix paths
    :rtype: list
    """
    warnings.warn(
        "'colcon_core.shell.get_colcon_prefix_path()' has been deprecated, "
        "use 'colcon_core.prefix_path.get_chained_prefix_path()' instead",
        stacklevel=2)
    global _get_colcon_prefix_path_warnings
    prefix_path = []
    colcon_prefix_path = os.environ.get('COLCON_PREFIX_PATH', '')
    for path in colcon_prefix_path.split(os.pathsep):
        if not path:
            continue
        if skip is not None and path == str(skip):
            continue
        if not os.path.exists(path):
            if path not in _get_colcon_prefix_path_warnings:
                logger.warning(
                    f"The path '{path}' in the environment variable "
                    "COLCON_PREFIX_PATH doesn't exist")
            _get_colcon_prefix_path_warnings.add(path)
            continue
        prefix_path.append(path)

    return prefix_path


def check_dependency_availability(dependencies, *, script_filename):
    """
    Check if all dependencies are available.

    First the install base of the workspace is being checked.
    Second all prefix paths set in the environment are considered.
    In the second case a warning is logged to notify the user.

    :param dependencies: The ordered dictionary mapping dependency names to
      their paths. Packages which have been found in the environment are being
      removed from the dictionary.
    :param str script_filename: The filename of the package specific script to
      check for
    :raises RuntimeError: if any package isn't found in either of the locations
    """
    missing = OrderedDict()
    # check if the dependency exists in the install base of this workspace
    for pkg_name, pkg_install_base in dependencies.items():
        pkg_script = Path(
            pkg_install_base) / 'share' / pkg_name / script_filename
        if not pkg_script.exists():
            missing[pkg_name] = pkg_script

    # check if the dependency exists in any other prefix path
    packages_in_env = find_installed_packages_in_environment()
    env_packages = OrderedDict()
    for pkg_name, pkg_install_base in list(missing.items()):
        if pkg_name in packages_in_env:
            env_packages[pkg_name] = packages_in_env[pkg_name]
            # no need to source any script for this package
            del dependencies[pkg_name]
            del missing[pkg_name]

    # warn about using packages from the environment
    if env_packages:
        logger.warning(
            "The following packages are in the workspace but haven't been "
            'built:' +
            ''.join('\n- %s' % name for name in env_packages.keys()) +
            '\nThey are being used from the following locations instead:' +
            ''.join('\n- %s' % path for path in env_packages.values()) +
            '\nTo suppress this warning ignore these packages in the ' +
            'workspace:\n--packages-ignore ' + ' '.join(env_packages.keys()))

    # raise error in case any dependencies are not matched
    if missing:
        raise RuntimeError(
            'Failed to find the following files:' +
            ''.join('\n- %s' % path for path in missing.values()) +
            '\nCheck that the following packages have been built:' +
            ''.join('\n- %s' % name for name in missing.keys()))


def find_installed_packages_in_environment():
    """
    Find packages under the COLCON_PREFIX_PATH.

    For each prefix path the package index is being read and the first time a
    package is being found its install prefix is being added to the result.

    :returns: The mapping from a package name to the prefix path
    :rtype: OrderedDict
    """
    packages = OrderedDict()
    for prefix_path in get_chained_prefix_path():
        prefix_path = Path(prefix_path)
        pkgs = find_installed_packages(prefix_path)
        if pkgs is None:
            logger.debug(f"Ignoring prefix path '{prefix_path}'")
            continue
        for pkg_name in sorted(pkgs.keys()):
            # ignore packages with the same name in "lower" prefix path
            if pkg_name in packages:
                continue
            packages[pkg_name] = pkgs[pkg_name]
    return packages


class FindInstalledPackagesExtensionPoint:
    """
    The interface for extensions to find installed packages.

    This type of extension locates installed packages inside a prefix path.
    """

    """The version of this extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    """The default priority of an extension."""
    PRIORITY = 100

    def find_installed_packages(self, install_base: Path):
        """
        Find installed packages in an install path.

        This method must be overridden in a subclass.

        :param Path prefix_path: The path of the install prefix
        :returns: The mapping from a package name to the prefix path, or None
            if the path is not an install layout supported by this extension.
        :rtype: Dict or None
        """
        raise NotImplementedError()


def get_find_installed_packages_extensions(*, group_name=None):
    """
    Get the available package identification extensions.

    The extensions are grouped by their priority and each group is ordered by
    the entry point name.

    :rtype: OrderedDict
    """
    if group_name is None:
        group_name = __name__
    extensions = instantiate_extensions(
        group_name + '.find_installed_packages')
    for name, extension in extensions.items():
        extension.PACKAGE_IDENTIFICATION_NAME = name
    return order_extensions_grouped_by_priority(extensions)


def find_installed_packages(install_base: Path):
    """
    Find install packages under the install base path.

    Based on the install layout the packages may be discovered in different
    locations.

    :param Path install_base: The base path to find installed packages in
    :returns: The mapping from a package name to the prefix path, None if the
      path is not a supported install layout or it doesn't exist
    :rtype: Dict or None
    """
    # priority means getting invoked first, but maybe that doesn't matter
    extensions = []
    prioritized_extensions = get_find_installed_packages_extensions()
    for ext_list in prioritized_extensions.values():
        extensions.extend(ext_list.values())

    # Combine packages found by all extensions
    packages = {}
    valid_prefix = False

    for ext in extensions:
        ext_packages = ext.find_installed_packages(install_base)
        if ext_packages is None:
            continue

        valid_prefix = True
        for pkg, path in ext_packages.items():
            if not path.exists():
                logger.warning(
                    f"Ignoring '{pkg}' found at '{path}' because the path"
                    ' does not exist.')
                continue
            if pkg in packages and not path.samefile(packages[pkg]):
                # Same package found at different paths in the same prefix
                first_path = packages[pkg]
                logger.warning(
                    f"The package '{pkg}' previously found at "
                    f"'{first_path}' was found again at '{path}'."
                    f" Ignoring '{path}'")
            else:
                packages[pkg] = path

    if not valid_prefix:
        # No extension said this was a valid prefix
        return None
    return packages
