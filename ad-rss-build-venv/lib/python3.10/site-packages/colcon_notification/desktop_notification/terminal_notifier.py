# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
from pathlib import Path
import platform
import subprocess
import sys

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.plugin_system import SkipExtensionException
import colcon_notification
from colcon_notification.desktop_notification \
    import DesktopNotificationExtensionPoint

logger = colcon_logger.getChild(__name__)


class TerminalNotifierDesktopNotification(DesktopNotificationExtensionPoint):
    """Use `colcon_terminal_notifier` to show notifications."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            DesktopNotificationExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

        if platform.system() != 'Darwin':
            raise SkipExtensionException('Not used on non-Darwin systems')

    def notify(self, *, title, message, icon_path=None):  # noqa: D102
        if title.startswith('-'):
            title = '\\' + title
        if message.startswith('-'):
            message = '\\' + message

        # determine the install prefix of this Python package
        install_prefix = _get_prefix_path(
            Path(colcon_notification.__file__).parent.parent)
        if install_prefix is None:
            # for 'develop' the dist location points to the build directory
            # and the prefix path can't be determined
            # therefore searching the sys.path instead
            for path in sys.path:
                path = _get_prefix_path(path)
                if path is not None and _get_app_path(path):
                    install_prefix = path
                    break

        if install_prefix is None:
            logger.error(
                'Could not determine the install prefix of the '
                'colcon_terminal_notifier.app')
            return

        app_path = _get_app_path(install_prefix)
        if app_path is None:
            logger.error(
                'Could not find the colcon_terminal_notifier.app in the '
                "install prefix '{install_prefix}'".format_map(locals()))
            return

        cmd = [
            'open', str(_get_app_path(install_prefix)),
            '--args',
            '-message', message,
            '-title', title,
            '-group', 'colcon_pid_' + str(os.getpid()),
        ]
        if icon_path:
            cmd += ['--icon', icon_path]

        try:
            subprocess.run(cmd, input=message.encode())
        except FileNotFoundError:
            logger.error(
                "Failed to find 'colcon_terminal_notifier'")
        except subprocess.CalledProcessError:
            cmd_str = ' '.join(cmd)
            logger.error(
                "Failed to invoke '{cmd_str}'".format_map(locals()))


def _get_prefix_path(path):
    path = Path(path)
    if path.parents[1].name.lower() == 'lib':
        return path.parents[2]
    return None


def _get_app_path(prefix_path):
    app_path = prefix_path / 'share' / 'colcon_notification' / \
        'colcon_terminal_notifier.app'
    if app_path.exists():
        return app_path
    return None
