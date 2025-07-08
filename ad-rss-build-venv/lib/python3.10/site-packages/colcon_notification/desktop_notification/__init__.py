# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from enum import Enum
from pathlib import Path
import traceback

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_priority

logger = colcon_logger.getChild(__name__)


class Result(Enum):
    """Result type of a job."""

    abort = 1
    failure = 2
    success = 3
    warning = 4

    @staticmethod
    def get_icon_path(result):
        """
        Get the path of the icon file for a specific result.

        :param result: The result enum
        :returns: The path of the icon, or None
        :rtype: str
        """
        if result == Result.abort:
            basename = 'colcon-abort.ico'
        elif result == Result.failure:
            basename = 'colcon-failure.ico'
        elif result == Result.success:
            basename = 'colcon-success.ico'
        elif result == Result.warning:
            basename = 'colcon-warning.ico'
        else:
            return None
        return str(Path(__file__).parent / 'image' / basename)


class DesktopNotificationExtensionPoint:
    """
    The interface for desktop notification extensions.

    A desktop notification extension provides a notification to the user.

    For each instance the attribute `DESKTOP_NOTIFICATION_NAME` is being set
    to the basename of the entry point registering the extension.
    """

    """The version of the desktop notification extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    """The default priority of desktop notification extensions."""
    PRIORITY = 100

    def notify(self, *, title, message, icon_path=None):
        """
        Create a desktop notification.

        This method must be overridden in a subclass.

        :param str title: The title
        :param str message: The message
        :param str icon_path: The path of the icon
        """
        raise NotImplementedError()


def get_desktop_notification_extensions():
    """
    Get the available desktop notification extensions.

    The extensions are ordered by their priority and entry point name.

    :rtype: OrderedDict
    """
    extensions = instantiate_extensions(__name__)
    for name, extension in extensions.items():
        extension.DESKTOP_NOTIFICATION_NAME = name
    return order_extensions_by_priority(extensions)


def notify(title, message, result):
    """
    Publish a notification message.

    It calls the extensions in order and stops after the first successful
    handling the request.

    :param str title: The title
    :param str message: The message
    :param str icon_path: The path of the icon
    """
    icon_path = Result.get_icon_path(result)
    desktop_notification_extensions = get_desktop_notification_extensions()
    for extension in desktop_notification_extensions.values():
        logger.info(
            'Sending desktop notification using '
            "'{extension.DESKTOP_NOTIFICATION_NAME}'".format_map(locals()))
        try:
            retval = extension.notify(
                title=title, message=message, icon_path=icon_path)
            assert retval is None, 'notify() should return None'
        except Exception as e:  # noqa: F841
            # catch exceptions raised in desktop notification extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in desktop notification extension '
                "'{extension.DESKTOP_NOTIFICATION_NAME}': {e}\n{exc}"
                .format_map(locals()))
            # skip failing extension, continue with next one
        else:
            # only notify using the first extension
            return
