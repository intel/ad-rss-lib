# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core import shell
from colcon_core.environment import EnvironmentExtensionPoint
from colcon_core.environment import logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.python_install_path import get_python_install_path


class PythonPathEnvironment(EnvironmentExtensionPoint):
    """Extend the `PYTHONPATH` variable to find Python modules."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EnvironmentExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def create_environment_hooks(self, prefix_path, pkg_name):  # noqa: D102
        hooks = []

        python_path = get_python_install_path('purelib', {'base': prefix_path})
        logger.log(1, "checking '%s'" % python_path)
        if python_path.exists():
            rel_python_path = python_path.relative_to(prefix_path)
            hooks += shell.create_environment_hook(
                'pythonpath', prefix_path, pkg_name,
                'PYTHONPATH', str(rel_python_path), mode='prepend')

        return hooks
