# Copyright 2020 Dirk Thomas
# Licensed under the Apache License, Version 2.0


class BooleanDefaultValue:
    """Boolean value distinguishable from explicitly passed arguments."""

    def __init__(self, value):  # noqa: D107
        assert isinstance(value, bool)
        self._value = value

    def __bool__(self):  # noqa: D105
        return self._value


class ListDefaultValue(list):
    """List value distinguishable from explicitly passed arguments."""

    pass


class StringDefaultValue(str):
    """String value distinguishable from explicitly passed arguments."""

    pass


_types = {
    bool: BooleanDefaultValue,
    list: ListDefaultValue,
    str: StringDefaultValue,
}


def wrap_default_value(value):
    """
    Wrap a default value in a custom type.

    The custom type makes the default value distinguishable from explicitly
    passed arguments independent of the value.
    The custom types try to match the behavior of the original type as much as
    possible.

    :param value: The default value to be wrapped
    :returns: The wrapped value if the value type is supported, otherwise the
      passed value
    """
    global _types
    if is_default_value(value):
        raise ValueError(
            'the passed value is already wrapped: ' + str(type(value)))
    if type(value) in _types:
        return _types[type(value)](value)
    return value


def unwrap_default_value(value):
    """
    Unwrap a default value to the native type.

    :param value: The wrapped default value
    :returns: The unwrapped value
    :raises ValueError: if the value is not a wrapped default value
    """
    global _types
    if not is_default_value(value):
        raise ValueError(
            'the passed value is not a wrapped default value: ' +
            str(type(value)))
    type_ = [k for k, v in _types.items() if v == type(value)][0]
    return type_(value)


def is_default_value(value):
    """Check if a value is a default value."""
    global _types
    return isinstance(value, tuple(_types.values()))
