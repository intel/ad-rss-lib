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

  configure_file(__init__.py.in ${binding}/ad_rss_map_integration/__init__.py)

  set(target ad_rss_map_integration_${binding_string})
  ################################################################################
  # Library containing the python binding code supporting reuse of the library
  ################################################################################
  configure_file(AdRssMapIntegrationPython.cpp.in ${CMAKE_CURRENT_BINARY_DIR}/AdRssMapIntegrationPython-${binding_string}.cpp)

  add_library(${target}
    ${CMAKE_CURRENT_BINARY_DIR}/AdRss-map-PythonWrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/AdRssMapIntegrationPython-${binding_string}.cpp
  )
  target_compile_definitions(${target} PUBLIC ${TARGET_COMPILE_DEFINITIONS} "-DBOOST_PYTHON_MAX_ARITY=15")
  target_compile_options(${target} PRIVATE ${TARGET_COMPILE_OPTIONS})
  set_property(TARGET ${target} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})

  target_include_directories(${target}
    PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
    PRIVATE
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
  # Module containing the python entry code and its dependencies as shared library
  ################################################################################
  # module explicit dependencies
  find_package(ad_physics_${binding_string} REQUIRED CONFIG)
  get_target_property(AD_PHYSICS_PYTHON_INCLUDES ad_physics_${binding_string} INTERFACE_INCLUDE_DIRECTORIES)

  find_package(ad_map_access_${binding_string} REQUIRED CONFIG)
  get_target_property(AD_MAP_ACCESS_PYTHON_INCLUDES ad_map_access_${binding_string} INTERFACE_INCLUDE_DIRECTORIES)

  find_package(ad_rss_${binding_string} REQUIRED CONFIG)
  get_target_property(AD_RSS_PYTHON_INCLUDES ad_rss_${binding_string} INTERFACE_INCLUDE_DIRECTORIES)

  configure_file(AdRssMapIntegrationPythonModule.cpp.in ${CMAKE_CURRENT_BINARY_DIR}/AdRssMapIntegrationPythonModule-${binding_string}.cpp)

  add_library(${target}_module SHARED
     ${CMAKE_CURRENT_BINARY_DIR}/AdRssMapIntegrationPythonModule-${binding_string}.cpp
  )
  target_compile_definitions(${target}_module PUBLIC ${TARGET_COMPILE_DEFINITIONS})
  target_compile_options(${target}_module PRIVATE ${TARGET_COMPILE_OPTIONS})
  set_property(TARGET ${target}_module APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})
  set_target_properties(${target}_module PROPERTIES PREFIX "")

  target_include_directories(${target}_module
    PRIVATE
    ${target}
    ${PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_${binding}}
    ${AD_PHYSICS_PYTHON_INCLUDES}
    ${AD_MAP_ACCESS_PYTHON_INCLUDES}
    ${AD_RSS_PYTHON_INCLUDES}
  )
  target_link_libraries(${target}_module PRIVATE
    ${target}
    ${PYTHON_BINDING_PACKAGE_LIBRARIES_${binding}}
    ad_physics_${binding_string}
    ad_map_access_${binding_string}
    ad_rss_${binding_string}
    )

  ################################################################################
  # Install section
  ################################################################################
  install(TARGETS ${target} EXPORT ${target}_EXPORT
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    )

  set(CMAKECONFIG_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR}/cmake/${target}")

  install(EXPORT ${target}_EXPORT
    FILE ${target}Targets.cmake
    DESTINATION ${CMAKECONFIG_INSTALL_DIR}
  )

  configure_package_config_file(${CMAKE_CURRENT_LIST_DIR}/cmake/Config.cmake.in
    ${CMAKE_CURRENT_BINARY_DIR}/install/${target}Config.cmake
    INSTALL_DESTINATION ${CMAKECONFIG_INSTALL_DIR}
  )

# todo: need to get to version of upper project
#  write_basic_package_version_file(${CMAKE_CURRENT_BINARY_DIR}/install/${target}ConfigVersion.cmake
#    COMPATIBILITY SameMajorVersion
#  )

  install(FILES
    ${CMAKE_CURRENT_BINARY_DIR}/install/${target}Config.cmake
#    ${CMAKE_CURRENT_BINARY_DIR}/install/${target}ConfigVersion.cmake
    DESTINATION ${CMAKECONFIG_INSTALL_DIR}
  )

  install(DIRECTORY
    ${CMAKE_CURRENT_BINARY_DIR}/${binding}/ad_rss_map_integration
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/
    )
  install(TARGETS ${target}_module
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/ad_rss_map_integration
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/ad_rss_map_integration
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

install(DIRECTORY include/
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp"
)
