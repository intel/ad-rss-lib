# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import OrderedDict
import traceback

from colcon_core.extension_point import load_extension_points
from colcon_core.logging import colcon_logger
from packaging.version import Version

logger = colcon_logger.getChild(__name__)


class SkipExtensionException(Exception):
    """
    Exception to signal that an extension should be skipped.

    It should be raised in the constructor of an extension.
    """

    pass


def instantiate_extensions(
    group_name, *, exclude_names=None, unique_instance=False
):
    """
    Instantiate all extensions within a group.

    :param str group_name: the name of the `entry_point` group
    :param exclude_names: a list of entry point names to exclude
    :param bool unique_instance: The flag if each extensions should be
      instantiated even when it has been created and cached before
    :returns: dict of extensions
    """
    extension_types = load_extension_points(
        group_name, excludes=exclude_names)
    extension_instances = {}
    for extension_name, extension_class in extension_types.items():
        extension_instance = _instantiate_extension(
            group_name, extension_name, extension_class,
            unique_instance=unique_instance)
        if extension_instance is None:
            continue
        extension_instances[extension_name] = extension_instance
    return extension_instances


_extension_instances = {}


def _instantiate_extension(
    group_name, extension_name, extension_class, *, unique_instance=False
):
    global _extension_instances
    if not unique_instance and extension_class in _extension_instances:
        return _extension_instances[extension_class]

    try:
        extension_instance = extension_class()
        assert isinstance(extension_instance, object), \
            'invocation should return an object'
    except SkipExtensionException as e:  # noqa: F841
        logger.info(
            f"Skipping extension '{group_name}.{extension_name}': {e}")
        extension_instance = None
    except Exception as e:  # noqa: F841
        # catch exceptions raised in extension constructor
        exc = traceback.format_exc()
        logger.error(
            'Exception instantiating extension '
            f"'{group_name}.{extension_name}': {e}\n{exc}")
        extension_instance = None
    if not unique_instance:
        _extension_instances[extension_class] = extension_instance
    return extension_instance


def order_extensions_by_name(extensions):
    """
    Order the extensions based on the entry point name.

    :param extensions: a dict mapping the entry point name to the
      extension instance
    :returns: ordered dict mapping the entry point name to the extension
      instance
    """
    return OrderedDict(
        sorted(extensions.items(), key=lambda pair: pair[0]))


def order_extensions_by_priority(extensions):
    """
    Order the extensions based on their `PRIORITY` attribute.

    :param extensions: a dict mapping the entry point name to the
      extension instance
    :returns: ordered dict mapping the entry point name to the extension
      instance
    """
    # use negative priority and inverted reverse flag
    # to get highest priorities first and
    # extensions withing the same priority group in alphabetical order
    return OrderedDict(
        sorted(
            extensions.items(),
            key=lambda pair: (-pair[1].PRIORITY, pair[0])))


def order_extensions_grouped_by_priority(extensions):
    """
    Group the extensions based on their `PRIORITY` attribute.

    Each priority group is ordered by the entry point name.

    :param extensions: a dict mapping the entry point name to the
      extension instance
    :returns: ordered dict mapping the priority to an ordered dict which maps
      the entry point name to the extension instance
    """
    # use negative priority and inverted reverse flag
    # to get highest priorities first and
    # extensions withing the same priority group in alphabetical order
    ordered_extensions = OrderedDict(
        sorted(
            extensions.items(),
            key=lambda pair: (-pair[1].PRIORITY, pair[0])))
    grouped_extensions = OrderedDict()
    for name, extension in ordered_extensions.items():
        priority = extension.PRIORITY
        if priority not in grouped_extensions:
            grouped_extensions[priority] = OrderedDict()
        grouped_extensions[priority][name] = extension
    return grouped_extensions


def get_first_line_doc(any_type):
    """
    Get the first line of the docstring of an object.

    Leading spaces are ignored and a trailing dot is being removed.

    :param any_type: the object
    :returns: the first line of the `__doc__` attribute of the object,
      otherwise an empty string
    :rtype: str
    """
    if not any_type.__doc__:
        return ''
    lines = list(filter(
        lambda line: line.lstrip(), any_type.__doc__.splitlines()))
    if not lines:
        return ''
    line = lines[0].lstrip()
    if line.endswith('.'):
        line = line[:-1]
    return line


def satisfies_version(version, caret_range):
    """
    Check if a version is within a caret range.

    :param str version: the version number to check (e.g. `1.2.3`)
    :param str caret_range: the caret range (e.g. `^1.2`)
    :raises RuntimeError: if the version doesn't match the caret range
    """
    assert caret_range.startswith('^'), 'Only supports caret ranges'
    extension_point_version = Version(version)
    extension_version = Version(caret_range[1:])
    next_extension_version = _get_upper_bound_caret_version(
        extension_version)

    if extension_point_version < extension_version:
        raise RuntimeError(
            'Extension point is too old (%s), the extension requires '
            "'%s'" % (extension_point_version, extension_version))

    if extension_point_version >= next_extension_version:
        raise RuntimeError(
            'Extension point is newer (%s), than what the extension '
            "supports '%s'" % (extension_point_version, extension_version))


def _get_upper_bound_caret_version(version):
    parts = version.base_version.split('.')
    if len(parts) < 2:
        parts += [0] * (2 - len(parts))
    major, minor = [int(p) for p in parts[:2]]
    if major > 0:
        major += 1
        minor = 0
    else:
        minor += 1
    return Version('%d.%d.0' % (major, minor))
