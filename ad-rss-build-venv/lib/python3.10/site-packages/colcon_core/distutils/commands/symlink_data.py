# Copyright 2023 Open Source Robotics Foundation, Inc.
# Licensed under the Apache License, Version 2.0

from distutils.command.install_data import install_data
import os


class symlink_data(install_data):  # noqa: N801
    """Like install_data, but symlink files instead of copying."""

    def copy_file(self, src, dst, **kwargs):  # noqa: D102
        if kwargs.get('link'):
            return super().copy_file(src, dst, **kwargs)

        if self.force:
            # os.symlink fails if the destination exists as a regular file
            if os.path.isdir(dst):
                target = os.path.join(dst, os.path.basename(src))
            else:
                target = dst
            if os.path.exists(dst) and not os.path.islink(dst):
                os.remove(target)

        kwargs['link'] = 'sym'
        src = os.path.abspath(src)
        return super().copy_file(src, dst, **kwargs)
