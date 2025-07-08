# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
from pathlib import Path
import sys

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.shell import create_environment_hook
from colcon_core.shell import get_command_environment
from colcon_core.task import create_file
from colcon_core.task import install
from colcon_core.task import TaskExtensionPoint
from colcon_core.task.python import get_data_files_mapping
from colcon_core.task.python import get_setup_data
from colcon_core.task.python.build import PythonBuildTask

logger = colcon_logger.getChild(__name__)


class AmentPythonBuildTask(TaskExtensionPoint):
    """Build ROS packages with the build type 'ament_python'."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(TaskExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    async def build(self):  # noqa: D102
        args = self.context.args
        logger.info(
            f"Building ROS package in '{args.path}' with build type "
            "'ament_python'")

        # reuse Python build task with additional logic
        extension = PythonBuildTask()
        extension.set_context(context=self.context)

        # additional hooks
        additional_hooks = create_environment_hook(
            'ament_prefix_path', Path(args.install_base),
            self.context.pkg.name, 'AMENT_PREFIX_PATH', '', mode='prepend')

        # get options from the Python manifest
        try:
            env = await get_command_environment(
                'setup_py', args.build_base, self.context.dependencies)
        except RuntimeError as e:
            logger.error(str(e))
            return 1
        setup_py_data = get_setup_data(self.context.pkg, env)

        # check if the package index and manifest are being installed
        data_files = get_data_files_mapping(
            setup_py_data.get('data_files', []) or [])
        installs_package_index = False
        installs_package_manifest = False

        # check if package index and manifest are being installed
        for source, destination in data_files.items():
            if sys.platform == 'win32':
                destination = Path(destination).as_posix()
            # work around data files incorrectly defined as not relative
            if os.path.isabs(source):
                source = os.path.relpath(source, args.path)
            if (
                destination == 'share/ament_index/resource_index/packages/' +
                self.context.pkg.name
            ):
                installs_package_index = True
            elif (
                source == 'package.xml' and
                destination == f'share/{self.context.pkg.name}/package.xml'
            ):
                installs_package_manifest = True

        # warn about missing explicit installation
        # for now implicitly install the marker and the manifest
        if not installs_package_index:
            # TODO remove magic helper in the future
            logger.warn(
                f"Package '{self.context.pkg.name}' doesn't explicitly "
                'install a marker in the package index (colcon-ros currently '
                'does it implicitly but that fallback will be removed in the '
                'future)')
            # create package marker in ament resource index
            create_file(
                args,
                'share/ament_index/resource_index/packages/'
                f'{self.context.pkg.name}')
        if not installs_package_manifest:
            # TODO remove magic helper in the future
            logger.warn(
                f"Package '{self.context.pkg.name}' doesn't explicitly "
                "install the 'package.xml' file (colcon-ros currently does it "
                'implicitly but that fallback will be removed in the future)')
            # copy / symlink package manifest
            install(
                args, 'package.xml',
                f'share/{self.context.pkg.name}/package.xml')

        return await extension.build(additional_hooks=additional_hooks)
