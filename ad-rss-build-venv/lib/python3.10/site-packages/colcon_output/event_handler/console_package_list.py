# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.event.job import JobQueued
from colcon_core.event.job import JobStarted
from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.plugin_system import satisfies_version


class ConsolePackageListEventHandler(EventHandlerExtensionPoint):
    """
    Output list of queued job names.

    The extension handles events of the following types:
    - :py:class:`colcon_core.event.job.JobQueued`
    - :py:class:`colcon_core.event.job.JobStarted`
    """

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self.enabled = False
        self._queued = []

    def __call__(self, event):  # noqa: D102
        data = event[0]

        if isinstance(data, JobQueued):
            job = event[1]
            self._queued.append(job)
        if isinstance(data, JobStarted):
            if self._queued:
                print('Topological order')
                for job in self._queued:
                    print(
                        '- {job} ({job.task_context.pkg.type})'
                        .format_map(locals()))
                # clear the list to only print the order once
                self._queued = []
