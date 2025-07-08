# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_name

logger = colcon_logger.getChild(__name__)


class MetadataSubverbExtensionPoint:
    """
    The interface for metadata subverb extensions.

    A metadata subverb extension provides a subverb to the `metadata` verb of
    the command line tool.

    For each instance the attribute `SUBVERB_NAME` is being set to the basename
    of the entry point registering the extension.
    """

    """The version of the metadata subverb extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    def add_arguments(self, *, parser):
        """
        Add command line arguments specific to the metadata subverb.

        The method is intended to be overridden in a subclass.

        :param parser: The argument parser
        """
        pass

    def main(self, *, context):
        """
        Execute the metadata subverb extension logic.

        This method must be overridden in a subclass.

        :param context: The context providing the parsed command line arguments
        :returns: The return code
        """
        raise NotImplementedError()


def get_subverb_extensions():
    """
    Get the available subverb extensions.

    The extensions are ordered by their entry point name.

    :rtype: OrderedDict
    """
    extensions = instantiate_extensions(__name__)
    for name, extension in extensions.items():
        extension.SUBVERB_NAME = name
    return order_extensions_by_name(extensions)
