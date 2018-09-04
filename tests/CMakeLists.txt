# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# INTEL CONFIDENTIAL
#
# Copyright (c) 2018 Intel Corporation
#
# This software and the related documents are Intel copyrighted materials, and
# your use of them is governed by the express license under which they were
# provided to you (License). Unless the License provides otherwise, you may not
# use, modify, copy, publish, distribute, disclose or transmit this software or
# the related documents without Intel's prior written permission.
#
# This software and the related documents are provided as is, with no express or
# implied warranties, other than those that are expressly stated in the License.
#
# ----------------- END LICENSE BLOCK -----------------------------------

#####################################################################
# rss_module_tests - executable setup
#####################################################################
set(EXEC_NAME rss_module_tests)

set(RSS_MODULE_TEST_SOURCES
  core/RssCheckTests.cpp
  core/RssCheckSameDirectionTests.cpp
  core/RssCheckOppositeDirectionTests.cpp
  core/RssResponseResolvingTests.cpp
  core/RssSituationCheckingInputRangeTests.cpp
  core/RssSituationCheckingTestsIntersectionInputRangeTests.cpp
  core/RssSituationCheckingTestsIntersectionNoPriority.cpp
  core/RssSituationCheckingTestsIntersectionPriority.cpp
  core/RssSituationCheckingTestsLongitudinal.cpp
  core/RssSituationCheckingTestsLateral.cpp
  core/RssSituationCheckingTestsOppositeDirection.cpp
  core/RSSStateCombineRssStateTests.cpp
  core/RSSStateSafeTests.cpp
  core/RssSituationExtractionOppositeDirectionTests.cpp
  core/RssSituationExtractionIntersectionTests.cpp
  core/RssSituationExtractionRelativePositionTests.cpp
  core/RssSituationExtractionSameDirectionTests.cpp
  situation/MathUnitTestsDistanceOffsetAfterResponseTime.cpp
  situation/MathUnitTestsStoppingDistance.cpp
  situation/MathUnitTestsVelocityAfterResponseTime.cpp
  situation/RSSFormulaTestsCalculateDistanceAfterStatedBrakingPattern.cpp
  situation/RSSFormulaTestsCalculateSafeLateralDistance.cpp
  situation/RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirection.cpp
  situation/VehicleTests.cpp
)

add_executable(${EXEC_NAME} ${RSS_MODULE_TEST_SOURCES})

target_include_directories(${EXEC_NAME}
  PRIVATE
  ../src
  test_support
)

target_link_libraries(${EXEC_NAME} PRIVATE
  GTest::Main
  ${PROJECT_NAME}
)

target_compile_options(${EXEC_NAME} PRIVATE ${COVERAGE_FLAG} ${TARGET_COMPILE_OPTIONS})
set_target_properties(${EXEC_NAME} PROPERTIES LINK_FLAGS ${COVERAGE_FLAG})

add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME})
