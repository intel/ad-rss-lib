# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
import sys

from colcon_core.plugin_system import satisfies_version
from colcon_metadata.metadata import get_metadata_files
from colcon_metadata.metadata import get_metadata_path
from colcon_metadata.metadata.repository import get_repositories
from colcon_metadata.metadata.repository import get_repository_metadata_files
from colcon_metadata.metadata.repository import load_url
from colcon_metadata.subverb import MetadataSubverbExtensionPoint
import yaml


class UpdateMetadataSubverb(MetadataSubverbExtensionPoint):
    """Update the metadata from the repository indexes."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            MetadataSubverbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.description += '\n\n' \
            'For each repository all metadata files are being fetched. ' \
            'The status if each metadata file is indicated by the following ' \
            'symbols:\n' \
            '  + added new metadata file\n' \
            '  * updated the existing metadata file\n' \
            '  . existing metadata file was already the same\n' \
            '  - renamed obsolete metadata file'
        argument = parser.add_argument(
            'name',
            nargs='?',
            help='Only update the metadata from a specific repository')
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

        # IDEA fetch all resources in parallel
        rc = 0
        for name in sorted(repos.keys()):
            if context.args.name and context.args.name != name:
                continue

            # fetch the repository index
            index_url = repos[name]
            print('fetching {name}: {index_url} ...'.format_map(locals()))
            try:
                content = load_url(index_url)
            except Exception as e:
                print(' ', str(e), file=sys.stderr)
                rc = 1
                continue

            # parse the repository index
            try:
                data = yaml.safe_load(content)
            except Exception as e:
                print(' ', str(e), file=sys.stderr)
                rc = 1
                continue
            if not isinstance(data, dict) or 'metadata' not in data.keys():
                print('  The repository index should be a dictionary with a '
                      "'metadata' key, but it is: {data}".format_map(locals()))
                rc = 1
                continue

            # get existing metadata files to remove obsolete ones later
            metadata_files_before = get_repository_metadata_files(
                repository_name=name)

            # fetch all metadata files referenced in the index
            metadata_urls = data['metadata']
            metadata_basenames = set()
            for metadata_url in metadata_urls:
                # if metadata URL is relative prefix the dirname of the index
                if (
                    '://' not in metadata_url and
                    not os.path.isabs(metadata_url)
                ):
                    metadata_url = \
                        os.path.dirname(index_url) + '/' + metadata_url

                # fetch the metadata file
                print('  fetching {metadata_url} ...'.format_map(locals()))
                try:
                    content = load_url(metadata_url)
                except Exception as e:
                    print('  -', str(e), file=sys.stderr)
                    rc = 1
                    continue

                # save the metadata file
                metadata_basename = os.path.basename(metadata_url)
                if metadata_basename in metadata_basenames:
                    print('  Multiple metadata files with the same basename '
                          "'{metadata_basename}'".format_map(locals()),
                          file=sys.stderr)
                else:
                    metadata_basenames.add(metadata_basename)

                destination_basepath = get_metadata_path() / name
                os.makedirs(str(destination_basepath), exist_ok=True)
                destination_path = destination_basepath / metadata_basename
                if not destination_path.exists():
                    mod = '+'
                else:
                    if content == destination_path.read_text():
                        mod = '.'
                    else:
                        # IDEA show the diff if the file already exists
                        mod = '*'
                print(' ', mod, str(destination_path))
                with destination_path.open('w') as h:
                    h.write(content)

            # remove / rename obsolete metadata files
            for metadata_file in metadata_files_before:
                if os.path.basename(metadata_file) not in metadata_basenames:
                    os.rename(metadata_file, metadata_file + '.obsolete')
                    print('  - {metadata_file} -> *.obsolete'
                          .format_map(locals()))

        # remove / rename metadata files from obsolete repositories
        obsolete_files = set(get_metadata_files())
        for name in repos.keys():
            obsolete_files -= set(get_repository_metadata_files(
                repository_name=name))
        for metadata_file in sorted(obsolete_files):
            os.rename(metadata_file, metadata_file + '.obsolete')
            print('  - {metadata_file} -> *.obsolete'.format_map(locals()))

        return rc
