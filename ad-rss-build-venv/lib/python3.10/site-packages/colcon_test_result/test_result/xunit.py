# Copyright 2016-2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
import traceback
from xml.etree.ElementTree import ElementTree
from xml.etree.ElementTree import ParseError

from colcon_core.logging import colcon_logger
from colcon_core.plugin_system import satisfies_version
from colcon_test_result.test_result import Result
from colcon_test_result.test_result import TestResultExtensionPoint

logger = colcon_logger.getChild(__name__)


class XunitTestResult(TestResultExtensionPoint):
    """
    Collect the xUnit results generated when testing a set of packages.

    It recursively crawls for XML files under the passed build base.
    Each XML file is being parsed and if it has the structure of a xUnit result
    file the statistics are being extracted.
    """

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            TestResultExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def get_test_results(
        self, basepath, *, collect_details, files=None
    ):  # noqa: D102
        results = set()

        for dirpath, dirnames, filenames in os.walk(str(basepath)):
            # skip subdirectories starting with a dot
            dirnames[:] = filter(lambda d: not d.startswith('.'), dirnames)
            dirnames.sort()

            for filename in sorted(filenames):
                if not filename.endswith('.xml'):
                    continue

                path = os.path.join(dirpath, filename)
                try:
                    result = parse_xunit_xml(
                        path, get_testcases=collect_details)
                except ParseError as e:  # noqa: F841
                    logger.warning(
                        "Skipping '{path}': {e}".format_map(locals()))
                    continue
                except ValueError as e:  # noqa: F841
                    logger.debug("Skipping '{path}': {e}".format_map(locals()))
                    continue
                except Exception as e:  # noqa: F841
                    exc = traceback.format_exc()
                    logger.error(
                        "Skipping '{path}': {e}\n{exc}".format_map(locals()))
                    continue
                results.add(result)
                if files is not None:
                    files.add(path)
        return results


def parse_xunit_xml(path, *, get_testcases=False):
    """
    Parse an XML file and interpret it as a xUnit result file.

    See
    https://github.com/google/googletest/blob/master/googletest/docs/advanced.md#generating-an-xml-report
    for an example of the format.

    :param str path: the path of the XML file
    :param parse_testcases: the flag if more information from each test case
      should be extracted
    :type parse_testcases: bool
    :returns: a result containing the stats
    :rtype: :py:class:`colcon_core.verb.test_results.Result`
    :raises ParseError: if the XML is not well-formed
    :raises TypeError: if the root node is neither named 'testsuite' nor
      'testsuites'
    """
    tree = ElementTree()
    root = tree.parse(path)

    result = Result(path)

    if root.tag == 'testsuites':
        for child in root:
            if child.tag == 'testsuite':
                result.add_result(
                    _get_testsuite_result(child, get_testcases=get_testcases))
    elif root.tag == 'testsuite':
        result.add_result(
            _get_testsuite_result(root, get_testcases=get_testcases))
    else:
        raise ValueError(
            "the root tag is neither 'testsuite' nor 'testsuites'")

    return result


def _get_testsuite_result(node, *, get_testcases=False):
    # extract the integer values from various attributes
    result = Result('')
    for slot, attribute, default in (
        ('test_count', 'tests', None),
        ('error_count', 'errors', 0),
        ('failure_count', 'failures', None),
        ('skipped_count', 'skip', 0),
        ('skipped_count', 'skipped', 0),
        ('skipped_count', 'disabled', 0),
    ):
        try:
            value = node.attrib[attribute]
        except KeyError:
            if default is None:
                raise ValueError(
                    "the '{attribute}' attribute is required"
                    .format_map(locals()))
            value = default
        try:
            value = int(value)
        except ValueError:
            raise ValueError(
                "the '{attribute}' attribute should be an integer"
                .format_map(locals()))
        if value < 0:
            raise ValueError(
                "the '{attribute}' attribute should be a positive integer"
                .format_map(locals()))
        setattr(result, slot, getattr(result, slot) + value)

    if get_testcases:
        result.details += parse_testcases(node)

    return result


def parse_testcases(node):
    """
    Parse information about testcases with errors and failures.

    :param node: The XML node
    :returns: A string for each testcase
    :rtype: list
    """
    testcases = []
    # recursively process test suites
    if node.tag == 'testsuites':
        for child in node:
            testcases += parse_testcases(child)
        return testcases

    if node.tag != 'testsuite':
        return testcases

    # extract information
    for child in node:
        if child.tag != 'testcase':
            continue

        # extract information from test case
        testcase = Testcase(
            classname=child.attrib.get('classname'),
            file_=child.attrib.get('file'),
            line=child.attrib.get('line'),
            name=child.attrib.get('name'),
            time=child.attrib.get('time'))
        for child2 in child:
            if child2.tag == 'error':
                testcase.error_messages.append(
                    child2.attrib.get('message', ''))
            elif child2.tag == 'failure':
                testcase.failure_messages.append(
                    child2.attrib.get('message', ''))
            elif child2.tag == 'system-out':
                testcase.system_outs.append(child2.text)
            elif child2.tag == 'system-err':
                testcase.system_errs.append(child2.text)

        if testcase.error_messages or testcase.failure_messages:
            testcases.append(str(testcase))

    return testcases


class Testcase:
    """Information from a `testcase` tag."""

    __slots__ = (
        'classname',
        'file',
        'line',
        'name',
        'time',
        'error_messages',
        'failure_messages',
        'system_outs',
        'system_errs',
    )

    __test__ = False  # prevent the class to falsely be identified as a test

    def __init__(
        self, *, classname=None, file_=None, line=None, name=None, time=None
    ):  # noqa: D107
        self.classname = classname
        self.file = file_
        self.line = line
        self.name = name
        self.time = float(time) if time is not None else None
        self.error_messages = []
        self.failure_messages = []
        self.system_outs = []
        self.system_errs = []

    def __str__(self):  # noqa: D105
        # label of testcase
        msg_parts = []
        if self.classname:
            msg_parts.append(self.classname)
        if self.name:
            msg_parts.append(self.name)
        if self.file:
            suffix = ':' + self.line if self.line else ''
            msg_parts.append(
                '({self.file}{suffix})'.format_map(locals()))
        msg_parts = [' '.join(msg_parts)]

        # more information
        msg_parts += _get_messages('error message', self.error_messages)
        msg_parts += _get_messages(
            'failure message', self.failure_messages)
        msg_parts += _get_messages('stdout output', self.system_outs)
        msg_parts += _get_messages('stderr output', self.system_errs)

        return '\n'.join(msg_parts)


def _get_messages(label, messages):
    lines = []
    if messages:
        lines.append('<<< ' + label)
        for message in messages:
            for line in message.strip('\n\r').splitlines():
                lines.append('  ' + line)
        lines.append('>>>')
    return lines
