# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

project(ad_rss_map_integration_python)

include(GNUInstallDirs)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)


find_package(ad_rss REQUIRED CONFIG)
get_target_property(AD_RSS_INCLUDES ad_rss INTERFACE_INCLUDE_DIRECTORIES)

find_package(ad_map_access REQUIRED CONFIG)
get_target_property(AD_MAP_ACCESS_INCLUDES ad_map_access INTERFACE_INCLUDE_DIRECTORIES)

find_package(ad_physics REQUIRED CONFIG)
get_target_property(AD_PHYSICS_INCLUDES ad_physics INTERFACE_INCLUDE_DIRECTORIES)

find_package(spdlog REQUIRED CONFIG)
get_target_property(SPDLOG_INCLUDES spdlog::spdlog INTERFACE_INCLUDE_DIRECTORIES)

list(APPEND INCLUDE_DIRS
  ${AD_RSS_INCLUDES}
  ${AD_MAP_ACCESS_INCLUDES}
  ${AD_PHYSICS_INCLUDES}
  ${SPDLOG_INCLUDES}
)

string (REPLACE ";" "\", \"" GENPY_INCLUDE_DIRS "${INCLUDE_DIRS}")

find_python_binding_packages()

configure_file(generate_python_lib.py.in generate_python_lib.py)

generate_python_binding_source_code(${CMAKE_CURRENT_BINARY_DIR})

add_library(${PROJECT_NAME}
  ${CMAKE_CURRENT_BINARY_DIR}/AdRssMapIntegrationPythonWrapper.cpp
)

target_compile_definitions(${PROJECT_NAME} PUBLIC ${TARGET_COMPILE_DEFINITIONS})
target_compile_options(${PROJECT_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})
set_property(TARGET ${PROJECT_NAME} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})

target_include_directories(${PROJECT_NAME} PRIVATE
  ${PYTHON_BINDING_PACKAGE_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  ad_rss_map_integration
  ad_rss
  ad_map_access
  ad_physics
  spdlog::spdlog
  ${PYTHON_BINDING_PACKAGE_LIBRARIES}
)

################################################################################
# Install section
################################################################################

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}_EXPORT
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
