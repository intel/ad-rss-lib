# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
from pathlib import Path

from colcon_cmake.task.cmake.test import CmakeTestTask
from colcon_core.environment import create_environment_scripts_only
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.shell import create_environment_hook
from colcon_core.task import TaskExtensionPoint
from colcon_ros.task.catkin import create_pythonpath_environment_hook

logger = colcon_logger.getChild(__name__)


class CatkinTestTask(TaskExtensionPoint):
    """Test ROS packages with the build type 'catkin'."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(TaskExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    async def test(self):  # noqa: D102
        args = self.context.args
        logger.info(
            f"Testing ROS package in '{args.path}' with build type 'catkin'")

        # for catkin packages it is expected that the devel space
        # and not the install space is in the environment for testing
        self.context.dependencies[self.context.pkg.name] = \
            os.path.join(self.context.args.build_base, 'devel')

        # additional hooks
        additional_hooks = create_environment_hook(
            'ros_package_path', Path(args.build_base) / 'devel',
            self.context.pkg.name,
            'ROS_PACKAGE_PATH', args.path, mode='prepend')
        additional_hooks += create_pythonpath_environment_hook(
            args.build_base, Path(args.build_base) / 'devel',
            self.context.pkg.name)

        # generate the necessary setup files for the devel space
        create_environment_scripts_only(
            Path(args.build_base) / 'devel', self.context.pkg,
            additional_hooks=additional_hooks)

        # reuse CMake test task
        extension = CmakeTestTask()
        extension.set_context(context=self.context)
        return await extension.test()
