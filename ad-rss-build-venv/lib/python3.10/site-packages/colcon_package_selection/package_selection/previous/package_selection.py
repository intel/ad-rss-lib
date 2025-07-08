# Copyright 2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.package_selection import logger
from colcon_core.package_selection import PackageSelectionExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_core.subprocess import SIGINT_RESULT
from colcon_package_selection.package_selection.previous \
    import get_previous_result


class PreviousPackageSelectionExtension(PackageSelectionExtensionPoint):
    """Skip a set of packages based on results of previous invocations."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageSelectionExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        group = parser.add_mutually_exclusive_group()
        group.add_argument(
            '--packages-select-build-failed', action='store_true',
            help='Only process a subset of packages which have failed to '
                 'build previously (aborted packages are not '
                 'considered errors)')
        group.add_argument(
            '--packages-skip-build-finished', action='store_true',
            help='Skip a set of packages which have finished to build '
                 'previously')
        group.add_argument(
            '--packages-select-test-failures', action='store_true',
            help='Only process a subset of packages which had test failures '
                 'previously')
        group.add_argument(
            '--packages-skip-test-passed', action='store_true',
            help='Skip a set of packages which had no test failures '
                 'previously')

    def select_packages(self, args, decorators):  # noqa: D102
        if not any((
            args.packages_select_build_failed,
            args.packages_skip_build_finished,
            args.packages_select_test_failures,
            args.packages_skip_test_passed,
        )):
            return

        if not hasattr(args, 'build_base'):
            if args.packages_select_build_failed:
                argument = '--packages-select-build-failed'
            elif args.packages_skip_build_finished:
                argument = '--packages-skip-build-finished'
            elif args.packages_select_test_failures:
                argument = '--packages-select-test-failures'
            elif args.packages_skip_test_passed:
                argument = '--packages-skip-test-passed'
            else:
                assert False
            logger.warning(
                "Ignoring '{argument}' since the invoked verb doesn't have a "
                "'--build-base' argument and therefore can't access "
                'information about the previous state of a package'
                .format_map(locals()))
            return

        for decorator in decorators:
            # skip packages which have already been ruled out
            if not decorator.selected:
                continue

            pkg = decorator.descriptor

            if (
                args.packages_select_build_failed or
                args.packages_skip_build_finished
            ):
                verb_name = 'build'
            elif (
                args.packages_select_test_failures or
                args.packages_skip_test_passed
            ):
                verb_name = 'test'
            else:
                assert False

            previous_result = get_previous_result(
                os.path.join(args.build_base, pkg.name), verb_name)

            if args.packages_select_build_failed:
                package_kind = None
                if previous_result is None:
                    package_kind = 'not previously built'
                elif previous_result == SIGINT_RESULT:
                    package_kind = 'previously aborted'
                elif previous_result == '0':
                    package_kind = 'previously built'
                if package_kind is not None:
                    logger.info(
                        "Skipping {package_kind} package '{pkg.name}' in "
                        "'{pkg.path}'".format_map(locals()))
                    decorator.selected = False

            if args.packages_skip_build_finished:
                if previous_result == '0':
                    logger.info(
                        "Skipping previously built package '{pkg.name}' in "
                        "'{pkg.path}'".format_map(locals()))
                    decorator.selected = False

            if args.packages_select_test_failures:
                package_kind = None
                if previous_result is None:
                    package_kind = 'not previously tested'
                elif previous_result == SIGINT_RESULT:
                    package_kind = 'previously aborted'
                elif previous_result == '0':
                    package_kind = 'previously tested'
                if package_kind is not None:
                    logger.info(
                        "Skipping {package_kind} package '{pkg.name}' in "
                        "'{pkg.path}'".format_map(locals()))
                    decorator.selected = False

            if args.packages_skip_test_passed:
                if previous_result == '0':
                    logger.info(
                        "Skipping previously tested package '{pkg.name}' in "
                        "'{pkg.path}'".format_map(locals()))
                    decorator.selected = False
