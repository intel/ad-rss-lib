# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from sys import executable

from colcon_core.plugin_system import satisfies_version
from colcon_core.task import run
from colcon_core.task.python.test import PythonTestingStepExtensionPoint
from colcon_core.verb.test import logger


class SetuppyPythonTestingStep(PythonTestingStepExtensionPoint):
    """Use `unittest` to test packages."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            PythonTestingStepExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.add_argument(
            '--unittest-args',
            nargs='*', metavar='*', type=str.lstrip,
            help='Pass arguments to Python unittests. '
            'Arguments matching other options must be prefixed by a space,\n'
            'e.g. --unittest-args " --help" (stdout might not be shown by '
            'default, e.g. add `--event-handlers console_cohesion+`)')

    def match(self, context, env, setup_py_data):  # noqa: D102
        return True

    async def step(self, context, env, setup_py_data):  # noqa: D102
        if context.args.retest_until_fail:
            logger.warning(
                "Ignored '--retest-until-fail' for package "
                f"'{context.pkg.name}' since 'unittest' does not support the "
                'usage')

        if context.args.retest_until_pass:
            logger.warning(
                "Ignored '--retest-until-pass' for package "
                f"'{context.pkg.name}' since 'unittest' does not support the "
                'usage')

        cmd = [executable, '-m', 'unittest', '-v']
        if context.args.unittest_args is not None:
            cmd += context.args.unittest_args
        completed = await run(
            context, cmd, cwd=context.args.path, env=env)
        return completed.returncode
