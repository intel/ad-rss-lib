# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import OrderedDict
import copy
import traceback

from colcon_core.logging import colcon_logger
from colcon_core.package_descriptor import PackageDescriptor
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_priority

logger = colcon_logger.getChild(__name__)


class PackageAugmentationExtensionPoint:
    """
    The interface for package augmentation extensions.

    A package augmentation extension adds additional information to a package
    descriptor.

    For each instance the attribute `PACKAGE_AUGMENTATION_NAME` is being set
    to the basename of the entry point registering the extension.
    """

    """The version of the package augmentation extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    """The default priority of package augmentation extensions."""
    PRIORITY = 100

    def augment_packages(
        self, descs, *, additional_argument_names=None
    ):
        """
        Augment the package descriptors with additional information.

        The method is intended to be overridden in a subclass.
        The default implementation invokes `augment_package` for each package
        descriptor.

        :param descs: The package descriptors
        :param additional_argument_names: A list of additional arguments to
          consider
        """
        for desc in descs:
            self.augment_package(
                desc, additional_argument_names=additional_argument_names)

    def augment_package(
        self, desc: PackageDescriptor, *, additional_argument_names=None
    ):
        """
        Augment the package descriptor with additional information.

        The method is intended to be overridden in a subclass.
        If the `augment_packages` method is being overridden and never calls
        this method it doesn't have to be implemented.

        :param desc: The package descriptor
        :param additional_argument_names: A list of additional arguments to
          consider
        """
        raise NotImplementedError()


def get_package_augmentation_extensions(*, group_name=None):
    """
    Get the available package augmentation extensions.

    The extensions are ordered by their priority and entry point name.

    :rtype: OrderedDict
    """
    if group_name is None:
        group_name = __name__
    extensions = instantiate_extensions(group_name)
    for name, extension in extensions.items():
        extension.PACKAGE_AUGMENTATION_NAME = name
    return order_extensions_by_priority(extensions)


def augment_packages(
    descs, *, additional_argument_names=None, augmentation_extensions=None
):
    """
    Augment package descriptors with additional information.

    :param descs: the packages
    :type descs: set of
      :py:class:`colcon_core.package_descriptor.PackageDescriptor`
    """
    if augmentation_extensions is None:
        augmentation_extensions = get_package_augmentation_extensions()

    for extension in augmentation_extensions.values():
        try:
            retval = extension.augment_packages(
                descs,
                additional_argument_names=additional_argument_names)
            assert retval is None, 'augment_packages() should return None'
        except Exception as e:  # noqa: F841
            # catch exceptions raised in augmentation extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in package augmentation extension '
                f"'{extension.PACKAGE_AUGMENTATION_NAME}': {e}\n{exc}")
            # skip failing extension, continue with next one


def update_descriptor(
    desc: PackageDescriptor, data: dict, *, additional_argument_names=None
):
    """
    Update the package descriptor with additional information.

    For the keys `name` and `type` the values from `data` are set on the
    descriptor attributes with the same names.
    For the key `dependencies` the values are being added to the dependencies
    in each of the following categories: `build`, `run`, and `test`.
    For the keys `build_dependencies`, `run_dependencies`, and
    `test_dependencies` the values are being added to the dependencies in the
    category with the same name.
    For the key `hooks` the values are being added to the list of hooks.

    Any key-value pair not explicitly mentioned above is being used to update
    the metadata if the key is in the list of additional argument names.
    See :function:`update_metadata` for details how the metadata is updated.

    If the additional argument names is a list with the single value `*` all
    keys not explicitly mentioned above are being used to update the metadata.

    :param desc: the package descriptor
    :param data: The dictionary with additional information
    :param additional_argument_names: A dict of option names to destination
      names or a list of argument names
    """
    dep_types = ('build', 'run', 'test')
    # transfer generic dependencies to each specific type
    if 'dependencies' in data:
        for d in data['dependencies']:
            for dep_type in dep_types:
                desc.dependencies[dep_type].add(d)
    # transfer type specific dependencies
    for dep_type in dep_types:
        key = f'{dep_type}-dependencies'
        if key in data:
            for d in data[key]:
                desc.dependencies[dep_type].add(d)

    # transfer hooks
    if 'hooks' in data:
        for d in data['hooks']:
            desc.hooks.append(d)

    # transfer any other metadata
    if additional_argument_names == ['*']:
        additional_argument_names = []
        # skip any of the already explicitly handled names
        ignored_names = ['name', 'type', 'dependencies', 'hooks']
        for dep_type in dep_types:
            ignored_names.append(f'{dep_type}-dependencies')
        for name in data.keys():
            if name in ignored_names:
                continue
            additional_argument_names.append(name)
    if isinstance(additional_argument_names, list):
        additional_argument_names = OrderedDict([
            (name, name) for name in additional_argument_names])
    for option, dest in (additional_argument_names or {}).items():
        if option in data:
            update_metadata(desc, dest, data[option])


def update_metadata(desc, key, value):
    """
    Update the metadata of a package descriptor.

    If the key doesn't exist in the metadata yet the key-value pair is added.

    If the key exists and the existing value as well as the passed value are
    dictionaries the existing value is updated with the passed value.
    If the key exists and the existing value as well as the passed value are
    lists the existing value is extended with the passed value.
    If the key exists and the existing value as well as the passed value are
    sets the existing value is union updated with the passed value.

    Otherwise the existing value is overwritten with the passed value.
    If the types were different a warning message is logged.

    :param desc: the package descriptor
    :param key: The key
    :param value: The value
    """
    if key not in desc.metadata:
        # add value to the metadata
        # copy value to avoid changes to either of them to affect each other
        desc.metadata[key] = copy.deepcopy(value)
        return

    old_value = desc.metadata[key]
    if isinstance(old_value, dict) and isinstance(value, dict):
        # update dictionary
        old_value.update(value)
        return

    if isinstance(old_value, list) and isinstance(value, list):
        # extend list
        old_value += value
        return

    if isinstance(old_value, set) and isinstance(value, set):
        # union update set
        old_value |= value
        return

    if type(old_value) is not type(value):
        logger.warning(
            f"update package '{desc.name}' metadata '{key}' from value "
            f"'{old_value}' to '{value}'")

    # overwrite existing value
    # copy value to avoid changes to either of them to affect each other
    desc.metadata[key] = copy.deepcopy(value)
