# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os.path

from colcon_core.package_identification import IgnoreLocationException
from colcon_core.package_identification \
    import PackageIdentificationExtensionPoint
from colcon_core.plugin_system import satisfies_version

IGNORE_MARKER = 'COLCON_IGNORE'


class IgnorePackageIdentification(PackageIdentificationExtensionPoint):
    """Ignore paths containing a `COLCON_IGNORE` file."""

    # the priority needs to be higher than all other extensions
    PRIORITY = 1000

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageIdentificationExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')

    def identify(self, desc):  # noqa: D102
        colcon_ignore = desc.path / IGNORE_MARKER
        if os.path.lexists(str(colcon_ignore)):
            raise IgnoreLocationException()
