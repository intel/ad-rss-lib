# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import sys
import time

from colcon_core.event.job import JobEnded
from colcon_core.event.job import JobStarted
from colcon_core.event.test import TestFailure
from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.event_handler import format_duration
from colcon_core.output_style import Style
from colcon_core.plugin_system import satisfies_version
from colcon_core.subprocess import SIGINT_RESULT


class ConsoleStartEndEventHandler(EventHandlerExtensionPoint):
    """
    Output task name on start/end.

    The extension handles events of the following types:
    - :py:class:`colcon_core.event.job.JobStarted`
    - :py:class:`colcon_core.event.job.JobEnded`
    - :py:class:`colcon_core.event.test.TestFailure`
    """

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self._start_times = {}
        self._with_test_failures = set()

    def __call__(self, event):  # noqa: D102
        data = event[0]

        if isinstance(data, JobStarted):
            job_id = Style.PackageOrJobName(data.identifier)
            self._start_times[data.identifier] = time.monotonic()
            msg = 'Starting ' + Style.Pictogram('>>>') + f' {job_id}'
            print(Style.SectionStart(msg), flush=True)

        elif isinstance(data, TestFailure):
            job = event[1]
            self._with_test_failures.add(job)

        elif isinstance(data, JobEnded):
            job_id = Style.PackageOrJobName(data.identifier)
            duration = \
                time.monotonic() - self._start_times[data.identifier]
            duration_string = Style.Measurement(format_duration(duration))
            if not data.rc:
                msg = 'Finished ' + Style.Pictogram('<<<') + \
                    f' {job_id} [{duration_string}]'
                job = event[1]
                if job in self._with_test_failures:
                    msg += Style.Warning('\t[ with test failures ]')
                writable = sys.stdout

            elif data.rc == SIGINT_RESULT:
                msg = Style.Warning('Aborted') + '  ' + \
                    Style.Pictogram('<<<') + f' {job_id} [{duration_string}]'
                writable = sys.stdout

            else:
                msg = Style.Critical('Failed') + '   ' + \
                    Style.Pictogram('<<<') + f' {job_id} ' \
                    f'[{duration_string}, ' + \
                    Style.Error(f'exited with code {data.rc}') + ']'
                writable = sys.stderr

            print(Style.SectionEnd(msg), file=writable, flush=True)
