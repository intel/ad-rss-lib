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


class BashShell(ShellExtensionPoint):
    """Generate `.bash` scripts to extend the environment."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(ShellExtensionPoint.EXTENSION_POINT_VERSION, '^2.2')
        if sys.platform == 'win32' and not use_all_shell_extensions:
            raise SkipExtensionException('Not used on Windows systems')

    def create_prefix_script(self, prefix_path, merge_install):  # noqa: D102
        prefix_env_path = prefix_path / 'local_setup.bash'
        logger.info(
            "Creating prefix script '{prefix_env_path}'".format_map(locals()))
        expand_template(
            Path(__file__).parent / 'template' / 'prefix.bash.em',
            prefix_env_path,
            {
                'python_executable': sys.executable,
                'merge_install': merge_install,
                'package_script_no_ext': 'package',
            })
        # no need to copy prefix_util.py explicitly since bash relies on sh

        prefix_chain_env_path = prefix_path / 'setup.bash'
        logger.info(
            "Creating prefix chain script '{prefix_chain_env_path}'"
            .format_map(locals()))
        expand_template(
            Path(__file__).parent / 'template' / 'prefix_chain.bash.em',
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
        pkg_env_path = prefix_path / 'share' / pkg_name / 'package.bash'
        logger.info(
            "Creating package script '{pkg_env_path}'".format_map(locals()))
        expand_template(
            Path(__file__).parent / 'template' / 'package.bash.em',
            pkg_env_path,
            {
                'pkg_name': pkg_name,
                'hooks': list(filter(
                    lambda hook: str(hook[0]).endswith('.bash'), hooks)),
                'package_script_no_ext': 'package',
            })
        return [pkg_env_path]

    def create_hook_set_value(  # noqa: D102
        self, env_hook_name, prefix_path, pkg_name, name, value,
    ):
        hook_path = prefix_path / 'share' / pkg_name / 'hook' / \
            ('%s.bash' % env_hook_name)
        logger.info("Creating environment hook '%s'" % hook_path)
        if value == '':
            value = '$COLCON_CURRENT_PREFIX'
        expand_template(
            Path(__file__).parent / 'template' / 'hook_set_value.bash.em',
            hook_path, {'name': name, 'value': value})
        return hook_path
