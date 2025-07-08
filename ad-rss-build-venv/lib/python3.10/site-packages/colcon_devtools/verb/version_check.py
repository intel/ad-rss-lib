# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import json
import sys
import urllib
import urllib.request

from colcon_core.extension_point import get_all_extension_points
from colcon_core.plugin_system import satisfies_version
from colcon_core.verb import VerbExtensionPoint
from packaging.version import Version


class VersionCheckVerb(VerbExtensionPoint):
    """Compare local package versions with PyPI."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(VerbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def main(self, *, context):  # noqa: D102
        distributions = set()
        all_extension_points = get_all_extension_points()
        for group in all_extension_points.values():
            for info in group.values():
                if info[2]:
                    distributions.add((info[1], info[2]))

        base_url = 'https://pypi.org/pypi/{project}/json'
        for dist_name, dist_ver in sorted(distributions):
            url = base_url.format(project=dist_name)

            try:
                response = urllib.request.urlopen(url)
            except urllib.error.HTTPError as e:
                if e.code == 404:
                    print(
                        '{dist_name}: could not find package on PyPI'
                        .format_map(locals()), file=sys.stderr)
                else:
                    print(
                        '{dist_name}: Server could not fulfill the '
                        'request: {e.reason}'
                        .format_map(locals()), file=sys.stderr)
                continue
            except urllib.error.URLError:
                print(
                    '{dist_name}: Failed to reach server'
                    .format_map(locals()), file=sys.stderr)
                continue

            try:
                data = json.load(response)
            except json.decoder.JSONDecodeError:
                print(
                    '{dist_name}: could not parse PyPI response'
                    .format_map(locals()), file=sys.stderr)
                continue

            try:
                latest_version = data['info']['version']
            except KeyError:
                print(
                    '{dist_name}: could not determine version'
                    .format_map(locals()))
                continue

            if Version(latest_version) == Version(dist_ver):
                print(
                    '{dist_name} {dist_ver}: up-to-date'
                    .format_map(locals()))
                continue
            if Version(dist_ver) < Version(latest_version):
                print(
                    '{dist_name} {dist_ver}: newer version '
                    'available ({latest_version})'
                    .format_map(locals()))
                continue
            print(
                '{dist_name} {dist_ver}: local version is newer '
                'than latest release ({latest_version})'
                .format_map(locals()))
            continue
