# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from contextlib import suppress

from colcon_core.extension_point import EXTENSION_POINT_GROUP_NAME
from colcon_core.extension_point import get_all_extension_points
from colcon_core.extension_point import load_extension_point
from colcon_core.plugin_system import get_first_line_doc
from colcon_core.plugin_system import satisfies_version
from colcon_core.verb import VerbExtensionPoint


class ExtensionsVerb(VerbExtensionPoint):
    """List extensions."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(VerbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        all_extension_points = get_all_extension_points()
        parser.add_argument(
            'group_name',
            nargs='?',
            choices=sorted(all_extension_points.keys()),
            metavar='GROUP_NAME',
            help='Only show the extensions in a specific group')
        parser.add_argument(
            '--all', '-a',
            action='store_true',
            default=False,
            help='Also show extensions which failed to load or are '
                 'incompatible. (prefixed with `- `)')
        parser.add_argument(
            '--verbose', '-v',
            action='store_true',
            default=False,
            help='Show more information for each extension')

    def main(self, *, context):  # noqa: D102
        all_extension_points = get_all_extension_points()
        for group_name in sorted(all_extension_points.keys()):
            if context.args.group_name is not None:
                if group_name != context.args.group_name:
                    continue
            elif group_name == EXTENSION_POINT_GROUP_NAME:
                # Skip the meta group by default
                continue
            print(group_name)
            group = all_extension_points[group_name]
            for extension_point_name in sorted(group.keys()):
                extension_point_info = group[extension_point_name]
                self._print_extension_point(
                    context.args, extension_point_name, extension_point_info,
                    group_name)

    def _print_extension_point(self, args, name, info, group):
        exception = None
        value, dist_name, dist_ver = info
        try:
            extension = load_extension_point(name, value, group)
        except Exception as e:  # noqa: B902
            # catch exceptions raised when loading entry point
            if not args.all:
                # skip entry points which failed to load
                return
            exception = e
            extension = None
        else:
            try:
                extension()
            except Exception as e:  # noqa: B902
                # catch exceptions raised in extension constructor
                if not args.all:
                    # skip extensions which failed to be instantiated
                    return
                exception = e

        prefix = ' ' if exception is None else '-'
        print(prefix, name + ':', get_first_line_doc(extension))

        if args.verbose:
            if ':' in value:
                module_name, attr = value.split(':', 1)
            else:
                module_name, attr = value, None
            print(prefix, ' ', 'module_name:', module_name)
            if attr is not None:
                print(prefix, ' ', 'attributes:', attr)
            print(prefix, ' ', 'distribution:', dist_name, dist_ver or '')
            with suppress(AttributeError):
                print(prefix, ' ', 'priority:', extension.PRIORITY)

        if exception:
            print(prefix, ' ', 'reason:', str(exception))
