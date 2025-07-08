# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

# try import since this package doesn't depend on colcon-argcomplete
# and needs to fallback gracefully if it is not available
try:
    from colcon_argcomplete.argcomplete_completer \
        import ArgcompleteCompleterExtensionPoint
except ImportError:
    class ArgcompleteCompleterExtensionPoint:  # noqa: D101
        pass
from colcon_cmake.argcomplete_completer.cmake_args \
    import get_cmake_args_completer_choices
from colcon_core.plugin_system import satisfies_version


class CatkinCmakeArgcompleteCompleter(ArgcompleteCompleterExtensionPoint):
    """Completion of catkin CMake arguments."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            ArgcompleteCompleterExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def get_completer(self, parser, *args, **kwargs):  # noqa: D102
        # only contribute a complete for CMake arguments
        if '--catkin-cmake-args' not in args:
            return None

        # check that the argcomplete version has the necessary completer
        try:
            from argcomplete.completers import ChoicesCompleter
        except ImportError:
            return None

        # since only one extension can contribute a completer
        # include the CMake choices in addition to the catkin ones
        return ChoicesCompleter(
            get_cmake_args_completer_choices() +
            get_catkin_cmake_args_completer_choices())


def get_catkin_cmake_args_completer_choices():
    """Get completer choices for CMake arguments for catkin packages."""
    # HACK the quote and equal characters are currently a problem
    # see https://github.com/kislyuk/argcomplete/issues/94
    return \
        [
            f' -DCATKIN_ENABLE_TESTING={flag}'
            for flag in ('OFF', 'ON')] + \
        [
            f' -DCATKIN_SKIP_TESTING={flag}'
            for flag in ('OFF', 'ON')] + \
        [
            f' -DSETUPTOOLS_DEB_LAYOUT={flag}'
            for flag in ('OFF', 'ON')]
