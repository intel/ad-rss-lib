# Copyright 2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.prefix_path import PrefixPathExtensionPoint

logger = colcon_logger.getChild(__name__)

_get_cmake_prefix_path_warnings = set()


class CmakePrefixPath(PrefixPathExtensionPoint):
    """
    Prefix path defined in the `CMAKE_PREFIX_PATH` environment variable.

    The path must contain a `.catkin` file to be considered.
    """

    # the priority needs to be lower than the ament prefix path extension
    PRIORITY = 80

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PrefixPathExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def extend_prefix_path(self, paths):  # noqa: D102
        global _get_cmake_prefix_path_warnings
        cmake_prefix_path = os.environ.get('CMAKE_PREFIX_PATH', '')
        for path in cmake_prefix_path.split(os.pathsep):
            if not path:
                continue
            if not os.path.exists(path):
                if path not in _get_cmake_prefix_path_warnings:
                    logger.warning(
                        f"The path '{path}' in the environment variable "
                        "CMAKE_PREFIX_PATH doesn't exist")
                    _get_cmake_prefix_path_warnings.add(path)
                continue
            if not os.path.exists(os.path.join(path, '.catkin')):
                continue
            for filename in os.listdir(path):
                if filename.startswith('local_setup.'):
                    break
            else:
                parent_path = os.path.dirname(path)
                marker_file = os.path.join(
                    parent_path, '.colcon_install_layout')
                if not os.path.exists(marker_file):
                    if path not in _get_cmake_prefix_path_warnings:
                        logger.warning(
                            f"The path '{path}' in the environment variable "
                            'CMAKE_PREFIX_PATH seems to be a catkin workspace '
                            "but it doesn't contain any 'local_setup.*' files."
                            ' Maybe the catkin version is not up-to-date?')
                        _get_cmake_prefix_path_warnings.add(path)
                    continue
                with open(marker_file, 'r') as h:
                    install_layout = h.read().rstrip()
                if install_layout != 'isolated':
                    if path not in _get_cmake_prefix_path_warnings:
                        logger.warning(
                            f"The path '{path}' in the environment variable "
                            "CMAKE_PREFIX_PATH doesn't use the expected "
                            "install layout 'isolated'.")
                        _get_cmake_prefix_path_warnings.add(path)
                    continue
                path = parent_path

            paths.append(path)
