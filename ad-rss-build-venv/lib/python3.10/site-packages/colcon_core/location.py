# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from contextlib import suppress
import os
from pathlib import Path
import uuid

from colcon_core.logging import colcon_logger

logger = colcon_logger.getChild(__name__)

_config_path = None
_config_path_env_var = None


def get_config_path():
    """
    Get the base path for configuration files.

    :function:`set_default_config_path` must have been called before.

    :returns: The base path for configuration files
    :rtype: Path
    """
    global _config_path_env_var
    if _config_path_env_var is not None:
        path = os.environ.get(_config_path_env_var)
        if path:
            return Path(str(path))
    global _config_path
    assert _config_path is not None
    return _config_path


def set_default_config_path(*, path, env_var=None):
    """
    Set the base path for configuration files.

    Optionally an environment variable name can be provided which if set will
    override the configured base path.

    An info message is logged which states the used path.

    :param path: The base path
    :param str env_var: The name of the environment variable
    """
    global _config_path
    global _config_path_env_var

    from colcon_core.command import register_command_exit_handler
    register_command_exit_handler(_reset_config_path_globals)

    _config_path = Path(str(path))
    _config_path_env_var = env_var
    config_path = get_config_path()
    logger.info(f"Using config path '{config_path}'")


def _reset_config_path_globals():
    global _config_path
    global _config_path_env_var
    _config_path = None
    _config_path_env_var = None


_log_base_path = None
_log_base_path_default = None
_log_base_path_env_var = None
_log_subdirectory = None


def get_log_path():
    """
    Get the base path for logging.

    :function:`set_default_log_path` must have been called before.

    :returns: The base path for logging or None if logging is disabled
    :rtype: Path or None
    """
    global _log_base_path
    global _log_base_path_env_var
    path = None
    if _log_base_path is not None:
        path = _log_base_path
    elif (
        _log_base_path_env_var is not None and
        os.environ.get(_log_base_path_env_var)
    ):
        path = os.environ.get(_log_base_path_env_var)
    else:
        global _log_base_path_default
        path = _log_base_path_default

    if path == os.devnull:
        return None

    return Path(str(path)) / _log_subdirectory


def set_default_log_path(
    *, base_path, env_var=None, subdirectory=None, default='log'
):
    """
    Set the base path for logging.

    Optionally an environment variable name can be provided which if set will
    override the configured base path.

    An info message is logged which states the used path.

    :param base_path: The base path
    :param str env_var: The name of the environment variable
    :param str subdirectory: The name of the subdirectory, if not provided a
      random uuid will be used instead
    :param default: The default base path if the passed base path is None and
      the environment variable is not set
    """
    global _log_base_path
    global _log_base_path_default
    global _log_base_path_env_var
    global _log_subdirectory

    from colcon_core.command import register_command_exit_handler
    register_command_exit_handler(_reset_log_path_globals)

    _log_base_path = base_path
    _log_base_path_default = default
    _log_base_path_env_var = env_var
    assert subdirectory is None or subdirectory
    _log_subdirectory = subdirectory \
        if subdirectory is not None \
        else str(uuid.uuid4())


def _reset_log_path_globals():
    global _log_base_path
    global _log_base_path_default
    global _log_base_path_env_var
    global _log_subdirectory
    _log_base_path = None
    _log_base_path_default = None
    _log_base_path_env_var = None
    _log_subdirectory = None


_create_log_path_called = False


def create_log_path(verb_name):
    """
    Create a not yet existing logging directory.

    The logging directory returned by :function:`get_log_path` must not yet
    exist on the first call of this function.
    If it does exist the function will append a serial number to the path until
    the path doesn't exist and can be created.

    Subsequent invocations of this function are noops.

    A `COLCON_IGNORE` marker file is being placed in the parent directory of
    the logging directory to avoid it being crawled for packages.

    Two symlinks are created as siblings of the log path:
    * `latest_<verb_name>` linking to the log path
    * `latest` linking to `latest_<verb_name>`

    On Windows platforms Administrator privileges are required to create
    these symlinks.
    Otherwise they are being skipped.

    :param str verb_name: The verb name
    """
    global _create_log_path_called
    if _create_log_path_called:
        return
    _create_log_path_called = True

    from colcon_core.command import register_command_exit_handler
    register_command_exit_handler(_reset_log_path_creation_global)

    path = get_log_path()
    try:
        # try to create the directory
        os.makedirs(str(path))
    except FileExistsError:
        # if it already exists try again with serial number suffixes
        global _log_subdirectory
        assert path.name == _log_subdirectory
        suffix = 2
        while True:
            path_with_suffix = path.with_name(path.name + '_' + str(suffix))
            try:
                os.makedirs(str(path_with_suffix))
            except FileExistsError:
                suffix += 1
                assert suffix < 1000, 'Prevent infinite loop'
                continue
            _log_subdirectory = path_with_suffix.name
            assert get_log_path() == path_with_suffix
            path = path_with_suffix
            break

    logger.info(f"Using log path '{path}'")

    # ensure the base log path has an ignore marker file
    # to avoid recursively crawling through log directories
    from colcon_core.package_identification.ignore import IGNORE_MARKER
    ignore_marker = path.parent / IGNORE_MARKER
    ignore_marker.touch()

    # create latest symlinks
    if verb_name is None:
        _create_symlink(path, path.parent / 'latest')
    else:
        _create_symlink(path, path.parent / f'latest_{verb_name}')
        _create_symlink(
            path.parent / f'latest_{verb_name}',
            path.parent / 'latest')


def _reset_log_path_creation_global():
    global _create_log_path_called
    _create_log_path_called = False


def _create_symlink(src, dst):
    if dst.exists():
        # directory exists or valid symlink
        if not dst.is_symlink():
            # do not change non symlink paths
            return
        if dst.resolve() == src.resolve():
            # desired symlink already exists
            return
    # remove valid symlink to wrong destination (previous if, no return)
    # or invalid symlink (non-existing else from previous if)
    if dst.is_symlink():
        with suppress(FileNotFoundError):
            dst.unlink()

    # use relative path when possible
    with suppress(ValueError):
        src = src.relative_to(dst.parent)
    # Administrator privileges are required on Windows
    with suppress(FileNotFoundError, OSError):
        os.symlink(str(src), str(dst))


def get_relative_package_index_path():
    """
    Get the prefix-relative path to the package index.

    :returns: The relative path to the package index
    :rtype: Path
    """
    # the value is also being hard coded in shell/template/prefix_util.py
    return Path('share', 'colcon-core', 'packages')
