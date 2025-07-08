# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.dependency_descriptor import DependencyDescriptor
from colcon_core.package_augmentation import PackageAugmentationExtensionPoint
from colcon_core.package_identification import IgnoreLocationException
from colcon_core.package_identification import logger
from colcon_core.package_identification \
    import PackageIdentificationExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_core.plugin_system import SkipExtensionException


# mapping paths to tuples containing the ROS package and its build type
_cached_packages = {}


class RosPackageIdentification(
    PackageIdentificationExtensionPoint, PackageAugmentationExtensionPoint
):
    """Identify ROS packages with `package.xml` files."""

    # the priority needs to be higher than the extensions identifying packages
    # using the build systems supported by ROS (CMake and Python)
    PRIORITY = 150

    def __init__(self):  # noqa: D107
        satisfies_version(
            PackageIdentificationExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')
        satisfies_version(
            PackageAugmentationExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        # check if the necessary dependency to parse the manifest is available
        try:
            import catkin_pkg  # noqa: F401
        except ImportError:
            raise SkipExtensionException(
                "The Python module 'catkin_pkg' could not be imported, "
                'therefore ROS packages can not be identified')

    def identify(self, desc):  # noqa: D102
        # ignore packages which have been identified with a different type
        if desc.type is not None and desc.type != 'ros':
            return

        # skip paths with an ignore marker file
        if (desc.path / 'CATKIN_IGNORE').exists():
            raise IgnoreLocationException()
        if (desc.path / 'AMENT_IGNORE').exists():
            raise IgnoreLocationException()

        # parse package manifest and get build type
        pkg, build_type = get_package_with_build_type(str(desc.path))
        if not pkg or not build_type:
            # if it is not a wet ROS package check for a dry ROS package
            if (desc.path / 'manifest.xml').exists():
                # ignore location to avoid being identified as a CMake package
                raise IgnoreLocationException()
            return

        desc.type = f'ros.{build_type}'

        # use package name from manifest if not already set
        # e.g. from external configuration
        if desc.name is None:
            desc.name = pkg.name

    def augment_package(  # noqa: D102
        self, desc, *, additional_argument_names=None
    ):
        if not desc.type.startswith('ros.'):
            return

        pkg, _ = get_package_with_build_type(str(desc.path))
        if not pkg:
            return

        augment_package(desc, pkg)

    def augment_packages(  # noqa: D102
        self, descs, *, additional_argument_names=None
    ):
        super().augment_packages(
            descs, additional_argument_names=additional_argument_names)

        # get all parsed ROS package manifests
        global _cached_packages
        pkgs = {}
        for desc in descs:
            if str(desc.path) not in _cached_packages:
                continue
            pkg = _cached_packages[str(desc.path)][0]
            if pkg:
                pkgs[pkg] = desc

        add_group_dependencies(pkgs)


def augment_package(desc, pkg):
    """
    Augment a package descriptor based on data from a parsed package manifest.

    :param desc: The package descriptor
    :param pkg: The parsed package manifest
    """
    desc.metadata['version'] = pkg.version

    # get dependencies
    desc.dependencies['build'].update(
        _enumerate_dependency_descriptors(
            pkg.build_depends +
            pkg.buildtool_depends
        ))

    desc.dependencies['run'].update(
        _enumerate_dependency_descriptors(
            pkg.build_export_depends +
            pkg.buildtool_export_depends +
            pkg.exec_depends
        ))

    desc.dependencies['test'].update(
        _enumerate_dependency_descriptors(
            pkg.test_depends
        ))

    # get any maintainers which list an E-mail address
    maintainers = [str(m) for m in pkg.maintainers if m.email]
    if maintainers:
        desc.metadata.setdefault('maintainers', [])
        desc.metadata['maintainers'] += maintainers


def add_group_dependencies(pkgs):
    """
    Add appropriate dependencies based on group membership.

    :param dict pkgs: A mapping of parsed package manifests
      to associated package descriptors
    :
    """
    metadata = {
        'origin': 'ros',
    }

    # resolve group members and add them to the descriptor dependencies
    for pkg, desc in pkgs.items():
        for group_depend in pkg.group_depends:
            assert group_depend.evaluated_condition is not None
            if not group_depend.evaluated_condition:
                continue
            group_depend.extract_group_members(pkgs)
            for name in group_depend.members:
                desc.dependencies['build'].add(DependencyDescriptor(
                    name, metadata=metadata))
                desc.dependencies['run'].add(DependencyDescriptor(
                    name, metadata=metadata))


def get_package_with_build_type(path: str):
    """Get the ROS package and its build type for the given path."""
    global _cached_packages
    if path not in _cached_packages:
        pkg = _get_package(path)
        build_type = _get_build_type(pkg, path) if pkg else None
        _cached_packages[path] = (pkg, build_type)
    return _cached_packages[path]


def _get_package(path: str):
    """Get the ROS package for the given path."""
    from catkin_pkg.package import has_ros_schema_reference
    from catkin_pkg.package import InvalidPackage
    from catkin_pkg.package import package_exists_at
    from catkin_pkg.package import parse_package

    if not package_exists_at(path):
        return None

    try:
        pkg = parse_package(path)
    except (AssertionError, InvalidPackage) as e:  # noqa: F841
        if has_ros_schema_reference(path):
            logger.debug(
                f"Found ROS schema reference in package manifest in '{path}'")
            logger.warn(
                f"Failed to parse ROS package manifest in '{path}': {e}")
        else:
            logger.debug(
                'Failed to parse potential ROS package manifest in'
                f"'{path}': {e}")
        return None

    condition_context = {
        **os.environ,
        'DISABLE_GROUPS_WORKAROUND': '1',
    }
    pkg.evaluate_conditions(condition_context)
    return pkg


def _get_build_type(pkg, path):
    """Get the build type of the ROS package."""
    from catkin_pkg.package import InvalidPackage
    try:
        return pkg.get_build_type()
    except InvalidPackage:
        logger.warning(
            f"ROS package '{pkg.name}' in '{path}' has more than one "
            'build type')
        return None


def _enumerate_dependency_descriptors(dependencies):
    for dependency in dependencies:
        assert dependency.evaluated_condition is not None
        if not dependency.evaluated_condition:
            continue
        yield DependencyDescriptor(
            dependency.name, metadata=_create_metadata(dependency))


def _create_metadata(dependency):
    metadata = {
        'origin': 'ros',
    }
    attributes = (
        'version_lte',
        'version_lt',
        'version_gte',
        'version_gt',
        'version_eq',
    )
    for attr in attributes:
        if getattr(dependency, attr, None) is not None:
            metadata[attr] = getattr(dependency, attr)
    return metadata
