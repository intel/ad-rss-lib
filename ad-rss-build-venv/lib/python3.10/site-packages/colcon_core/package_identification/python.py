# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import warnings

from colcon_core.package_identification import logger
from colcon_core.package_identification \
    import PackageIdentificationExtensionPoint
from colcon_core.plugin_system import satisfies_version


class PythonPackageIdentification(PackageIdentificationExtensionPoint):
    """
    Identify Python packages with `setup.cfg` files.

    Only packages which pass no arguments (or only a ``cmdclass``) to the
    ``setup()`` function in their ``setup.py`` file are being considered.
    """

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PackageIdentificationExtensionPoint.EXTENSION_POINT_VERSION,
            '^1.0')

    def identify(self, desc):  # noqa: D102
        if desc.type is not None and desc.type != 'python':
            return

        setup_py = desc.path / 'setup.py'
        if not setup_py.is_file():
            return

        setup_cfg = desc.path / 'setup.cfg'
        if not setup_cfg.is_file():
            return

        if not is_reading_cfg_sufficient(setup_py):
            logger.debug(
                f"Python package in '{desc.path}' passes arguments to the "
                'setup() function which requires a different identification '
                f"extension than '{self.PACKAGE_IDENTIFICATION_NAME}'")
            return

        config = get_configuration(setup_cfg)
        name = config.get('metadata', {}).get('name')
        if not name:
            return

        desc.type = 'python'
        if desc.name is not None and desc.name != name:
            msg = 'Package name already set to different value'
            logger.error(msg)
            raise RuntimeError(msg)
        desc.name = name


def is_reading_cfg_sufficient(setup_py):
    """
    Check the content of the setup.py file.

    If the ``setup()`` function is called with no arguments or only a
    ``cmdclass`` it is sufficient to only read the content of the ``setup.cfg``
    file.

    :param setup_py: The path of the setup.py file
    :returns: The flag if reading the setup.cfg file is sufficient
    :rtype: bool
    """
    setup_py_content = setup_py.read_text()
    # the setup function must be called with no arguments
    # or only a ``cmdclass``to be considered by this extension otherwise
    # only reading the content of the setup.cfg file isn't sufficient
    return 'setup()' in setup_py_content or \
        'setup(cmdclass=cmdclass)' in setup_py_content


def get_configuration(setup_cfg):
    """
    Read the setup.cfg file.

    :param setup_cfg: The path of the setup.cfg file
    :returns: The configuration data
    :rtype: dict
    """
    try:
        # import locally to allow other functions in this module to be usable
        try:
            from setuptools.config.setupcfg import read_configuration
        except ImportError:
            from setuptools.config import read_configuration
    except ImportError as e:
        try:
            from importlib.metadata import distribution
        except ImportError:
            from importlib_metadata import distribution
        from packaging.version import Version
        try:
            setuptools_version = distribution('setuptools').version
        except ModuleNotFoundError:
            setuptools_version = '0'
        minimum_version = '30.3.0'
        if Version(setuptools_version) < Version(minimum_version):
            e.msg += ', ' \
                "'setuptools' needs to be at least version " \
                f'{minimum_version}, if a newer version is not available ' \
                "from the package manager use 'pip3 install -U setuptools' " \
                'to update to the latest version'
        raise
    return read_configuration(str(setup_cfg))


def extract_dependencies(options):
    """
    Get the dependencies of the package.

    This function has been depreated, use
    ``colcon_core.package_augmentation.python.extract_dependencies()``
    instead.

    :param options: The dictionary from the options section of the setup.cfg
      file
    :returns: The dependencies
    :rtype: dict(string, set(DependencyDescriptor))
    """
    warnings.warn(
        "'colcon_core.package_identification.python.extract_dependencies()' "
        'has been deprecated, use '
        "'colcon_core.package_augmentation.python.extract_dependencies()' "
        'instead', stacklevel=2)
    from colcon_core.package_augmentation.python import \
        extract_dependencies as function
    return function(options)


def create_dependency_descriptor(requirement_string):
    """
    Create a DependencyDescriptor from a PEP440 compliant string.

    See https://www.python.org/dev/peps/pep-0440/#version-specifiers

    This function has been depreated, use
    ``colcon_core.package_augmentation.python.create_dependency_descriptor()``
    instead.

    :param str requirement_string: a PEP440 compliant requirement string
    :return: A descriptor with version constraints from the requirement string
    :rtype: DependencyDescriptor
    """
    warnings.warn(
        "'colcon_core.package_identification.python."
        "create_dependency_descriptor()' has been deprecated, use "
        "'colcon_core.package_augmentation.python."
        "create_dependency_descriptor()' instead", stacklevel=2)
    from colcon_core.package_augmentation.python import \
        create_dependency_descriptor as function
    return function(requirement_string)
