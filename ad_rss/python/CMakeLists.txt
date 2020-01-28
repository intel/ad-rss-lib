# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

project(ad_rss_python)

include(GNUInstallDirs)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)

find_package(PythonInterp REQUIRED)

if (PYTHONINTERP_FOUND)
  if (PYTHON_VERSION_MAJOR EQUAL 3)
    find_package(Boost COMPONENTS REQUIRED python${PYTHON_VERSION_SUFFIX})
    find_package(PythonInterp 3)
    find_package(PythonLibs 3 REQUIRED)
  else()
    find_package(Boost COMPONENTS REQUIRED python)
    find_package(PythonInterp 2.7 EXACT REQUIRED)
    find_package(PythonLibs 2.7 EXACT)
    if (PYTHONLIBS_VERSION_STRING VERSION_GREATER "2.7")
      set(PYTHON_INCLUDE_DIRS "/usr/include/python2.7")
      set(PYTHON_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
    endif()
  endif()
endif()

find_package(ad_physics REQUIRED CONFIG)
get_target_property(AD_PHYSICS_INCLUDES ad_physics INTERFACE_INCLUDE_DIRECTORIES)

find_package(spdlog REQUIRED CONFIG)
get_target_property(SPDLOG_INCLUDES spdlog::spdlog INTERFACE_INCLUDE_DIRECTORIES)

list(APPEND INCLUDE_DIRS ${AD_PHYSICS_INCLUDES} ${SPDLOG_INCLUDES})

string (REPLACE ";" "\", \"" GENPY_INCLUDE_DIRS "${INCLUDE_DIRS}")

configure_file(generate_python_lib.py.in generate_python_lib.py)
configure_file(../../dependencies/map/tools/python/python_wrapper_helper.py python_wrapper_helper.py COPYONLY)

generate_python_binding_source_code(${CMAKE_CURRENT_BINARY_DIR})

add_library(${PROJECT_NAME}
  ${CMAKE_CURRENT_BINARY_DIR}/AdRssPythonWrapper.cpp
)

target_compile_definitions(${PROJECT_NAME} PUBLIC ${TARGET_COMPILE_DEFINITIONS})
target_compile_options(${PROJECT_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})
set_property(TARGET ${PROJECT_NAME} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})

target_include_directories(${PROJECT_NAME} PRIVATE
  ${PYTHON_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}
)

target_link_libraries(${PROJECT_NAME} PRIVATE
  ad_rss
  ad_physics
  spdlog::spdlog
  Boost::python
  ${PYTHON_LIBRARIES}
)

################################################################################
# Install section
################################################################################

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}_EXPORT
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
