# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import OrderedDict

from colcon_core.environment import EnvironmentExtensionPoint
from colcon_core.environment import logger
from colcon_core.plugin_system import satisfies_version
from colcon_core.shell import create_environment_hook


class CmakeModulePathEnvironment(EnvironmentExtensionPoint):
    """Extend the `CMAKE_MODULE_PATH` variable to find CMake modules."""

    def __init__(self):  # noqa: D107
        super().__init__()
        satisfies_version(
            EnvironmentExtensionPoint.EXTENSION_POINT_VERSION, '^1.0')

    def create_environment_hooks(self, prefix_path, pkg_name):  # noqa: D102
        hooks = OrderedDict()

        logger.log(1, "checking '%s' for CMake module files" % prefix_path)
        for path in self._get_potential_cmake_module_paths(
            prefix_path, pkg_name
        ):
            if not path.is_dir():
                continue
            # skip paths which are the same but only differ in case
            if any(path.samefile(p) for p in hooks.keys()):
                continue

            for filename in path.iterdir():
                if not filename.is_file():
                    continue
                if (
                    filename.name.startswith('Find') and
                    filename.name.endswith('.cmake')
                ):
                    hooks[path] = create_environment_hook(
                        'cmake_module_path' +
                        (str(len(hooks)) if hooks else ''),
                        prefix_path, pkg_name, 'CMAKE_MODULE_PATH',
                        str(path.relative_to(prefix_path)),
                        mode='prepend')

        return [hook for hook_list in hooks.values() for hook in hook_list]

    def _get_potential_cmake_module_paths(self, prefix_path, pkg_name):
        paths = []
        # see https://cmake.org/cmake/help/latest/command/find_package.html
        # for the list of locations considered by default / convention

        # <prefix>/ (W)
        # <prefix>/(cmake|CMake)/ (W)
        # skipped due to not being package specific in the --merge-install case

        # <prefix>/<name>*/ (W)
        # <prefix>/<name>*/(cmake|CMake)/ (W)
        # skipped non-FHS compliant directories

        # <prefix>/(lib/<arch>|lib*|share)/cmake/<name>*/ (U)
        # skipped arch specific directory since arch is unknown here
        paths.append(prefix_path / 'lib64' / 'cmake' / pkg_name)
        paths.append(prefix_path / 'lib32' / 'cmake' / pkg_name)
        paths.append(prefix_path / 'libx32' / 'cmake' / pkg_name)
        paths.append(prefix_path / 'lib' / 'cmake' / pkg_name)
        paths.append(prefix_path / 'share' / 'cmake' / pkg_name)
        # <prefix>/(lib/<arch>|lib*|share)/<name>*/ (U)
        # skipped arch specific directory since arch is unknown here
        paths.append(prefix_path / 'lib64' / pkg_name)
        paths.append(prefix_path / 'lib32' / pkg_name)
        paths.append(prefix_path / 'libx32' / pkg_name)
        paths.append(prefix_path / 'lib' / pkg_name)
        paths.append(prefix_path / 'share' / pkg_name)
        # <prefix>/(lib/<arch>|lib*|share)/<name>*/(cmake|CMake)/ (U)
        # skipped arch specific directory since arch is unknown here
        paths.append(prefix_path / 'lib64' / pkg_name / 'cmake')
        paths.append(prefix_path / 'lib32' / pkg_name / 'cmake')
        paths.append(prefix_path / 'libx32' / pkg_name / 'cmake')
        paths.append(prefix_path / 'lib' / pkg_name / 'cmake')
        paths.append(prefix_path / 'lib64' / pkg_name / 'CMake')
        paths.append(prefix_path / 'lib32' / pkg_name / 'CMake')
        paths.append(prefix_path / 'libx32' / pkg_name / 'CMake')
        paths.append(prefix_path / 'lib' / pkg_name / 'CMake')
        paths.append(prefix_path / 'share' / pkg_name / 'cmake')
        paths.append(prefix_path / 'share' / pkg_name / 'CMake')

        # <prefix>/<name>*/(lib/<arch>|lib*|share)/cmake/<name>*/ (W/U)
        # <prefix>/<name>*/(lib/<arch>|lib*|share)/<name>*/ (W/U)
        # <prefix>/<name>*/(lib/<arch>|lib*|share)/<name>*/(cmake|CMake)/ (W/U)
        # <prefix>/<name>.framework/Resources/ (A)
        # <prefix>/<name>.framework/Resources/CMake/ (A)
        # <prefix>/<name>.framework/Versions/*/Resources/ (A)
        # <prefix>/<name>.framework/Versions/*/Resources/CMake/ (A)
        # <prefix>/<name>.app/Contents/Resources/ (A)
        # <prefix>/<name>.app/Contents/Resources/CMake/ (A)
        # skipped non-FHS compliant directories

        return paths
