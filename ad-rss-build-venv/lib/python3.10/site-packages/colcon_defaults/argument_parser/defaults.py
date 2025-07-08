# Copyright 2016-2020 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import collections.abc
import os
from pathlib import Path

from colcon_core.argument_default import wrap_default_value
from colcon_core.argument_parser import ArgumentParserDecoratorExtensionPoint
from colcon_core.argument_parser import SuppressUsageOutput
from colcon_core.argument_parser.action_collector \
    import ActionCollectorDecorator
from colcon_core.argument_parser.action_collector \
    import SuppressRequiredActions
from colcon_core.argument_parser.action_collector \
    import SuppressTypeConversions
from colcon_core.argument_parser.destination_collector \
    import DestinationCollectorDecorator
from colcon_core.environment_variable import EnvironmentVariable
from colcon_core.location import get_config_path
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
import yaml

logger = colcon_logger.getChild(__name__)

"""Environment variable to set the path to the default values"""
DEFAULTS_FILE_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_DEFAULTS_FILE',
    'Set path to the yaml file containing the default values for the command '
    'line arguments (default: $COLCON_HOME/defaults.yaml)')

"""File with default values specific to the workspace."""
WORKSPACE_DEFAULTS_FILE = 'colcon_defaults.yaml'


def _deep_update(source, overrides):
    """
    Update a nested dictionary or similar mapping.

    Modifies ``source`` in place with values from ``overrides``. Taken from
    https://stackoverflow.com/a/30655448
    """
    for key, value in overrides.items():
        if isinstance(value, collections.abc.Mapping) and value:
            # If the map being overridden doesn't exist in source, create it
            source.setdefault(key, {})
            _deep_update(source[key], value)
        else:
            source[key] = overrides[key]


