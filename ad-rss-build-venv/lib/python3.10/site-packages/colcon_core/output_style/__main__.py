# Copyright 2025 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

import copy

from colcon_core.output_style import get_output_style_extensions
from colcon_core.output_style import Style
from colcon_core.output_style import StyleCollection
from colcon_core.output_style import Stylizer


blank_style = StyleCollection(
    **{k: Stylizer.Default for k in vars(Style).keys()})


extension_groups = get_output_style_extensions()
for extension_group in extension_groups.values():
    for name, extension in extension_group.items():
        style = copy.copy(blank_style)
        extension.apply_style(style)
        demo = '\n - '.join(v(k) for k, v in vars(style).items())
        print(f'{name}:\n - ' + demo)
