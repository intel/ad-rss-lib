# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from colcon_core.package_augmentation import PackageAugmentationExtensionPoint
from colcon_core.package_identification.python import get_configuration
from colcon_core.package_identification.python import is_reading_cfg_sufficient
from colcon_core.plugin_system import satisfies_version
from colcon_python_setup_py.package_identification.python_setup_py \
    import get_setup_information


class RosAmentPythonPackageAugmentation(PackageAugmentationExtensionPoint):
    """Augment ament_python packages with information from setup files."""

    # the priority needs to be higher than the extensions augmenting packages
    # using the setup.py/setup.cfg files
    PRIORITY = 150

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageAugmentationExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')

    def augment_package(  # noqa: D102
        self, desc, *, additional_argument_names=None
    ):
        if desc.type != 'ros.ament_python':
            return

        if 'get_python_setup_options' in desc.metadata:
            return

        setup_py = desc.path / 'setup.py'
        if not setup_py.is_file():
            return

        setup_cfg = desc.path / 'setup.cfg'
        for _ in (1, ):
            # try to get information from setup.cfg file
            if setup_cfg.is_file():
                if is_reading_cfg_sufficient(setup_py):
                    config = get_configuration(setup_cfg)
                    name = config.get('metadata', {}).get('name')
                    if name:
                        options = config.get('options', {})

                        def getter(env):
                            nonlocal options
                            return options
                        break
        else:
            # use information from setup.py file

            def getter(env):  # noqa: F811
                nonlocal desc
                return get_setup_information(
                    desc.path / 'setup.py', env=env)

        desc.metadata['get_python_setup_options'] = getter
