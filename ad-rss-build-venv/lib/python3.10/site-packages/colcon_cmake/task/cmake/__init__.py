# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import sys

from colcon_core.environment_variable import EnvironmentVariable
from colcon_core.subprocess import check_output
from packaging.version import Version

"""Environment variable to override the CMake executable"""
CMAKE_COMMAND_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'CMAKE_COMMAND', 'The full path to the CMake executable')
"""Environment variable to override the CTest executable"""
CTEST_COMMAND_ENVIRONMENT_VARIABLE = EnvironmentVariable(
    'CTEST_COMMAND', 'The full path to the CTest executable')


def which_executable(environment_variable, executable_name):
    """
    Determine the path of an executable.

    An environment variable can be used to override the location instead of
    relying on searching the PATH.

    :param str environment_variable: The name of the environment variable
    :param str executable_name: The name of the executable
    :rtype: str
    """
    value = os.getenv(environment_variable)
    if value:
        return value
    return shutil.which(executable_name)


CMAKE_EXECUTABLE = which_executable(
    CMAKE_COMMAND_ENVIRONMENT_VARIABLE.name, 'cmake')
CTEST_EXECUTABLE = which_executable(
    CTEST_COMMAND_ENVIRONMENT_VARIABLE.name, 'ctest')
MSBUILD_EXECUTABLE = shutil.which('msbuild')


FILE_API_CLIENT_NAME = 'client-colcon-cmake'


def add_api_queries(path):
    """
    Create or update CMake file API queries.

    :param str path: The path of the directory contain the generated build
      system
    """
    api_base = Path(path) / '.cmake' / 'api' / 'v1'
    query_base = api_base / 'query' / FILE_API_CLIENT_NAME

    query_base.mkdir(parents=True, exist_ok=True)
    (query_base / 'codemodel-v2').touch()


def _read_codemodel(path):
    api_base = Path(path) / '.cmake' / 'api' / 'v1'
    reply_base = api_base / 'reply'

    for index_path in sorted(reply_base.glob('index-*.json'), reverse=True):
        break
    else:
        return None

    with index_path.open('r') as f:
        index_data = json.load(f)

    try:
        codemodel_file = (
            index_data['reply']
            [FILE_API_CLIENT_NAME]
            ['codemodel-v2']
            ['jsonFile']
        )
    except KeyError:
        return None

    with (reply_base / codemodel_file).open('r') as f:
        return json.load(f)


def _get_codemodel_targets(path):
    codemodel_data = _read_codemodel(path)
    if codemodel_data is None:
        return None

    config_data = codemodel_data.get('configurations', ())
    if len(config_data) != 1:
        return None

    targets = []

    for dir_data in config_data[0].get('directories') or ():
        if dir_data.get('hasInstallRule') is True:
            targets.append('install')
            break

    for target_data in config_data[0].get('targets') or ():
        target_name = target_data.get('name')
        if target_name is not None:
            targets.append(target_name)

    return targets


async def has_target(path, target):
    """
    Check if the CMake generated build system has a specific target.

    :param str path: The path of the directory contain the generated build
      system
    :param str target: The name of the target
    :rtype: bool
    """
    codemodel_targets = _get_codemodel_targets(path)
    if codemodel_targets is not None:
        return target in codemodel_targets
    generator = get_generator(path)
    if 'Unix Makefiles' in generator:
        return target in await get_makefile_targets(path)
    if 'Ninja' in generator:
        return target in get_ninja_targets(path)
    if 'Visual Studio' in generator:
        assert target == 'install'
        install_project_file = get_project_file(path, 'INSTALL')
        return install_project_file is not None
    assert False, \
        f"'has_target' not implemented for CMake generator '{generator}'"


async def get_makefile_targets(path):
    """
    Get all targets from a `Makefile`.

    :param str path: The path of the directory contain the Makefile
    :returns: The target names
    :rtype: list
    """
    output = await check_output([
        CMAKE_EXECUTABLE, '--build', path, '--target', 'help'], cwd=path)
    lines = output.decode().splitlines()
    prefix = '... '
    return [line[len(prefix):] for line in lines if line.startswith(prefix)]


def get_ninja_targets(path):
    """
    Get all targets from a `build.ninja` file.

    :param str path: The path of the directory contain the Makefile
    :returns: The target names
    :rtype: list
    """
    output = subprocess.check_output([
        CMAKE_EXECUTABLE, '--build', path, '--target', 'help'], cwd=path)
    lines = output.decode().splitlines()
    suffix = ':'
    return [
        line.split(' ')[0][:-len(suffix)]
        for line in lines
        if len(line.split(' ')) == 2 and line.split(' ')[0].endswith(suffix)]


