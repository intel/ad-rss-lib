# Copyright 2022 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

from pathlib import Path
import sysconfig


def get_python_install_path(name, vars_=()):
    """
    Get Python install paths matching Colcon's preferred scheme.

    See sysconfig.get_path for more info about the arguments.

    :param name: Name of the path type
    :param vars_: A dictionary of variables updating the values of
        sysconfig.get_config_vars()
    :rtype: Pathlib.Path
    """
    kwargs = {}
    kwargs['vars'] = dict(vars_)
    # Avoid deb_system because it means using --install-layout deb
    # which ignores --prefix and hardcodes it to /usr
    if 'deb_system' in sysconfig.get_scheme_names() or \
            'osx_framework_library' in sysconfig.get_scheme_names():
        kwargs['scheme'] = 'posix_prefix'
    # The presence of the rpm_prefix scheme indicates that posix_prefix
    # has been patched to inject `local` into the installation locations.
    # The rpm_prefix scheme is a backup of what posix_prefix was before it was
    # patched.
    elif 'rpm_prefix' in sysconfig.get_scheme_names():
        kwargs['scheme'] = 'rpm_prefix'

    return Path(sysconfig.get_path(name, **kwargs))
