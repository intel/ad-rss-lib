# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import defaultdict
from collections import OrderedDict
import itertools
import os
from pathlib import Path

from colcon_core.package_selection import add_arguments \
    as add_packages_arguments
from colcon_core.package_selection import get_package_descriptors
from colcon_core.package_selection import select_package_decorators
from colcon_core.plugin_system import satisfies_version
from colcon_core.topological_order import topological_order_packages
from colcon_core.verb import VerbExtensionPoint


class GraphVerb(VerbExtensionPoint):
    """Generate a visual representation of the dependency graph."""

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

        group = parser.add_mutually_exclusive_group()
        group.add_argument(
            '--dot',
            action='store_true',
            default=False,
            help='Output topological graph in DOT '
                 '(e.g. pass the output to dot: ` | dot -Tpng -o graph.png`), '
                 'legend: blue=build, red=run, tan=test, dashed=indirect')

        group.add_argument(
            '--density',
            action='store_true',
            default=False,
            help='Output density of the graph (only without --dot)')

        parser.add_argument(
            '--legend',
            action='store_true',
            default=False,
            help='Output legend for the graph')

        parser.add_argument(
            '--dot-cluster',
            action='store_true',
            default=False,
            help='Cluster packages by their filesystem path (only affects '
                 '--dot)')
        parser.add_argument(
            '--dot-include-skipped',
            action='store_true',
            default=False,
            help='Also output skipped packages (only affects --dot)')

    def main(self, *, context):  # noqa: D102
        args = context.args

        descriptors = get_package_descriptors(args)

        decorators = topological_order_packages(
            descriptors, recursive_categories=('run', ))

        select_package_decorators(args, decorators)

        if not args.dot:
            if args.legend:
                print('+ marks when the package in this row can be processed')
                print('* marks a direct dependency '
                      'from the package indicated by the + in the same column '
                      'to the package in this row')
                print('. marks a transitive dependency')
                print()

            # draw dependency graph in ASCII
            shown_decorators = list(filter(lambda d: d.selected, decorators))
            max_length = max([
                len(m.descriptor.name) for m in shown_decorators] + [0])
            lines = [
                m.descriptor.name.ljust(max_length + 2)
                for m in shown_decorators]
            depends = [
                m.descriptor.get_dependencies() for m in shown_decorators]
            rec_depends = [
                m.descriptor.get_recursive_dependencies(
                    [d.descriptor for d in decorators],
                    recursive_categories=('run', ))
                for m in shown_decorators]

            empty_cells = 0
            for i, decorator in enumerate(shown_decorators):
                for j in range(len(lines)):
                    if j == i:
                        # package i is being processed
                        lines[j] += '+'
                    elif shown_decorators[j].descriptor.name in depends[i]:
                        # package i directly depends on package j
                        lines[j] += '*'
                    elif shown_decorators[j].descriptor.name in rec_depends[i]:
                        # package i recursively depends on package j
                        lines[j] += '.'
                    else:
                        # package i doesn't depend on package j
                        lines[j] += ' '
                        empty_cells += 1
            if args.density:
                empty_fraction = \
                    empty_cells / (len(lines) * (len(lines) - 1)) \
                    if len(lines) > 1 else 1.0
                # normalize to 200% since half of the matrix should be empty
                density_percentage = 200.0 * (1.0 - empty_fraction)
                print('dependency density %.2f %%' % density_percentage)
                print()

        else:  # --dot
            lines = ['digraph graphname {']

            decorators_by_name = defaultdict(set)
            for deco in decorators:
                decorators_by_name[deco.descriptor.name].add(deco)

            selected_pkg_names = [
                m.descriptor.name for m in decorators
                if m.selected or args.dot_include_skipped]
            has_duplicate_names = \
                len(selected_pkg_names) != len(set(selected_pkg_names))
            selected_pkg_names = set(selected_pkg_names)

            # collect selected package decorators and their parent path
            nodes = OrderedDict()
            for deco in reversed(decorators):
                if deco.selected or args.dot_include_skipped:
                    nodes[deco] = Path(deco.descriptor.path).parent

            # collect direct dependencies
            direct_edges = defaultdict(set)
            for deco in reversed(decorators):
                if (
                    not deco.selected and
                    not args.dot_include_skipped
                ):
                    continue
                # iterate over dependency categories
                for category, deps in deco.descriptor.dependencies.items():
                    # iterate over dependencies
                    for dep in deps:
                        if dep not in selected_pkg_names:
                            continue
                        # store the category of each dependency
                        # use the decorator
                        # since there might be packages with the same name
                        direct_edges[(deco, dep)].add(category)

            # collect indirect dependencies
            indirect_edges = defaultdict(set)
            for deco in reversed(decorators):
                if not deco.selected:
                    continue
                # iterate over dependency categories
                for category, deps in deco.descriptor.dependencies.items():
                    # iterate over dependencies
                    for dep in deps:
                        # ignore direct dependencies
                        if dep in selected_pkg_names:
                            continue
                        # ignore unknown dependencies
                        if dep not in decorators_by_name.keys():
                            continue
                        # iterate over recursive dependencies
                        for rdep in itertools.chain.from_iterable(
                            d.recursive_dependencies
                            for d in decorators_by_name[dep]
                        ):
                            if rdep not in selected_pkg_names:
                                continue
                            # skip edges which are redundant to direct edges
                            if (deco, rdep) in direct_edges:
                                continue
                            indirect_edges[(deco, rdep)].add(category)

            try:
                # HACK Python 3.5 can't handle Path objects
                common_path = os.path.commonpath(
                    [str(p) for p in nodes.values()])
            except ValueError:
                common_path = None

            def get_node_data(decorator):
                nonlocal args
                nonlocal has_duplicate_names
                if not has_duplicate_names:
                    # use name where possible so the dot code is easy to read
                    return decorator.descriptor.name, \
                        '' if (
                            decorator.selected or
                            not args.dot_include_skipped
                        ) else '[color = "gray" fontcolor = "gray"]'
                # otherwise append the descriptor id to make each node unique
                descriptor_id = id(decorator.descriptor)
                return (
                    '{decorator.descriptor.name}_{descriptor_id}'
                    .format_map(locals()),
                    ' [label = "{decorator.descriptor.name}"]'
                    .format_map(locals()),
                )

            if not args.dot_cluster or common_path is None:
                # output nodes
                for deco in nodes.keys():
                    if (
                        not deco.selected and
                        not args.dot_include_skipped
                    ):
                        continue
                    node_name, attributes = get_node_data(deco)
                    lines.append(
                        '  "{node_name}"{attributes};'.format_map(locals()))
            else:
                # output clusters
                clusters = defaultdict(set)
                for deco, path in nodes.items():
                    clusters[path.relative_to(common_path)].add(deco)
                for i, cluster in zip(range(len(clusters)), clusters.items()):
                    path, decos = cluster
                    if path.name:
                        # wrap cluster in subgraph
                        lines.append(
                            '  subgraph cluster_{i} {{'.format_map(locals()))
                        lines.append(
                            '    label = "{path}";'.format_map(locals()))
                        indent = '    '
                    else:
                        indent = '  '
                    for deco in decos:
                        node_name, attributes = get_node_data(deco)
                        lines.append(
                            '{indent}"{node_name}"{attributes};'
                            .format_map(locals()))
                    if path.name:
                        lines.append('  }')

            # output edges
            color_mapping = OrderedDict((
                ('build', '#0000ff'),  # blue
                ('run', '#ff0000'),  # red
                ('test', '#d2b48c'),  # tan
            ))
            for style, edges in zip(
                ('', ', style="dashed"'),
                (direct_edges, indirect_edges),
            ):
                for (deco_start, node_end), categories in edges.items():
                    start_name, _ = get_node_data(deco_start)
                    for deco in decorators_by_name[node_end]:
                        end_name, _ = get_node_data(deco)
                        edge_alpha = '' \
                            if deco_start.selected and deco.selected else '77'
                        colors = ':'.join([
                            color + edge_alpha
                            for category, color in color_mapping.items()
                            if category in categories])
                        lines.append(
                            '  "{start_name}" -> "{end_name}" '
                            '[color="{colors}"{style}];'.format_map(locals()))

            if args.legend:
                lines.append('  subgraph cluster_legend {')
                lines.append('    color=gray')
                lines.append('    label="Legend";')
                lines.append('    margin=0;')
                # invisible nodes between the dependency edges
                lines.append('    node [label="", shape=none];')

                previous_node = '_legend_first'
                # an edge for each dependency type
                for dependency_type, color in color_mapping.items():
                    next_node = '_legend_' + dependency_type
                    lines.append(
                        '    {previous_node} -> {next_node} '
                        '[label="{dependency_type} dep.", color="{color}"];'
                        .format_map(locals()))
                    previous_node = next_node
                lines.append(
                    '    {previous_node} -> _legend_last '
                    '[label="indirect dep.", style="dashed"];'
                    .format_map(locals()))

                # layout all legend nodes on the same rank
                lines.append('    {')
                lines.append('      rank=same;')
                lines.append('      _legend_first;')
                for dependency_type in color_mapping.keys():
                    lines.append(
                        '      _legend_{dependency_type};'
                        .format_map(locals()))
                lines.append('      _legend_last;')
                lines.append('    }')

                lines.append('  }')

            lines.append('}')

        for line in lines:
            print(line)
