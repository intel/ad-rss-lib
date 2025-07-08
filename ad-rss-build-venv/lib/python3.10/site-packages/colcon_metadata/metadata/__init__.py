# Copyright 2016-2018 Dirk Thomas
# Licensed under the Apache License, Version 2.0

from collections import defaultdict
import os

from colcon_core.location import get_config_path
from colcon_core.logging import colcon_logger

logger = colcon_logger.getChild(__name__)

metadata_by_name = defaultdict(dict)
metadata_by_path = defaultdict(dict)


def get_metadata_path():
    """
    Get the path where metadata is stored.

    :rtype: Path
    """
    return get_config_path() / 'metadata'


def get_metadata_files(path=None):
    """
    Get the paths of all metadata files.

    The metadata path is recursively being crawled for files ending in `.meta`.
    Directories starting with a dot (`.`) are being ignored.

    :rtype: list
    """
    metadata_path = path or get_metadata_path()
    if not metadata_path.is_dir():
        return []

    files = []
    for dirpath, dirnames, filenames in os.walk(
        str(metadata_path), followlinks=True
    ):
        # skip subdirectories starting with a dot
        dirnames[:] = filter(lambda d: not d.startswith('.'), dirnames)
        dirnames.sort()

        for filename in sorted(filenames):
            if not filename.endswith('.meta'):
                continue
            path = os.path.join(dirpath, filename)
            files.append(path)
    return files


def merge_metadata(dst_dict, src_dict, meta_source):
    """
    Merge the data from one dictionary into another.

    For each key of the other dictionary ``merge_metadata_value()`` is being
    called to set or update the key in the destination dictionary.

    :param dst_dict: The dictionary to be updated
    :param src_dict: The dictionary containing the information to be merged
      into the destination dictionary
    :param str meta_source: The source of the metadata, only used for log
      messages
    """
    for key, value in src_dict.items():
        merge_metadata_value(dst_dict, key, value, meta_source)


def merge_metadata_value(dict_, key, value, meta_source):
    """
    Set or update a key of a dictionary.

    If the key exists and the passed value as well as the current value of the
    key are dictionaries then the current values are being updated with the
    passed values.

    If the key exists and the passed value as well as the current value of the
    key are lists then the passed values are being appended to the current
    values.

    Otherwise the key is being set to the passed value potentially overwriting
    an existing value.

    :param dict_: The dictionary to be updated
    :param key: The key to set or update
    :param value: The value used to set or update the key
    :param str meta_source: The source of the metadata, only used for log
      messages
    """
    old_value = dict_.get(key, None)

    if isinstance(old_value, dict) and isinstance(value, dict):
        # update dictionary
        old_value.update(value)
        return

    if isinstance(old_value, list) and isinstance(value, list):
        # extend list
        old_value += value
        return

    if isinstance(old_value, set) and isinstance(value, set):
        # union update set
        old_value |= value
        return

    if old_value is not None and type(old_value) != type(value):
        logger.warning(
            "metadata from '{meta_source}' overwrites '{key}' with different "
            "type from value '{old_value}' to '{value}'".format_map(locals()))

    # overwrite existing value
    dict_[key] = value
