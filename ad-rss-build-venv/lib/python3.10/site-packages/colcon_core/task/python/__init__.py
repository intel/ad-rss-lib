# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

import os


def get_setup_data(pkg, env):
    """
    Get the options from the Python manifest.

    :param pkg: The package descriptor
    :param env: The environment
    :returns: The options
    :rtype: dict
    """
    # get data from pkg metadata if available
    key = 'get_python_setup_options'
    if key not in pkg.metadata:
        return {}
    return dict(pkg.metadata[key](env))


def get_data_files_mapping(data_files):
    """
    Transform the data_files structure into a dictionary.

    :param data_files: either a list of source files or
      a list of tuples where the first element is the destination path and
      the second element is a list of source files
    :returns: a dictionary mapping the source file to a destination file
    :rtype: dict
    """
    mapping = {}
    for data_file in data_files:
        if isinstance(data_file, tuple):
            assert len(data_file) == 2
            dest = data_file[0]
            assert not os.path.isabs(dest)
            sources = data_file[1]
            assert isinstance(sources, list)
            for source in sources:
                assert not os.path.isabs(source), \
                    f"'data_files' must be relative, '{source}' is absolute"
                mapping[source] = os.path.join(dest, os.path.basename(source))
        else:
            assert not os.path.isabs(data_file)
            mapping[data_file] = os.path.basename(data_file)
    return mapping
