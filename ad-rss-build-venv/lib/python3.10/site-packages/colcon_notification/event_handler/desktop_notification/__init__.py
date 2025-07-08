# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.event.job import JobEnded
from colcon_core.event.output import StderrLine
from colcon_core.event.test import TestFailure
from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.event_reactor import EventReactorShutdown
from colcon_core.plugin_system import satisfies_version
from colcon_core.subprocess import SIGINT_RESULT
from colcon_notification.desktop_notification import notify
from colcon_notification.desktop_notification import Result


class DesktopNotificationEventHandler(EventHandlerExtensionPoint):
    """
    Desktop notification of the summary.

    The extension handles events of the following types:
    - :py:class:`colcon_core.event.output.StderrLine`
    - :py:class:`colcon_core.event.job.JobEnded`
    - :py:class:`colcon_core.event.test.TestFailure`
    """

    # the priority should be lower than all status and notification extensions
    # in order to not trigger the notification before they are finished
    PRIORITY = 20

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self._any_stderr_output = False
        self._any_test_failure = False
        self._failed = []
        self._all_failed_aborted = True

    def __call__(self, event):  # noqa: D102
        data = event[0]

        if isinstance(data, StderrLine):
            self._any_stderr_output = True

        elif isinstance(data, TestFailure):
            self._any_test_failure = True

        elif isinstance(data, JobEnded):
            if data.rc:
                job = event[1]
                self._failed.append(job)
                if data.rc != SIGINT_RESULT:
                    self._all_failed_aborted = False

        elif isinstance(data, EventReactorShutdown):
            if self._failed:
                pkg_info = self._failed[0].task.context.pkg.name
                if len(self._failed) > 1:
                    pkg_info += ' + ' + str(len(self._failed) - 1)
                if self._all_failed_aborted:
                    label = 'aborted'
                    result = Result.abort
                else:
                    label = 'failed'
                    result = Result.failure
                notify(
                    '`{context.command_name} {context.args.verb_name}` '
                    '{label} ({pkg_info})'.format(
                        label=label, pkg_info=pkg_info, **self.__dict__),
                    os.getcwd(), result)
            elif not self._any_stderr_output and not self._any_test_failure:
                notify(
                    '`{context.command_name} {context.args.verb_name}` '
                    'successful'.format_map(self.__dict__),
                    os.getcwd(), Result.success)
            else:
                msg_suffix = []
                if self._any_stderr_output:
                    msg_suffix.append('stderr output')
                if self._any_test_failure:
                    msg_suffix.append('test failures')
                msg_suffix = ' and '.join(msg_suffix)
                notify(
                    '`{context.command_name} {context.args.verb_name}` '
                    .format_map(self.__dict__) +
                    'with {msg_suffix}'.format_map(locals()),
                    os.getcwd(), Result.warning)
