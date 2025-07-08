# Copyright 2019 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import pathlib

RESULT_FILENAME = 'colcon_{verb_name}.rc'

TEST_FAILURE_RESULT = 'test failures'


def get_previous_result(package_build_base, verb_name):
    """
    Get the result of a verb from the package build directory.

    :param str package_build_base: The build directory of a package
    :param str verb_name: The invoked verb name
    :returns: The previously persisted result, otherwise None
    :rtype: str
    """
    path = _get_result_path(package_build_base, verb_name)
    if not path.exists():
        return None
    return path.read_text().rstrip()


def set_result(package_build_base, verb_name, result):
    """
    Persist the result of a verb in the package build directory.

    :param str package_build_base: The build directory of a package
    :param str verb_name: The invoked verb name
    :param str result: The result of the invocation
    """
    path = _get_result_path(package_build_base, verb_name)
    path.parent.mkdir(parents=True, exist_ok=True)
    path.write_text(str(result) + '\n')


def _get_result_path(package_build_base, verb_name):
    return pathlib.Path(
        package_build_base) / RESULT_FILENAME.format_map(locals())
