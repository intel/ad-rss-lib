# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0


from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.task import TaskExtensionPoint
from colcon_core.task.python.test import PythonTestTask

logger = colcon_logger.getChild(__name__)


class AmentPythonTestTask(TaskExtensionPoint):
    """Test ROS packages with the build type 'ament_python'."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(TaskExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    async def test(self):  # noqa: D102
        args = self.context.args
        logger.info(
            f"Testing ROS package in '{args.path}' with build type"
            "'ament_python'")

        # reuse Python test task
        extension = PythonTestTask()
        extension.set_context(context=self.context)
        return await extension.test()
