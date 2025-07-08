# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from pathlib import Path

from colcon_cmake.task.cmake import has_target
from colcon_cmake.task.cmake.build import CmakeBuildTask as CmakeBuildTask_
from colcon_core.environment import create_environment_scripts
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.task import TaskExtensionPoint
from colcon_ros.task import add_app_to_cpp
from colcon_ros.task.cmake import create_pkg_config_path_environment_hooks

logger = colcon_logger.getChild(__name__)


class CmakeBuildTask(TaskExtensionPoint):
    """Build ROS packages with the build type 'cmake'."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(TaskExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    async def build(self):  # noqa: D102
        args = self.context.args
        logger.info(
            f"Building ROS package in '{args.path}' with build type 'cmake'")

        # reuse CMake build task with additional logic
        extension = CmakeBuildTask_()
        extension.set_context(context=self.context)

        rc = await extension.build(
            skip_hook_creation=True, environment_callback=add_app_to_cpp)

        # if the build has failed getting targets might not be possible
        try:
            has_install_target = await has_target(args.build_base, 'install')
        except Exception:  # noqa: B902
            if not rc:
                raise
            has_install_target = False

        additional_hooks = []
        if has_install_target:
            additional_hooks += create_pkg_config_path_environment_hooks(
                Path(args.install_base), self.context.pkg.name)

        create_environment_scripts(
            self.context.pkg, args, additional_hooks=additional_hooks)

        return rc
