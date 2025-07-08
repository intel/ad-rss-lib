# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from pathlib import Path
import sys

from colcon_core.plugin_system import satisfies_version
from colcon_core.plugin_system import SkipExtensionException
from colcon_core.prefix_path import get_chained_prefix_path
from colcon_core.shell import logger
from colcon_core.shell import ShellExtensionPoint
from colcon_core.shell import use_all_shell_extensions
from colcon_core.shell.template import expand_template


class ZShell(ShellExtensionPoint):
    """Generate `.zsh` scripts to extend the environment."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(ShellExtensionPoint.EXTENSION_POINT_VERSION, '^2.2')
        if sys.platform == 'win32' and not use_all_shell_extensions:
            raise SkipExtensionException('Not used on Windows systems')

    def create_prefix_script(self, prefix_path, merge_install):  # noqa: D102
        prefix_env_path = prefix_path / 'local_setup.zsh'
        logger.info(
            "Creating prefix script '{prefix_env_path}'".format_map(locals()))
        expand_template(
            Path(__file__).parent / 'template' / 'prefix.zsh.em',
            prefix_env_path,
            {
                'python_executable': sys.executable,
                'merge_install': merge_install,
                'package_script_no_ext': 'package',
            })
        # no need to copy prefix_util.py explicitly since zsh relies on sh

        prefix_chain_env_path = prefix_path / 'setup.zsh'
        logger.info(
            "Creating prefix chain script '{prefix_chain_env_path}'"
            .format_map(locals()))
        expand_template(
            Path(__file__).parent / 'template' / 'prefix_chain.zsh.em',
            prefix_chain_env_path,
            {
                'chained_prefix_path': get_chained_prefix_path(
                    skip=prefix_path),
                'prefix_script_no_ext': 'local_setup',
            })

        return [
            prefix_env_path,
            prefix_chain_env_path,
        ]

    def create_package_script(  # noqa: D102
        self, prefix_path, pkg_name, hooks
    ):
        pkg_env_path = prefix_path / 'share' / pkg_name / 'package.zsh'
        logger.info(
            "Creating package script '{pkg_env_path}'".format_map(locals()))
        expand_template(
            Path(__file__).parent / 'template' / 'package.zsh.em',
            pkg_env_path,
            {
                'pkg_name': pkg_name,
                'hooks': list(filter(
                    lambda hook: str(hook[0]).endswith('.zsh'), hooks)),
                'package_script_no_ext': 'package',
            })
        return [pkg_env_path]
