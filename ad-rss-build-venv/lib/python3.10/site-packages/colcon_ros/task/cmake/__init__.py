# Copyright 2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
import platform
import subprocess

from colcon_core.shell import create_environment_hook


def create_pkg_config_path_environment_hooks(basepath, pkg_name):
    """
    Create hook scripts to prepend to the PKG_CONFIG_PATH.

    :param Path basepath: The path of the prefix
    :param str pkg_name: The package name
    :returns: The relative paths to the created hook scripts
    :rtype: list
    """
    hooks = create_environment_hook(
        'pkg_config_path', basepath, pkg_name, 'PKG_CONFIG_PATH',
        os.path.join('lib', 'pkgconfig'), mode='prepend')
    if platform.system() == 'Linux':
        multiarch = get_multiarch()
        if multiarch:
            hooks += create_environment_hook(
                'pkg_config_path_multiarch', basepath, pkg_name,
                'PKG_CONFIG_PATH', os.path.join('lib', multiarch, 'pkgconfig'),
                mode='prepend')
    return hooks


_multiarch = None


def get_multiarch():
    """
    Get the multiarch name using normalized GNU triplets.

    :returns: The multiarch name or None
    :rtype: str
    """
    global _multiarch
    if _multiarch is None:
        try:
            output = subprocess.check_output(['gcc', '-print-multiarch'])
        except (FileNotFoundError, subprocess.CalledProcessError):
            pass
        else:
            _multiarch = output.decode().rstrip()
        if _multiarch is None:
            try:
                output = subprocess.check_output(
                    ['dpkg-architecture', '-qDEB_HOST_MULTIARCH'])
            except (FileNotFoundError, subprocess.CalledProcessError):
                pass
            else:
                _multiarch = output.decode().rstrip()
    return _multiarch
