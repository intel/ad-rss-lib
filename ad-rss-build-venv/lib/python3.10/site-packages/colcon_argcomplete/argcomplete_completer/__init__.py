# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import traceback

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_priority

logger = colcon_logger.getChild(__name__)


class ArgcompleteCompleterExtensionPoint:
    """
    The interface for argcomplete completer extensions.

    An argcomplete completer extension provides completion proposals for
    command line arguments.

    For each instance the attribute `ARGCOMPLETE_COMPLETER_NAME` is being set
    to the basename of the entry point registering the extension.
    """

    """The version of the argcomplete completer extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    """The default priority of argcomplete completer extensions."""
    PRIORITY = 100

    def get_completer(self, parser, *args, **kwargs):
        """
        Get a completer for a specific argument.

        The argument is identified by the same `args` and `kwargs` which are
        passed to the `add_argument()` function of the parser.

        This method must be overridden in a subclass.

        :param parser: The argument parser on which `add_argument()` was
          called on
        :param args: The positional arguments to `add_argument()`
        :param kwargs: The keyword arguments to `add_argument()`
        :returns: An argcomplete completer, or None
        """
        raise NotImplementedError()


def get_argcomplete_completer_extensions(*, exclude_names=None):
    """Get the argcomplete completer extensions in priority order."""
    extensions = instantiate_extensions(__name__, exclude_names=exclude_names)
    for name, extension in extensions.items():
        extension.ARGCOMPLETE_COMPLETER_NAME = name
    return order_extensions_by_priority(extensions)


def get_argcomplete_completer(parser, *args, **kwargs):
    """Get the completer for given arguments."""
    extensions = get_argcomplete_completer_extensions()
    # try extensions in priority order
    for extension in extensions.values():
        # check if extension provides a completer
        logger.log(
            1,
            'get_argcomplete_completer('
            '{extension.ARGCOMPLETE_COMPLETER_NAME}) for {args}'
            .format_map(locals()))

        try:
            completer = extension.get_completer(parser, *args, **kwargs)
            assert callable(completer) or completer is None, \
                'get_completer() should return a callable or None'
        except Exception as e:  # noqa: F841
            # catch exceptions raised in completer extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in argcomplete completer extension '
                "'{extension.ARGCOMPLETE_COMPLETER_NAME}': {e}\n{exc}"
                .format_map(locals()))
            # skip failing extension, continue with next one
            continue

        # if not continue with next extension
        if completer is None:
            continue

        # return provided completer
        logger.log(
            5,
            'get_argcomplete_completer('
            '{extension.ARGCOMPLETE_COMPLETER_NAME}) provided a completer for '
            '{args}'.format_map(locals()))
        return completer
    return None
