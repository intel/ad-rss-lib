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

foreach(binding ${PYTHON_BINDINGS})

  string(REPLACE "." "" binding_string ${binding})

  configure_file(ad/__init__.py.in ${binding}/ad/__init__.py)
  configure_file(ad/rss/__init__.py.in ${binding}/ad/rss/__init__.py)

  set(target ad_rss_map_${binding_string})

  configure_file(ad/rss/map/__init__.py.in ${binding}/ad/rss/map/__init__.py)

  add_library(${target}
    ${CMAKE_CURRENT_BINARY_DIR}/AdRss-map-PythonWrapper-${binding_string}.cpp
  )
  target_compile_definitions(${target} PUBLIC ${TARGET_COMPILE_DEFINITIONS} "-DBOOST_PYTHON_MAX_ARITY=15")
  target_compile_options(${target} PRIVATE ${TARGET_COMPILE_OPTIONS})
  set_property(TARGET ${target} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})

  target_include_directories(${target} PRIVATE
    ${PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_${binding}}
    ${CMAKE_CURRENT_BINARY_DIR}
  )

  target_link_libraries(${target} PRIVATE
    ad_rss_map_integration
    ad_rss
    ad_map_access
    ad_physics
    spdlog::spdlog
    ${PYTHON_BINDING_PACKAGE_LIBRARIES_${binding}}
  )

  ################################################################################
  # Install section
  ################################################################################
  install(TARGETS ${target}
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/ad/rss/map
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/ad/rss/map
    )

  install(DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR}/${binding}/ad
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/
    )

  #####################################################################
  # Tests
  #####################################################################
  if (BUILD_TESTING)
    add_test(NAME ${target}_test
      COMMAND ${binding} -m interface_test
      WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/tests
    )
    get_python_test_environment(${binding} ad_physics ad_map_opendrive_reader ad_map_access ad_rss)
    set_tests_properties(${target}_test PROPERTIES ENVIRONMENT "${PYTHON_TEST_ENVIRONMENT}")
  endif()

endforeach()
