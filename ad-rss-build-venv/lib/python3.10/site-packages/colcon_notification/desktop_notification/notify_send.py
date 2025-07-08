# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import platform
from shutil import which
import subprocess

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.plugin_system import SkipExtensionException
from colcon_notification.desktop_notification \
    import DesktopNotificationExtensionPoint

logger = colcon_logger.getChild(__name__)


class NotifySendDesktopNotification(DesktopNotificationExtensionPoint):
    """Use `notify-send` to show notifications."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            DesktopNotificationExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

        if platform.system() != 'Linux':
            raise SkipExtensionException('Not used on non-Linux systems')
        if not which('notify-send'):
            raise SkipExtensionException("Could not find 'notify-send'")

    def notify(self, *, title, message, icon_path=None):  # noqa: D102
        # can't replace a previous notification:
        # https://bugs.launchpad.net/ubuntu/+source/libnotify/+bug/257135
        cmd = [
            'notify-send',
            '-a', 'colcon',
        ]
        if icon_path:
            cmd += ['-i', icon_path]
        cmd += [title, message]

        try:
            subprocess.run(cmd)
        except subprocess.CalledProcessError:
            cmd_str = ' '.join(cmd)
            logger.error(
                "Failed to invoke '{cmd_str}'".format_map(locals()))
