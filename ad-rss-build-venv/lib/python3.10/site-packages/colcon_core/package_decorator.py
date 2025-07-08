# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.package_descriptor import PackageDescriptor


class PackageDecorator:
    """Decorator of a package descriptor to collect recursive dependencies."""

    __slots__ = (
        'descriptor',
        'recursive_dependencies',
        'selected',
    )

    def __init__(self, descriptor: PackageDescriptor):
        """
        Decorate a package descriptor.

        The function :function:`add_recursive_dependencies` should be invoked
        to populate the recursive dependencies.

        :param descriptor: The package descriptor
        """
        self.descriptor = descriptor
        self.recursive_dependencies = None
        self.selected = True


def get_decorators(descriptors):
    """
    Get decorators for package descriptors.

    :param Iterable descriptors: The package descriptors
    :returns: The package decorators
    :rtype: list
    """
    return [PackageDecorator(d) for d in descriptors]


def add_recursive_dependencies(
    decorators, direct_categories=None, recursive_categories=None,
):
    """
    Update the recursive dependencies of the decorators.

    :param set decorators: The known packages to consider
    :param Iterable[str] direct_categories: The names of the direct categories
    :param Iterable[str]|Mapping[str, Iterable[str]] recursive_categories:
      The names of the recursive categories, optionally mapped from the
      immediate upstream category which included the dependency
    """
    descriptors = [decorator.descriptor for decorator in decorators]
    for decorator in decorators:
        decorator.recursive_dependencies = \
            decorator.descriptor.get_recursive_dependencies(
                descriptors,
                direct_categories=direct_categories,
                recursive_categories=recursive_categories)
