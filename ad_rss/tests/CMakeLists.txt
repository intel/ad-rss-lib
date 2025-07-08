# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019-2021 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

#####################################################################
# rss_tests - executable setup
#####################################################################
set(EXEC_NAME ad-rss-tests)

file(GLOB_RECURSE GENERATED_TEST_SOURCES "${CMAKE_CURRENT_LIST_DIR}/generated/*.cpp")

set(RSS_TEST_SOURCES
  main.cpp
  core/PhysicsUnitTestsAcceleratedLimitedMovement.cpp
  core/PhysicsUnitTestsCalculateTimeToStop.cpp
  core/PhysicsUnitTestsInputRangeChecks.cpp
  core/PhysicsUnitTestsStoppingDistance.cpp
  core/PhysicsUnitTestsTimeToCoverDistance.cpp
  core/PhysicsUnitTestsUnstructured.cpp
  core/RssCheckIntersectionTests.cpp
  core/RssCheckLateralTests.cpp
  core/RssCheckNotRelevantTests.cpp
  core/RssCheckObjectTests.cpp
  core/RssCheckOppositeDirectionTests.cpp
  core/RssCheckSameDirectionTests.cpp
  core/RssCheckConstellationTests.cpp
  core/RssCheckTimeIndexTests.cpp
  core/RssResponseResolvingTests.cpp
  core/RssSituationCheckingInputRangeTests.cpp
  core/RssSituationCheckingTestsNotRelevant.cpp
  core/RssSituationExtractionInputRangeTests.cpp
  core/RssSituationExtractionIntersectionTests.cpp
  core/RssSituationExtractionOppositeDirectionTests.cpp
  core/RssSituationExtractionRelativePositionTests.cpp
  core/RssSituationExtractionSameDirectionTests.cpp
  structured/RssConstellationIdProviderTests.cpp
  structured/RssFormulaTestsCalculateDistanceAfterStatedBrakingPattern.cpp
  structured/RssFormulaTestsCalculateSafeLateralDistance.cpp
  structured/RssFormulaTestsCalculateSafeLongitudinalDistanceSameDirection.cpp
  structured/RssFormulaTestsInputRangeChecks.cpp
  structured/RssIntersectionConstellationCheckerInputRangeTests.cpp
  structured/RssIntersectionNoPriorityConstellationCheckerTests.cpp
  structured/RssIntersectionPriorityConstellationCheckerTests.cpp
  structured/RssLateralConstellationCheckerTests.cpp
  structured/RssLongitudinalConstellationCheckerTests.cpp
  structured/RssOppositeDirectionConstellationCheckerTests.cpp
  state/RssStateSafeTests.cpp
  test_support/CreateRelativeVehicleStateForLongitudinalMotionTests.cpp
  test_support/TestSupport.cpp
  test_support/wrap_new.cpp
  unstructured/RssUnstructuredConstellationCheckerTests.cpp
  ${GENERATED_TEST_SOURCES}
)

set_source_files_properties(${RSS_TEST_SOURCES} PROPERITES COMPILE_FLAGS "-fno-access-control -Wno-error")

add_executable(${EXEC_NAME} ${RSS_TEST_SOURCES})

target_link_libraries(${EXEC_NAME}
  ad_rss
  GTest::gtest
  )

add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME} WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

target_include_directories(${EXEC_NAME}
  PRIVATE
  test_support
)

target_compile_options(${EXEC_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})
set_property(TARGET ${EXEC_NAME} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})