class DefaultArgumentsArgumentParserDecorator(
    ArgumentParserDecoratorExtensionPoint
):
    """Default command line arguments from global config file."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            ArgumentParserDecoratorExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')

    def decorate_argument_parser(self, *, parser):  # noqa: D102
        return DefaultArgumentsDecorator(parser)


class DefaultArgumentsDecorator(
    DestinationCollectorDecorator, ActionCollectorDecorator
):
    """Provide custom default values for command line arguments."""

    def __init__(self, parser):  # noqa: D107
        # avoid setting members directly, the base class overrides __setattr__
        # pass them as keyword arguments instead
        super().__init__(
            parser,
            _config_path=Path(os.environ.get(
                DEFAULTS_FILE_ENVIRONMENT_VARIABLE.name,
                get_config_path() / 'defaults.yaml')),
            _parsers={},
            _subparsers=[],
            _argument_types={},
        )

    def add_parser(self, *args, **kwargs):
        """Collect association of subparsers to their name."""
        subparser = super().add_parser(
            *args, **kwargs)
        assert args[0] not in self._parsers
        self._parsers[args[0]] = subparser
        return subparser

    def add_subparsers(self, *args, **kwargs):
        """Collect all subparsers."""
        subparser = super().add_subparsers(*args, **kwargs)
        self._subparsers.append(subparser)
        return subparser

    def add_argument(self, *args, **kwargs):
        """Determine the type of the argument."""
        argument = super().add_argument(*args, **kwargs)

        type_ = None
        if kwargs.get('type') in (str, str.lstrip):
            type_ = str
        elif kwargs.get('type') == int:
            type_ = int
        elif kwargs.get('action') in ('store_false', 'store_true'):
            type_ = bool
        elif callable(kwargs.get('action')):
            type_ = None
        elif 'type' not in kwargs:
            type_ = str
        if kwargs.get('nargs') in ('*', '+'):
            type_ = (list, type_)
        self._argument_types[argument.dest] = type_

        return argument

    def parse_args(self, *args, **kwargs):
        """Overwrite default values based on global configuration."""
        # mapping of all verbs to parsers
        def collect_parsers_by_verb(root, parsers, parent_verbs=()):
            for sp in root._subparsers:
                for name, p in sp._parsers.items():
                    verbs = parent_verbs + (name, )
                    parsers[verbs] = p
                    collect_parsers_by_verb(p, parsers, verbs)
        all_parsers = {}
        collect_parsers_by_verb(self, all_parsers)

        # collect passed verbs to determine relevant configuration options
        parsers_to_suppress = [self._parser] + list(all_parsers.values())
        with SuppressUsageOutput(parsers_to_suppress):
            with SuppressTypeConversions(parsers_to_suppress):
                with SuppressRequiredActions(parsers_to_suppress):
                    known_args, _ = self._parser.parse_known_args(
                        *args, **kwargs)

        data = self._get_defaults_values(self._config_path)

        # Merge local defaults with global defaults, possibly overwriting
        local_defaults_path = Path(WORKSPACE_DEFAULTS_FILE)
        local_data = self._get_defaults_values(local_defaults_path)
        _deep_update(data, local_data)

        # determine data keys and parsers for passed verbs (including the root)
        keys_and_parsers = []
        nested_verbs = ()
        parser = self
        while True:
            keys_and_parsers.append(('.'.join(nested_verbs), parser))
            if len(parser._recursive_decorators) != 1:
                break
            if not hasattr(parser._recursive_decorators[0], 'dest'):
                break
            verb = getattr(
                known_args, parser._recursive_decorators[0].dest, None)
            if verb is None:
                break
            nested_verbs = nested_verbs + (verb, )
            parser = all_parsers[nested_verbs]

        for key, parser in keys_and_parsers:
            parser._set_parser_defaults(data.get(key, {}), parser_name=key)

        return self._parser.parse_args(*args, **kwargs)

    def _get_defaults_values(self, path):
        if not path.is_file():
            return {}

        content = path.read_text()
        data = yaml.safe_load(content)
        if data is None:
            logger.info(
                "Empty metadata file '%s'" % path.absolute())
            return {}

        if not isinstance(data, dict):
            logger.warning(
                "Skipping metadata file '%s' since it doesn't contain a dict" %
                path.absolute())
            return {}
        logger.info(
            "Using configuration from '%s'" % path.absolute())
        return data

    def _set_parser_defaults(self, data, *, parser_name):
        if not isinstance(data, dict):
            logger.warning(
                "Configuration option '{parser_name}' should be a dictionary"
                .format_map(locals()))
            return

        defaults = {}
        destinations = self.get_destinations(recursive=False)
        argument_types = self._get_argument_types()
        for key, dest in destinations.items():
            if key in data:
                value = data[key]
                type_ = argument_types.get(dest)
                if type_ is not None:
                    # check if the value has the expected type
                    try:
                        self._check_argument_type(
                            type_, value, key, parser_name)
                    except TypeError:
                        continue
                defaults[dest] = wrap_default_value(value)
        unknown_keys = data.keys() - destinations.keys()
        if unknown_keys:
            unknown_keys_str = ', '.join(sorted(unknown_keys))
            logger.warn(
                "Skipping unknown keys from '{self._config_path}' for "
                "'{parser_name}': {unknown_keys_str}".format_map(locals()))

        if defaults:
            logger.info(
                "Setting default values for parser '{parser_name}': {defaults}"
                .format_map(locals()))
            self._parser.set_defaults(**defaults)

    def _get_argument_types(self):
        argument_types = {}
        argument_types.update(self._argument_types)
        for d in self._group_decorators:
            argument_types.update(d._argument_types)
        return argument_types

    def _check_argument_type(self, type_, value, key, parser_name):
        if isinstance(type_, tuple) and type_[0] == list:
            if not isinstance(value, list):
                logger.warning(
                    "Default value '{key}' for parser '{parser_name}' should "
                    'be a list, not: {value}'.format_map(locals()))
                raise TypeError()
            # check type of each item in the list
            if type_[1] == int and any(not isinstance(v, int) for v in value):
                logger.warning(
                    "Default value '{key}' for parser '{parser_name}' should "
                    'be a list of integers, not: {value}'.format_map(locals()))
                raise TypeError()
            if type_[1] == str and any(not isinstance(v, str) for v in value):
                logger.warning(
                    "Default value '{key}' for parser '{parser_name}' should "
                    'be a list of strings, not: {value}'.format_map(locals()))
                raise TypeError()
        if type_ == bool and not isinstance(value, bool):
            logger.warning(
                "Default value '{key}' for parser '{parser_name}' should be a "
                'boolean, not: {value}'.format_map(locals()))
            raise TypeError()
        if type_ == int and not isinstance(value, int):
            logger.warning(
                "Default value '{key}' for parser '{parser_name}' should be "
                'an integer, not: {value}'.format_map(locals()))
            raise TypeError()
        if type_ == str and not isinstance(value, str):
            logger.warning(
                "Default value '{key}' for parser '{parser_name}' should be a "
                'string, not: {value}'.format_map(locals()))
            raise TypeError()
