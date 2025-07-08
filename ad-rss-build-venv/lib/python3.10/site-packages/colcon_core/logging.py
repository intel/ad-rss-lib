# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import logging
import os

logging.basicConfig()
colcon_logger = logging.getLogger('colcon')

try:
    import coloredlogs
except ImportError:  # pragma: no cover
    pass
else:
    log_format = os.environ.get(
        'COLOREDLOGS_LOG_FORMAT', '%(name)s %(levelname)s %(message)s')
    coloredlogs.install(level=1, logger=colcon_logger, fmt=log_format)


def set_logger_level_from_env(logger, env_name):
    """
    Set the log level based on an environment variable.

    A warning message is logged if the environment variable has an unsupported
    value.

    :param logger: The logger
    :param str env_var: The name of the environment variable
    """
    log_level = os.environ.get(env_name)
    if log_level:
        try:
            numeric_log_level = get_numeric_log_level(log_level)
        except ValueError as e:  # noqa: F841
            logger.warning(
                f"environment variable '{env_name}' has unsupported value "
                f"'{log_level}', {e}")
        else:
            logger.setLevel(numeric_log_level)


def get_numeric_log_level(value):
    """
    Convert a log level into a numeric value.

    :param value: The log level can be either a string (case insensitive) or a
      positive number
    :returns: The numeric value
    :rtype: int
    :raises ValueError: if the log level string is not one of the valid names
      (`CRITICAL`, `ERROR`, `WARNING`, `INFO`, `DEBUG`) or if the numeric value
      is zero or negative
    """
    try:
        value = int(value)
    except ValueError:
        string_value = value.upper()
        value = logging.getLevelName(string_value)
        if value == 'Level ' + string_value:
            raise ValueError(
                'valid names are: CRITICAL, ERROR, WARNING, INFO, DEBUG '
                '(case-insensitive)')
    else:
        if value < 1:
            raise ValueError('numeric log levels must be positive')
    return value


def add_file_handler(logger, path):
    """
    Add a file handler to the logger which logs messages of all levels.

    :param logger: The logger to add the file handler to
    :param path: The path of the generated log file
    :returns: The added file handler
    :rtype: logging.FileHandler
    """
    class Filter(logging.Filter):

        def __init__(self, ignored_name):
            super().__init__()
            self._ignored_name = ignored_name

        def filter(self, record):  # noqa: A003
            if (
                record.name == self._ignored_name or
                record.name.startswith(self._ignored_name)
            ):
                return 0
            return super().filter(record)

    # get stream handler formatter from root logger to reuse for file handler
    formatter = None
    for handler in logging.getLogger().handlers:
        if isinstance(handler, logging.StreamHandler):
            formatter = handler.formatter
            # filter colcon specific log messages from default stream handler
            handler.addFilter(Filter(logger.name))

    # add a stream handler replacing the one filtered on the root logger
    handler = logging.StreamHandler()
    if formatter:
        # use same formatter as for stream handler
        handler.setFormatter(formatter)
    handler.setLevel(logger.getEffectiveLevel())
    logger.addHandler(handler)

    # add a file handler writing all log levels
    handler = logging.FileHandler(str(path))
    if formatter:
        # if the format string doesn't use the time information
        # prepend the relative time to every message
        if not formatter.usesTime():
            format_message = formatter.formatMessage

            def format_message_with_relative_time(record):
                nonlocal format_message
                return '[%.3fs] ' % (record.created - logging._startTime) + \
                    format_message(record)
            formatter.formatMessage = format_message_with_relative_time
        # use same formatter as for stream handler
        handler.setFormatter(formatter)
    handler.setLevel(1)
    logger.addHandler(handler)

    # change the logger to handle all levels
    logger.setLevel(1)

    return handler


def get_effective_console_level(logger):
    """
    Determine the effective log level of to the console.

    On a typical logger, this is the same as getEffectiveLevel(). After a call
    to add_file_handler, this will continue to return the same level though
    getEffectiveLevel() will now always return ``1``.

    :param logger: The logger to inspect
    :returns: the log level
    """
    for handler in logger.handlers:
        if isinstance(handler, logging.StreamHandler):
            return handler.level
    return logger.getEffectiveLevel()
