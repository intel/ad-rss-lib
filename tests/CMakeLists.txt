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
# rss_core_tests - executable setup
#####################################################################
set(EXEC_NAME rss_core_tests)

set(RSS_CORE_TEST_SOURCES
  MathUnitTestsDistanceAfterResponseTime.cpp
  MathUnitTestsStoppingDistance.cpp
  MathUnitTestsVelocityAfterResponseTime.cpp
  RSSFormulaTestsCalculateDistanceAfterStatedBreakingPattern.cpp
  RSSFormulaTestsCalculateSafeLongitudinalDistanceOppositeDirection.cpp
  RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirectionLeadingEgo.cpp
  RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirectionLeadingOther.cpp
)

add_executable(${EXEC_NAME} ${RSS_CORE_TEST_SOURCES})

target_include_directories(${EXEC_NAME}
  PRIVATE
)

target_link_libraries(${EXEC_NAME} PRIVATE
  GTest::Main
  ${PROJECT_NAME}
)

target_compile_options(${PROJECT_NAME} PRIVATE ${TARGET_COMPILE_OPTIONS})

add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME})

