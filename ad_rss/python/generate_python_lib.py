#!/usr/bin/python

# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

"""
This module uses pygccxml and py++ to generate
Python interfaces for all classes and datatypes
of the ad_rss library.

The resulting library is called libad_rss_python
"""

from python_wrapper_helper import generate_python_wrapper, post_process_python_wrapper


def main():
    """
    Main function to generate Python-C++ binding code
    """
    header_dirs = {
        "../generated/include",
        "../impl/include"
    }
    include_dirs = {
        "../../dependencies/map/ad_physics/generated/include",
        "../../dependencies/map/ad_physics/impl/include",
        "../../dependencies/spdlog/include",
    }

    generate_python_wrapper(library_name="libad_rss_python",
                            cpp_filename="AdRssPythonWrapper.cpp",
                            header_directories=header_dirs,
                            include_paths=include_dirs,
                            declarations={
                                "ad", "toString", "fromString", "std::to_string", "std::sqrt", "std::fabs", "std::numeric_limits"}
                            )

    # these are additional replacements that have to be done...
    additional_replacements = {
        # RoadSegment: vector<vector>>, set name manually, tool doesn't understand correctly
        ("\"vector_less__ad_scope_rss_scope_world_scope_LaneSegment__greater_\"", "\"RoadSegment\"")
    }

    post_process_python_wrapper(header_directories=header_dirs,
                                cpp_filename="AdRssPythonWrapper.cpp",
                                additional_replacements=additional_replacements,
                                spdx_license="LGPL-2.1-only")

if __name__ == '__main__':
    main()
