# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.plugin_system import get_first_line_doc
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_priority


class EventHandlerExtensionPoint:
    """
    The interface for event handler extensions.

    An event handler extension processes events.

    For each instance the attribute `EVENT_HANDLER_NAME` is being set to the
    basename of the entry point registering the extension.

    Custom event handlers don't need to be subclasses but only be callables
    accepting a single `event` argument.
    They are being registered as observers at an
    :py:class:`colcon_core.EventReactor` instance.
    The handler should check the type of the event and only act on known types.
    """

    """The version of the event handler extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    """The default priority of event handler extensions."""
    PRIORITY = 100

    def __init__(self):  # noqa: D107
        super().__init__()
        self.context = None
        self.enabled = True

    def __call__(self, event):
        """
        Process an event if the event type is known.

        This method must be overridden in a subclass.

        :param event: The event
        """
        raise NotImplementedError()


def get_event_handler_extensions(*, context, group_name=None):
    """
    Get the available event handler extensions.

    The extensions are ordered by their priority and entry point name.

    :rtype: OrderedDict
    """
    if group_name is None:
        group_name = __name__
    extensions = instantiate_extensions(group_name)
    for name, extension in extensions.items():
        extension.EVENT_HANDLER_NAME = name
        extension.context = context
    return order_extensions_by_priority(extensions)


def add_event_handler_arguments(parser):
    """
    Add the command line arguments for the event handler extensions.

    :param parser: The argument parser
    """
    group = parser.add_argument_group(title='Event handler arguments')
    extensions = get_event_handler_extensions(context=None)

    completions = []
    defaults = []
    descriptions = ''
    for key in sorted(extensions.keys()):
        # only offer completion for non-default choices
        completions.append(key + ('-' if extensions[key].enabled else '+'))
        defaults.append(key + ('+' if extensions[key].enabled else '-'))
        extension = extensions[key]
        desc = get_first_line_doc(extension)
        # ignore extensions without a description
        # since they are already listed in the defaults
        if desc:
            # it requires a custom formatter to maintain the newline
            descriptions += f'\n* {key}: {desc}'

    argument = group.add_argument(
        '--event-handlers',
        nargs='*', choices=completions + defaults,
        metavar=('name1+', 'name2-'),
        help='Enable (+) or disable (-) event handlers (default: %s)%s' %
             (' '.join(defaults), descriptions))

    def choices_completer(prefix, **kwargs):
        nonlocal completions
        return (c for c in completions if c.startswith(prefix))

    argument.completer = choices_completer


def apply_event_handler_arguments(extensions, args):
    """
    Enable/disable the event handler extensions based on the passed arguments.

    :param extensions: The event handler extensions
    :param args: The parsed command line arguments
    """
    for arg in (args.event_handlers or []):
        suffix = arg[-1]
        assert suffix in ('+', '-')
        key = arg[:-1]
        extension = extensions[key]
        extension.enabled = suffix == '+'


def format_duration(seconds, *, fixed_decimal_points=None):
    """
    Stringify a duration as hours, minutes, seconds and decimal points.

    :param float seconds: The duration in seconds
    :param int fixed_decimal_points: A fixed number of decimal points for the
      seconds, if None two, one or none will be used depending on the duration
      size
    :returns: The string representation of the duration
    :rtype: str
    """
    if seconds < 0.0:
        raise ValueError(
            f"The duration '{seconds}' must be a non-negative number")
    minutes, seconds = divmod(seconds, 60)
    hours, minutes = divmod(minutes, 60)

    # determine number of decimal points for seconds
    if fixed_decimal_points is not None:
        decimal_points = fixed_decimal_points
    elif hours or minutes:
        decimal_points = 0
    # compare rounded number to account for floating point imprecision
    elif round(seconds, 2) < 9.995:
        decimal_points = 2
    else:
        decimal_points = 1

    # check if rounding of seconds pushes it to a full minute
    if round(seconds, decimal_points) >= 60.0:
        # check if the desired decimal points change due to the wrapping
        if fixed_decimal_points is None and not minutes and not hours:
            decimal_points = 0
        seconds = 0.0
        minutes += 1

    # check if rounding of minutes pushes it to a full hour
    if round(minutes, 0) >= 60.0:
        minutes = 0.0
        hours += 1

    format_string = f'{seconds:.{decimal_points}f}s'
    if hours or minutes:
        format_string = f'{minutes:.0f}min ' + format_string
        if hours:
            format_string = f'{hours:.0f}h ' + format_string
    return format_string
