# Copyright 2016-2018 Dirk Thomas
# Copyright 2023 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

from collections import defaultdict
from itertools import chain
import os
import sys
import traceback
import warnings

try:
    from importlib.metadata import distributions
    from importlib.metadata import EntryPoint
    from importlib.metadata import entry_points
except ImportError:
    # TODO: Drop this with Python 3.7 support
    from importlib_metadata import distributions
    from importlib_metadata import EntryPoint
    from importlib_metadata import entry_points

from colcon_core.environment_variable import EnvironmentVariable
from colcon_core.logging import colcon_logger

_EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_EXTENSION_BLOCKLIST',
    'Block extensions which should not be used')

"""Environment variable to block extensions"""
EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE = \
    _EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE

logger = colcon_logger.getChild(__name__)

"""
The group name for entry points identifying colcon extension points.

While all entry points in this package start with `colcon_core.` other
distributions might define entry points with a different prefix.
Those need to be declared using this group name.
"""
EXTENSION_POINT_GROUP_NAME = 'colcon_core.extension_point'

_ENTRY_POINTS_CACHE = []


def _get_unique_distributions():
    seen = set()
    for dist in distributions():
        dist_name = dist.metadata['Name']
        if dist_name not in seen:
            seen.add(dist_name)
            yield dist


def _get_entry_points():
    for dist in _get_unique_distributions():
        for entry_point in dist.entry_points:
            # Modern EntryPoint instances should already have this set
            if not hasattr(entry_point, 'dist'):
                entry_point.dist = dist
            yield entry_point


def _get_cached_entry_points():
    if not _ENTRY_POINTS_CACHE:
        if sys.version_info >= (3, 10):
            # We prefer using importlib.metadata.entry_points because it
            # has an internal optimization which allows us to load the entry
            # points without reading the individual PKG-INFO files, while
            # still visiting each unique distribution only once.
            all_entry_points = entry_points()
            if isinstance(all_entry_points, dict):
                # Prior to Python 3.12, entry_points returned a (deprecated)
                # dict. Unfortunately, the "future-proof" recommended
                # pattern is to add filter parameters, but we actually
                # want to cache everything so that doesn't work here.
                with warnings.catch_warnings():
                    warnings.filterwarnings(
                        'ignore',
                        'SelectableGroups dict interface is deprecated',
                        DeprecationWarning,
                        module=__name__)
                    all_entry_points = chain.from_iterable(
                        all_entry_points.values())
            _ENTRY_POINTS_CACHE.extend(all_entry_points)
        else:
            # If we don't have Python 3.10, we must read each PKG-INFO to
            # get the name of the distribution so that we can skip the
            # "shadowed" distributions properly.
            _ENTRY_POINTS_CACHE.extend(_get_entry_points())
    return _ENTRY_POINTS_CACHE


def clear_entry_point_cache():
    """Purge the entry point cache."""
    _ENTRY_POINTS_CACHE.clear()


def get_all_extension_points():
    """
    Get all extension points related to `colcon` and any of its extensions.

    :returns: mapping of extension point groups to dictionaries which map
      extension point names to a tuple of extension point values, dist name,
      and dist version
    :rtype: dict
    """
    global EXTENSION_POINT_GROUP_NAME
    colcon_extension_points = get_extension_points(EXTENSION_POINT_GROUP_NAME)
    colcon_extension_points.setdefault(EXTENSION_POINT_GROUP_NAME, None)

    extension_points = defaultdict(dict)
    for entry_point in _get_cached_entry_points():
        if entry_point.group not in colcon_extension_points:
            continue

        dist_metadata = entry_point.dist.metadata
        ep_tuple = (
            entry_point.value,
            dist_metadata['Name'], dist_metadata['Version'],
        )
        if entry_point.name in extension_points[entry_point.group]:
            previous = extension_points[entry_point.group][entry_point.name]
            logger.error(
                f"Entry point '{entry_point.group}.{entry_point.name}' is "
                f"declared multiple times, '{ep_tuple}' "
                f"overwriting '{previous}'")
        extension_points[entry_point.group][entry_point.name] = ep_tuple
    return extension_points


def get_extension_points(group):
    """
    Get the extension points for a specific group.

    :param str group: the name of the extension point group
    :returns: mapping of extension point names to extension point values
    :rtype: dict
    """
    extension_points = {}
    for entry_point in _get_cached_entry_points():
        if entry_point.group != group:
            continue
        if entry_point.name in extension_points:
            previous_entry_point = extension_points[entry_point.name]
            logger.error(
                f"Entry point '{group}.{entry_point.name}' is declared "
                f"multiple times, '{entry_point.value}' overwriting "
                f"'{previous_entry_point}'")
        extension_points[entry_point.name] = entry_point.value
    return extension_points


def load_extension_points(group, *, excludes=None):
    """
    Load the extension points for a specific group.

    :param str group: the name of the extension point group
    :param iterable excludes: the names of the extension points to exclude
    :returns: mapping of entry point names to loaded entry points
    :rtype: dict
    """
    extension_types = {}
    for name, value in get_extension_points(group).items():
        if excludes and name in excludes:
            continue
        try:
            extension_type = load_extension_point(name, value, group)
        except RuntimeError:
            continue
        except Exception as e:  # noqa: F841
            # catch exceptions raised when loading entry point
            exc = traceback.format_exc()
            logger.error(
                'Exception loading extension '
                f"'{group}.{name}': {e}\n{exc}")
            # skip failing entry point, continue with next one
            continue
        extension_types[name] = extension_type
    return extension_types


def load_extension_point(name, value, group):
    """
    Load the extension point.

    :param name: the name of the extension entry point.
    :param value: the value of the extension entry point.
    :param group: the name of the group the extension entry point is a part of.
    :returns: the loaded entry point
    :raises RuntimeError: if either the group name or the entry point name is
      listed in the environment variable
      :const:`EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE`
    """
    global EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE
    blocklist = os.environ.get(
        EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE.name, None)
    if blocklist:
        blocklist = blocklist.split(os.pathsep)
        if group in blocklist:
            raise RuntimeError(
                'The entry point group name is listed in the environment '
                f"variable '{EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE.name}'")
        full_name = f'{group}.{name}'
        if full_name in blocklist:
            raise RuntimeError(
                'The entry point name is listed in the environment variable '
                f"'{EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE.name}'")
    return EntryPoint(name, value, group).load()


def override_blocklist_variable(variable):
    """
    Override the blocklist environment variable.

    :param EnvironmentVariable variable: The new blocklist environment
      variable, or None to reset to default.
    """
    if variable is None:
        variable = _EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE
    global EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE
    EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE = variable
