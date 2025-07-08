# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import argparse
import re
import sys
import typing

from colcon_core.package_selection import logger
from colcon_core.package_selection import PackageSelectionExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_package_selection.argument import argument_package_name
from colcon_package_selection.argument import argument_valid_regex


class _DepthAndPackageNames(argparse.Action):
    """Action to assign an integer depth optional package names."""

    def __call__(self, parser, namespace, values, option_string=None):
        assert len(values) >= 1
        try:
            values[0] = int(values[0])
            if values[0] < 0:
                raise ValueError()
        except ValueError:
            raise argparse.ArgumentError(
                self, 'the first parameter must be a non-negative integer for '
                'the depth')
        for i in range(1, len(values)):
            values[i] = argument_package_name(values[i])
        setattr(namespace, self.dest, values)


class DependenciesPackageSelection(PackageSelectionExtensionPoint):
    """Select packages based on their dependencies."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageSelectionExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.add_argument(
            '--packages-up-to', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Only process a subset of packages and their recursive '
                 'dependencies')
        parser.add_argument(
            '--packages-up-to-regex', nargs='*', metavar='PATTERN',
            type=argument_valid_regex,
            help='Only process a subset of packages and their '
                 'recursive dependencies, where any of the '
                 'patterns match the package name')
        parser.add_argument(
            '--packages-above', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Only process a subset of packages and packages which '
                 'recursively depend on them')
        parser.add_argument(
            '--packages-above-and-dependencies', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Only process a subset of packages and packages which '
                 'recursively depend on them including all their recursive '
                 'dependencies')
        parser.add_argument(
            '--packages-above-depth', nargs='+',
            metavar=('DEPTH', 'PKG_NAME'), action=_DepthAndPackageNames,
            help='Only process a subset of packages and packages which '
                 'recursively depend on them up to a given depth')

        parser.add_argument(
            '--packages-select-by-dep', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Only process packages which (recursively) depend on this')
        parser.add_argument(
            '--packages-skip-by-dep', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Skip packages which (recursively) depend on this')
        parser.add_argument(
            '--packages-skip-up-to', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Skip a subset of packages and their recursive dependencies')

    def check_parameters(self, args, pkg_names):  # noqa: D102
        # exit on invalid arguments
        error_messages = []
        for name in args.packages_up_to or set():
            if name not in pkg_names:
                error_messages.append(
                    "Package '{name}' specified with --packages-up-to "
                    'was not found'
                    .format_map(locals()))
        for pattern in (args.packages_up_to_regex or []):
            if not any(re.match(pattern, pkg_name) for pkg_name in pkg_names):
                if isinstance(pattern, typing.Pattern):
                    pattern = pattern.pattern
                error_messages.append(
                    "the --packages-up-to-regex '{pattern}' doesn't match "
                    'any of the package names'.format_map(locals()))
        for name in args.packages_above or set():
            if name not in pkg_names:
                error_messages.append(
                    "Package '{name}' specified with --packages-above "
                    'was not found'
                    .format_map(locals()))
        for name in args.packages_above_and_dependencies or set():
            if name not in pkg_names:
                error_messages.append(
                    "Package '{name}' specified with "
                    '--packages-above-and-dependencies was not found'
                    .format_map(locals()))
        for name in (args.packages_above_depth or [])[1:]:
            if name not in pkg_names:
                error_messages.append(
                    "Package '{name}' specified with "
                    '--packages-above-depth was not found'
                    .format_map(locals()))
        if error_messages:
            sys.exit('\n'.join(error_messages))

    def select_packages(self, args, decorators):  # noqa: D102
        if args.packages_up_to:
            select_pkgs = set(args.packages_up_to)
            for decorator in reversed(decorators):
                if decorator.descriptor.name in select_pkgs:
                    select_pkgs |= set(decorator.recursive_dependencies)
                elif decorator.selected:
                    pkg = decorator.descriptor
                    logger.info(
                        "Skipping package '{pkg.name}' in '{pkg.path}'"
                        .format_map(locals()))
                    decorator.selected = False

        if args.packages_up_to_regex:
            select_pkgs = set()
            patterns = args.packages_up_to_regex
            for decorator in reversed(decorators):
                pkg = decorator.descriptor
                if (
                    pkg.name in select_pkgs or
                    any(re.match(pattern, pkg.name) for pattern in patterns)
                ):
                    select_pkgs |= set(decorator.recursive_dependencies)
                elif decorator.selected:
                    logger.info(
                        "Skipping package '{pkg.name}' in '{pkg.path}'"
                        .format_map(locals()))
                    decorator.selected = False

        if args.packages_above:
            select_pkgs = set(args.packages_above)
            for decorator in decorators:
                if decorator.descriptor.name in select_pkgs:
                    continue
                if not (select_pkgs & set(decorator.recursive_dependencies)):
                    if decorator.selected:
                        pkg = decorator.descriptor
                        logger.info(
                            "Skipping package '{pkg.name}' in '{pkg.path}'"
                            .format_map(locals()))
                        decorator.selected = False

        if args.packages_above_and_dependencies:
            # collect all above packages
            select_pkgs = set(args.packages_above_and_dependencies)
            for decorator in decorators:
                if decorator.descriptor.name in select_pkgs:
                    continue
                if set(decorator.recursive_dependencies) & select_pkgs:
                    select_pkgs.add(decorator.descriptor.name)

            for decorator in reversed(decorators):
                if decorator.descriptor.name in select_pkgs:
                    select_pkgs |= set(decorator.recursive_dependencies)
                elif decorator.selected:
                    pkg = decorator.descriptor
                    logger.info(
                        "Skipping package '{pkg.name}' in '{pkg.path}'"
                        .format_map(locals()))
                    decorator.selected = False

        if args.packages_above_depth and len(args.packages_above_depth) > 1:
            depth = args.packages_above_depth[0]
            select_pkgs = set(args.packages_above_depth[1:])
            for decorator in decorators:
                if decorator.descriptor.name in select_pkgs:
                    continue
                if not [
                    d for d in set(decorator.recursive_dependencies)
                    if d in select_pkgs and d.metadata['depth'] <= depth
                ]:
                    if decorator.selected:
                        pkg = decorator.descriptor
                        logger.info(
                            "Skipping package '{pkg.name}' in '{pkg.path}'"
                            .format_map(locals()))
                        decorator.selected = False

        if args.packages_select_by_dep:
            deps = set(args.packages_select_by_dep)
            for decorator in decorators:
                if not (deps & set(decorator.recursive_dependencies)):
                    if decorator.selected:
                        pkg = decorator.descriptor
                        logger.info(
                            "Skipping package '{pkg.name}' in '{pkg.path}'"
                            .format_map(locals()))
                        decorator.selected = False

        if args.packages_skip_by_dep:
            deps = set(args.packages_skip_by_dep)
            for decorator in decorators:
                if deps & set(decorator.recursive_dependencies):
                    if decorator.selected:
                        pkg = decorator.descriptor
                        logger.info(
                            "Skipping package '{pkg.name}' in '{pkg.path}'"
                            .format_map(locals()))
                        decorator.selected = False

        if args.packages_skip_up_to:
            skip_pkgs = set(args.packages_skip_up_to)
            for decorator in reversed(decorators):
                if decorator.descriptor.name in skip_pkgs:
                    skip_pkgs |= set(decorator.recursive_dependencies)
                    if decorator.selected:
                        pkg = decorator.descriptor
                        logger.info(
                            "Skipping package '{pkg.name}' in '{pkg.path}'"
                            .format_map(locals()))
                        decorator.selected = False
