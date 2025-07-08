# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.package_decorator import add_recursive_dependencies
from colcon_core.package_decorator import get_decorators


def topological_order_packages(
    descriptors, direct_categories=None, recursive_categories=None,
):
    """
    Order packages topologically.

    :param descriptors: the package descriptors
    :type descriptors: set of
      :py:class:`colcon_core.package_descriptor.PackageDescriptor`

    :returns: list of package decorators
    :rtype: list of :py:class:`colcon_core.package_decorator.PackageDecorator`
    """
    decorators = get_decorators(descriptors)
    add_recursive_dependencies(
        decorators, direct_categories=direct_categories,
        recursive_categories=recursive_categories)
    return topological_order_decorators(decorators)


def topological_order_decorators(decorators):
    """
    Order decorated package descriptors topologically.

    :param decorators: the decorated package descriptors
    :type decorators: list of
      :py:class:`colcon_core.package_decorator.PackageDecorator`

    :returns: list of package decorators
    :rtype: list of :py:class:`colcon_core.package_decorator.PackageDecorator`
    """
    # map the set of remaining dependencies for each decorator
    queued = {}
    for decorator in decorators:
        queued[decorator] = {
            d.name for d in decorator.recursive_dependencies
        }

    ordered = []
    while len(ordered) < len(decorators):
        # remove dependencies on already ordered packages
        ordered_names = {d.descriptor.name for d in ordered}
        for q in queued.values():
            q.difference_update(ordered_names)

        # find all queued packages without remaining dependencies
        ready = [decorator for decorator, r in queued.items() if not r]
        if not ready:
            lines = [
                '%s: %s' % (
                    decorator.descriptor.name, sorted(r))
                for decorator, r in queued.items()]
            lines.sort()
            raise RuntimeError(
                'Unable to order packages topologically:\n' + '\n'.join(lines))

        # order ready jobs alphabetically for a deterministic order
        ready.sort(key=lambda d: d.descriptor.name)

        # add all ready jobs to ordered list
        for r in ready:
            ordered.append(r)
            queued.pop(r)

    # order recursive dependencies for each decorator
    ordered_name_list = [d.descriptor.name for d in ordered]
    for decorator in ordered:
        decorator.recursive_dependencies = sorted(
            decorator.recursive_dependencies, key=ordered_name_list.index)

    return ordered
