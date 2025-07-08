# Copyright 2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.prefix_path import PrefixPathExtensionPoint

logger = colcon_logger.getChild(__name__)

_get_colcon_prefix_path_warnings = set()


class ColconPrefixPath(PrefixPathExtensionPoint):
    """Prefix path defined in the `COLCON_PREFIX_PATH` environment variable."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PrefixPathExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def extend_prefix_path(self, paths):  # noqa: D102
        global _get_colcon_prefix_path_warnings
        colcon_prefix_path = os.environ.get('COLCON_PREFIX_PATH', '')
        for path in colcon_prefix_path.split(os.pathsep):
            if not path:
                continue
            if not os.path.exists(path):
                if path not in _get_colcon_prefix_path_warnings:
                    logger.warning(
                        f"The path '{path}' in the environment variable "
                        "COLCON_PREFIX_PATH doesn't exist")
                _get_colcon_prefix_path_warnings.add(path)
                continue
            paths.append(path)
