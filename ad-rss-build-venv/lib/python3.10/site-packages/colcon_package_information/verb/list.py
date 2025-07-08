# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.command import get_prog_name
from colcon_core.package_selection import add_arguments \
    as add_packages_arguments
from colcon_core.package_selection import get_package_descriptors
from colcon_core.package_selection import select_package_decorators
from colcon_core.plugin_system import satisfies_version
from colcon_core.topological_order import topological_order_packages
from colcon_core.verb import VerbExtensionPoint


class ListVerb(VerbExtensionPoint):
    """List packages, optionally in topological ordering."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(VerbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        # only added so that package selection arguments can be used
        # which use the build directory to store state information
        parser.add_argument(
            '--build-base',
            default='build',
            help='The base path for all build directories (default: build)')

        add_packages_arguments(parser)

        parser.add_argument(
            '--topological-order', '-t',
            action='store_true',
            default=False,
            help='Order output based on topological ordering (breadth-first)')

        group = parser.add_mutually_exclusive_group()
        group.add_argument(
            '--names-only', '-n',
            action='store_true',
            default=False,
            help='Output only the name of each package but not the path')
        group.add_argument(
            '--paths-only', '-p',
            action='store_true',
            default=False,
            help='Output only the path of each package but not the name')

        group = parser.add_argument_group('Obsolete arguments')
        command_name = get_prog_name()
        self._add_obsolete_argument(
            group,
            '--topological-graph', '-g',
            action='store_true',
            default=False,
            help='Instead use `{command_name} graph`'.format_map(locals()))
        self._add_obsolete_argument(
            group,
            '--topological-graph-dot',
            action='store_true',
            default=False,
            help='Instead use `{command_name} graph --dot`'
                 .format_map(locals()))
        self._add_obsolete_argument(
            group,
            '--topological-graph-density',
            action='store_true',
            default=False,
            help='Instead use `{command_name} graph --density`'
                 .format_map(locals()))
        self._add_obsolete_argument(
            group,
            '--topological-graph-legend',
            action='store_true',
            default=False,
            help='Instead use `{command_name} graph --legend`'
                 .format_map(locals()))
        self._add_obsolete_argument(
            group,
            '--topological-graph-dot-cluster',
            action='store_true',
            default=False,
            help='Instead use `{command_name} graph --dot --dot-cluster`'
                 .format_map(locals()))
        self._add_obsolete_argument(
            group,
            '--topological-graph-dot-include-skipped',
            action='store_true',
            default=False,
            help='Instead use `{command_name} graph --dot '
                 '--dot-include-skipped`'.format_map(locals()))

    def _add_obsolete_argument(self, group, *args, **kwargs):
        arg = group.add_argument(*args, **kwargs)
        try:
            from argcomplete.completers import SuppressCompleter
        except ImportError:
            pass
        else:
            arg.completer = SuppressCompleter()
        return arg

    def main(self, *, context):  # noqa: D102
        args = context.args

        descriptors = get_package_descriptors(args)

        # always perform topological order for the select package extensions
        decorators = topological_order_packages(
            descriptors, recursive_categories=('run', ))

        select_package_decorators(args, decorators)

        if args.topological_graph or args.topological_graph_dot:
            additional_options = []
            if args.topological_graph_dot:
                if args.topological_graph_dot_cluster:
                    additional_options.append('--dot-cluster')
                if args.topological_graph_dot_include_skipped:
                    additional_options.append('--dot-include-skipped')
            elif args.topological_graph_density:
                additional_options.append('--density')
            if args.topological_graph_legend:
                additional_options.append('--legend')
            additional_options = ''.join(' ' + x for x in additional_options)
        if args.topological_graph:
            return 'The {args.verb_name} options --topological-graph / -g ' \
                'are obsolete, instead use `{context.command_name} graph' \
                '{additional_options}`'.format_map(locals())
        if args.topological_graph_dot:
            return 'The {args.verb_name} option --topological-graph-dot is ' \
                'obsolete, instead use `{context.command_name} graph --dot' \
                '{additional_options}`'.format_map(locals())
        if args.topological_graph_density:
            return 'The option --topological-graph-density must be used ' \
                'together with --topological-graph'
        if args.topological_graph_legend:
            return 'The option --topological-graph-legend must be used ' \
                ' with either --topological-graph or --topological-graph-dot'
        if args.topological_graph_dot_cluster:
            return 'The option --topological-graph-dot-cluster must be used ' \
                'together with --topological-graph-dot'
        if args.topological_graph_dot_include_skipped:
            return 'The option --topological-graph-dot-include-skipped must ' \
                'be used together with --topological-graph-dot'

        if not args.topological_order:
            decorators = sorted(
                decorators, key=lambda d: d.descriptor.name)
        lines = []
        for decorator in decorators:
            if not decorator.selected:
                continue
            pkg = decorator.descriptor
            if args.names_only:
                lines.append(pkg.name)
            elif args.paths_only:
                lines.append(str(pkg.path))
            else:
                lines.append(
                    pkg.name + '\t' + str(pkg.path) + '\t(%s)' % pkg.type)
        if not args.topological_order:
            # output names and / or paths in alphabetical order
            lines.sort()

        for line in lines:
            print(line)
