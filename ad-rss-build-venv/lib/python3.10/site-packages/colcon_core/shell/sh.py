# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from pathlib import Path
import sys
import warnings

from colcon_core import shell
from colcon_core.plugin_system import satisfies_version
from colcon_core.plugin_system import SkipExtensionException
from colcon_core.prefix_path import get_chained_prefix_path
from colcon_core.shell import check_dependency_availability
from colcon_core.shell import get_environment_variables
from colcon_core.shell import get_null_separated_environment_variables
from colcon_core.shell import logger
from colcon_core.shell import ShellExtensionPoint
from colcon_core.shell.template import expand_template


class ShShell(ShellExtensionPoint):
    """Generate `.sh` scripts to extend the environment."""

    # the priority needs to be higher than the default for primary shells
    PRIORITY = 200

    FORMAT_STR_COMMENT_LINE = '# {comment}'
    FORMAT_STR_SET_ENV_VAR = 'export {name}="{value}"'
    FORMAT_STR_USE_ENV_VAR = '${name}'
    FORMAT_STR_INVOKE_SCRIPT = 'COLCON_CURRENT_PREFIX="{prefix}" ' \
        '_colcon_prefix_sh_source_script "{script_path}"'
    FORMAT_STR_REMOVE_LEADING_SEPARATOR = 'if [ "$(echo -n ${name} | ' \
        'head -c 1)" = ":" ]; then export {name}=${{{name}#?}} ; fi'
    FORMAT_STR_REMOVE_TRAILING_SEPARATOR = 'if [ "$(echo -n ${name} | ' \
        'tail -c 1)" = ":" ]; then export {name}=${{{name}%?}} ; fi'

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(ShellExtensionPoint.EXTENSION_POINT_VERSION, '^2.2')
        if sys.platform == 'win32' and not shell.use_all_shell_extensions:
            raise SkipExtensionException('Not used on Windows systems')

    def create_prefix_script(self, prefix_path, merge_install):  # noqa: D102
        prefix_env_path = prefix_path / 'local_setup.sh'
        logger.info("Creating prefix script '%s'" % prefix_env_path)
        expand_template(
            Path(__file__).parent / 'template' / 'prefix.sh.em',
            prefix_env_path,
            {
                'prefix_path': prefix_path,
                'python_executable': sys.executable,
                'merge_install': merge_install,
                'package_script_no_ext': 'package',
            })

        prefix_util_path = prefix_path / '_local_setup_util_sh.py'
        logger.info("Creating prefix util module '%s'" % prefix_util_path)
        expand_template(
            self._get_prefix_util_template_path(),
            prefix_util_path, {'shell_extension': self})

        prefix_chain_env_path = prefix_path / 'setup.sh'
        logger.info(
            "Creating prefix chain script '%s'" % prefix_chain_env_path)
        expand_template(
            Path(__file__).parent / 'template' / 'prefix_chain.sh.em',
            prefix_chain_env_path,
            {
                'prefix_path': prefix_path,
                'chained_prefix_path': get_chained_prefix_path(
                    skip=prefix_path),
                'prefix_script_no_ext': 'local_setup',
            })

        return [
            prefix_env_path,
            prefix_util_path,
            prefix_chain_env_path,
        ]

    def create_package_script(  # noqa: D102
        self, prefix_path, pkg_name, hooks
    ):
        pkg_env_path = prefix_path / 'share' / pkg_name / 'package.sh'
        logger.info("Creating package script '%s'" % pkg_env_path)
        expand_template(
            Path(__file__).parent / 'template' / 'package.sh.em',
            pkg_env_path,
            {
                'prefix_path': prefix_path,
                'hooks': list(filter(
                    lambda hook: str(hook[0]).endswith('.sh'), hooks)),
            })
        return [pkg_env_path]

    def create_hook_set_value(  # noqa: D102
        self, env_hook_name, prefix_path, pkg_name, name, value,
    ):
        hook_path = prefix_path / 'share' / pkg_name / 'hook' / \
            ('%s.sh' % env_hook_name)
        logger.info("Creating environment hook '%s'" % hook_path)
        if value == '':
            value = '$COLCON_CURRENT_PREFIX'
        expand_template(
            Path(__file__).parent / 'template' / 'hook_set_value.sh.em',
            hook_path, {'name': name, 'value': value})
        return hook_path

    def create_hook_append_value(  # noqa: D102
        self, env_hook_name, prefix_path, pkg_name, name, subdirectory,
    ):
        hook_path = prefix_path / 'share' / pkg_name / 'hook' / \
            ('%s.sh' % env_hook_name)
        logger.info("Creating environment hook '%s'" % hook_path)
        expand_template(
            Path(__file__).parent / 'template' / 'hook_append_value.sh.em',
            hook_path,
            {
                'name': name,
                'subdirectory': subdirectory,
            })
        return hook_path

    def create_hook_prepend_value(  # noqa: D102
        self, env_hook_name, prefix_path, pkg_name, name, subdirectory,
    ):
        hook_path = prefix_path / 'share' / pkg_name / 'hook' / \
            ('%s.sh' % env_hook_name)
        logger.info("Creating environment hook '%s'" % hook_path)
        expand_template(
            Path(__file__).parent / 'template' / 'hook_prepend_value.sh.em',
            hook_path,
            {
                'name': name,
                'subdirectory': subdirectory,
            })
        return hook_path

    async def generate_command_environment(  # noqa: D102
        self, task_name, build_base, dependencies,
    ):
        if sys.platform == 'win32':
            raise SkipExtensionException('Not usable on Windows systems')

        # check if all dependencies are available
        # removes dependencies available in the environment from the parameter
        check_dependency_availability(
            dependencies, script_filename='package.sh')

        hook_path = build_base / ('colcon_command_prefix_%s.sh' % task_name)
        expand_template(
            Path(__file__).parent / 'template' / 'command_prefix.sh.em',
            hook_path,
            {'dependencies': dependencies})

        # Attempt to use null-separated env output, but fall back to the
        # best-effort implementation if not supported (i.e. older macOS)
        cmd = ['.', str(hook_path), '&&', 'env', '-0']
        try:
            env = await get_null_separated_environment_variables(
                cmd, cwd=str(build_base))
        except AssertionError:
            warnings.warn(
                'This platform does not support null-separated output from '
                "'env', and may not be supported in future releases of "
                'colcon-core. See colcon/colcon-core#684 for details.',
                DeprecationWarning)
            cmd.pop()
            env = await get_environment_variables(cmd, cwd=str(build_base))

        # write environment variables to file for debugging
        env_path = build_base / ('colcon_command_prefix_%s.sh.env' % task_name)
        with env_path.open('w') as h:
            for key in sorted(env.keys()):
                value = env[key]
                h.write(f'{key}={value}\n')

        return env
