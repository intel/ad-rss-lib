# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.extension_point import EXTENSION_POINT_GROUP_NAME
from colcon_core.extension_point import get_extension_points
from colcon_core.extension_point import load_extension_point
from colcon_core.plugin_system import get_first_line_doc
from colcon_core.plugin_system import satisfies_version
from colcon_core.verb import VerbExtensionPoint


class ExtensionPointsVerb(VerbExtensionPoint):
    """List extension points."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(VerbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.add_argument(
            '--all', '-a',
            action='store_true',
            default=False,
            help='Also show extension points which failed to be imported. '
                 '(prefixed with `- `)')
        parser.add_argument(
            '--verbose', '-v',
            action='store_true',
            default=False,
            help='Show more information for each extension point')

    def main(self, *, context):  # noqa: D102
        colcon_extension_points = get_extension_points(
            EXTENSION_POINT_GROUP_NAME)
        for name in sorted(colcon_extension_points.keys()):
            # skip "private" extension points
            if name.startswith('_'):
                continue
            self._print_extension_point(
                context.args, name, colcon_extension_points[name],
                EXTENSION_POINT_GROUP_NAME)

    def _print_extension_point(self, args, name, value, group):
        exception = None
        try:
            extension_point = load_extension_point(name, value, group)
        except Exception as e:  # noqa: B902
            # catch exceptions raised when loading entry point
            if not args.all:
                # skip entry points which failed to load
                return
            exception = e
            extension_point = None

        prefix = '' if exception is None else '- '
        print(prefix + name + ':', get_first_line_doc(extension_point))

        if args.verbose:
            if ':' in value:
                module_name, attr = value.split(':', 1)
            else:
                module_name, attr = value, None
            print(prefix, ' ', 'module_name:', module_name)
            if attr is not None:
                print(prefix, ' ', 'attributes:', attr)
            if hasattr(extension_point, 'EXTENSION_POINT_VERSION'):
                print(
                    prefix, ' ', 'version:',
                    extension_point.EXTENSION_POINT_VERSION)

        if exception:
            print(prefix, ' ', 'reason:', str(exception))
