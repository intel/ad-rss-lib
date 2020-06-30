# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019-2020 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

#####################################################################
# rss_tests - executable setup
#####################################################################
set(EXEC_NAME ad-rss-tests)

include(generated/testfiles.cmake)

set(RSS_TEST_SOURCES
  main.cpp
  core/RssCheckIntersectionTests.cpp
  core/RssCheckLateralTests.cpp
  core/RssCheckNotRelevantTests.cpp
  core/RssCheckObjectTests.cpp
  core/RssCheckOppositeDirectionTests.cpp
  core/RssCheckSameDirectionTests.cpp
  core/RssCheckSceneTests.cpp
  core/RssCheckTimeIndexTests.cpp
  core/RssResponseResolvingTests.cpp
  core/RssSituationExtractionInputRangeTests.cpp
  core/RssSituationExtractionIntersectionTests.cpp
  core/RssSituationExtractionOppositeDirectionTests.cpp
  core/RssSituationExtractionRelativePositionTests.cpp
  core/RssSituationExtractionSameDirectionTests.cpp
  situation/PhysicsUnitTestsAcceleratedLimitedMovement.cpp
  situation/PhysicsUnitTestsCalculateTimeToStop.cpp
  situation/PhysicsUnitTestsInputRangeChecks.cpp
  situation/PhysicsUnitTestsStoppingDistance.cpp
  situation/PhysicsUnitTestsTimeToCoverDistance.cpp
  situation/PhysicsUnitTestsUnstructured.cpp
  situation/RssFormulaTestsCalculateDistanceAfterStatedBrakingPattern.cpp
  situation/RssFormulaTestsCalculateSafeLateralDistance.cpp
  situation/RssFormulaTestsCalculateSafeLongitudinalDistanceSameDirection.cpp
  situation/RssFormulaTestsInputRangeChecks.cpp
  situation/RssSituationCheckingInputRangeTests.cpp
  situation/RssSituationCheckingTestsIntersectionInputRangeTests.cpp
  situation/RssSituationCheckingTestsIntersectionNoPriority.cpp
  situation/RssSituationCheckingTestsIntersectionPriority.cpp
  situation/RssSituationCheckingTestsLateral.cpp
  situation/RssSituationCheckingTestsLongitudinal.cpp
  situation/RssSituationCheckingTestsNotRelevant.cpp
  situation/RssSituationCheckingTestsOppositeDirection.cpp
  situation/RssSituationCheckingTestsUnstructuredSceneChecker.cpp
  situation/VehicleTests.cpp
  state/RssStateSafeTests.cpp
  test_support/TestSupport.cpp
  test_support/wrap_new.cpp
  unstructured/GeometryTests.cpp
  world/RssSituationIdProviderTests.cpp
  ${GENERATED_TEST_SOURCES}
)

set_source_files_properties(${RSS_TEST_SOURCES} PROPERITES COMPILE_FLAGS "-fno-access-control -Wno-error")

if(BINDING_TYPE STREQUAL ROS)
  catkin_add_gtest(${EXEC_NAME} ${RSS_TEST_SOURCES} WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})

else()
  add_executable(${EXEC_NAME} ${RSS_TEST_SOURCES})

  target_link_libraries(${EXEC_NAME}
    GTest::gtest
  )

  add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME} WORKING_DIRECTORY ${CMAKE_CURRENT_LIST_DIR})
endif()

target_link_libraries(${EXEC_NAME}
  ${PROJECT_NAME}
)

target_include_directories(${EXEC_NAME}
  PRIVATE
  ../src
  test_support
)

target_compile_options(${EXEC_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})
set_property(TARGET ${EXEC_NAME} APPEND_STRING PROPERTY LINK_FLAGS ${TARGET_LINK_FLAGS})

