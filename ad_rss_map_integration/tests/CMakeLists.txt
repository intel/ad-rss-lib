# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019-2021 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------


set(EXEC_NAME ad_map_rss_integration_tests)

file(GLOB_RECURSE GENERATED_TEST_SOURCES "${CMAKE_CURRENT_LIST_DIR}/generated/*.cpp")

set(TEST_SOURCES
  src/RssRouteCheckerTests.cpp
  src/RssWorldModelCreationTestEgoSouth2EastOtherEast2North.cpp
  src/RssWorldModelCreationTestEgoSouth2EastOtherEast2South.cpp
  src/RssWorldModelCreationTestEgoSouth2EastOtherNorth2East.cpp
  src/RssWorldModelCreationTestEgoSouth2EastOtherNorth2South.cpp
  src/RssWorldModelCreationTestEgoSouth2EastOtherSouth2East.cpp
  src/RssWorldModelCreationTestEgoSouth2EastOtherSouth2North.cpp
  src/RssWorldModelCreationTestRoadBoundaries.cpp
  src/RssWorldModelCreationTestTown04.cpp
  ${GENERATED_TEST_SOURCES}
)

set_source_files_properties(${TEST_SOURCES} PROPERITES COMPILE_FLAGS -fno-access-control)

add_executable(${EXEC_NAME} ${TEST_SOURCES})

target_link_libraries(${EXEC_NAME}
  ad_rss_map_integration
  ad_rss_map_integration_test_support
  GTest::gtest_main
  )

add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME} WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

target_compile_options(${EXEC_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS} -Wno-error=uninitialized)
set_property(TARGET ${EXEC_NAME} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})
