# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.logging import colcon_logger
from colcon_core.package_augmentation import PackageAugmentationExtensionPoint
from colcon_core.package_augmentation import update_descriptor
from colcon_core.package_identification \
    import PackageIdentificationExtensionPoint
from colcon_core.plugin_system import satisfies_version
import yaml

logger = colcon_logger.getChild(__name__)


class ColconPkgPackageIdentification(
    PackageIdentificationExtensionPoint, PackageAugmentationExtensionPoint,
):
    """Provide meta information from `colcon.pkg` files."""

    # the priority needs to be higher than other extensions in order to
    # populate the descriptor with meta data before those are invoked
    PRIORITY = 200

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageIdentificationExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')
        satisfies_version(
            PackageAugmentationExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def identify(self, desc):  # noqa: D102
        data = self._get_colcon_pkg_data(desc.path)
        if not data:
            return

        # check for package type
        if 'type' in data:
            if desc.type is not None and desc.type != data['type']:
                logger.warning(
                    "Type '%s' of package '%s' does not match configured "
                    "type '%s'", desc.type, desc.path, data['type'])
            else:
                logger.info(
                    "Setting type '%s' of package '%s' from colcon.pkg",
                    data['type'], desc.path)
                desc.type = data['type']

        # check for package name
        if 'name' in data:
            if desc.name is not None and desc.name != data['name']:
                logger.warning(
                    "Name '%s' of package '%s' does not match configured "
                    "name '%s'", desc.name, desc.path, data['name'])
            else:
                logger.info(
                    "Setting name '%s' of package '%s' from colcon.pkg",
                    data['name'], desc.path)
                desc.name = data['name']

    def augment_package(
        self, desc, *, additional_argument_names
    ):  # noqa: D102
        data = self._get_colcon_pkg_data(desc.path)
        if not data:
            return

        logger.info(
            "Updating descriptor of package '%s' from colcon.pkg: %s",
            desc.path, data)
        update_descriptor(
            desc, data, additional_argument_names=additional_argument_names)

    def _get_colcon_pkg_data(self, basepath):
        # check for a colcon.pkg file in the root of the package directory
        colcon_pkg_path = basepath / 'colcon.pkg'
        if not colcon_pkg_path.is_file():
            return None
        content = colcon_pkg_path.read_text()
        return yaml.safe_load(content)
