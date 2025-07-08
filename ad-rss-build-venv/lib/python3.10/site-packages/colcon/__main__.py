# Copyright 2010 Dirk Thomas
# Licensed under the Apache License, Version 2.0

# This module exists for multi-Python environments
# so the user can invoke colcon as `python -m colcon`

import sys

import colcon_core.command

sys.exit(colcon_core.command.main())
