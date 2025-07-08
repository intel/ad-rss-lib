# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import re
import typing

from colcon_core.package_selection import logger
from colcon_core.package_selection import PackageSelectionExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_package_selection.argument import argument_package_name
from colcon_package_selection.argument import argument_valid_regex


class SelectSkipPackageSelectionExtension(PackageSelectionExtensionPoint):
    """Select a set of packages based on select / skip criteria."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageSelectionExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.add_argument(
            '--packages-select', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Only process a subset of packages')
        parser.add_argument(
            '--packages-skip', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Skip a set of packages')

        parser.add_argument(
            '--packages-select-regex', nargs='*', metavar='PATTERN',
            type=argument_valid_regex,
            help='Only process a subset of packages where any of the patterns '
                 'match the package name')
        parser.add_argument(
            '--packages-skip-regex', nargs='*', metavar='PATTERN',
            type=argument_valid_regex,
            help='Skip a set of packages where any of the patterns match the '
                 'package name')

    def check_parameters(self, args, pkg_names):  # noqa: D102
        # warn about ignored arguments
        for pkg_name in args.packages_select or []:
            if pkg_name not in pkg_names:
                logger.warning(
                    "ignoring unknown package '{pkg_name}' in "
                    '--packages-select'.format_map(locals()))

        for pkg_name in args.packages_skip or []:
            if pkg_name not in pkg_names:
                logger.warning(
                    "ignoring unknown package '{pkg_name}' in "
                    '--packages-skip'.format_map(locals()))

        for pattern in (args.packages_select_regex or []):
            if not any(re.match(pattern, pkg_name) for pkg_name in pkg_names):
                if isinstance(pattern, typing.Pattern):
                    pattern = pattern.pattern
                logger.warning(
                    "the --packages-select-regex '{pattern}' doesn't match "
                    'any of the package names'.format_map(locals()))

        for pattern in (args.packages_skip_regex or []):
            if not any(re.match(pattern, pkg_name) for pkg_name in pkg_names):
                if isinstance(pattern, typing.Pattern):
                    pattern = pattern.pattern
                logger.warning(
                    "the --packages-skip-regex '{pattern}' doesn't match any "
                    'of the package names'.format_map(locals()))

    def select_packages(self, args, decorators):  # noqa: D102
        for decorator in decorators:
            # skip packages which have already been ruled out
            if not decorator.selected:
                continue

            pkg = decorator.descriptor

            if (
                pkg.name in (args.packages_skip or []) or
                any(
                    re.match(pattern, pkg.name)
                    for pattern in (args.packages_skip_regex or [])
                )
            ):
                logger.info(
                    "Skipping package '{pkg.name}' in '{pkg.path}'"
                    .format_map(locals()))
                decorator.selected = False

            elif (
                args.packages_select is not None or
                args.packages_select_regex is not None
            ):
                if (
                    pkg.name not in (args.packages_select or []) and
                    not any(
                        re.match(pattern, pkg.name)
                        for pattern in (args.packages_select_regex or [])
                    )
                ):
                    logger.info(
                        "Skipping not selected package '{pkg.name}' in "
                        "'{pkg.path}'".format_map(locals()))
                    decorator.selected = False
