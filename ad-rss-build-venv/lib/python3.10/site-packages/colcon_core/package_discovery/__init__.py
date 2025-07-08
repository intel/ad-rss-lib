# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import OrderedDict
from glob import glob
import os
import traceback

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_priority

logger = colcon_logger.getChild(__name__)


class PackageDiscoveryExtensionPoint:
    """
    The interface for discovery extensions.

    A discovery extension provides potential locations of packages which are
    then being check by the identification extensions.

    For each instance the attribute `PACKAGE_DISCOVERY_NAME` is being set to
    the basename of the entry point registering the extension.
    """

    """The version of the discovery extension interface."""
    EXTENSION_POINT_VERSION = '1.1'

    """The default priority of discovery extensions."""
    PRIORITY = 100

    def has_default(self):
        """
        Check if the extension has a default parameter if none are provided.

        The method is intended to be overridden in a subclass.

        :param args: The parsed command line arguments
        :returns: True if `discover()` should be called even if no parameters
          are provided, False otherwise
        :rtype: bool
        """
        return False

    def add_arguments(self, *, parser, with_default):
        """
        Add command line arguments specific to the package discovery.

        The method is intended to be overridden in a subclass.

        :param parser: The argument parser
        :param bool with_default: if True the extension should add a default
          value to at least one of the added arguments, otherwise not
        """
        pass

    def has_parameters(self, *, args):
        """
        Check if parameters have been passed for this extension.

        This method must be overridden in a subclass.

        :param args: The parsed command line arguments
        :returns: True if `discover()` should be called, False if no
          parameters were given, or None if this extension has no
          parameters to be specified.
        :rtype: bool
        """
        raise NotImplementedError()

    def discover(self, *, args, identification_extensions):
        """
        Discover packages using the passed identification extensions.

        The method is intended to be overridden in a subclass.
        If the `has_parameters` method never returns True this method is never
        invoked and therefore doesn't have to be implemented.

        :param args: The parsed command line arguments
        :param identification_extensions: The identification extensions
        :returns: set of
          :py:class:`colcon_core.package_descriptor.PackageDescriptor`
        :rtype: set
        """
        raise NotImplementedError()


def get_package_discovery_extensions(*, group_name=None):
    """
    Get the available package discovery extensions.

    The extensions are ordered by their priority and entry point name.

    :rtype: OrderedDict
    """
    if group_name is None:
        group_name = __name__
    extensions = instantiate_extensions(group_name)
    for name, extension in extensions.items():
        extension.PACKAGE_DISCOVERY_NAME = name
    return order_extensions_by_priority(extensions)


def add_package_discovery_arguments(parser, *, extensions=None):
    """
    Add the command line arguments for the package discovery extensions.

    :param parser: The argument parser
    :param extensions: The package discovery extensions to use, if `None` is
      passed use the extensions provided by
      :function:`get_package_discovery_extensions`
    """
    if extensions is None:
        extensions = get_package_discovery_extensions()
    group = parser.add_argument_group(title='Discovery arguments')

    # find the first extension which has default values
    first_extension_with_default = None
    for name, extension in extensions.items():
        try:
            has_default = extension.has_default()
        except Exception as e:  # noqa: F841
            # catch exceptions raised in discovery extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in package discovery extension '
                f"'{extension.PACKAGE_DISCOVERY_NAME}': {e}\n{exc}")
            # skip failing extension, continue with next one
        else:
            if has_default:
                first_extension_with_default = name
                break

    # collect arguments from the extensions
    for name, extension in extensions.items():
        with_default = name == first_extension_with_default
        try:
            retval = extension.add_arguments(
                parser=group, with_default=with_default)
            assert retval is None, 'add_arguments() should return None'
        except Exception as e:  # noqa: F841
            # catch exceptions raised in discovery extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in package discovery extension '
                f"'{extension.PACKAGE_DISCOVERY_NAME}': {e}\n{exc}")
            # skip failing extension, continue with next one


