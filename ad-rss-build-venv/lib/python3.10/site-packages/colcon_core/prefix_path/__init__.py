# Copyright 2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import traceback

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_grouped_by_priority

logger = colcon_logger.getChild(__name__)


class PrefixPathExtensionPoint:
    """
    The interface for prefix path extensions.

    A prefix path extension populates a list of chained prefix paths.

    For each instance the attribute `PREFIX_PATH_NAME` is being set to the
    basename of the entry point registering the extension.
    """

    """The version of the prefix path extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    """The default priority of prefix path extensions."""
    PRIORITY = 100

    def extend_prefix_path(self, paths):
        """
        Extend the given list of prefix paths.

        The items are ordered from higher to lower priority paths.

        This method must be overridden in a subclass.

        :param paths: The list of prefix paths to be extended
        :type paths: list
        """
        raise NotImplementedError()


def get_prefix_path_extensions(*, group_name=None):
    """
    Get the available prefix path extensions.

    The extensions are grouped by their priority and each group is ordered by
    the entry point name.

    :rtype: OrderedDict
    """
    if group_name is None:
        group_name = __name__
    extensions = instantiate_extensions(group_name)
    for name, extension in extensions.items():
        extension.PREFIX_PATH_NAME = name
    return order_extensions_grouped_by_priority(extensions)


def get_chained_prefix_path(*, skip=None):
    """
    Get the chained prefix paths.

    The items are ordered from higher to lower priority paths.
    Repeated paths are skipped.

    :param skip: The current prefix path to be skipped and not be included in
      the return value
    :returns: The list of prefix paths
    :rtype: list
    """
    chained_prefix_path = []
    extensions = get_prefix_path_extensions()
    for priority in extensions.keys():
        extensions_same_prio = extensions[priority]
        for extension in extensions_same_prio.values():
            try:
                retval = extension.extend_prefix_path(chained_prefix_path)
                assert retval is None, \
                    'extend_prefix_path() should return None'
            except Exception as e:  # noqa: F841
                # catch exceptions raised in prefix path extension
                exc = traceback.format_exc()
                logger.error(
                    'Exception in prefix path extension '
                    f"'{extension.PREFIX_PATH_NAME}': {e}\n{exc}")
                # skip failing extension, continue with next one
    unique_prefix_path = []
    for p in chained_prefix_path:
        if skip is not None and str(p) == str(skip):
            continue
        if p in unique_prefix_path:
            continue
        unique_prefix_path.append(p)
    return unique_prefix_path
