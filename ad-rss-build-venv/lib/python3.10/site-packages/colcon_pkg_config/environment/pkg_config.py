# Copyright 2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from pathlib import Path

from colcon_core.environment import EnvironmentExtensionPoint
from colcon_core.environment import logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.shell import create_environment_hook


class PkgConfigEnvironment(EnvironmentExtensionPoint):
    """
    Extend the environment variable PKG_CONFIG_PATH.

    A package needs to provide the file 'lib/pkgconfig/<pkgname>.pc' to extend
    the environment variable.
    """

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EnvironmentExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def create_environment_hooks(self, prefix_path, pkg_name):  # noqa: D102
        subdirectory = Path('lib') / 'pkgconfig'
        pkg_config_file = prefix_path / subdirectory / (pkg_name + '.pc')
        logger.log(1, "checking '%s'" % pkg_config_file)
        if not pkg_config_file.is_file():
            return []
        return create_environment_hook(
            'pkg_config', prefix_path, pkg_name, 'PKG_CONFIG_PATH',
            str(subdirectory), mode='prepend')
