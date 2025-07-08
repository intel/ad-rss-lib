# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import OrderedDict
import os
import os.path
from pathlib import Path
import traceback

from colcon_core.argument_default import wrap_default_value
from colcon_core.argument_parser.destination_collector \
    import DestinationCollectorDecorator
from colcon_core.argument_type import get_cwd_path_resolver
from colcon_core.event.job import JobUnselected
from colcon_core.event_handler import add_event_handler_arguments
from colcon_core.executor import add_executor_arguments
from colcon_core.executor import execute_jobs
from colcon_core.executor import Job
from colcon_core.executor import OnError
from colcon_core.package_identification.ignore import IGNORE_MARKER
from colcon_core.package_selection import add_arguments \
    as add_packages_arguments
from colcon_core.package_selection import get_packages
from colcon_core.plugin_system import satisfies_version
from colcon_core.shell import get_shell_extensions
from colcon_core.task import add_task_arguments
from colcon_core.task import get_task_extension
from colcon_core.task import TaskContext
from colcon_core.verb import check_and_mark_build_tool
from colcon_core.verb import check_and_mark_install_layout
from colcon_core.verb import logger
from colcon_core.verb import update_object
from colcon_core.verb import VerbExtensionPoint


class BuildPackageArguments:
    """Arguments to build a specific package."""

    def __init__(self, pkg, args, *, additional_destinations=None):
        """
        Construct a BuildPackageArguments.

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
        self.merge_install = args.merge_install
        if not args.merge_install:
            self.install_base = os.path.join(
                self.install_base, pkg.name)
        self.symlink_install = args.symlink_install
        self.test_result_base = os.path.abspath(os.path.join(
            os.getcwd(), args.test_result_base, pkg.name)) \
            if args.test_result_base else None

        # set additional arguments
        for dest in (additional_destinations or []):
            # from the command line
            if hasattr(args, dest):
                update_object(
                    self, dest, getattr(args, dest),
                    pkg.name, 'build', 'command line')
            # from the package metadata
            if dest in pkg.metadata:
                update_object(
                    self, dest, pkg.metadata[dest],
                    pkg.name, 'build', 'package metadata')


class BuildVerb(VerbExtensionPoint):
    """Build a set of packages."""

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
            '--symlink-install',
            action='store_true',
            help='Use symlinks instead of copying files where possible')
        parser.add_argument(
            '--test-result-base',
            type=get_cwd_path_resolver(),
            help='The base path for all test results (default: --build-base)')
        parser.add_argument(
            '--continue-on-error',
            action='store_true',
            help='Continue other packages when a package fails to build '
                 '(packages recursively depending on the failed package are '
                 'skipped)')
        add_executor_arguments(parser)
        add_event_handler_arguments(parser)

        add_packages_arguments(parser)

        decorated_parser = DestinationCollectorDecorator(parser)
        add_task_arguments(decorated_parser, 'colcon_core.task.build')
        self.task_argument_destinations = decorated_parser.get_destinations()

    def main(self, *, context):  # noqa: D102
        check_and_mark_build_tool(context.args.build_base)
        check_and_mark_install_layout(
            context.args.install_base,
            merge_install=context.args.merge_install)

        self._create_paths(context.args)

        decorators = get_packages(
            context.args,
            additional_argument_names=self.task_argument_destinations,
            recursive_categories=('run', ))

        install_base = os.path.abspath(os.path.join(
            os.getcwd(), context.args.install_base))
        jobs, unselected_packages = self._get_jobs(
            context.args, decorators, install_base)

        on_error = OnError.interrupt \
            if not context.args.continue_on_error else OnError.skip_downstream

        def post_unselected_packages(*, event_queue):
            nonlocal unselected_packages
            names = [pkg.name for pkg in unselected_packages]
            for name in sorted(names):
                event_queue.put(
                    (JobUnselected(name), None))

        rc = execute_jobs(
            context, jobs, on_error=on_error,
            pre_execution_callback=post_unselected_packages)

        self._create_prefix_scripts(install_base, context.args.merge_install)

        return rc

    def _create_paths(self, args):
        self._create_path(args.build_base)
        self._create_path(args.install_base)

    def _create_path(self, path):
        path = Path(os.path.abspath(path))
        if not path.exists():
            path.mkdir(parents=True, exist_ok=True)
        ignore_marker = path / IGNORE_MARKER
        if not os.path.lexists(str(ignore_marker)):
            with ignore_marker.open('w'):
                pass

    def _get_jobs(self, args, decorators, install_base):
        jobs = OrderedDict()
        unselected_packages = set()
        for decorator in decorators:
            pkg = decorator.descriptor

            if not decorator.selected:
                unselected_packages.add(pkg)
                continue

            extension = get_task_extension('colcon_core.task.build', pkg.type)
            if not extension:
                logger.warning(
                    f"No task extension to 'build' a '{pkg.type}' package")
                continue

            recursive_dependencies = OrderedDict()
            for dep_name in decorator.recursive_dependencies:
                dep_path = install_base
                if not args.merge_install:
                    dep_path = os.path.join(dep_path, dep_name)
                recursive_dependencies[dep_name] = dep_path

            package_args = BuildPackageArguments(
                pkg, args, additional_destinations=self
                .task_argument_destinations.values())
            ordered_package_args = ', '.join([
                ('%s: %s' % (repr(k), repr(package_args.__dict__[k])))
                for k in sorted(package_args.__dict__.keys())
            ])
            logger.debug(
                f"Building package '{pkg.name}' with the following arguments: "
                f'{{{ordered_package_args}}}')
            task_context = TaskContext(
                pkg=pkg, args=package_args,
                dependencies=recursive_dependencies)

            job = Job(
                identifier=pkg.name,
                dependencies=set(recursive_dependencies.keys()),
                task=extension, task_context=task_context)

            jobs[pkg.name] = job
        return jobs, unselected_packages

    def _create_prefix_scripts(self, install_base, merge_install):
        extensions = get_shell_extensions()
        for priority in extensions.keys():
            extensions_same_prio = extensions[priority]
            for extension in extensions_same_prio.values():
                try:
                    scripts = extension.create_prefix_script(
                        Path(install_base), merge_install)
                    # TODO: Disallow 'None' in v3.0 of ShellExtensionPoint
                    if scripts is not None:
                        assert isinstance(scripts, list), \
                            'create_prefix_script() should return a list'
                except Exception as e:  # noqa: F841
                    # catch exceptions raised in shell extension
                    exc = traceback.format_exc()
                    logger.error(
                        'Exception in shell extension '
                        f"'{extension.SHELL_NAME}': {e}\n{exc}")
                    # skip failing extension, continue with next one
