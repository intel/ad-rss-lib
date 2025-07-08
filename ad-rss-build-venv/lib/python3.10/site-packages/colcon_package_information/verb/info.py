# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import argparse
import sys

from colcon_core.package_selection import add_arguments \
    as add_packages_arguments
from colcon_core.package_selection import get_package_descriptors
from colcon_core.package_selection import select_package_decorators
from colcon_core.plugin_system import satisfies_version
from colcon_core.topological_order import topological_order_packages
from colcon_core.verb import VerbExtensionPoint


class InfoVerb(VerbExtensionPoint):
    """Package information."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(VerbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.add_argument(
            'package_names', nargs='*', metavar='PKG_NAME',
            type=argument_package_name,
            help='Only show the information of a subset of packages')

        # only added so that package selection arguments can be used
        # which use the build directory to store state information
        parser.add_argument(
            '--build-base',
            default='build',
            help='The base path for all build directories (default: build)')

        add_packages_arguments(parser)

    def main(self, *, context):  # noqa: D102
        descriptors = get_package_descriptors(
            context.args, additional_argument_names=['*'])
        decorators = topological_order_packages(
            descriptors, recursive_categories=('run', ))
        select_package_decorators(context.args, decorators)

        if context.args.package_names:
            all_package_names = {d.descriptor.name for d in decorators}
            # warn about passed package names which are unknown
            for pkg_name in context.args.package_names:
                if pkg_name not in all_package_names:
                    print(
                        "Package '{pkg_name}' not found".format_map(locals()),
                        file=sys.stderr)
            # filter decorators using passed package names
            decorators = [
                d for d in decorators
                if d.descriptor.name in context.args.package_names]
            if not decorators:
                return 1
        if not decorators:
            return 'No packages found'

        for decorator in sorted(decorators, key=lambda d: d.descriptor.name):
            if not decorator.selected:
                continue
            pkg = decorator.descriptor
            print('path:', pkg.path)
            print('  type:', pkg.type)
            print('  name:', pkg.name)
            if pkg.dependencies:
                print('  dependencies:')
                for category in sorted(pkg.dependencies.keys()):
                    print(
                        '    {category}:'.format_map(locals()),
                        ' '.join(sorted(pkg.dependencies[category])))
            if pkg.hooks:
                print('  hooks:', ' '.join(pkg.hooks))
            if pkg.metadata:
                print('  metadata:')
                for key in sorted(pkg.metadata.keys()):
                    value = pkg.metadata[key]
                    print(
                        '    {key}: {value}'
                        .format_map(locals()))


def argument_package_name(value):
    """
    Check if an argument is a valid package name.

    Used as a ``type`` callback in ``add_argument()`` calls.
    Package names starting with a dash must be prefixed with a space to avoid
    collisions with command line arguments.

    :param str value: The command line argument
    :returns: The package name
    :raises argparse.ArgumentTypeError: if the value starts with a dash
    """
    if value.startswith('-'):
        raise argparse.ArgumentTypeError('unrecognized argument: ' + value)
    return value.lstrip()
