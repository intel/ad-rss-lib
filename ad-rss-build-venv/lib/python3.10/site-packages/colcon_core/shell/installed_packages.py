# Copyright 2016-2021 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from pathlib import Path

from colcon_core.location import get_relative_package_index_path
from colcon_core.shell import FindInstalledPackagesExtensionPoint


class IsolatedInstalledPackageFinder(FindInstalledPackagesExtensionPoint):
    """Find installed packages in colcon isolated install spaces."""

    def find_installed_packages(self, install_base: Path):
        """Find installed packages in colcon isolated install spaces."""
        marker_file = install_base / '.colcon_install_layout'
        if not marker_file.is_file():
            return None
        install_layout = marker_file.read_text().rstrip()
        if install_layout != 'isolated':
            return None

        packages = {}
        # for each subdirectory look for the package specific file
        for p in install_base.iterdir():
            if not p.is_dir():
                continue
            if p.name.startswith('.'):
                continue
            marker = p / get_relative_package_index_path() / p.name
            if marker.is_file():
                packages[p.name] = p
        return packages


class MergedInstalledPackageFinder(FindInstalledPackagesExtensionPoint):
    """Find installed packages in colcon merged install spaces."""

    def find_installed_packages(self, install_base: Path):
        """Find installed packages in colcon isolated install spaces."""
        marker_file = install_base / '.colcon_install_layout'
        if not marker_file.is_file():
            return None
        install_layout = marker_file.read_text().rstrip()
        if install_layout != 'merged':
            return None

        packages = {}
        # find all files in the subdirectory
        if (install_base / get_relative_package_index_path()).is_dir():
            package_index = install_base / get_relative_package_index_path()
            for p in package_index.iterdir():
                if not p.is_file():
                    continue
                if p.name.startswith('.'):
                    continue
                packages[p.name] = install_base
        return packages
