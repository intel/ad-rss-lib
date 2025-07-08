# Copyright 2020 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
from pathlib import Path

from colcon_cmake.task.cmake import CMAKE_EXECUTABLE
from colcon_core.event.command import Command
from colcon_core.event.job import JobQueued
from colcon_core.event.job import JobUnselected
from colcon_core.event_handler import EventHandlerExtensionPoint
from colcon_core.event_reactor import EventReactorShutdown
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version

logger = colcon_logger.getChild(__name__)


class CompileCommandsEventHandler(EventHandlerExtensionPoint):
    """
    Generate a `compile_commands.json` file for the whole workspace.

    The file is created in the build directory and aggregates the data from all
    packages.
    """

    FILENAME = 'compile_commands.json'

    # the priority should be lower than e.g. the status and summary extensions
    # in order to show those as soon as possible
    PRIORITY = 40

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EventHandlerExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')
        self._package_names = set()
        self._any_cmake_commands = False

    def __call__(self, event):  # noqa: D102
        data = event[0]

        if isinstance(data, (JobQueued, JobUnselected)):
            # delay loading json for all packages
            self._package_names.add(data.identifier)

        elif isinstance(data, Command):
            if data.cmd[0] == CMAKE_EXECUTABLE:
                self._any_cmake_commands = True

        elif isinstance(data, EventReactorShutdown):
            # if CMake was never invoked there is no need (re-)generate a
            # workspace-level json file
            if not self._any_cmake_commands:
                return

            # if no package has a json file there is no need for a
            # workspace-level json file
            package_level_json_paths = self._get_package_level_json_paths()
            workspace_level_json_path = self._get_path()
            if not package_level_json_paths:
                if workspace_level_json_path.exists():
                    workspace_level_json_path.unlink()
                return

            # if the workspace-level json file is newer than all package-level
            # json files it doesn't need to be regenerated
            try:
                workspace_level_mtime = os.path.getmtime(
                    str(workspace_level_json_path))
            except OSError:
                pass
            else:
                for json_path in sorted(package_level_json_paths):
                    try:
                        mtime = os.path.getmtime(str(json_path))
                    except OSError:
                        continue
                    if mtime > workspace_level_mtime:
                        break
                else:
                    return

            # read all package-level json data
            # and combine them in the workspace-level file
            # for performance reasons avoid to load/dump json data
            with workspace_level_json_path.open('wb') as h:
                h.write(b'[')
                # keep deterministic order independent of aborted/selected pkgs
                written_compile_commands = False
                for json_path in sorted(package_level_json_paths):
                    compile_commands = self._get_compile_commands(json_path)
                    if not compile_commands:
                        continue
                    if written_compile_commands:
                        # add an empty line between packages
                        h.write(b',\n')
                    else:
                        written_compile_commands = True
                    h.write(b'\n')
                    h.write(compile_commands)
                if written_compile_commands:
                    h.write(b'\n')
                h.write(b']\n')

    def _get_package_level_json_paths(self):
        json_paths = set()
        for package_name in self._package_names:
            json_path = self._get_path(package_name)
            if json_path.exists():
                json_paths.add(json_path)
        return json_paths

    def _get_compile_commands(self, json_path):
        content = json_path.read_bytes()
        try:
            open_index = content.index(b'[')
            close_index = content.rindex(b']')
        except ValueError:
            logger.warning(
                "Data in '%s' is expected to be a list" % json_path.absolute())
            return None
        return content[open_index + 1:close_index - 1].strip()

    def _get_path(self, package_name=None):
        path = Path(self.context.args.build_base)
        if package_name is not None:
            path /= package_name
        path /= CompileCommandsEventHandler.FILENAME
        return path
