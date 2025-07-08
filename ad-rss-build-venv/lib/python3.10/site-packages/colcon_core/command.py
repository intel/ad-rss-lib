# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import argparse
import datetime
import logging
import os
from pathlib import Path
import shutil
import signal
import sys
import traceback

from colcon_core.environment_variable import EnvironmentVariable

# a custom environment variable is necessary since PYTHONWARNINGS doesn't
# support passing a regular expression for the module entry
# see https://bugs.python.org/issue34624
"""Environment variable to set the warnings filter for colcon modules"""
WARNINGS_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_WARNINGS',
    'Set the warnings filter similar to PYTHONWARNINGS except that the module '
    "entry is implicitly set to 'colcon.*'")

warnings_filters = os.environ.get(WARNINGS_ENVIRONMENT_VARIABLE.name)
if warnings_filters:
    import warnings
    # filters are separated by commas
    for f in warnings_filters.split(','):
        # fields are separated by colons
        fields = f.split(':', 4)
        if len(fields) < 5:
            fields += [''] * (5 - len(fields))
        action, message, category, module, line = fields
        try:
            category = warnings._getcategory(category)
        except Exception:  # noqa: B902
            print(
                f"The category field '{category}' must be a valid warnings "
                'class name', file=sys.stderr)
            sys.exit(1)
        if module:
            print(
                'The module field of the '
                f'{WARNINGS_ENVIRONMENT_VARIABLE.name} filter should be '
                'empty, otherwise use PYTHONWARNINGS instead', file=sys.stderr)
            sys.exit(1)
        warnings.filterwarnings(
            action, message=message, category=category or Warning,
            module='colcon.*', lineno=line if line else 0)

from colcon_core.argument_parser import decorate_argument_parser  # noqa: E402 E501 I100 I202
from colcon_core.argument_parser import SuppressUsageOutput  # noqa: E402
from colcon_core.extension_point import load_extension_points  # noqa: E402
from colcon_core.feature_flags import check_implemented_flags  # noqa: E402
from colcon_core.location import create_log_path  # noqa: E402
from colcon_core.location import get_log_path  # noqa: E402
from colcon_core.location import set_default_config_path  # noqa: E402
from colcon_core.location import set_default_log_path  # noqa: E402
from colcon_core.logging import add_file_handler  # noqa: E402
from colcon_core.logging import colcon_logger  # noqa: E402
from colcon_core.logging import get_numeric_log_level  # noqa: E402
from colcon_core.logging import set_logger_level_from_env  # noqa: E402
from colcon_core.output_style import add_output_style_arguments  # noqa: E402
from colcon_core.output_style import apply_output_style  # noqa: E402
from colcon_core.plugin_system import get_first_line_doc  # noqa: E402
from colcon_core.verb import get_verb_extensions  # noqa: E402

"""Environment variable to set the log level"""
LOG_LEVEL_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_LOG_LEVEL',
    'Set the log level (debug|10, info|20, warn|30, error|40, critical|50, or '
    'any other positive numeric value)')

"""Environment variable to set the configuration directory"""
HOME_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_HOME',
    'Set the configuration directory (default: ~/.colcon)')


_command_exit_handlers = []


def register_command_exit_handler(handler):
    """
    Register a callable to be invoked after the command finished.

    Repeated registrations of the same handler are ignored.

    :param handler: The callable
    """
    if handler not in _command_exit_handlers:
        _command_exit_handlers.append(handler)


