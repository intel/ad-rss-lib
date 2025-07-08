# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import errno
import time

from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.event_reactor import EventReactorShutdown
from colcon_core.location import create_log_path
from colcon_core.location import get_log_path
from colcon_core.plugin_system import satisfies_version


class EventLogEventHandler(EventHandlerExtensionPoint):
    """
    Log all events to a global log file.

    The log file `events.log` is created in the log directory.
    """

    FILENAME = 'events.log'

    # the priority should be higher than the default priority
    # in order to write the events to the log file first
    PRIORITY = 200

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self._file_handle = None
        self._start_time = None

    def __call__(self, event):  # noqa: D102
        data = event[0]

        if not self._init_log():
            return

        context = str(event[1]) if event[1] is not None else '-'
        try:
            members = data.__dict__
        except AttributeError:
            members = {s: getattr(data, s) for s in data.__slots__}
        self._file_handle.write(
            '[%f] (%s) %s: %s\n' % (
                self._get_relative_time(), context,
                data.__class__.__name__, members))
        try:
            self._file_handle.flush()
        except OSError as e:
            if e.errno == errno.ENOSPC:
                # for known error code suppress the stacktrace
                # and only show the exception message
                raise RuntimeError(
                    str(e) +
                    ' [{self._file_handle.name}]'.format_map(locals()))
            raise

        if isinstance(data, EventReactorShutdown):
            self._file_handle.close()
            self._file_handle = None

    def _init_log(self):
        # only create log once
        if self._file_handle is not None:
            return True

        log_path = get_log_path()
        if log_path is None:
            return False

        create_log_path(self.context.args.verb_name)
        path = log_path / EventLogEventHandler.FILENAME
        self._file_handle = path.open(mode='w')
        return True

    def _get_relative_time(self):
        now = time.monotonic()
        if self._start_time is None:
            self._start_time = now
            return 0
        return now - self._start_time
