# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# INTEL CONFIDENTIAL
#
# Copyright (c) 2018 Intel Corporation
#
# This software and the related documents are Intel copyrighted materials, and
# your use of them is governed by the express license under which they were
# provided to you (License). Unless the License provides otherwise, you may not
# use, modify, copy, publish, distribute, disclose or transmit this software or
# the related documents without Intel's prior written permission.
#
# This software and the related documents are provided as is, with no express or
# implied warranties, other than those that are expressly stated in the License.
#
# ----------------- END LICENSE BLOCK -----------------------------------
##
cmake_minimum_required(VERSION 3.5)
set(BUILD_TESTING "ON" CACHE BOOL "Enable test compilation")
set(BUILD_DOC "OFF" CACHE BOOL "Enable compilation of doxygen documentation")

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
project(RSSCore VERSION 0.0.1)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)
add_compile_options(-Werror -Wall -Wextra)



add_library(${PROJECT_NAME} SHARED
  src/Math.cpp
  src/RSSFormulas.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES
  OUTPUT_NAME rss_core
  VERSION ${PROJECT_VERSION}
  SOVERSION ${PROJECT_VERSION_MAJOR})

target_include_directories(${PROJECT_NAME}
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
)

target_link_libraries(${PROJECT_NAME}
  PUBLIC
)

target_compile_options(${PROJECT_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})


################################################################################
# Install section
################################################################################
set(PROJECT_PUBLIC_HEADER_LIST
  include/rss_core/Math.hpp
  include/rss_core/RSSFormulas.hpp
  include/rss_core/RSSParameters.hpp
  include/rss_core/RSSTypes.hpp
)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER "${PROJECT_PUBLIC_HEADER_LIST}")
if(IS_ABSOLUTE "${CMAKE_INSTALL_LIBDIR}")
  file(RELATIVE_PATH CMAKE_INSTALL_LIBDIR_RELATIVE "${CMAKE_INSTALL_PREFIX}" "${CMAKE_INSTALL_LIBDIR}")
else()
  set(CMAKE_INSTALL_LIBDIR_RELATIVE "${CMAKE_INSTALL_LIBDIR}")
endif()

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}_EXPORT
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR_RELATIVE}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR_RELATIVE}
  PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/rss_core)

set(CMAKECONFIG_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR_RELATIVE}/cmake/${PROJECT_NAME}")

install(EXPORT ${PROJECT_NAME}_EXPORT FILE ${PROJECT_NAME}Targets.cmake
  DESTINATION ${CMAKECONFIG_INSTALL_DIR})

configure_package_config_file(${PROJECT_NAME}Config.cmake.in ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake INSTALL_DESTINATION ${CMAKECONFIG_INSTALL_DIR})
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
  DESTINATION ${CMAKECONFIG_INSTALL_DIR}
  COMPONENT libs)


################################################################################
# Test section
################################################################################

if(BUILD_TESTING)
message(STATUS "Build Testing")
  enable_testing()
  if(NOT TARGET GTest::GTest)
    find_package(GTest QUIET)
    if (NOT GTEST_FOUND)
      #As Ubuntu never ships precompiled gtest libraries, build them on-the-fly from source
      #requires gtest-dev package to be intalled
      add_subdirectory(/usr/src/gtest gtest)
      add_library(GTest::GTest ALIAS gtest)
      add_library(GTest::Main ALIAS gtest_main)
    endif()
  endif()
 add_subdirectory(tests)
endif()





################################################################################
# Doxygen documentation
################################################################################
if(BUILD_DOC)
  find_package(Doxygen REQUIRED)
  if (DOXYGEN_FOUND)
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/doc/Doxyfile.in
                   ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
                   @ONLY)
    add_custom_target(apidoc
                      COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
                      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
                      COMMENT "Build doxygen documentation")
  else()
    message(FATAL_ERROR, "Doxygen needs to be installed")
  endif()
endif()

