# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019-2021 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

set(EXEC_NAME ad_map_rss_integration_tests)

set(TEST_SOURCES
  RssSceneCreationTestEgoSouth2EastOtherEast2North.cpp
  RssSceneCreationTestEgoSouth2EastOtherEast2South.cpp
  RssSceneCreationTestEgoSouth2EastOtherNorth2East.cpp
  RssSceneCreationTestEgoSouth2EastOtherNorth2South.cpp
  RssSceneCreationTestEgoSouth2EastOtherSouth2East.cpp
  RssSceneCreationTestEgoSouth2EastOtherSouth2North.cpp
  RssSceneCreationTests.cpp
  RssSceneCreationTestTown04.cpp
)

set_source_files_properties(${TEST_SOURCES} PROPERITES COMPILE_FLAGS -fno-access-control)

add_executable(${EXEC_NAME} ${TEST_SOURCES})

target_link_libraries(${EXEC_NAME}
  GTest::gtest_main
  )

add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME} WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

target_link_libraries(${EXEC_NAME}
  ${PROJECT_NAME}
)

target_compile_options(${EXEC_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})
set_property(TARGET ${EXEC_NAME} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})
