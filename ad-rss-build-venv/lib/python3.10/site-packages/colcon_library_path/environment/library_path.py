# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import namedtuple
import platform
import sys

from colcon_core.environment import EnvironmentExtensionPoint
from colcon_core.environment import logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.shell import create_environment_hook


class LibraryPathEnvironment(EnvironmentExtensionPoint):
    """
    Extend the platform specific environment variable to find shared libraries.

    On Linux `LD_LIBRARY_PATH` is extended if the subdirectory `lib` contains
    any `.so` files.
    On Darwin `DYLD_LIBRARY_PATH` is extended if the subdirectory `lib`
    contains any `.dylib` files.
    On Windows `PATH` is extended if the subdirectory `bin` contains any `.dll`
    files.
    """

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EnvironmentExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def create_environment_hooks(self, prefix_path, pkg_name):  # noqa: D102
        LibraryDescriptor = namedtuple(
            'LibraryDescriptor',
            ['hook_name', 'subdirectory', 'extension', 'environment_variable'])

        if sys.platform == 'win32':
            library_descriptors = [
                LibraryDescriptor('path_dll', 'bin', 'dll', 'PATH')
            ]
        elif platform.system() == 'Darwin':
            library_descriptors = [
                LibraryDescriptor(
                    'dyld_library_path', 'lib', 'dylib', 'DYLD_LIBRARY_PATH')]
        else:
            library_descriptors = [
                LibraryDescriptor(
                    'ld_library_path_{directory.name}'.format_map(locals()),
                    directory.name, 'so', 'LD_LIBRARY_PATH')
                for directory in prefix_path.glob('lib*')]

        environment_hooks = []
        for library_descriptor in library_descriptors:
            library_path = prefix_path / library_descriptor.subdirectory
            logger.log(1, "checking '%s'" % library_path)

            if any(library_path.glob('*.' + library_descriptor.extension)):
                environment_hooks += create_environment_hook(
                    library_descriptor.hook_name,
                    prefix_path, pkg_name,
                    library_descriptor.environment_variable,
                    library_descriptor.subdirectory, mode='prepend')

        return environment_hooks