def main(
    *, command_name='colcon', argv=None, verb_group_name=None,
    environment_variable_group_name=None, default_verb=None,
    default_log_base='log',
):
    """
    Execute the main logic of the command.

    The overview of the process:
    * Configure logging level based on an environment variable
    * Configure the configuration path
    * Create the argument parser

      * Document all environment variables
      * Decorate the parsers with additional functionality
      * Add the available verbs and their arguments

    * Configure logging level based on an arguments
    * Create an invocation specific log directory
    * Invoke the logic of the selected verb (if applicable)
    * Invoke registered exit handlers in reverse order

    :param str command_name: The name of the command invoked
    :param list argv: The list of arguments
    :param str verb_group_name: The extension point group name for verbs
    :param str environment_variable_group_name: The extension point group name
      for environment variables
    :param Type default_verb: The verb class type to invoke if no explicit
      verb was provided on the command line
    :param str default_log_base: The default logging base path if the command
      line argument isn't specified and the environment variable is not set
    :returns: The return code
    """
    try:
        return _main(
            command_name=command_name, argv=argv,
            verb_group_name=verb_group_name,
            environment_variable_group_name=environment_variable_group_name,
            default_verb=default_verb, default_log_base=default_log_base)
    except KeyboardInterrupt:
        return signal.SIGINT
    finally:
        # invoke all exit handlers
        while _command_exit_handlers:
            handler = _command_exit_handlers.pop()
            handler()


def _main(
    *, command_name, argv, verb_group_name, environment_variable_group_name,
    default_verb, default_log_base,
):
    # default log level, for searchability: COLCON_LOG_LEVEL
    colcon_logger.setLevel(logging.WARNING)
    set_logger_level_from_env(
        colcon_logger, f'{command_name}_LOG_LEVEL'.upper())
    colcon_logger.debug(
        'Command line arguments: {argv}'
        .format(argv=argv if argv is not None else sys.argv))

    # warn about any specified feature flags that are already implemented
    check_implemented_flags()

    # set default locations for config files, for searchability: COLCON_HOME
    set_default_config_path(
        path=(Path('~') / f'.{command_name}').expanduser(),
        env_var=f'{command_name}_HOME'.upper())

    parser = create_parser(environment_variable_group_name)

    if default_verb is not None:
        default_verb_instance = default_verb()
        parser.set_defaults(
            verb_parser=parser, verb_extension=default_verb_instance,
            main=default_verb_instance.main)
        add_parser_arguments(parser, default_verb_instance)

    verb_extensions = get_verb_extensions(group_name=verb_group_name)

    # add subparsers for all verb extensions but without arguments for now
    subparser = create_subparser(
        parser, command_name, verb_extensions, attribute='verb_name')
    verb_parsers = add_parsers_without_arguments(
        parser, subparser, verb_extensions, attribute='verb_name')

    with SuppressUsageOutput([parser] + list(verb_parsers.values())):
        known_args, _ = parser.parse_known_args(args=argv)

    # add the arguments for the requested verb
    if known_args.verb_name is not None:
        add_parser_arguments(known_args.verb_parser, known_args.verb_extension)

    args = parser.parse_args(args=argv)
    context = CommandContext(command_name=command_name, args=args)

    if args.log_level:
        # the value might be provided externally and needs to be checked again
        colcon_logger.setLevel(get_numeric_log_level(args.log_level))

    colcon_logger.debug(f'Parsed command line arguments: {args}')

    apply_output_style(args)

    # verify that one of the verbs set the 'main' attribute to be invoked later
    if getattr(args, 'main', None) is None:
        print(parser.format_usage())
        return 'Error: No verb provided'

    # set default locations for log files, for searchability: COLCON_LOG_PATH
    now = datetime.datetime.now()
    now_str = str(now)[:-7].replace(' ', '_').replace(':', '-')
    if args.verb_name is None:
        subdirectory = now_str
    else:
        subdirectory = f'{args.verb_name}_{now_str}'
    set_default_log_path(
        base_path=args.log_base,
        env_var=f'{command_name}_LOG_PATH'.upper(),
        subdirectory=subdirectory, default=default_log_base)

    # add a file handler writing all levels if logging isn't disabled
    log_path = get_log_path()
    if log_path is not None:
        create_log_path(args.verb_name)
        handler = add_file_handler(
            colcon_logger, log_path / 'logger_all.log')
        # write previous log messages to the file handler
        log_record = colcon_logger.makeRecord(
            colcon_logger.name, logging.DEBUG, __file__, 0,
            'Command line arguments: {argv}'
            .format(argv=argv if argv is not None else sys.argv),
            None, None)
        handler.handle(log_record)
        log_record = colcon_logger.makeRecord(
            colcon_logger.name, logging.DEBUG, __file__, 0,
            f'Parsed command line arguments: {args}', None, None)
        handler.handle(log_record)

    # set an environment variable named after the command (if not already set)
    # which allows subprocesses to identify they are invoked by this command
    if command_name.upper() not in os.environ:
        os.environ[command_name.upper()] = '1'

    # invoke verb
    return verb_main(context, colcon_logger)


