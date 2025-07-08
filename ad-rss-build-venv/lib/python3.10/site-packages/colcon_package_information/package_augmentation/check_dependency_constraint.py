# Copyright 2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import operator

from colcon_core.package_augmentation import logger as \
    package_augmentation_logger
from colcon_core.package_augmentation import PackageAugmentationExtensionPoint
from colcon_core.plugin_system import satisfies_version
from packaging.version import Version

logger = package_augmentation_logger.getChild('check_dependency_constraint')


class CheckDependencyConstraintPackageAugmentation(
    PackageAugmentationExtensionPoint
):
    """Check package dependency constraints."""

    # the priority needs to be lower than other extensions to allow them to
    # augment dependency information before
    PRIORITY = 1

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageAugmentationExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def augment_packages(  # noqa: D102
        self, descs, *, additional_argument_names=None
    ):
        descs_dict = {desc.name: desc for desc in descs}
        for name, desc in descs_dict.items():
            deps = desc.get_dependencies()
            for dep in deps:
                # skip dependencies which don't have a descriptor
                if dep.name not in descs_dict:
                    continue

                self._check_version_constraints(
                    desc, dep, descs_dict[dep.name])

    def _check_version_constraints(self, desc, dep, dep_desc):
        # if the dependency descriptor doesn't have a version there is nothing
        # to compare to
        if 'version' not in dep_desc.metadata:
            return
        try:
            dep_version = Version(dep_desc.metadata['version'])
        except Exception:  # noqa: B902
            # skip check if the version fails to parse
            return

        def lte(a, b):
            return operator.lt(a, b) or operator.eq(a, b)

        def gte(a, b):
            return operator.gt(a, b) or operator.eq(a, b)

        operators = {
            'version_lt': (operator.lt, 'less than'),
            'version_lte': (lte, 'less than or equal to'),
            'version_eq': (operator.eq, 'equal to'),
            'version_neq': (operator.ne, 'not equal to'),
            'version_gte': (gte, 'greater than or equal to'),
            'version_gt': (operator.gt, 'greater than'),
        }
        for key, value in dep.metadata.items():
            # only consider version operator metadata
            if key not in operators:
                continue
            op, msg = operators[key]
            try:
                version_constraint = Version(value)
            except Exception:  # noqa: B902
                logger.error(
                    "Failed to parse version '" + value + "' with " +
                    "constraint '" + msg + "' for dependency " + dep.name +
                    ' in package ' + desc.name)
                # skip check if the version fails to parse
                continue

            if not op(dep_version, version_constraint):
                logger.warning(
                    desc.name + ' depends on ' + dep.name +
                    ' which has version ' + dep_desc.metadata['version'] +
                    ' but expects it to be ' + msg + ' ' + value)
            else:
                logger.debug(
                    desc.name + ' depends on ' + dep.name +
                    ' which has version ' + dep_desc.metadata['version'] +
                    ' which satisfies to be ' + msg + ' ' + value)
