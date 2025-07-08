# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os

from colcon_core.package_augmentation import PackageAugmentationExtensionPoint
from colcon_core.package_augmentation import update_descriptor
from colcon_core.package_identification import logger
from colcon_core.package_identification \
    import PackageIdentificationExtensionPoint
from colcon_core.plugin_system import satisfies_version
from colcon_metadata.metadata import metadata_by_name
from colcon_metadata.metadata import metadata_by_path


class ColconMetadataPackageIdentification(
    PackageIdentificationExtensionPoint, PackageAugmentationExtensionPoint,
):
    """Provide meta information from `.colcon` files."""

    # the priority needs to be higher than other extensions in order to
    # populate the descriptor with meta data before those are invoked
    PRIORITY = 180

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageIdentificationExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')
        satisfies_version(
            PackageAugmentationExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def identify(self, desc):  # noqa: D102
        if os.path.realpath(str(desc.path)) in metadata_by_path:
            metadata2 = metadata_by_path[os.path.realpath(str(desc.path))]
            if metadata2.get('type'):
                if desc.type is None:
                    desc.type = metadata2.get('type')
                    logger.info(
                        "Package '{desc.path}' has configured type "
                        "'{desc.type}'".format_map(locals()))
                elif desc.type != metadata2.get('type'):
                    logger.warning(
                        "type '%s' of package '%s' does not match configured "
                        "type '%s'", desc.type, desc.path,
                        metadata2.get('type'))
            if metadata2.get('name'):
                if desc.name is None:
                    desc.name = metadata2.get('name')
                    logger.info(
                        "Package '{desc.path}' has configured name "
                        "'{desc.name}'" .format_map(locals()))
                elif desc.name != metadata2.get('name'):
                    logger.warning(
                        "name '%s' of package '%s' does not match configured "
                        "name '%s'", desc.name, desc.path,
                        metadata2.get('name'))

        if desc.name in metadata_by_name:
            data = metadata_by_name[desc.name]
            if 'type' in data:
                # if the package name was defined based on the path
                # then ignore the type defined for the package name
                if desc.type is not None and desc.type != data['type']:
                    logger.warning(
                        "type '{desc.type}' of package '{desc.name}' "
                        "does not match configured type '{data[type]}'"
                        .format_map(locals()))
                else:
                    desc.type = data['type']

    def augment_package(
        self, desc, *, additional_argument_names
    ):  # noqa: D102
        # deliberatively ignore the package type
        # since this extension can contribute meta information to any package
        if desc.name in metadata_by_name:
            update_descriptor(
                desc, metadata_by_name[desc.name],
                additional_argument_names=additional_argument_names)
        if os.path.realpath(str(desc.path)) in metadata_by_path:
            update_descriptor(
                desc, metadata_by_path[os.path.realpath(str(desc.path))],
                additional_argument_names=additional_argument_names)
