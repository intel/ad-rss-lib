# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import sys

from colcon_core.event.output import StderrLine
from colcon_core.event.output import StdoutLine
from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.plugin_system import satisfies_version


class ConsoleDirectEventHandler(EventHandlerExtensionPoint):
    """
    Pass output directly to stdout/err.

    The extension handles events of the following types:
    - :py:class:`colcon_core.event.output.StdoutLine`
    - :py:class:`colcon_core.event.output.StderrLine`
    """

    # this handler is enabled by default
    # but other handlers might choose to change that presetting
    ENABLED_BY_DEFAULT = True

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self.enabled = ConsoleDirectEventHandler.ENABLED_BY_DEFAULT
        self._handlers = {
            StdoutLine: sys.stdout,
            StderrLine: sys.stderr,
        }

    def __call__(self, event):  # noqa: D102
        data = event[0]

        for event_type, writable in self._handlers.items():
            if isinstance(data, event_type):
                try:
                    if isinstance(data.line, bytes):
                        writable.buffer.write(data.line)
                    else:
                        writable.write(data.line)
                    writable.flush()
                except BrokenPipeError:
                    self._handlers.pop(event_type)
                    raise
                return
