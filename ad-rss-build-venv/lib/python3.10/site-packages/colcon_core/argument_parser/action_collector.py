# Copyright 2022 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

from colcon_core.argument_parser import ArgumentParserDecorator


class ActionCollectorDecorator(ArgumentParserDecorator):
    """Collect actions for all added arguments."""

    def __init__(self, parser, **kwargs):
        """
        Construct a ActionCollectorDecorator.

        :param parser: The argument parser to decorate
        """
        # avoid setting members directly, the base class overrides __setattr__
        # pass them as keyword arguments instead
        super().__init__(
            parser,
            _collected_actions=set(),
            **kwargs)

    def get_collected_actions(self):
        """
        Get actions for all added arguments.

        :returns: The argument actions
        :rtype: dict
        """
        return set(self._collected_actions)

    def add_argument(self, *args, **kwargs):
        """Collect actions for all added arguments."""
        action = super().add_argument(*args, **kwargs)
        self._collected_actions.add(action)
        return action


class SuppressRequiredActions:
    """
    Context manager to suppress required actions during `parse_known_args`.

    This works only with parsers decorated with
    :class:`ActionCollectorDecorator`. It operates by temporarily
    setting the ``required`` attribute on all actions to ``False``, then
    restores the original behavior when exiting.
    """

    def __init__(self, parsers, actions_to_omit=None):
        """
        Construct a SuppressRequiredActions.

        :param parsers: The parsers
        :param actions_to_omit: A collection of actions which should not be
          suppressed
        """
        self._parsers = parsers
        self._suppressed_actions = set()
        self._actions_to_omit = actions_to_omit or set()

    def __enter__(self):  # noqa: D105
        for p in self._parsers:
            if not issubclass(type(p), ActionCollectorDecorator):
                continue
            for action in p.get_collected_actions():
                if not action.required:
                    continue
                if action in self._actions_to_omit:
                    continue
                self._suppressed_actions.add(action)
                action.required = False

    def __exit__(self, *args):  # noqa: D105
        for action in self._suppressed_actions:
            action.required = True


class SuppressTypeConversions:
    """
    Context manager to suppress type conversions during `parse_known_args`.

    This works only with parsers decorated with
    :class:`ActionCollectorDecorator`. It operates by temporarily
    setting the ``type`` attribute on all actions to ``None``, then
    restores the original conversion when exiting.
    """

    def __init__(self, parsers, actions_to_omit=None):
        """
        Construct a SuppressTypeConversions.

        :param parsers: The parsers
        :param actions_to_omit: A collection of actions which should not be
          suppressed
        """
        self._parsers = parsers
        self._suppressed_actions = {}
        self._actions_to_omit = actions_to_omit or set()

    def __enter__(self):  # noqa: D105
        for p in self._parsers:
            if not issubclass(type(p), ActionCollectorDecorator):
                continue
            for action in p.get_collected_actions():
                if action.type in (None, str):
                    continue
                if action in self._actions_to_omit:
                    continue
                self._suppressed_actions[action] = action.type
                action.type = None

    def __exit__(self, *args):  # noqa: D105
        for action, original_type in self._suppressed_actions.items():
            action.type = original_type
