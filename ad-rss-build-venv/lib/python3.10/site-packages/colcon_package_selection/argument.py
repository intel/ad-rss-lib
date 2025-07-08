# Copyright 2020 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import argparse
import re


def argument_package_name(value):
    """
    Check if an argument is a valid package name.

    Used as a ``type`` callback in ``add_argument()`` calls.
    Package names starting with a dash must be prefixed with a space to avoid
    collisions with command line arguments.

    :param str value: The command line argument
    :returns: The package name
    :raises argparse.ArgumentTypeError: if the value starts with a dash
    """
    if value.startswith('-'):
        raise argparse.ArgumentTypeError('unrecognized argument: ' + value)
    return value.lstrip()


def argument_valid_regex(value):
    """
    Check if an argument is a valid regular expression.

    Used as a ``type`` callback in ``add_argument()`` calls.

    :param str value: The command line argument
    :returns: The regular expression object
    :raises argparse.ArgumentTypeError: if the value is not a valid regex
    """
    try:
        return re.compile(value)
    except re.error as e:  # noqa: F841
        raise argparse.ArgumentTypeError(
            'must be a valid regex: {e}'.format_map(locals()))
