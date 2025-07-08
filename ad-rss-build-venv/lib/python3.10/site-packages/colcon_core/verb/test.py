# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import OrderedDict
import os
import types

from colcon_core.argument_default import wrap_default_value
from colcon_core.argument_parser.destination_collector \
    import DestinationCollectorDecorator
from colcon_core.argument_type import get_cwd_path_resolver
from colcon_core.event.test import TestFailure
from colcon_core.event_handler import add_event_handler_arguments
from colcon_core.executor import add_executor_arguments
from colcon_core.executor import execute_jobs
from colcon_core.executor import Job
from colcon_core.executor import OnError
from colcon_core.feature_flags import is_feature_flag_set
from colcon_core.logging import colcon_logger
from colcon_core.package_selection import add_arguments \
    as add_packages_arguments
from colcon_core.package_selection import get_packages
from colcon_core.plugin_system import satisfies_version
from colcon_core.task import add_task_arguments
from colcon_core.task import get_task_extension
from colcon_core.task import TaskContext
from colcon_core.verb import check_and_mark_build_tool
from colcon_core.verb import check_and_mark_install_layout
from colcon_core.verb import update_object
from colcon_core.verb import VerbExtensionPoint

logger = colcon_logger.getChild(__name__)


class TestPackageArguments:
    """Arguments to test a specific package."""

    def __init__(self, pkg, args, *, additional_destinations=None):
        """
        Construct a TestPackageArguments.

        :param pkg: The package descriptor
        :param args: The parsed command line arguments
        :param list additional_destinations: The destinations of additional
          arguments
        """
        super().__init__()
        self.path = os.path.abspath(
            os.path.join(os.getcwd(), str(pkg.path)))
        self.build_base = os.path.abspath(os.path.join(
            os.getcwd(), args.build_base, pkg.name))
        self.install_base = os.path.abspath(os.path.join(
            os.getcwd(), args.install_base))
        if not args.merge_install:
            self.install_base = os.path.join(
                self.install_base, pkg.name)
        self.test_result_base = os.path.abspath(os.path.join(
            os.getcwd(), args.test_result_base, pkg.name)) \
            if args.test_result_base else None

        # set additional arguments
        for dest in (additional_destinations or []):
            # from the command line
            if hasattr(args, dest):
                update_object(
                    self, dest, getattr(args, dest),
                    pkg.name, 'test', 'command line')
            # from the package metadata
            if dest in pkg.metadata:
                update_object(
                    self, dest, pkg.metadata[dest],
                    pkg.name, 'test', 'package metadata')


class TestVerb(VerbExtensionPoint):
    """
    Test a set of packages.

    Each test task is expected to post a
    :py:class:`colcon_core.event.test.TestFailure` event in case of test
    failures.
    """

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(VerbExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        parser.add_argument(
            '--build-base',
            default=wrap_default_value('build'),
            type=get_cwd_path_resolver(),
            help='The base path for all build directories (default: build)')
        parser.add_argument(
            '--install-base',
            default=wrap_default_value('install'),
            type=get_cwd_path_resolver(),
            help='The base path for all install prefixes (default: install)')
        parser.add_argument(
            '--merge-install',
            action='store_true',
            help='Merge all install prefixes into a single location')
        parser.add_argument(
            '--test-result-base',
            type=get_cwd_path_resolver(),
            help='The base path for all test results (default: --build-base)')
        group = parser.add_mutually_exclusive_group()
        group.add_argument(
            '--retest-until-fail',
            type=int, default=0, metavar='N',
            help='Rerun tests up to N times if they pass')
        group.add_argument(
            '--retest-until-pass',
            type=int, default=0, metavar='N',
            help='Rerun failing tests up to N times')
        parser.add_argument(
            '--abort-on-error',
            action='store_true',
            help='Abort after the first package with any errors (failing '
                 'tests are not considered errors in this context)')
        parser.add_argument(
            '--return-code-on-test-failure',
            action='store_true',
            help='Use a non-zero return code to indicate any test failure')
        add_executor_arguments(parser)
        add_event_handler_arguments(parser)

        add_packages_arguments(parser)

        decorated_parser = DestinationCollectorDecorator(parser)
        add_task_arguments(decorated_parser, 'colcon_core.task.test')
        self.task_argument_destinations = decorated_parser.get_destinations()
        self.task_argument_destinations['retest-until-pass'] = \
            'retest_until_pass'
        self.task_argument_destinations['retest-until-fail'] = \
            'retest_until_fail'

    def main(self, *, context):  # noqa: D102
        check_and_mark_build_tool(context.args.build_base)
        check_and_mark_install_layout(
            context.args.install_base,
            merge_install=context.args.merge_install)

        decorators = get_packages(
            context.args,
            additional_argument_names=self.task_argument_destinations,
            recursive_categories=('run', ))

        install_base = os.path.abspath(os.path.join(
            os.getcwd(), context.args.install_base))
        jobs = self._get_jobs(context.args, decorators, install_base)

        if context.args.return_code_on_test_failure:
            # watch published events on all jobs to detect any test failures
            any_test_failures = False

            def check_for_test_failures(put_event_into_queue):
                nonlocal any_test_failures

                def put_event_into_queue_(self, event):
                    nonlocal any_test_failures
                    nonlocal put_event_into_queue
                    if isinstance(event, TestFailure):
                        any_test_failures = True
                    return put_event_into_queue(event)

                return put_event_into_queue_

            for job in jobs.values():
                job.put_event_into_queue = types.MethodType(
                    check_for_test_failures(job.put_event_into_queue), job)

        on_error = OnError.continue_ \
            if not context.args.abort_on_error else OnError.interrupt
        rc = execute_jobs(context, jobs, on_error=on_error)

        if context.args.return_code_on_test_failure:
            if not rc and any_test_failures:
                return 1

        return rc

    def _get_jobs(self, args, decorators, install_base):
        jobs = OrderedDict()
        drop_test_deps = is_feature_flag_set('drop_test_deps')
        for decorator in decorators:
            if not decorator.selected:
                continue

            pkg = decorator.descriptor
            extension = get_task_extension('colcon_core.task.test', pkg.type)
            if not extension:
                logger.warning(
                    f"No task extension to 'test' a '{pkg.type}' package")
                continue

            recursive_dependencies = OrderedDict()
            # for testing a package include itself in the environment
            for dep_name in decorator.recursive_dependencies + [pkg.name]:
                dep_path = install_base
                if not args.merge_install:
                    dep_path = os.path.join(dep_path, dep_name)
                recursive_dependencies[dep_name] = dep_path

            package_args = TestPackageArguments(
                pkg, args, additional_destinations=self
                .task_argument_destinations.values())
            ordered_package_args = ', '.join([
                ('%s: %s' % (repr(k), repr(package_args.__dict__[k])))
                for k in sorted(package_args.__dict__.keys())
            ])
            logger.debug(
                f"Testing package '{pkg.name}' with the following arguments: "
                f'{{{ordered_package_args}}}')
            task_context = TaskContext(
                pkg=pkg, args=package_args,
                dependencies=recursive_dependencies)

            job = Job(
                identifier=pkg.name,
                dependencies=set(
                    () if drop_test_deps else recursive_dependencies.keys()
                ),
                task=extension, task_context=task_context)

            jobs[pkg.name] = job
        return jobs
