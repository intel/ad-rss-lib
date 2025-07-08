# Copyright 2016-2020 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.argument_default import is_default_value
from colcon_core.argument_default import wrap_default_value
from colcon_core.package_discovery import expand_dir_wildcards
from colcon_core.package_discovery import logger
from colcon_core.package_discovery import PackageDiscoveryExtensionPoint
from colcon_core.package_identification import identify
from colcon_core.package_identification import IgnoreLocationException
from colcon_core.plugin_system import satisfies_version


class RecursiveDiscoveryExtension(PackageDiscoveryExtensionPoint):
    """Crawl paths recursively for packages."""

    # the priority needs to be higher than the path based discovery extension
    # so that when no arguments are provided this extension is the default
    PRIORITY = 110

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageDiscoveryExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def has_default(self):  # noqa: D102
        return True

    def add_arguments(self, *, parser, with_default):  # noqa: D102
        parser.add_argument(
            '--base-paths',
            nargs='*',
            metavar='PATH',
            default=wrap_default_value(['.']) if with_default else None,
            help='The base paths to recursively crawl for packages' +
                 (' (default: .)' if with_default else ''))

    def has_parameters(self, *, args):  # noqa: D102
        return not is_default_value(args.base_paths) and \
            bool(args.base_paths)

    def discover(self, *, args, identification_extensions):  # noqa: D102
        if args.base_paths is None:
            return set()

        # manually check for wildcards and expand them in case
        # the values were not provided through the shell
        expand_dir_wildcards(args.base_paths)

        logger.info(
            'Crawling recursively for packages in %s',
            ', '.join([
                "'%s'" % os.path.abspath(p) for p in args.base_paths
            ]))

        visited_paths = set()
        descs = set()
        for base_path in args.base_paths:
            for dirpath, dirnames, filenames in os.walk(
                base_path, followlinks=True,
            ):
                real_dirpath = os.path.realpath(dirpath)
                # avoid recrawling same paths
                if real_dirpath in visited_paths:
                    del dirnames[:]
                    continue
                visited_paths.add(real_dirpath)

                try:
                    result = identify(identification_extensions, dirpath)
                except IgnoreLocationException:
                    del dirnames[:]
                    continue
                if result:
                    descs.add(result)
                    del dirnames[:]
                    continue

                # skip subdirectories starting with a dot
                dirnames[:] = filter(lambda d: not d.startswith('.'), dirnames)
                dirnames.sort()
        return descs
