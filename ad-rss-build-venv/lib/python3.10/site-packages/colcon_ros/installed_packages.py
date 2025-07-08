# Copyright 2016-2021 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from pathlib import Path

from colcon_core.shell import FindInstalledPackagesExtensionPoint


class AmentInstalledPackageFinder(FindInstalledPackagesExtensionPoint):
    """
    Find installed packages in an ament workspace.

    This is almost always /opt/ros/<rosdistro>
    """

    def find_installed_packages(self, install_base: Path):
        """Find installed packages in an ament workspace."""
        package_index = install_base.joinpath(
                'share', 'ament_index', 'resource_index', 'packages')

        if not package_index.is_dir():
            return None

        packages = {}
        for marker_path in package_index.iterdir():
            packages[marker_path.name] = install_base
        return packages
