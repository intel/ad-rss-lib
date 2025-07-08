# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import defaultdict
import os
import sys
import traceback
import warnings

from colcon_core.environment_variable import EnvironmentVariable
from colcon_core.logging import colcon_logger
from pkg_resources import iter_entry_points
from pkg_resources import WorkingSet

"""Environment variable to block extensions"""
EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_EXTENSION_BLOCKLIST',
    'Block extensions which should not be used')

# See colcon/colcon-core#562
warnings.warn(
    "'colcon_core.entry_point' has been deprecated, "
    "use 'colcon_core.extension_point' instead",
    stacklevel=2)

if sys.version_info[:2] >= (3, 7):
    def __getattr__(name):
        global EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE
        if name == 'EXTENSION_BLACKLIST_ENVIRONMENT_VARIABLE':
            warnings.warn(
                "'colcon_core.entry_point.EXTENSION_BLACKLIST_ENVIRONMENT_"
                "VARIABLE' has been deprecated, use 'colcon_core.entry_point."
                "EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE' instead",
                stacklevel=2)
            return EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE
        raise AttributeError(
            "module '%s' has no attribute '%s'" % (__name__, name))
else:
    # for backward compatibility but without a deprecation warning on usage
    EXTENSION_BLACKLIST_ENVIRONMENT_VARIABLE = \
        EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE

logger = colcon_logger.getChild(__name__)


"""
The group name for entry points identifying colcon extension points.

While all entry points in this package start with `colcon_core.` other
distributions might define entry points with a different prefix.
Those need to be declared using this group name.
"""
EXTENSION_POINT_GROUP_NAME = 'colcon_core.extension_point'


def get_all_entry_points():
    """
    Get all entry points related to `colcon` and any of its extensions.

    :returns: mapping of entry point names to :class:`pkg_resources.EntryPoint`
      instances
    :rtype: dict
    """
    global EXTENSION_POINT_GROUP_NAME
    colcon_extension_points = get_entry_points(EXTENSION_POINT_GROUP_NAME)

    entry_points = defaultdict(dict)
    working_set = WorkingSet()
    for dist in sorted(working_set):
        entry_map = dist.get_entry_map()
        for group_name in entry_map.keys():
            # skip groups which are not registered as extension points
            if group_name not in colcon_extension_points:
                continue

            group = entry_map[group_name]
            for entry_point_name, entry_point in group.items():
                entry_point.group_name = group_name
                if entry_point_name in entry_points[group_name]:
                    previous = entry_points[group_name][entry_point_name]
                    logger.error(
                        f"Entry point '{group_name}.{entry_point_name}' is "
                        f"declared multiple times, '{entry_point}' "
                        f"overwriting '{previous}'")
                entry_points[group_name][entry_point_name] = \
                    (dist, entry_point)
    return entry_points


def get_entry_points(group_name):
    """
    Get the entry points for a specific group.

    :param str group_name: the name of the `entry_point` group
    :returns: mapping of group names to dictionaries which map entry point
      names to :class:`pkg_resources.EntryPoint` instances
    :rtype: dict
    """
    entry_points = {}
    for entry_point in iter_entry_points(group=group_name):
        entry_point.group_name = group_name
        if entry_point.name in entry_points:
            previous_entry_point = entry_points[entry_point.name]
            logger.error(
                f"Entry point '{group_name}.{entry_point.name}' is declared "
                f"multiple times, '{entry_point}' overwriting "
                f"'{previous_entry_point}'")
        entry_points[entry_point.name] = entry_point
    return entry_points


def load_entry_points(group_name, *, exclude_names=None):
    """
    Load the entry points for a specific group.

    :param str group_name: the name of the `entry_point` group
    :param iterable exclude_names: the names of the entry points to exclude
    :returns: mapping of entry point names to loaded entry points
    :rtype: dict
    """
    extension_types = {}
    for entry_point in get_entry_points(group_name).values():
        if exclude_names and entry_point.name in exclude_names:
            continue
        try:
            extension_type = load_entry_point(entry_point)
        except RuntimeError:
            continue
        except Exception as e:  # noqa: F841
            # catch exceptions raised when loading entry point
            exc = traceback.format_exc()
            logger.error(
                'Exception loading extension '
                f"'{group_name}.{entry_point.name}': {e}\n{exc}")
            # skip failing entry point, continue with next one
            continue
        extension_types[entry_point.name] = extension_type
    return extension_types


def load_entry_point(entry_point):
    """
    Load the entry point.

    :param entry_point: the :class:`pkg_resources.EntryPoint` instance
    :returns: the loaded entry point
    :raises RuntimeError: if either the group name or the entry point name is
      listed in the environment variable
      :const:`EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE`
    """
    global EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE
    blocklist = os.environ.get(
        EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE.name, None)
    if blocklist is None:
        blocklist = os.environ.get('COLCON_EXTENSION_BLACKLIST', None)
        if blocklist is not None:
            warnings.warn(
                "The environment variable 'COLCON_EXTENSION_BLACKLIST' has "
                "been deprecated, use 'COLCON_EXTENSION_BLOCKLIST' instead")
    if blocklist:
        blocklist = blocklist.split(os.pathsep)
        env_var_name = EXTENSION_BLOCKLIST_ENVIRONMENT_VARIABLE.name
        if entry_point.group_name in blocklist:
            raise RuntimeError(
                'The entry point group name is listed in the environment '
                f"variable '{env_var_name}'")
        full_name = f'{entry_point.group_name}.{entry_point.name}'
        if full_name in blocklist:
            raise RuntimeError(
                'The entry point name is listed in the environment variable '
                f"'{env_var_name}'")
    return entry_point.load()
