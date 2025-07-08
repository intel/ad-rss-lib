# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.package_identification import IgnoreLocationException
from colcon_core.package_identification \
    import PackageIdentificationExtensionPoint
from colcon_core.plugin_system import satisfies_version


class IgnorePackageIdentification(PackageIdentificationExtensionPoint):
    """
    Ignore paths containing files belonging to `catkin` or `ament_tools`.

    Workspaces built with `catkin` or `ament_tools` don't contain any IGNORE
    marker files in the install space.
    To avoid packages being found in these directories by the discovery
    extensions using default values they is being ignored by this extension.
    """

    # the priority needs to be higher than all other extensions
    PRIORITY = 1000

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageIdentificationExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')

    def identify(self, desc):  # noqa: D102
        filenames = (
            '_order_isolated_packages.py',  # ament_tools
            '_setup_util.py',  # catkin
        )
        for filename in filenames:
            ignore = desc.path / filename
            if ignore.exists():
                raise IgnoreLocationException()