def create_parser(environment_variables_group_name=None):
    """
    Create the argument parser.

    It uses a custom raw description help formatter to maintain newlines.
    It uses the available argument parser extensions to decorate the parsers.
    It enumerates the registered environment variables in the epilog of the
    help message.

    :param str environment_variables_group_name: The entry point group name for
      the environment variable extensions
    :returns: The argument parser
    """
    # workaround a limitation in argparse to accept arguments to options
    # which begin with a dash but are not options themselves
    # https://bugs.python.org/issue9334
    class CustomArgumentParser(argparse.ArgumentParser):

        def _parse_optional(self, arg_string):
            result = super()._parse_optional(arg_string)
            # Up until https://github.com/python/cpython/pull/114180 ,
            # _parse_optional() returned a 3-tuple when it couldn't classify
            # the option.  As of that PR (which is in Python 3.13, and
            # backported to Python 3.12), it returns a 4-tuple.  Check for
            # either here.
            # A similar regression later occurred when _parse_optional()
            # started returning a list of tuples, brought in by
            # https://github.com/python/cpython/pull/124631 .
            if result in (
                (None, arg_string, None),
                (None, arg_string, None, None),
                [(None, arg_string, None, None)],
            ):
                # in the case there the arg is classified as an unknown 'O'
                # override that and classify it as an 'A'
                return None
            return result

    epilog = get_environment_variables_epilog(environment_variables_group_name)
    if epilog:
        epilog += '\n\n'
    epilog += READTHEDOCS_MESSAGE

    # top level parser
    parser = CustomArgumentParser(
        prog=get_prog_name(),
        formatter_class=CustomFormatter,
        epilog=epilog)

    # enable introspecting and intercepting all command line arguments
    parser = decorate_argument_parser(parser)

    add_log_level_argument(parser)
    add_output_style_arguments(parser)

    return parser


def get_prog_name():
    """Get the prog name used for the argparse parser."""
    prog = sys.argv[0]
    basename = os.path.basename(prog)
    if basename == '__main__.py':
        # use the module name in case the script was invoked with python -m ...
        prog = os.path.basename(os.path.dirname(prog))
    else:
        default_prog = shutil.which(basename) or ''
        default_ext = os.path.splitext(default_prog)[1]
        real_prog = prog
        if (
            sys.platform == 'win32' and
            os.path.splitext(real_prog)[1] != default_ext
        ):
            # On Windows, setuptools entry points drop the file extension from
            # argv[0], but shutil.which does not. If the two don't end in the
            # same extension, try appending the shutil extension for a better
            # chance at matching.
            real_prog += default_ext
        try:
            # The os.path.samefile requires that both files exist on disk, but
            # has the advantage of working around symlinks, UNC-style paths,
            # DOS 8.3 path atoms, and path normalization.
            if os.path.samefile(default_prog, real_prog):
                # use basename only if it is on the PATH
                prog = basename
        except (FileNotFoundError, NotADirectoryError):
            pass
    return prog


class CustomFormatter(argparse.RawDescriptionHelpFormatter):
    """A custom formatter to maintain newlines."""

    def _split_lines(self, text, width):
        """Maintain newlines when the text starts with 'r|'."""
        lines = []
        for line in text.splitlines():
            if len(line) <= width:
                lines.append(line)
            else:
                lines += super()._split_lines(line, width)
        return lines


