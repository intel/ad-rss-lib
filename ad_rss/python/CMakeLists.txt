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

find_package(ad_physics REQUIRED CONFIG)
get_target_property(AD_PHYSICS_INCLUDES ad_physics INTERFACE_INCLUDE_DIRECTORIES)

find_package(spdlog REQUIRED CONFIG)
get_target_property(SPDLOG_INCLUDES spdlog::spdlog INTERFACE_INCLUDE_DIRECTORIES)

find_package(Boost REQUIRED)

list(APPEND INCLUDE_DIRS ${Boost_INCLUDE_DIRS} ${AD_PHYSICS_INCLUDES} ${SPDLOG_INCLUDES})

string (REPLACE ";" "\", \"" GENPY_INCLUDE_DIRS "${INCLUDE_DIRS}")


find_python_binding_packages()

configure_file(generate_python_lib.py.in generate_python_lib.py)

generate_python_binding_source_code(${CMAKE_CURRENT_BINARY_DIR})

foreach(binding ${PYTHON_BINDINGS})
  string(TOLOWER ${binding} lc_binding)

  configure_file(ad/__init__.py.in ${lc_binding}/ad/__init__.py)
  configure_file(ad/rss/__init__.py.in ${lc_binding}/ad/rss/__init__.py)

  foreach(component core situation state world)

    set(target ad_rss_${component}_${lc_binding})

    configure_file(ad/rss/${component}/__init__.py.in ${lc_binding}/ad/rss/${component}/__init__.py)

    add_library(${target}
      ${CMAKE_CURRENT_BINARY_DIR}/AdRss${component}PythonWrapper${binding}.cpp
      )
    target_compile_definitions(${target} PUBLIC ${TARGET_COMPILE_DEFINITIONS})
    target_compile_options(${target} PRIVATE ${TARGET_COMPILE_OPTIONS})
    set_property(TARGET ${target} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})

    target_include_directories(${target} PRIVATE
      ${PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_${binding}}
      ${CMAKE_CURRENT_BINARY_DIR}
      )

    target_link_libraries(${target} PRIVATE
      ad_rss
      ad_physics
      spdlog::spdlog
      ${PYTHON_BINDING_PACKAGE_LIBRARIES_${binding}}
      )

    install(TARGETS ${target}
      ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/${lc_binding}/ad/rss/${component}
      LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/${lc_binding}/ad/rss/${component}
      )

  endforeach()

  ################################################################################
  # Install section
  ################################################################################

  install(DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR}/${lc_binding}/ad
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/${lc_binding}/
    )

  #####################################################################
  # Tests
  #####################################################################
  if (BUILD_TESTING)
    add_test(NAME ${target}_test
      COMMAND ${lc_binding} -m interface_test
      WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/tests
    )
    get_python_test_environment(${lc_binding} ad_physics)
    set_tests_properties(${target}_test PROPERTIES ENVIRONMENT "${PYTHON_TEST_ENVIRONMENT}")
  endif()

endforeach()
