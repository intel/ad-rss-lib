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
of the ad_rss_map_integration library.

The resulting library is called libad_rss_map_integration_python
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
        "../../ad_rss/generated/include",
        "../../ad_rss/impl/include",
        "../../dependencies/map/ad_map_access/generated/include",
        "../../dependencies/map/ad_map_access/impl/include",
        "../../dependencies/map/ad_physics/generated/include",
        "../../dependencies/map/ad_physics/impl/include",
        "../../dependencies/spdlog/include"
    }

    generate_python_wrapper(library_name="libad_rss_map_integration_python",
                            cpp_filename="AdRssMapIntegrationPythonWrapper.cpp",
                            header_directories=header_dirs,
                            include_paths=include_dirs,
                            declarations={
                                "ad", "toString", "fromString", "std::to_string", "std::sqrt", "std::fabs", "std::numeric_limits"}
                            )

    additional_replacements = {
        # duplicated definition of RoadArea, LaneIdSet, LandmarkIdSet
        ("{ //::std::vector< std::vector< ad::rss::world::LaneSegment > >",
         " { /*::std::vector< std::vector< ad::rss::world::LaneSegment > >"),
        ("std::vector< std::vector< ad::rss::world::LaneSegment > > >() );",
         "std::vector< std::vector< ad::rss::world::LaneSegment > > >() ); */"),
        ("{ //::std::set< ad::map::lane::LaneId >", " { /*::std::set< ad::map::lane::LaneId >"),
        ("std::set< ad::map::lane::LaneId > >() );", "std::set< ad::map::lane::LaneId > >() );*/"),
        ("{ //::std::set< ad::map::landmark::LandmarkId >", " { /*::std::set< ad::map::landmark::LandmarkId >"),
        ("std::set< ad::map::landmark::LandmarkId > >() );", "std::set< ad::map::landmark::LandmarkId > >() );*/")
    }

    post_process_python_wrapper(header_directories=header_dirs,
                                cpp_filename="AdRssMapIntegrationPythonWrapper.cpp",
                                additional_replacements=additional_replacements,
                                spdx_license="LGPL-2.1-only")

if __name__ == '__main__':
    main()