def get_environment_variables_epilog(group_name=None):
    """
    Get a message enumerating the registered environment variables.

    :param str group_name: The entry point group name for the environment
      variable extensions
    :returns: The message for the argument parser epilog
    :rtype: str
    """
    if group_name is None:
        group_name = 'colcon_core.environment_variable'
    # list environment variables with descriptions
    entry_points = load_extension_points(group_name)
    if not entry_points:
        return ''
    env_vars = {
        env_var.name: env_var.description for env_var in entry_points.values()}
    epilog_lines = []
    for name in sorted(env_vars.keys()):
        epilog_lines += _format_pair(name, env_vars[name], indent=2, align=24)
    return 'Environment variables:\n' + '\n'.join(epilog_lines)


READTHEDOCS_MESSAGE = 'For more help and usage tips, see ' \
    'https://colcon.readthedocs.io'


def add_log_level_argument(parser):
    """
    Add the argument for the log level to the parser.

    :param parser: The argument parser
    """
    parser.add_argument(
        '--log-base',
        help='The base path for all log directories (default: ./log, to '
             f'disable: {os.devnull})')
    parser.add_argument(
        '--log-level', action=LogLevelAction,
        help='Set log level for the console output, either by numeric or '
             'string value (default: warning)')


class LogLevelAction(argparse.Action):
    """Accept either positive integers or known log level names."""

    def __init__(self, option_strings, dest, *, nargs=None, **kwargs):
        """See :class:`argparse.Action.__init__`."""
        if nargs is not None:  # pragma: no cover
            raise ValueError('nargs not allowed')
        super().__init__(option_strings, dest, **kwargs)

    def __call__(self, parser, namespace, values, option_string=None):
        """See :class:`argparse.Action.__call__`."""
        try:
            value = get_numeric_log_level(values)
        except ValueError as e:  # noqa: F841
            parser.error(f'{option_string} has unsupported value, {e}')
        setattr(namespace, self.dest, value)


def add_subparsers(parser, cmd_name, verb_extensions, *, attribute):
    """
    Create argparse subparsers for each verb.

    The `cmd_name` is used for the title and description of the argparse
    `add_subparsers` function call.

    For each verb extension a subparser is created.
    If the extension has an `add_arguments` method it is being called with the
    subparser being passed as the only argument.

    :param parser: The argument parser for this command
    :param str cmd_name: The name of the command to which the verbs are being
      added
    :param dict verb_extensions: The verb extensions indexed by the verb name
    :param str attribute: The name of the attribute in the parsed args for the
      selected verb
    """
    subparser = create_subparser(
        parser, cmd_name, verb_extensions, attribute=attribute)
    verb_parsers = add_parsers_without_arguments(
        parser, subparser, verb_extensions, attribute=attribute)
    for name, verb_parser in verb_parsers.items():
        add_parser_arguments(
            verb_parser, verb_extensions[name])


def create_subparser(parser, cmd_name, verb_extensions, *, attribute):
    """
    Create the special action object to contain subparsers.

    The `cmd_name` is used for the title and description of the argparse
    `add_subparsers` function call.

    :param parser: The argument parser for this command
    :param str cmd_name: The name of the command to which the verbs are being
      added
    :param dict verb_extensions: The verb extensions indexed by the verb name
    :param str attribute: The name of the attribute in the parsed args for the
      selected verb
    :returns: The special action object
    """
    # list of available verbs with their descriptions
    verbs = []
    for name, extension in verb_extensions.items():
        verbs += _format_pair(
            name, get_first_line_doc(extension), indent=0, align=22)

    # add subparser with description of verb extensions
    subparser = parser.add_subparsers(
        title=f'{cmd_name} verbs',
        description='\n'.join(verbs) or None,
        dest=attribute,
        help=(
            f'call `{cmd_name} VERB -h` for specific help' if
            verbs else argparse.SUPPRESS),
    )
    return subparser


