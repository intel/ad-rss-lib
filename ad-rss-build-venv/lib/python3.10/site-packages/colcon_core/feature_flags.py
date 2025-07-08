# Copyright 2024 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.environment_variable import EnvironmentVariable
from colcon_core.logging import colcon_logger

logger = colcon_logger.getChild(__name__)

"""Environment variable to enable feature flags"""
FEATURE_FLAGS_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'COLCON_FEATURE_FLAGS',
    'Enable pre-production features and behaviors')

_REPORTED_USES = set()

IMPLEMENTED_FLAGS = set()


def check_implemented_flags():
    """Check for and warn about flags which have been implemented."""
    implemented = IMPLEMENTED_FLAGS.intersection(get_feature_flags())
    if implemented:
        logger.warning(
            'The following feature flags have been implemented and should no '
            'longer be specified in '
            f'{FEATURE_FLAGS_ENVIRONMENT_VARIABLE.name}: '
            f"{','.join(implemented)}")


def get_feature_flags():
    """
    Retrieve all enabled feature flags.

    :returns: List of enabled flags
    :rtype: list
    """
    return [
        flag for flag in (
            os.environ.get(FEATURE_FLAGS_ENVIRONMENT_VARIABLE.name) or ''
        ).split(os.pathsep) if flag
    ]


def is_feature_flag_set(flag):
    """
    Determine if a specific feature flag is enabled.

    Feature flags are case-sensitive and separated by the os-specific path
    separator character.

    :param str flag: Name of the flag to search for

    :returns: True if the flag is set
    :rtype: bool
    """
    if flag in IMPLEMENTED_FLAGS:
        return True
    elif flag in get_feature_flags():
        if flag not in _REPORTED_USES:
            if not _REPORTED_USES:
                logger.warning(
                    'One or more feature flags have been enabled using the '
                    f'{FEATURE_FLAGS_ENVIRONMENT_VARIABLE.name} environment '
                    'variable. These features may be unstable and may change '
                    'API or behavior at any time.')
            logger.warning(f'Enabling feature: {flag}')
            _REPORTED_USES.add(flag)
        return True
    return False
