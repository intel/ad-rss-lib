# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.event.command import Command
from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version

logger = colcon_logger.getChild(__name__)


class LogCommandEventHandler(EventHandlerExtensionPoint):
    """
    Log a 'debug' message for each command.

    In order to see the invoked commands the log level needs to be changed to
    show messages with the severity 'debug'.

    The extension handles events of the following types:
    - :py:class:`colcon_core.event.command.Command`
    """

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def __call__(self, event):  # noqa: D102
        data = event[0]

        if isinstance(data, Command):
            logger.debug(data.to_string())