def add_parsers_without_arguments(
    parser, subparser, verb_extensions, *, attribute
):
    """
    Create subparsers for each verb but without any arguments.

    For each verb extension a subparser is created.

    :param parser: The argument parser for this command
    :param subparser: The special action object to add the subparsers to
    :param dict verb_extensions: The verb extensions indexed by the verb name
    :param str attribute: The name of the attribute in the extension containing
      the verb
    :returns: The subparsers indexed by the verb name
    :rtype: dict
    """
    verb_parsers = {}
    # add verb specific group and arguments
    for name, extension in verb_extensions.items():
        verb_parser = subparser.add_parser(
            getattr(extension, attribute.upper()),
            description=get_first_line_doc(extension) + '.',
            formatter_class=parser.formatter_class,
        )
        verb_parser.set_defaults(
            verb_parser=verb_parser, verb_extension=extension,
            main=extension.main)
        verb_parsers[name] = verb_parser
    return verb_parsers


def add_parser_arguments(verb_parser, extension):
    """
    Add the arguments and recursive subparsers to a specific verb parser.

    If the extension has an `add_arguments` method it is being called with the
    subparser being passed as the only argument.

    :param verb_parser: The verb parser
    :param extension: The verb extension
    """
    if hasattr(extension, 'add_arguments'):
        retval = extension.add_arguments(parser=verb_parser)
        if retval is not None:
            colcon_logger.error(
                f"Exception in verb extension '{extension.VERB_NAME}': "
                'add_arguments() should return None')


def _format_pair(key, value, *, indent, align):
    """
    Format a key value pair to align with others printed by argparse.

    :param str key: The key
    :param str value: The value
    :param int indent: The indentation level of the key
    :param int align: The indentation level of the value
    :returns: The indented and potentially wrapped line(s)
    :rtype: str
    """
    lines = []
    prefix = ' ' * indent + key
    # wrap between key and value if the gap between them is smaller than this
    minimum_gap = 2
    if len(prefix) + minimum_gap <= align:
        # key fits in the same line as the value
        lines.append(prefix + ' ' * (align - len(prefix)))
    else:
        # the key is too long, the value needs to start on the next line
        lines.append(prefix)
        lines.append(' ' * align)

    # wrap between key and value if the gap between them is smaller than this
    maximum_line_length = 80
    maximum_value_length = maximum_line_length - align
    while value:
        if len(value) > maximum_value_length:
            try:
                # look for a space within the desired length
                i = value.rindex(' ', 0, maximum_value_length)
            except ValueError:
                # no space to wrap, just append everything in a single line
                pass
            else:
                # append part to last line
                lines[-1] += value[0:i]
                value = value[i + 1:].lstrip()
                # start a new line with the spaces for the alignment
                lines.append(' ' * align)
                continue

        # either the remaining value is short enough or no space was found
        lines[-1] += value
        break
    return lines


class CommandContext:
    """The context providing the command name and the parsed arguments."""

    __slots__ = ('command_name', 'args')

    def __init__(self, *, command_name: str, args: object):  # noqa: D107
        self.command_name = command_name
        self.args = args


def verb_main(context, logger):
    """
    Invoke the logic of the selected verb.

    If the invocation is interrupted the returned error code is
    `signal.SIGINT`.
    If the verb raises a `RuntimeException` an error message is logged which
    contains the message of the exception.
    For any other exception a traceback is included in the logged error
    message.

    :param context: The :class:`CommandContext`
    :param logger: The logger
    :returns: The return code
    """
    # call the extension's main method
    try:
        # catch exceptions raised in verb extension
        rc = context.args.main(context=context)
    except RuntimeError as e:  # noqa: F841
        # only log the error message for "known" exceptions
        logger.error(f'{context.command_name} {context.args.verb_name}: {e}')
        return 1
    except Exception as e:  # noqa: F841
        # log the error message and a traceback for "unexpected" exceptions
        exc = traceback.format_exc()
        logger.error(
            f'{context.command_name} {context.args.verb_name}: {e}\n{exc}')
        return 1
    return rc
