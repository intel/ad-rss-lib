# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2018-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

find_package(PkgConfig)

# specify the sources files of the Generator Managed Library ad_map_access.
set(ad_rss_map_integration_SOURCES
  ${CMAKE_CURRENT_LIST_DIR}/src/Logging.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/RssObjectConversion.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/RssSceneCreation.cpp
  ${CMAKE_CURRENT_LIST_DIR}/src/RssSceneCreator.cpp
)

# specify the include directories of the Generator Managed Library ad_map_access.
set(ad_rss_map_integration_INCLUDE_DIRS
  ${CMAKE_CURRENT_LIST_DIR}/include/
)

# (optional) add additional entries in target_include_directories()
#set(ad_rss_map_integration_TARGET_INCLUDE_DIRECTORIES
#)

# (optional) add additional entries in target_link_libraries()
#set(ad_rss_map_integration_TARGET_LINK_LIBRARIES
#)

# (optional) specify the unit test directory of the Generator Managed Library ad_map_access.
# The directory needs to contain a CMakeLists.txt
# The tests should not contain any binding-specifics.
set(ad_rss_map_integration_UNIT_TEST_DIR
  ${CMAKE_CURRENT_LIST_DIR}/tests
)

# (optional) specify the tools directory of the Generator Managed Library ad_map_access.
# The directory needs to contain a CMakeLists.txt
# The tools might be binding-specific.
#set(ad_rss_map_integration_TOOLS_DIR
#  ${CMAKE_CURRENT_LIST_DIR}/tools
#)
