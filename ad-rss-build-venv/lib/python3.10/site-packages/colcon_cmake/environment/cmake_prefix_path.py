# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.environment import EnvironmentExtensionPoint
from colcon_core.environment import logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.shell import create_environment_hook


class CmakePrefixPathEnvironment(EnvironmentExtensionPoint):
    """Extend the `CMAKE_PREFIX_PATH` variable to find CMake config files."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EnvironmentExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def create_environment_hooks(self, prefix_path, pkg_name):  # noqa: D102
        hooks = []

        logger.log(1, "checking '%s' for CMake config files" % prefix_path)
        for _, _, filenames in os.walk(str(prefix_path)):
            for filename in filenames:
                if filename.endswith('-config.cmake') or \
                        filename.endswith('Config.cmake'):
                    hooks += create_environment_hook(
                        'cmake_prefix_path', prefix_path, pkg_name,
                        'CMAKE_PREFIX_PATH', '', mode='prepend')
                    break
            else:
                continue
            break

        return hooks
