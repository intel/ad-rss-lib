# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0


def package_name_completer(prefix, **kwargs):
    """Callable returning a list of packages names."""
    from colcon_core.package_discovery import discover_packages
    from colcon_core.package_identification \
        import get_package_identification_extensions
    # discover packages
    extensions = get_package_identification_extensions()
    pkgs = discover_packages(kwargs.get('parsed_args'), extensions)
    # return package names starting with the given prefix
    pkg_names = [pkg.name for pkg in pkgs]
    return (name for name in pkg_names if name.startswith(prefix))
