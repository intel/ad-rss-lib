# Copyright 2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import re
import typing

from colcon_core.package_augmentation import PackageAugmentationExtensionPoint
from colcon_core.package_discovery import logger
from colcon_core.package_discovery import PackageDiscoveryExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_package_selection.argument import argument_package_name
from colcon_package_selection.argument import argument_valid_regex


class IgnorePackageDiscovery(
    PackageDiscoveryExtensionPoint, PackageAugmentationExtensionPoint,
):
    """Ignore discovered packages based on cli arguments."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageDiscoveryExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        satisfies_version(
            PackageAugmentationExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self._args = None

    def add_arguments(self, *, parser, with_default):  # noqa: D102
        parser.add_argument(
            '--packages-ignore', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Ignore packages as if they were not discovered')
        parser.add_argument(
            '--packages-ignore-regex', nargs='*', metavar='PATTERN',
            type=argument_valid_regex,
            help='Ignore packages where any of the patterns match the package '
                 'name')

    def has_parameters(self, *, args):  # noqa: D102
        self._args = args
        return False

    def discover(self, *, args, identification_extensions):  # noqa: D102
        return set()

    def augment_packages(
        self, descs, *, additional_argument_names=None
    ):  # noqa: D102
        pkg_names = {d.name for d in descs}

        # check patterns and remove invalid ones
        for pattern in (self._args.packages_ignore_regex or []):
            if not any(re.match(pattern, pkg_name) for pkg_name in pkg_names):
                if isinstance(pattern, typing.Pattern):
                    pattern = pattern.pattern
                logger.warning(
                    "the --packages-ignore-regex '{pattern}' doesn't match "
                    'any of the package names'.format_map(locals()))

        for pkg_name in (self._args.packages_ignore or []):
            if pkg_name not in pkg_names:
                logger.warning(
                    "ignoring unknown package '{pkg_name}' in "
                    '--packages-ignore'.format_map(locals()))

        # remove the descriptors which should be ignored
        for desc in set(descs):
            if desc.name in (self._args.packages_ignore or []):
                descs.remove(desc)
                continue
            for pattern in (self._args.packages_ignore_regex or []):
                if re.match(pattern, desc.name):
                    descs.remove(desc)
                    break
