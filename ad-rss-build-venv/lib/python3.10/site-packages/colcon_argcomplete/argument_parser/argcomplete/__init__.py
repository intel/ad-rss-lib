# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import argparse
import os
import shlex
import time

from colcon_argcomplete.argcomplete_completer import get_argcomplete_completer
from colcon_argcomplete.argument_parser.argcomplete.completer.package_name \
    import package_name_completer
from colcon_core.argument_parser import ArgumentParserDecorator
from colcon_core.argument_parser import ArgumentParserDecoratorExtensionPoint
from colcon_core.environment_variable import EnvironmentVariable
from colcon_core.plugin_system import satisfies_version

"""Environment variable to log the completion time"""
COMPLETION_LOGFILE_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_COMPLETION_LOGFILE',
    'Set the logfile for completion time')

_start_time = time.monotonic()


class ArgcompleteArgumentParserDecorator(
    ArgumentParserDecoratorExtensionPoint
):
    """Argcomplete-based completions for the command line tool."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            ArgumentParserDecoratorExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')

    def decorate_argument_parser(self, *, parser):  # noqa: D102
        return ArgcompleteDecorator(parser)


class ArgcompleteDecorator(ArgumentParserDecorator):
    """Attach completers to some known arguments."""

    def __init__(self, parser):  # noqa: D107
        # avoid setting members directly, the base class overrides __setattr__
        # pass them as keyword arguments instead
        super().__init__(parser)

    def add_argument(self, *args, **kwargs):  # noqa: D102
        argument = self._parser.add_argument(*args, **kwargs)

        completer = get_argcomplete_completer(self._parser, *args, **kwargs)
        if completer is not None:
            argument.completer = completer

        elif '--log-level' in args:
            try:
                from argcomplete.completers import ChoicesCompleter
            except ImportError:
                pass
            else:
                argument.completer = \
                    ChoicesCompleter(
                        ('critical', 'error', 'warning', 'info', 'debug'))

        elif kwargs.get('metavar') == 'PKG_NAME':
            argument.completer = package_name_completer

        return argument

    def parse_known_args(self, *args, **kwargs):
        """Override the args in completion mode."""
        if _is_completion_requested():
            kwargs['args'] = shlex.split(os.environ['COMP_LINE'])[1:]
        try:
            return self._parser.parse_known_args(*args, **kwargs)
        except SystemExit:
            if _is_completion_requested():
                # if the partial arguments can't be parsed return no known args
                return argparse.Namespace(verb_name=None), []
            raise

    def parse_args(self, *args, **kwargs):
        """Register argcomplete hook."""
        global _start_time
        from argcomplete import autocomplete

        # if requested log the duration the completion took into a file
        logfile = os.environ.get(COMPLETION_LOGFILE_ENVIRONMENT_VARIABLE.name)
        if _is_completion_requested() and logfile is not None:
            duration = time.monotonic() - _start_time
            comp_line = os.environ['COMP_LINE']
            with open(logfile, 'a') as h:
                h.write('{duration}s - {comp_line}\n'.format_map(locals()))

        autocomplete(self._parser, exclude=['-h', '--help'])
        return self._parser.parse_args(*args, **kwargs)


def _is_completion_requested():
    return os.environ.get('_ARGCOMPLETE') == '1'
