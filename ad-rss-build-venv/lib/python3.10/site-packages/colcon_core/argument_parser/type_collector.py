# Copyright 2021 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

import warnings

from colcon_core.argument_parser import ArgumentParserDecorator


class TypeCollectorDecorator(ArgumentParserDecorator):
    """Collect the type conversions of arguments."""

    warnings.warn(
        "'colcon_core.argument_parser.type_collector."
        "TypeCollectorDecorator' has been deprecated",
        stacklevel=2)

    def __init__(self, parser, **kwargs):
        """
        Construct a TypeCollectorDecorator.

        :param parser: The argument parser to decorate
        """
        # avoid setting members directly, the base class overrides __setattr__
        # pass them as keyword arguments instead
        super().__init__(
            parser,
            _registered_types={},
            **kwargs)

    def get_types(self):
        """
        Get types for all added arguments.

        :returns: The registered type converters
        :rtype: dict
        """
        return dict(self._registered_types)

    def add_argument(self, *args, **kwargs):
        """Collect type converters for all added arguments."""
        ret = super().add_argument(*args, **kwargs)

        type_arg = kwargs.get('type')
        if type_arg is not None:
            self._registered_types.setdefault(type_arg, type_arg)

        return ret

    def register(self, *args, **kwargs):
        """Collect explicitly added type converters."""
        ret = super().register(*args, **kwargs)

        registry_name_arg = kwargs.get('registry_name', args[0])
        if registry_name_arg == 'type':
            value_arg = kwargs.get('value', args[1])
            object_arg = kwargs.get('object', args[2])
            self._registered_types[value_arg] = object_arg

        return ret


class SuppressTypeConversions:
    """
    Context manager to suppress type conversions during `parse_known_args`.

    This works only with parsers decorated with
    :class:`TypeCollectorDecorator`. It operates by registering a no-op
    conversion function (`str()`) in place of the original conversion, then
    restores the original conversion when exiting.
    """

    warnings.warn(
        "'colcon_core.argument_parser.type_collector."
        "SuppressTypeConversions' has been deprecated, use 'colcon_core."
        "argument_parser.action_collector.SuppressTypeConversions' "
        'instead', stacklevel=2)

    def __init__(self, parsers, types_to_omit=None):
        """
        Construct a SuppressTypeConversions.

        :param parsers: The parsers
        :param types_to_omit: A collection of types which should not be
          suppressed
        """
        self._parsers = parsers
        self._suppressed_types = {}
        self._types_to_omit = types_to_omit or set()

    def __enter__(self):  # noqa: D105
        for p in self._parsers:
            if not issubclass(type(p), TypeCollectorDecorator):
                continue
            self._suppressed_types[p] = {}
            for v, o in getattr(p, '_registered_types', {}).items():
                if v in self._types_to_omit:
                    continue
                p._parser.register('type', v, str)
                self._suppressed_types[p][v] = o

    def __exit__(self, *args):  # noqa: D105
        for p, types in self._suppressed_types.items():
            for v, o in types.items():
                p.register('type', v, o)
