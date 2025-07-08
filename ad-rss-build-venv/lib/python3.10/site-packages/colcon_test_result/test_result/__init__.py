# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import inspect
from pathlib import Path
import traceback

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import instantiate_extensions
from colcon_core.plugin_system import order_extensions_by_name

logger = colcon_logger.getChild(__name__)


class Result:
    """Statistics from a set of tests."""

    __slots__ = (
        'path',
        'test_count',
        'error_count',
        'failure_count',
        'skipped_count',
        'details',
    )

    def __init__(self, path):  # noqa: D107
        self.path = path
        self.test_count = 0
        self.error_count = 0
        self.failure_count = 0
        self.skipped_count = 0
        self.details = []

    def add_result(self, result):
        """
        Add the statistics from another result to this one.

        The `path` is not changed.

        :param result: The other result
        """
        self.test_count += result.test_count
        self.error_count += result.error_count
        self.failure_count += result.failure_count
        self.skipped_count += result.skipped_count
        self.details += result.details

    def __str__(self):  # noqa: D105
        data = {}
        for slot in self.__slots__:
            data[slot] = getattr(self, slot)
            if slot in ('test_count', 'error_count', 'failure_count'):
                data[slot + '_plural'] = 's' if data[slot] != 1 else ''
        return \
            '{path}: ' \
            '{test_count} test{test_count_plural}, ' \
            '{error_count} error{error_count_plural}, ' \
            '{failure_count} failure{failure_count_plural}, ' \
            '{skipped_count} skipped' \
            .format(**data)


class TestResultExtensionPoint:
    """
    The interface for test result extensions.

    A test result extension provides information about previously run tests.

    For each instance the attribute `TEST_RESULT_NAME` is being set
    to the basename of the entry point registering the extension.
    """

    """The version of the test result extension interface."""
    EXTENSION_POINT_VERSION = '1.0'

    def get_test_results(self, basepath, *, collect_details, files=None):
        """
        Get all test results under the given basepath.

        This method must be overridden in a subclass.

        :param basepath: The basepath to crawl for test results
        :param collect_details: A flag if details for errors and failures
          should be collected
        :param files: If passed the argument must be a set and it is being
          populated with all files providing result information
        :returns: A set of Result instances
        """
        raise NotImplementedError()


def get_test_result_extensions(*, exclude_names=None):
    """
    Get the available test result extensions.

    The extensions are ordered by their entry point name.

    :rtype: OrderedDict
    """
    extensions = instantiate_extensions(__name__, exclude_names=exclude_names)
    for name, extension in extensions.items():
        extension.TEST_RESULT_NAME = name
    return order_extensions_by_name(extensions)


def get_test_results(basepath, *, collect_details, files=None):
    """
    Get the test results.

    :param basepath: The basepath to collect test results from
    :param collect_details: A flag if details for errors and failures
      should be collected
    :param files: If passed the argument must be a set and it is being
      populated with all files providing result information
    :returns: A set of Result instances
    """
    extensions = get_test_result_extensions()

    all_test_results = set()
    for extension in extensions.values():
        logger.log(1, 'get_test_results(%s)', extension.TEST_RESULT_NAME)

        func = extension.get_test_results
        signature = inspect.signature(func)
        kwargs = {'collect_details': collect_details}
        if 'files' in signature.parameters:
            kwargs['files'] = files

        try:
            test_results = func(
                Path(basepath), **kwargs)
            assert isinstance(test_results, set), \
                'get_test_results() should return a set'
        except Exception as e:  # noqa: F841
            # catch exceptions raised in test result extension
            exc = traceback.format_exc()
            logger.error(
                'Exception in test result extension '
                "'{extension.TEST_RESULT_NAME}': {e}\n{exc}"
                .format_map(locals()))
            # skip failing extension, continue with next one
            continue
        all_test_results |= test_results
    return all_test_results
