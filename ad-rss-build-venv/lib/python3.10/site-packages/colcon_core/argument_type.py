# Copyright 2023 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

import functools
import os

from colcon_core.argument_default import is_default_value


def resolve_path(value, base=os.getcwd()):
    """
    Resolve a path argument from the current directory.

    If the given value is an argument default, the value is returned
    unmodified.

    :param value: The value to resolve to an absolute path
    :returns: The unmodified value, or resolved path
    """
    if value is None or is_default_value(value):
        return value
    res = os.path.abspath(os.path.join(base, str(value)))
    return res


def get_cwd_path_resolver():
    """
    Create a function which resolves paths from the current directory.

    If the current directory changes between calling this function and calling
    the function returned by this function, the directory at the time of this
    function call is used.

    :returns: A function which takes a single string and returns a string
    """
    return functools.partial(resolve_path, base=os.getcwd())
