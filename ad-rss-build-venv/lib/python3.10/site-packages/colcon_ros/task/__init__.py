# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
import warnings


def add_app_to_cpp(env):
    """
    Add AMENT_PREFIX_PATH to CMAKE_PREFIX_PATH.

    Each ament prefix path is inserted before the first catkin prefix path or
    at the end if none of the CMake prefix paths has a '.catkin' marker file.
    """
    ament_prefix_path = os.environ.get('AMENT_PREFIX_PATH')
    if ament_prefix_path:
        cmake_prefix_path = env.get('CMAKE_PREFIX_PATH')
        cpp = cmake_prefix_path.split(os.pathsep) if cmake_prefix_path else []
        cpp_has_dot_catkin = [
            os.path.exists(os.path.join(p, '.catkin')) for p in cpp]
        app = ament_prefix_path.split(os.pathsep)
        for p in app:
            if p not in cpp:
                try:
                    index = cpp_has_dot_catkin.index(True)
                    cpp.insert(index, p)
                    cpp_has_dot_catkin.insert(index, False)
                except ValueError:
                    cpp.append(p)
        env['CMAKE_PREFIX_PATH'] = os.pathsep.join(cpp)


def append_app_to_cpp(env):
    """Append AMENT_PREFIX_PATH to CMAKE_PREFIX_PATH."""
    warnings.warn(
        'colcon_ros.task.append_app_to_cpp() will be removed in the future',
        DeprecationWarning, stacklevel=2)
    ament_prefix_path = os.environ.get('AMENT_PREFIX_PATH')
    if ament_prefix_path:
        cmake_prefix_path = env.get('CMAKE_PREFIX_PATH')
        cpp = cmake_prefix_path.split(os.pathsep) if cmake_prefix_path else []
        app = ament_prefix_path.split(os.pathsep)
        for p in app:
            if p not in cpp:
                cpp.append(p)
        env['CMAKE_PREFIX_PATH'] = os.pathsep.join(cpp)


def extend_cpp_with_app(args):
    """Extend CMAKE_PREFIX_PATH with AMENT_PREFIX_PATH."""
    warnings.warn(
        'colcon_ros.task.extend_cpp_with_app() will be removed in the future',
        DeprecationWarning, stacklevel=2)
    ament_prefix_path = os.environ.get('AMENT_PREFIX_PATH')
    if ament_prefix_path:
        ament_prefix_path = ament_prefix_path.replace(
            os.pathsep, ';')
        if args.cmake_args is None:
            args.cmake_args = []
        # check if the CMAKE_PREFIX_PATH is explicitly set
        prefix = '-DCMAKE_PREFIX_PATH='
        for i, value in reversed(list(enumerate(args.cmake_args))):
            if not value.startswith(prefix):
                continue
            # extend the last existing entry
            existing = value[len(prefix):]
            if existing:
                existing = ';' + existing
            args.cmake_args[i] = \
                f'-DCMAKE_PREFIX_PATH={ament_prefix_path}{existing}'
            break
        else:
            # otherwise extend the environment variable
            existing = os.environ.get('CMAKE_PREFIX_PATH', '')
            if existing:
                existing = ';' + existing.replace(
                    os.pathsep, ';')
            args.cmake_args.append(
                f'-DCMAKE_PREFIX_PATH={ament_prefix_path}{existing}')
