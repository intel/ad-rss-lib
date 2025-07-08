# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_cmake.task.cmake import get_variable_from_cmake_cache
from colcon_core.logging import colcon_logger
from colcon_core.shell import create_environment_hook

logger = colcon_logger.getChild(__name__)


def create_pythonpath_environment_hook(build_base, install_base, pkg_name):
    """
    Create a hook script for each primary shell to prepend to the PYTHONPATH.

    :param str build_base: The path of the build directory
    :param Path install_base: The path of the install prefix
    :param str pkg_name: The package name
    :returns: The relative paths to the created hook scripts
    :rtype: list
    """
    hooks = []
    # catkin packages might use `--install-layout deb`
    # therefore getting the used install directory from the CMake cache
    # since it might not match distutils.sysconfig.get_python_lib()
    rel_python_path = get_variable_from_cmake_cache(
        build_base, 'PYTHON_INSTALL_DIR')
    # prepend Python specific path to PYTHONPATH if it exists
    if rel_python_path:
        abs_python_path = install_base / rel_python_path
        logger.log(1, f"checking '{abs_python_path}'")
        if abs_python_path.exists():
            hooks += create_environment_hook(
                'catkin_pythonpath', install_base, pkg_name,
                'PYTHONPATH', rel_python_path, mode='prepend')
    return hooks
