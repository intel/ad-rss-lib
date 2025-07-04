# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019-2021 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

cmake_minimum_required(VERSION 3.10)

include(../cmake/ad-rss-lib-version.cmake)
project(ad_rss_map_integration VERSION ${AD-RSS-LIB_VERSION})

include(../cmake/compile-options.cmake)
include(../cmake/hardening.cmake)
include(../cmake/testing.cmake)
include(../cmake/warnings.cmake)
include(../cmake/apidoc.cmake)
include(../cmake/python-binding.cmake)

#convert list to string
string (REPLACE ";" " " TARGET_LINK_FLAGS "${TARGET_LINK_OPTIONS}")

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

set(ad_rss_map_integration_TARGET_INCLUDE_DIRECTORIES)
set(ad_rss_map_integration_TARGET_LINK_LIBRARIES)

find_library(TBB_LIB tbb)
if(NOT TBB_LIB)
  message(FATAL "Required library tbb was not found.")
endif()
list(APPEND ad_rss_map_integration_TARGET_LINK_LIBRARIES ${TBB_LIB})

find_package(ad_physics ${CARLA-MAP_VERSION} REQUIRED CONFIG)
find_package(ad_map_access ${CARLA-MAP_VERSION} REQUIRED CONFIG)
find_package(ad_rss ${AD-RSS-LIB_VERSION} EXACT REQUIRED CONFIG)

file(GLOB_RECURSE ad_rss_map_integration_GENERATED_SOURCES "${CMAKE_CURRENT_LIST_DIR}/generated/*.cpp")

add_library(${PROJECT_NAME}
  ${ad_rss_map_integration_GENERATED_SOURCES}
  ${CMAKE_CURRENT_SOURCE_DIR}/src/ConnectingRoutesCache.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/Logging.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/RssObjectConversion.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/RssObjectResultListAnalyzer.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/RssReachableSetsCalculation.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/RssObjectDataOperation.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/RssWorldModelCreation.cpp
  ${CMAKE_CURRENT_SOURCE_DIR}/src/RssWorldModelCreator.cpp
)

target_compile_features(${PROJECT_NAME} PUBLIC cxx_std_14)
target_compile_definitions(${PROJECT_NAME} PUBLIC ${TARGET_COMPILE_DEFINITIONS})
target_compile_options(${PROJECT_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})
set_property(TARGET ${PROJECT_NAME} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})

configure_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Version.hpp.in ${CMAKE_CURRENT_BINARY_DIR}/include/${PROJECT_NAME}/Version.hpp)

target_include_directories(${PROJECT_NAME} PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/generated/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/include>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
  ${ad_rss_map_integration_TARGET_INCLUDE_DIRECTORIES}
  )

target_link_libraries(${PROJECT_NAME} PUBLIC
  ad_map_access
  ad_rss
  ${ad_rss_map_integration_TARGET_LINK_LIBRARIES}
)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp"
)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/generated/include/
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp"
)

install(DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/include/
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp"
)

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}_EXPORT
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

set(CMAKECONFIG_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR}/cmake/${PROJECT_NAME}")

install(EXPORT ${PROJECT_NAME}_EXPORT
  FILE ${PROJECT_NAME}Targets.cmake
  DESTINATION ${CMAKECONFIG_INSTALL_DIR}
)

configure_package_config_file(${CMAKE_CURRENT_SOURCE_DIR}/cmake/Config.cmake.in
  ${CMAKE_CURRENT_BINARY_DIR}/install/${PROJECT_NAME}Config.cmake
  INSTALL_DESTINATION ${CMAKECONFIG_INSTALL_DIR}
)

write_basic_package_version_file(${CMAKE_CURRENT_BINARY_DIR}/install/${PROJECT_NAME}ConfigVersion.cmake
  COMPATIBILITY SameMajorVersion
)

install(FILES
  ${CMAKE_CURRENT_BINARY_DIR}/install/${PROJECT_NAME}Config.cmake
  ${CMAKE_CURRENT_BINARY_DIR}/install/${PROJECT_NAME}ConfigVersion.cmake
  DESTINATION ${CMAKECONFIG_INSTALL_DIR}
)

#####################################################################
# Tests
#####################################################################
if (BUILD_TESTING)
  add_subdirectory(test_support)
  add_subdirectory(tests)
endif()

#####################################################################
# Python binding
#####################################################################
if(BUILD_PYTHON_BINDING)
  add_subdirectory(python)
endif()
