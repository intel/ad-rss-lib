# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from contextlib import suppress
import os
from pathlib import Path
import shutil

from colcon_cmake.task.cmake import CTEST_EXECUTABLE
from colcon_cmake.task.cmake import get_variable_from_cmake_cache
from colcon_core.event.test import TestFailure
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.shell import get_command_environment
from colcon_core.subprocess import check_output
from colcon_core.task import run
from colcon_core.task import TaskExtensionPoint

logger = colcon_logger.getChild(__name__)


class CmakeTestTask(TaskExtensionPoint):
    """Test CMake packages."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(TaskExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.add_argument(
            '--ctest-args',
            nargs='*', metavar='*', type=str.lstrip,
            help='Pass arguments to CTest projects. '
            'Arguments matching other options must be prefixed by a space,\n'
            'e.g. --ctest-args " --help" (stdout might not be shown by '
            'default, e.g. add `--event-handlers console_cohesion+`)')

    async def test(self, *, additional_hooks=None):  # noqa: D102
        pkg = self.context.pkg
        args = self.context.args

        logger.info(f"Testing CMake package in '{args.path}'")

        assert os.path.exists(args.build_base), \
            'Has this package been built before?'

        try:
            env = await get_command_environment(
                'test', args.build_base, self.context.dependencies)
        except RuntimeError as e:
            logger.error(str(e))
            return 1

        if CTEST_EXECUTABLE is None:
            raise RuntimeError("Could not find 'ctest' executable")

        # check if CTest has any tests
        output = await check_output(
            [CTEST_EXECUTABLE, '--show-only'],
            cwd=args.build_base,
            env=env)
        for line in output.decode().splitlines():
            if line.startswith('  '):
                break
        else:
            logger.log(5, f"No ctests found in '{args.path}'")
            return

        # CTest arguments
        ctest_args = [
            # generate xml of test summary
            '-D', 'ExperimentalTest', '--no-compress-output',
            # show all test output
            '-V',
            '--force-new-ctest-process',
        ] + (args.ctest_args or [])

        # Check for explicit '-C' or '--build-type' in args.ctest_args.
        # If not, we'll add it based on the CMakeCache CMAKE_BUILD_TYPE value.
        if '-C' not in ctest_args and '--build-config' not in ctest_args:
            # choose configuration, required for multi-configuration generators
            ctest_args[0:0] = [
                '-C', self._get_configuration_from_cmake(args.build_base),
            ]

        if args.retest_until_fail:
            count = args.retest_until_fail + 1
            ctest_args += [
                '--repeat-until-fail', str(count),
            ]

        # delete an existing Testing/TAG file to ensure a new tag name is used
        tag_file = Path(args.build_base) / 'Testing' / 'TAG'
        with suppress(FileNotFoundError):
            tag_file.unlink()

        rerun = 0
        while True:
            # invoke CTest
            completed = await run(
                self.context,
                [CTEST_EXECUTABLE] + ctest_args,
                cwd=args.build_base, env=env)

            if not completed.returncode:
                break

            # try again if requested
            if args.retest_until_pass > rerun:
                if not rerun:
                    ctest_args += [
                        '--rerun-failed',
                    ]
                rerun += 1
                continue

            # CTest reports failing tests
            if completed.returncode == 8:
                self.context.put_event_into_queue(TestFailure(pkg.name))
                # the return code should still be 0
                break
            return completed.returncode

        # copy Testing/TAG and Testing/<tagname>/Test.xml to custom location
        if args.test_result_base and args.test_result_base != args.build_base:
            if not tag_file.is_file():
                return

            # find the latest Test.xml file
            latest_xml_dir = tag_file.read_text().splitlines()[0]
            latest_xml_path = tag_file.parent / latest_xml_dir / 'Test.xml'
            if not latest_xml_path.exists():
                logger.warning(
                    f"Skipping '{tag_file}': could not find latest XML file "
                    f"'{latest_xml_path}'")
                return

            dst = Path(args.test_result_base) / 'Testing' / latest_xml_dir
            dst.mkdir(parents=True, exist_ok=True)
            _copy_file(str(tag_file), str(dst.parent / tag_file.name))
            _copy_file(str(latest_xml_path), str(dst / latest_xml_path.name))

    def _get_configuration_from_cmake(self, build_base):
        # get for CMake build type from the CMake cache
        build_type = get_variable_from_cmake_cache(
            build_base, 'CMAKE_BUILD_TYPE')
        if build_type in ('Debug', 'MinSizeRel', 'RelWithDebInfo'):
            return build_type
        return 'Release'


def _copy_file(src, dst):
    if os.path.islink(dst):
        os.unlink(dst)
    elif os.path.isdir(dst):
        shutil.rmtree(dst)
    shutil.copy2(src, dst)