def get_buildfile(cmake_cache):
    """
    Get the buildfile of the used CMake generator.

    :param Path cmake_cache: The path of the directory contain the build system
    :returns: The buildfile
    :rtype: Path
    """
    generator = get_variable_from_cmake_cache(
        str(cmake_cache.parent), 'CMAKE_GENERATOR')
    if generator is not None:
        if 'Ninja' in generator:
            return cmake_cache.parent / 'build.ninja'
        if 'Visual Studio' in generator:
            return cmake_cache.parent / 'ALL_BUILD.vcxproj'
    return cmake_cache.parent / 'Makefile'


def get_generator(path, cmake_args=None):
    """
    Get CMake generator name.

    Either the CMake generator is specified in the command line arguments or it
    is being read from the `CMakeCache.txt` file.

    :param str path: The path of the directory contain the CMake cache file
    :param list cmake_args: The CMake command line arguments
    :rtype: str
    """
    # check for generator in the command line arguments first
    generator = None
    for i, cmake_arg in enumerate(cmake_args or []):
        if cmake_arg == '-G' and i < len(cmake_args) - 1:
            generator = cmake_args[i + 1]
        if cmake_arg.startswith('-G') and len(cmake_arg) > 2:
            generator = cmake_arg[2:]
    if generator is None:
        # get the generator from the CMake cache
        generator = get_variable_from_cmake_cache(
            path, 'CMAKE_GENERATOR')
    return generator


def is_multi_configuration_generator(path, cmake_args=None):
    """
    Check if the used CMake generator is a multi configuration generator.

    :param str path: The path of the directory contain the CMake cache file
    :param list cmake_args: The CMake command line arguments
    :rtype: bool
    """
    known_multi_configuration_generators = (
        'Ninja Multi-Config',
        'Visual Studio',
        'Xcode',
    )
    generator = get_generator(path, cmake_args)
    for multi in known_multi_configuration_generators:
        if multi in generator:
            return True
    return False


def get_variable_from_cmake_cache(path, var, *, default=None):
    """
    Get a variable value from the CMake cache.

    :param str path: The path of the directory contain the CMake cache file
    :param str var: The name of the variable
    :param default: The default value returned if the variable is not defined
      in the cache
    :rtype: str
    """
    lines = _get_cmake_cache_lines(path)
    if lines is None:
        return default
    line_prefix = f'{var}:'
    for line in lines:
        if line.startswith(line_prefix):
            try:
                index = line.index('=')
            except ValueError:
                continue
            return line[index + 1:]
    return default


def _get_cmake_cache_lines(path):
    cmake_cache = os.path.join(path, 'CMakeCache.txt')
    if not os.path.exists(cmake_cache):
        return None
    with open(cmake_cache, 'r') as h:
        content = h.read()
    return content.splitlines()


def get_project_file(path, target):
    """
    Get a Visual Studio project file for a specific target.

    :param str path: The path of the directory project files
    :param str target: The name of the target
    :returns: The path of the project file if it exists, otherwise None
    :rtype: str
    """
    project_file = os.path.join(path, target + '.vcxproj')
    if not os.path.isfile(project_file):
        return None
    return project_file


def get_visual_studio_version():
    """
    Get the Visual Studio version.

    :rtype: str
    """
    return os.environ.get('VisualStudioVersion', None)


"""
Global variable for the cached CMake version number.

When valid, this will be a packaging.version.Version.
It may also be None when the CMake version could not be determined to avoid
trying to determine it again.
"""
_cached_cmake_version = False


def get_cmake_version():
    """
    Get the CMake version.

    The function caches the result on the first invocation and reuses that on
    subsequent invocations.

    :returns: The version as reported by `CMAKE_EXECUTABLE --version`, or None
      when the version number could not be determined
    :rtype packaging.version.Version
    """
    global _cached_cmake_version
    if _cached_cmake_version is False:
        _cached_cmake_version = _parse_cmake_version()
    return _cached_cmake_version


def _parse_cmake_version():
    """
    Parse the CMake version printed by `CMAKE_EXECUTABLE --version`.

    :returns: The version parsed by packaging.version.Version, or None
    :rtype packaging.version.Version
    """
    try:
        output = subprocess.check_output(
            [CMAKE_EXECUTABLE, '--version'], stderr=subprocess.STDOUT)
    except subprocess.CalledProcessError as e:
        print('Failed to determine CMake version: ' + e.output.decode(),
              file=sys.stderr)
    else:
        lines = output.decode().splitlines()
        if lines:
            # Parse just the version part of the string.
            return _parse_cmake_version_string(lines[0])
    return None


def _parse_cmake_version_string(version_string):
    """
    Parse the given CMake version string.

    Expects strings of the form 'cmake version 3.15.1'.

    :param str version_string: The version string to parse.
    :returns: The parsed version string or None on failure to parse.
    :rtype packaging.version.Version
    """
    # Extract just the version part of the string.
    ver_re_str = r'^(?:.*\s)?(\d+\.\d+\.\d+).*'
    ver_match = re.match(ver_re_str, version_string)
    if ver_match:
        return Version(ver_match.group(1))
    return None