def discover_packages(
    args, identification_extensions, *, discovery_extensions=None
):
    """
    Discover and identify packages.

    All discovery extensions which report to have parameters are being used to
    discover packages.
    If none report to have parameters all discovery extensions are being used
    but only the one with a default value should discover packages.

    Each discovery extension uses the passed identification extensions to check
    each potential location for the existence of a package.

    :param args: The parsed command line arguments
    :param identification_extensions: The package identification extensions to
      pass to each invocation of
      :function:`PackageDiscoveryExtensionPoint.discover`
    :param discovery_extensions: The package discovery extensions to use, if
      `None` is passed use the extensions provided by
      :function:`get_package_discovery_extensions`
    :returns: set of
      :py:class:`colcon_core.package_descriptor.PackageDescriptor`
    :rtype: set
    """
    if discovery_extensions is None:
        discovery_extensions = get_package_discovery_extensions()
    if not discovery_extensions:
        logger.warning('No package discovery extensions found')
        return set()

    # use only the discovery extensions which have parameters if any
    # otherwise use all
    discovery_extensions_with_parameters = _get_extensions_with_parameters(
        args, discovery_extensions)
    if discovery_extensions_with_parameters:
        discovery_extensions = discovery_extensions_with_parameters

    return _discover_packages(
        args, identification_extensions, discovery_extensions)


def expand_dir_wildcards(paths):
    """
    Expand wildcards explicitly to match directories.

    This function does not match files.
    Also, unlike shells, it does not keep patterns that yield no matches.

    This is only necessary on Windows or when
    the wildcards are not expanded by the shell.

    :param list paths: The paths to update in place
    """
    i = 0
    while i < len(paths):
        path = paths[i]
        if '*' not in path:
            i += 1
            continue
        expanded_paths = [
            p for p in sorted(glob(path))
            if os.path.isdir(p)]
        logger.log(
            5, "expand_dir_wildcards() expanding '%s' to %s",
            path, expanded_paths)
        paths[i:i + 1] = expanded_paths
        i += len(expanded_paths)


def _get_extensions_with_parameters(
    args, discovery_extensions
):
    explicitly_specified = False
    with_parameters = OrderedDict()
    for extension in discovery_extensions.values():
        logger.log(
            1, f'discover_packages({extension.PACKAGE_DISCOVERY_NAME}) check '
            'parameters')
        try:
            has_parameter = extension.has_parameters(args=args)
        except Exception as e:  # noqa: F841
            # catch exceptions raised in discovery extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in package discovery extension '
                f"'{extension.PACKAGE_DISCOVERY_NAME}': {e}\n{exc}")
            # skip failing extension, continue with next one
        else:
            if has_parameter:
                explicitly_specified = True
            elif has_parameter is not None:
                continue
            with_parameters[extension.PACKAGE_DISCOVERY_NAME] = extension
    return with_parameters if explicitly_specified else OrderedDict()


def _discover_packages(
    args, identification_extensions, discovery_extensions
):
    all_descs = set()
    # if none had explicit parameters use the first which has defaults
    for extension in discovery_extensions.values():
        logger.log(
            1, 'discover_packages(%s) discover',
            extension.PACKAGE_DISCOVERY_NAME)
        try:
            descs = extension.discover(
                args=args, identification_extensions=identification_extensions)
            assert isinstance(descs, set), 'discover() should return a set'
        except NotImplementedError:
            # skip extension not implementing discovery
            continue
        except Exception as e:  # noqa: F841
            # catch exceptions raised in discovery extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in package discovery extension '
                f"'{extension.PACKAGE_DISCOVERY_NAME}': {e}\n{exc}")
            # skip failing extension, continue with next one
            continue
        else:
            logger.log(
                1, 'discover_packages(%s) using defaults',
                extension.PACKAGE_DISCOVERY_NAME)
            all_descs |= descs
    return all_descs
