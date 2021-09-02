# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2021 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

project(ad_rss_python VERSION ${AD-RSS-LIB_VERSION})

include(GNUInstallDirs)

find_package(ad_physics ${CARLA-MAP_VERSION} REQUIRED CONFIG)
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

  string(REPLACE "." "" binding_string ${binding})

  configure_file(__init__.py.in ${binding}/ad_rss/__init__.py)

  set(target ad_rss_${binding_string})
  ################################################################################
  # Library containing the python binding code supporting reuse of the library
  ################################################################################
  configure_file(AdRssPython.cpp.in ${CMAKE_CURRENT_BINARY_DIR}/AdRssPython-${binding_string}.cpp)

  add_library(${target}
    ${CMAKE_CURRENT_BINARY_DIR}/AdRss-core-PythonWrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/AdRss-situation-PythonWrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/AdRss-state-PythonWrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/AdRss-unstructured-PythonWrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/AdRss-world-PythonWrapper.cpp
    ${CMAKE_CURRENT_BINARY_DIR}/AdRssPython-${binding_string}.cpp
  )
  target_compile_definitions(${target} PUBLIC ${TARGET_COMPILE_DEFINITIONS})
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
      ad_rss
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

  configure_file(AdRssPythonModule.cpp.in ${CMAKE_CURRENT_BINARY_DIR}/AdRssPythonModule-${binding_string}.cpp)
  add_library(${target}_module SHARED
     ${CMAKE_CURRENT_BINARY_DIR}/AdRssPythonModule-${binding_string}.cpp
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
  )
  target_link_libraries(${target}_module PRIVATE
    ${target}
    ${PYTHON_BINDING_PACKAGE_LIBRARIES_${binding}}
    ad_physics_${binding_string}
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
    ${CMAKE_CURRENT_BINARY_DIR}/${binding}/ad_rss
    DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/
    )
  install(TARGETS ${target}_module
    ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/ad_rss
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}/${binding}/ad_rss
    )

  #####################################################################
  # Tests
  #####################################################################
  if (BUILD_TESTING)
    add_test(NAME ${target}_test
      COMMAND ${binding} -m interface_test
      WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/tests
    )
    get_python_test_environment(${binding} ad_physics)
    set_tests_properties(${target}_test PROPERTIES ENVIRONMENT "${PYTHON_TEST_ENVIRONMENT}")
  endif()

endforeach()

install(DIRECTORY include/
  DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}
  FILES_MATCHING PATTERN "*.h" PATTERN "*.hpp"
)
