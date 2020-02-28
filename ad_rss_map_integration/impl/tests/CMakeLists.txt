# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

set(EXEC_NAME ad_map_rss_integration_tests)

set(TEST_SOURCES
  RssSceneCreationTests.cpp
)

set_source_files_properties(${TEST_SOURCES} PROPERITES COMPILE_FLAGS -fno-access-control)

if(BINDING_TYPE STREQUAL ROS)
  catkin_add_gtest(${EXEC_NAME} ${TEST_SOURCES} WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

  target_link_libraries(${EXEC_NAME}
    ${gtest_main_libs}
  )

else()
  add_executable(${EXEC_NAME} ${TEST_SOURCES})

  target_link_libraries(${EXEC_NAME}
    GTest::gtest_main
  )

  add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME} WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

target_link_libraries(${EXEC_NAME}
  ${PROJECT_NAME}
)

target_compile_options(${EXEC_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})
set_property(TARGET ${EXEC_NAME} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})
