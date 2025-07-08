# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import sys

from colcon_core.package_selection import logger
from colcon_core.package_selection import PackageSelectionExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_package_selection.argument import argument_package_name


class StartEndPackageSelection(PackageSelectionExtensionPoint):
    """Select a range of packages based on flattened topological ordering."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageSelectionExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.add_argument(
            '--packages-start', metavar='PKG_NAME',
            type=argument_package_name,
            help='Skip packages before this in flat topological ordering')
        parser.add_argument(
            '--packages-end', metavar='PKG_NAME',
            type=argument_package_name,
            help='Skip packages after this in flat topological ordering')

    def check_parameters(self, args, pkg_names):  # noqa: D102
        # exit on invalid arguments
        if args.packages_start and args.packages_start not in pkg_names:
            sys.exit(
                "Package '{args.packages_start}' specified with "
                '--packages-start was not found'
                .format_map(locals()))
        if args.packages_end and args.packages_end not in pkg_names:
            sys.exit(
                "Package '{args.packages_end}' specified with --packages-end "
                'was not found'
                .format_map(locals()))

    def select_packages(self, args, decorators):  # noqa: D102
        pkg_within_range = not args.packages_start
        for decorator in decorators:
            pkg = decorator.descriptor

            # identify start of range
            if pkg.name == args.packages_start:
                pkg_within_range = True

            selected = pkg_within_range
            if decorator.selected and not selected:
                # mark packages outside of the range as not selected
                logger.info(
                    "Skipping package '{pkg.name}' in '{pkg.path}'"
                    .format_map(locals()))
                decorator.selected = False

            # identify end of range
            if pkg.name == args.packages_end:
                if not pkg_within_range:
                    sys.exit(
                        "The --packages-end package '{args.packages_end}' "
                        'occurs topologically before the --packages-start '
                        "package '{args.packages_start}'"
                        .format_map(locals()))
                pkg_within_range = False
