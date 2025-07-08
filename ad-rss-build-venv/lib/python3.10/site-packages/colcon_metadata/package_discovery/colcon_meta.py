# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
from pathlib import Path

from colcon_core.logging import colcon_logger
from colcon_core.package_discovery import PackageDiscoveryExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_metadata.metadata import get_metadata_files
from colcon_metadata.metadata import get_metadata_path
from colcon_metadata.metadata import merge_metadata
from colcon_metadata.metadata import metadata_by_name
from colcon_metadata.metadata import metadata_by_path
import yaml

logger = colcon_logger.getChild(__name__)


class ColconMetadataDiscovery(PackageDiscoveryExtensionPoint):
    """Provide meta information from `.meta` files."""

    # the priority needs to be higher than other extensions
    # in order for metadata to be added before those are invoked
    PRIORITY = 200

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageDiscoveryExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser, with_default):  # noqa: D102
        parser.add_argument(
            '--ignore-user-meta',
            action='store_true',
            help='Ignore `*.meta` files in the user config directory `%s`' %
                 get_metadata_path())
        parser.add_argument(
            '--metas',
            nargs='*',
            metavar='PATH',
            default=['./colcon.meta'],
            help='The directories containing a `colcon.meta` file or paths to '
                 'arbitrary files containing the same meta information '
                 '(default: ./colcon.meta)')

    def has_parameters(self, *, args):  # noqa: D102
        if not args.ignore_user_meta:
            for path in get_metadata_files():
                self._add(Path(path))

        for meta in args.metas or []:
            path = Path(meta)
            if not path.exists():
                continue
            if path.is_dir():
                path_file = path / 'colcon.meta'
                if not path_file.exists():
                    continue
                path = path_file
            self._add(path)

        # doesn't implement the `discover()` method
        # since `has_parameters()` always returns False
        return False

    def _add(self, meta_path):
        content = meta_path.read_text()
        try:
            data = yaml.safe_load(content)
        except Exception as e:
            logger.warning(
                "Skipping metadata file '%s' since it failed to parse: %s" %
                (meta_path.absolute(), e))
            return

        if data is None:
            logger.info(
                "Empty metadata file '%s'" % meta_path.absolute())
            return
        if not isinstance(data, dict):
            logger.warning(
                "Skipping metadata file '%s' since it doesn't contain a dict" %
                meta_path.absolute())
            return

        logger.info(
            "Using configuration from '%s'" % meta_path.absolute())
        if 'names' in data and isinstance(data['names'], dict):
            for name, v in data['names'].items():
                merge_metadata(metadata_by_name[name], v, meta_path.absolute())
        if 'paths' in data and isinstance(data['paths'], dict):
            for path, value in data['paths'].items():
                path = meta_path.parent / path
                merge_metadata(
                    metadata_by_path[os.path.realpath(str(path))], value,
                    meta_path.absolute())
