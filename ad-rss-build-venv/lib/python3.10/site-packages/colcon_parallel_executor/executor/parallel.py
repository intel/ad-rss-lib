# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import asyncio
from concurrent.futures import ALL_COMPLETED
from concurrent.futures import FIRST_COMPLETED
from contextlib import suppress
import logging
import os
import signal
import sys
import traceback

from colcon_core.executor import ExecutorExtensionPoint
from colcon_core.executor import OnError
from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.subprocess import new_event_loop
from colcon_core.subprocess import SIGINT_RESULT

logger = colcon_logger.getChild(__name__)


def counting_number(value):
    """Convert a number greater than or equal to zero."""
    value = int(value)
    if value < 0:
        raise ValueError()
    return value


class ParallelExecutorExtension(ExecutorExtensionPoint):
    """
    Process multiple packages in parallel.

    The parallelization is honoring the dependency graph between the packages.
    """

    # the priority needs to be higher than the extension providing the
    # sequential execution in order to become the default
    PRIORITY = 110

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            ExecutorExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def add_arguments(self, *, parser):  # noqa: D102
        max_workers_default = os.cpu_count() or 4
        with suppress(AttributeError):
            # consider restricted set of CPUs if applicable
            max_workers_default = min(
                max_workers_default, len(os.sched_getaffinity(0)))
        parser.add_argument(
            '--parallel-workers',
            type=counting_number,
            default=max_workers_default,
            metavar='NUMBER',
            help='The maximum number of packages to process in parallel, '
                 "or '0' for no limit "
                 '(default: {max_workers_default})'.format_map(locals()))

    def execute(self, args, jobs, *, on_error=OnError.interrupt):  # noqa: D102
        # avoid debug message from asyncio when colcon uses debug log level
        asyncio_logger = logging.getLogger('asyncio')
        asyncio_logger.setLevel(logging.INFO)

        loop = new_event_loop()
        asyncio.set_event_loop(loop)

        coro = self._execute(args, jobs, on_error=on_error)
        future = asyncio.ensure_future(coro, loop=loop)
        try:
            logger.debug('run_until_complete')
            loop.run_until_complete(future)
        except KeyboardInterrupt:
            logger.debug('run_until_complete was interrupted')
            # override job rc with special SIGINT value
            for job in self._ongoing_jobs:
                job.returncode = SIGINT_RESULT
            # ignore further SIGINTs
            signal.signal(signal.SIGINT, signal.SIG_IGN)
            # wait for jobs which have also received a SIGINT
            if not future.done():
                logger.debug('run_until_complete again')
                loop.run_until_complete(future)
                assert future.done()
            # read potential exception to avoid asyncio error
            _ = future.exception()
            logger.debug('run_until_complete finished')
            return signal.SIGINT
        except Exception as e:  # noqa: F841
            exc = traceback.format_exc()
            logger.error(
                'Exception in job execution: {e}\n{exc}'.format_map(locals()))
            return 1
        finally:
            # HACK on Windows closing the event loop seems to hang after Ctrl-C
            # even though no futures are pending, but appears fixed in py3.8
            if sys.platform != 'win32' or sys.version_info >= (3, 8):
                logger.debug('closing loop')
                loop.close()
                logger.debug('loop closed')
            else:
                logger.debug('skipping loop closure')
        result = future.result()
        logger.debug(
            "run_until_complete finished with '{result}'".format_map(locals()))
        return result

    async def _execute(self, args, jobs, *, on_error):
        # count the number of dependent jobs for each job
        # in order to process jobs with more dependent jobs first
        recursive_dependent_counts = {}
        for package_name, job in jobs.items():
            # ignore "self" dependency
            recursive_dependent_counts[package_name] = len([
                j for name, j in jobs.items()
                if package_name != name and package_name in j.dependencies])

        futures = {}
        finished_jobs = {}
        rc = 0
        jobs = jobs.copy()
        while jobs or futures:
            # determine "ready" jobs
            ready_jobs = []
            for package_name, job in jobs.items():
                # a pending job is "ready" when all dependencies have finished
                not_finished = set(jobs.keys()) | {
                    f.identifier for f in futures.values()}
                if not (set(job.dependencies) - {package_name}) & not_finished:
                    ready_jobs.append((
                        package_name, job,
                        recursive_dependent_counts[package_name]))

            # order the ready jobs, jobs with more dependents first
            ready_jobs.sort(key=lambda r: -r[2])

            # take "ready" jobs
            take_jobs = []
            for package_name, job, _ in ready_jobs:
                # don't schedule more jobs then workers
                # to prevent starting further jobs when a job fails
                if args.parallel_workers:
                    if len(futures) + len(take_jobs) >= args.parallel_workers:
                        break
                take_jobs.append((package_name, job))
                del jobs[package_name]

            # pass them to the executor
            for package_name, job in take_jobs:
                assert asyncio.iscoroutinefunction(job.__call__), \
                    'Job is not a coroutine'
                future = asyncio.ensure_future(job())
                futures[future] = job

            # wait for futures
            assert futures, 'No futures'
            self._ongoing_jobs = futures.values()
            done_futures, _pending = await asyncio.wait(
                futures.keys(), timeout=30, return_when=FIRST_COMPLETED)

            if not done_futures:  # timeout
                print(
                    '[Processing: %s]' % ', '.join(sorted(
                        f.identifier for f in futures.values())))

            # check results of done futures
            for done_future in done_futures:
                job = futures[done_future]
                del futures[done_future]
                # get result without raising an exception
                if done_future.cancelled():
                    result = signal.SIGINT
                elif done_future.exception():
                    result = done_future.exception()
                    if isinstance(result, KeyboardInterrupt):
                        result = signal.SIGINT
                else:
                    result = done_future.result()
                    if result == SIGINT_RESULT:
                        result = signal.SIGINT
                finished_jobs[job.identifier] = result
                # if any job returned a SIGINT overwrite the return code
                # this should override a potentially earlier set error code
                # in the case where on_error isn't set to OnError.interrupt
                # otherwise set the error code if it is the first
                if result is signal.SIGINT or result and not rc:
                    rc = result

                if result:
                    if on_error in (OnError.interrupt, OnError.skip_pending):
                        # skip pending jobs
                        jobs.clear()

                    if on_error == OnError.skip_downstream:
                        # skip downstream jobs of failed one
                        for pending_name, pending_job in list(jobs.items()):
                            if job.identifier in pending_job.dependencies:
                                del jobs[pending_name]

            # if any job failed or was interrupted cancel pending futures
            if (rc and on_error == OnError.interrupt) or rc is signal.SIGINT:
                if futures:
                    for future in futures.keys():
                        if not future.done():
                            future.cancel()
                    await asyncio.wait(
                        futures.keys(), return_when=ALL_COMPLETED)
                    # collect results from canceled futures
                    for future, job in futures.items():
                        result = future.result()
                        finished_jobs[job.identifier] = result
                break

        # if any job failed
        if any(finished_jobs.values()):
            # flush job output
            self._flush()

        return rc
