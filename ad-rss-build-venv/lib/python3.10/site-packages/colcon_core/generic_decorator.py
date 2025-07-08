# Copyright 2023 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0


class GenericDecorator:
    """A generic class decorator."""

    def __init__(self, decoree, **kwargs):
        """
        Create a new decorated class instance.

        :param decoree: The instance to decorate
        :param **kwargs: The keyword arguments are set as attributes on this
          instance
        """
        assert '_decoree' not in kwargs
        kwargs['_decoree'] = decoree
        for k, v in kwargs.items():
            self.__dict__[k] = v

    def __getattr__(self, name):
        """
        Get an attribute from this decorator if it exists or the decoree.

        :param str name: The name of the attribute
        :returns: The attribute value
        :raises AttributeError: if the attribute doesn't exist in either of the
          two instances
        """
        if '_decoree' not in self.__dict__:
            raise AttributeError(name)
        return getattr(self.__dict__['_decoree'], name)

    def __setattr__(self, name, value):
        """
        Set an attribute value on this decorator if it exists or the decoree.

        :param str name: The name of the attribute
        :param value: The attribute value
        """
        assert name != '_decoree'
        # overwrite existing attribute
        if name in self.__dict__:
            self.__dict__[name] = value
            return
        if '_decoree' not in self.__dict__:
            self.__dict__[name] = value
            return
        # set attribute on decoree
        setattr(self.__dict__['_decoree'], name, value)
