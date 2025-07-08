# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.plugin_system import satisfies_version
from colcon_metadata.metadata.repository import get_repositories
from colcon_metadata.metadata.repository import set_repositories
from colcon_metadata.subverb import MetadataSubverbExtensionPoint


class RemoveMetadataSubverb(MetadataSubverbExtensionPoint):
    """Remove a repository from the list of indexes."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            MetadataSubverbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        argument = parser.add_argument(
            'name',
            help='The unique name identifying the repository')
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
        if context.args.name not in repos.keys():
            return "A repository with the name '{context.args.name}' " \
                "doesn't exist".format_map(locals())
        del repos[context.args.name]
        set_repositories(repos)
