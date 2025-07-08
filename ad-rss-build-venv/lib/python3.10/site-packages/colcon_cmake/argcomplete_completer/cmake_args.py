# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

# try import since this package doesn't depend on colcon-argcomplete
try:
    from colcon_argcomplete.argcomplete_completer \
        import ArgcompleteCompleterExtensionPoint
except ImportError:
    class ArgcompleteCompleterExtensionPoint:  # noqa: D101
        pass
from colcon_core.plugin_system import satisfies_version


class CmakeArgcompleteCompleter(ArgcompleteCompleterExtensionPoint):
    """Completion of CMake arguments."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            ArgcompleteCompleterExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def get_completer(self, parser, *args, **kwargs):  # noqa: D102
        if '--cmake-args' not in args:
            return None

        try:
            from argcomplete.completers import ChoicesCompleter
        except ImportError:
            return None

        return ChoicesCompleter(get_cmake_args_completer_choices())


def get_cmake_args_completer_choices():
    """
    Get the CMake completer choices.

    Currently this includes only the `CMAKE_BUILD_TYPE`.
    :rtype: list
    """
    # HACK the quote and equal characters are currently a problem
    # see https://github.com/kislyuk/argcomplete/issues/94
    return [
        ' -DCMAKE_BUILD_TYPE=%s' % build_type
        for build_type in (
            'Debug', 'MinSizeRel', 'None', 'Release', 'RelWithDebInfo')]
