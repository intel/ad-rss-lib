# Copyright 2020 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os
import sys
import types

import pytest


@pytest.hookimpl(hookwrapper=True, tryfirst=True)
def pytest_terminal_summary(terminalreporter, exitstatus=None, config=None):
    """Redirect the summary warnings to stderr when run within colcon."""
    summary_warnings = terminalreporter.summary_warnings

    def redirect_to_stderr(self):
        tw = self._tw
        import _pytest.config
        self._tw = _pytest.config.create_terminal_writer(
            self.config, sys.stderr)
        summary_warnings()
        self._tw = tw

    if 'COLCON' in os.environ:
        terminalreporter.summary_warnings = types.MethodType(
            redirect_to_stderr, terminalreporter)
    yield
