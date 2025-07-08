# Copyright 2022 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

from colcon_core.dependency_descriptor import DependencyDescriptor
from colcon_core.package_augmentation \
    import PackageAugmentationExtensionPoint
from colcon_core.plugin_system import satisfies_version


class RosAmentIndexPackageAugmentation(PackageAugmentationExtensionPoint):
    """
    Augment installed packages with information from an ament index.

    Only packages of the `installed` type are considered.
    """

    # The priority needs to be higher than the extensions augmenting
    # 'installed' packages for the underlying package information sources
    # supported by ROS (colcon index and Python distributions)
    PRIORITY = 130

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageAugmentationExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')

    def augment_package(  # noqa: D102
        self, desc, *, additional_argument_names=None
    ):
        if desc.type != 'installed':
            return

        index_path = desc.path / 'share' / 'ament_index' / 'resource_index'
        marker_file = index_path / 'package_run_dependencies' / desc.name
        if not marker_file.is_file():
            return

        with marker_file.open() as f:
            raw_deps = [d for d in f.read().split(';') if d]
        desc.type = 'installed.ros.ament'
        desc.dependencies['run'].update(
            DependencyDescriptor(dep) for dep in raw_deps)
