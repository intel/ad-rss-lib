# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import traceback
import types
import warnings

from colcon_core.generic_decorator import GenericDecorator
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_priority

logger = colcon_logger.getChild(__name__)


class ArgumentParserDecoratorExtensionPoint:
    """
    The interface for argument parser decorator extensions.

    An argument parser decorator extension performs additional functionality
    when adding command line arguments.

    For each instance the attribute `ARGUMENT_PARSER_DECORATOR_NAME` is being
    set to the basename of the entry point registering the extension.
    """

    """The version of the argument parser decorator extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    """The default priority of argument parser decorator extensions."""
    PRIORITY = 100

    def decorate_argument_parser(self, *, parser):
        """
        Decorate an argument parser to perform additional functionality.

        This method must be overridden in a subclass.

        :param parser: The argument parser
        :returns: A decorator
        """
        raise NotImplementedError()


def get_argument_parser_extensions(*, group_name=None):
    """
    Get the available argument parser extensions.

    The extensions are ordered by their priority and entry point name.

    :rtype: OrderedDict
    """
    if group_name is None:
        group_name = __name__
    extensions = instantiate_extensions(group_name)
    for name, extension in extensions.items():
        extension.ARGUMENT_PARSER_DECORATOR_NAME = name
    return order_extensions_by_priority(extensions)


def decorate_argument_parser(parser):
    """
    Decorate the parser using the available argument parser extensions.

    :param parser: The argument parser
    :returns: The decorated parser
    """
    extensions = get_argument_parser_extensions()
    for extension in extensions.values():
        logger.log(
            1, 'decorate_argument_parser() %s',
            extension.ARGUMENT_PARSER_DECORATOR_NAME)
        try:
            decorated_parser = extension.decorate_argument_parser(
                parser=parser)
            assert hasattr(decorated_parser, 'add_argument'), \
                'decorate_argument_parser() should return a parser like object'
        except Exception as e:  # noqa: F841
            # catch exceptions raised in decorator extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in argument parser decorator extension '
                f"'{extension.ARGUMENT_PARSER_DECORATOR_NAME}': {e}\n{exc}")
            # skip failing extension, continue with next one
        else:
            parser = decorated_parser

    return parser


class ArgumentParserDecorator(GenericDecorator):
    """
    Decorate an argument parser as well as all recursive subparsers.

    The methods and arguments are the same as :class:`argparse.ArgumentParser`.

    Subclasses can perform any kind of task when e.g. arguments are being added
    without being concerned in which part of the hierarchy it is added.

    Subclasses should not set any member variables directly but pass them as
    keyword arguments to the constructor.
    """

    def __init__(self, parser, **kwargs):
        """
        Decorate an argument parser.

        :param parser: The argument parser to decorate
        :param **kwargs: The keyword arguments are set as attributes on this
          instance
        """
        assert '_parser' not in kwargs
        assert '_nested_decorators_' not in kwargs
        kwargs['_nested_decorators_'] = []
        assert '_group_decorators' not in kwargs
        kwargs['_group_decorators'] = []
        assert '_recursive_decorators' not in kwargs
        kwargs['_recursive_decorators'] = []
        super().__init__(parser, **kwargs)

    @property
    def _nested_decorators(self):  # pragma: no cover
        warnings.warn(
            'colcon_core.argument_parser.ArgumentParserDecorator.'
            '_nested_decorators is a private variable and has been '
            'deprecated', stacklevel=2)
        return self._nested_decorators_

    @property
    def _parser(self):
        """
        Get the parser that this instance decorates (the decoree).

        TODO: Deprecate _parser in favor of _decoree
        """
        return self._decoree

    def add_argument(self, *args, **kwargs):
        """
        Add an argument.

        See :class:`argparse.ArgumentParser.add_argument` for the method
        arguments and return value.
        """
        return self._parser.add_argument(*args, **kwargs)

    def add_argument_group(self, *args, **kwargs):
        """
        Decorate group parser before adding.

        See :class:`argparse.ArgumentParser.add_argument_group` for the method
        arguments and return value.
        """
        group = self.__class__(
            self._parser.add_argument_group(*args, **kwargs))
        self._nested_decorators_.append(group)
        self._group_decorators.append(group)
        return group

    def add_mutually_exclusive_group(self, *args, **kwargs):
        """
        Decorate mutually exclusive group parser before adding.

        See :class:`argparse.ArgumentParser.add_mutually_exclusive_group` for
        the method arguments and return value.
        """
        group = self.__class__(
            self._parser.add_mutually_exclusive_group(*args, **kwargs))
        self._nested_decorators_.append(group)
        self._group_decorators.append(group)
        return group

    def add_parser(self, *args, **kwargs):
        """
        Decorate parser before adding.

        See :class:`argparse.ArgumentParser.add_parser` for the method
        arguments and return value.
        """
        parser = self.__class__(
            self._parser.add_parser(*args, **kwargs))
        self._nested_decorators_.append(parser)
        self._recursive_decorators.append(parser)
        return parser

    def add_subparsers(self, *args, **kwargs):
        """
        Decorate subparser before adding.

        See :class:`argparse.ArgumentParser.add_subparsers` for the method
        arguments and return value.
        """
        subparser = self.__class__(
            self._parser.add_subparsers(*args, **kwargs))
        self._nested_decorators_.append(subparser)
        self._recursive_decorators.append(subparser)
        return subparser

    def register(self, *args, **kwargs):
        """
        Register a type converter.

        See :class:`argparse.ArgumentParser.register` for the method arguments
        and return value.
        """
        return self._parser.register(*args, **kwargs)


class SuppressUsageOutput:
    """Context manager to suppress help action during `parse_known_args`."""

    def __init__(self, parsers):
        """
        Construct a SuppressUsageOutput.

        :param parsers: The parsers
        """
        self._parsers = parsers
        self._callbacks = {}

    def __enter__(self):  # noqa: D105
        for p in self._parsers:
            self._callbacks[p] = p.print_help, p.exit
            # temporary prevent printing usage early if help is requested
            p.print_help = lambda: None
            # temporary prevent help action to exit early,
            # but keep exiting on invalid arguments
            p.exit = types.MethodType(_ignore_zero_exit(p.exit), p)

        return self

    def __exit__(self, *args):  # noqa: D105
        for p, callbacks in self._callbacks.items():
            p.print_help, p.exit = callbacks


def _ignore_zero_exit(original_exit_handler):
    def exit_(self, status=0, message=None):
        nonlocal original_exit_handler
        if status == 0:
            return
        return original_exit_handler(status=status, message=message)

    return exit_
