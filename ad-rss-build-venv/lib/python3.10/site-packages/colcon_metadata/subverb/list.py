# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.plugin_system import satisfies_version
from colcon_metadata.metadata.repository import get_repositories
from colcon_metadata.metadata.repository import get_repository_metadata_files
from colcon_metadata.subverb import MetadataSubverbExtensionPoint


class ListMetadataSubverb(MetadataSubverbExtensionPoint):
    """List all repositories and their metadata."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            MetadataSubverbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        argument = parser.add_argument(
            'name',
            nargs='?',
            help='Only list the information for a specific repository')
        try:
            from argcomplete.completers import ChoicesCompleter
        except ImportError:
            pass
        else:
            repos = get_repositories()
            argument.completer = \
                ChoicesCompleter(repos.keys())

    def main(self, *, context):  # noqa: D102
        repos = get_repositories()
        if context.args.name and context.args.name not in repos.keys():
            return "Passed repository name '{context.args.name}' is unknown" \
                .format_map(locals())

        for name in sorted(repos.keys()):
            if context.args.name and context.args.name != name:
                continue
            url = repos[name]
            print('{name}: {url}'.format_map(locals()))
            metadata_files = get_repository_metadata_files(
                repository_name=name)
            for path in sorted(metadata_files):
                print('- {path}'.format_map(locals()))
