# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019-2021 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

project(ad_rss_map_integration_python VERSION ${AD-RSS-LIB_VERSION})

include(GNUInstallDirs)

find_package(ad_rss ${AD-RSS-LIB_VERSION} EXACT REQUIRED CONFIG)
get_target_property(AD_RSS_INCLUDES ad_rss INTERFACE_INCLUDE_DIRECTORIES)

find_package(ad_map_access ${CARLA-MAP_VERSION} REQUIRED CONFIG)
get_target_property(AD_MAP_ACCESS_INCLUDES ad_map_access INTERFACE_INCLUDE_DIRECTORIES)

find_package(ad_physics ${CARLA-MAP_VERSION} REQUIRED CONFIG)
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

configure_file(__init__.py.in ${PYTHON_BINDING_NAME}/ad_rss_map_integration/__init__.py)

set(target ad_rss_map_integration_${PYTHON_BINDING_NAME})

configure_file(AdRssMapIntegrationPython.cpp.in ${CMAKE_CURRENT_BINARY_DIR}/AdRssMapIntegrationPython-${PYTHON_BINDING_NAME}.cpp)

add_library(${target} SHARED
  ${CMAKE_CURRENT_BINARY_DIR}/AdRss-map-PythonWrapper.cpp
  ${CMAKE_CURRENT_BINARY_DIR}/AdRssMapIntegrationPython-${PYTHON_BINDING_NAME}.cpp
)
target_compile_definitions(${target} PUBLIC ${TARGET_COMPILE_DEFINITIONS} "-DBOOST_PYTHON_MAX_ARITY=15")
target_compile_options(${target} PRIVATE ${TARGET_COMPILE_OPTIONS})
set_property(TARGET ${target} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})
set_target_properties(${target} PROPERTIES PREFIX "")
set_target_properties(${target} PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/${PYTHON_BINDING_NAME}/ad_rss_map_integration)

target_include_directories(${target}
  PRIVATE
  ${PYTHON_BINDING_PACKAGE_INCLUDE_DIRS}
  ${CMAKE_CURRENT_BINARY_DIR}
)

target_link_libraries(${target} PRIVATE
  ad_rss_map_integration
  ${PYTHON_BINDING_PACKAGE_LIBRARIES}
)

configure_file(setup.py.in ${CMAKE_CURRENT_BINARY_DIR}/setup.py)
# fake the ament_cmake_python local_setup.bash file
configure_file(local_setup.bash.in ${CMAKE_CURRENT_BINARY_DIR}/local_setup.bash @ONLY)
install(FILES 
        ${CMAKE_CURRENT_BINARY_DIR}/local_setup.bash
        DESTINATION
        ${CMAKE_INSTALL_PREFIX}/share/ad_rss_map_integration)
 
install(CODE "\
  EXECUTE_PROCESS(\
    COMMAND ${PYTHON_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/setup.py egg_info --egg-base ${CMAKE_CURRENT_BINARY_DIR} build --build-base ${CMAKE_CURRENT_BINARY_DIR} install --prefix ${CMAKE_INSTALL_PREFIX} --record ${CMAKE_CURRENT_BINARY_DIR}/install.log --single-version-externally-managed bdist_wheel --dist-dir ${CMAKE_INSTALL_PREFIX}/dist ${CMAKE_CURRENT_BINARY_DIR}/${PYTHON_BINDING_NAME}\
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}\
  )"
)

#####################################################################
# Tests
#####################################################################
if (BUILD_TESTING)
  add_test(NAME ${PROJECT_NAME}_test_${PYTHON_BINDING_NAME}
    COMMAND ${PYTHON_EXECUTABLE} -m interface_test
    WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/tests
    )
  get_python_test_environment(ad_physics ad_map_opendrive_reader ad_map_access ad_rss)
  set_tests_properties(${PROJECT_NAME}_test_${PYTHON_BINDING_NAME} PROPERTIES ENVIRONMENT "${PYTHON_TEST_ENVIRONMENT}")
endif()
