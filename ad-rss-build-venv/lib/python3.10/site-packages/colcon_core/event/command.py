# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
import sys

from colcon_core.subprocess import escape_shell_argument


class Command:
    """An event containing an invoked command."""

    __slots__ = ('cmd', 'cwd', 'env', 'shell')

    def __init__(self, cmd, *, cwd, env=None, shell=False):
        """
        Construct a Command.

        :param cmd: the sequence of program arguments
        :param cwd: the working directory
        :param env: a dictionary with environment variables
        :param shell: whether to use the shell as the program to execute
        """
        self.cmd = cmd
        self.cwd = cwd
        self.env = env
        self.shell = shell

    def to_string(self):
        """
        Get a string describing how to invoke the command.

        The message includes the working directory, modifications to
        environment variable and the command including the arguments.
        """
        string = f"Invoking command in '{self.cwd}': "
        string += self._get_env_string()
        string += self._get_cmd_string()
        return string

    def _get_env_string(self):
        # determine differences in environment
        env = {}
        for var_name, new_value in (self.env or {}).items():
            # ignore some environment variables
            if sys.platform != 'win32':
                if var_name in ('PWD', ):
                    continue

            org_value = os.environ.get(var_name, None)
            # skip environment variables with the same value
            if new_value == org_value:
                continue

            # platform specific variable syntax
            if sys.platform != 'win32':
                var = '${' + var_name + '}'
            else:
                var = '%' + var_name + '%'

            if not org_value:
                # added environment variable
                value = new_value
            elif new_value.startswith(org_value):
                # appended environment variable
                value = var + new_value[len(org_value):]
            elif new_value.endswith(org_value):
                # prepended environment variable
                value = new_value[:-len(org_value)] + var
            else:
                # otherwise modified environment variable
                value = new_value
            env[var_name] = value

        # append variable assignments necessary for custom environment
        string = ''
        if env:
            for name in sorted(env.keys()):
                value = env[name]
                string += f'{name}={value} '
        return string

    def _get_cmd_string(self):
        return ' '.join([
            escape_shell_argument(c) if self.shell else c
            for c in self.cmd])


class CommandEnded(Command):
    """An event containing a finished command."""

    __slots__ = ('returncode', )

    def __init__(self, cmd, *, cwd, returncode, env=None, shell=False):
        """
        Construct a CommandEnded.

        :param cmd: the sequence of program arguments
        :param cwd: the working directory
        :param returncode: the returncode of the command
        :param env: a dictionary with environment variables
        :param shell: whether to use the shell as the program to execute
        """
        super().__init__(cmd, cwd=cwd, env=env, shell=shell)
        self.returncode = returncode

    def to_string(self):
        """Get a string describing the invoked command and its return code."""
        string = f"Invoked command in '{self.cwd}' returned " \
            f"'{self.returncode}': "
        string += self._get_env_string()
        string += self._get_cmd_string()
        return string
