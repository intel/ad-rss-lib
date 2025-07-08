# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import defaultdict
import sys

from colcon_core.event.job import JobEnded
from colcon_core.event.output import StderrLine
from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_core.subprocess import SIGINT_RESULT


class ConsoleStderrEventHandler(EventHandlerExtensionPoint):
    """
    Output all stderr of a task at once.

    The output is batched up until the task has ended in order to not
    interleave the output from parallel tasks.
    When the task was aborted / exited with a SIGINT no output is shown.

    The extension handles events of the following types:
    - :py:class:`colcon_core.event.output.StderrLine`
    - :py:class:`colcon_core.event.job.JobEnded`
    """

    # the priority should be slightly higher than the default priority
    # in order to output errors early
    PRIORITY = 110

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self._stderr_lines = defaultdict(list)

    def __call__(self, event):  # noqa: D102
        data = event[0]

        if isinstance(data, StderrLine):
            job = event[1]
            self._stderr_lines[job].append(data.line)

        elif isinstance(data, JobEnded):
            job = event[1]
            if self._stderr_lines[job] and data.rc != SIGINT_RESULT:
                msg = '--- stderr: {data.identifier}\n' \
                    .format_map(locals()) + \
                    b''.join(
                        self._stderr_lines[job]).decode() + \
                    '---'
                print(msg, file=sys.stderr, flush=True)
                del self._stderr_lines[job]
