# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# INTEL CONFIDENTIAL
#
# Copyright (c) 2019 Intel Corporation
#
# Redistribution and use in source and binary forms, with or without modification,
# are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
#    this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
#    this list of conditions and the following disclaimer in the documentation
#    and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its contributors
#    may be used to endorse or promote products derived from this software without
#    specific prior written permission.
#
#    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
#    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
#    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
#    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
#    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
#    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
#    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
#    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
#    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
#    POSSIBILITY OF SUCH DAMAGE.
#
# ----------------- END LICENSE BLOCK -----------------------------------

#####################################################################
# rss_tests - executable setup
#####################################################################
set(EXEC_NAME ad-rss-tests)

include(generated/CMakeLists.txt)

set(RSS_TEST_SOURCES_WITH_PRIVATE_ACCESS
  situation/RssSituationCheckingInputRangeTests.cpp
  situation/RssSituationCheckingTestsIntersectionInputRangeTests.cpp
  situation/RssSituationCheckingTestsIntersectionNoPriority.cpp
  situation/RssSituationCheckingTestsIntersectionPriority.cpp
  situation/RssSituationCheckingTestsLongitudinal.cpp
  situation/RssSituationCheckingTestsLateral.cpp
  situation/RssSituationCheckingTestsOppositeDirection.cpp
  situation/RssSituationCheckingTestsNotRelevant.cpp
)

set(RSS_TEST_SOURCES
  core/RssCheckObjectTests.cpp
  core/RssCheckTimeIndexTests.cpp
  core/RssCheckSceneTests.cpp
  core/RssCheckSameDirectionTests.cpp
  core/RssCheckOppositeDirectionTests.cpp
  core/RssCheckLateralTests.cpp
  core/RssCheckIntersectionTests.cpp
  core/RssResponseResolvingTests.cpp
  core/RssResponseTransformationTests.cpp
  core/RSSStateCombineRssStateTests.cpp
  core/RSSStateSafeTests.cpp
  core/RssSituationExtractionInputRangeTests.cpp
  core/RssSituationExtractionOppositeDirectionTests.cpp
  core/RssSituationExtractionIntersectionTests.cpp
  core/RssSituationExtractionRelativePositionTests.cpp
  core/RssSituationExtractionSameDirectionTests.cpp
  physics/MathUnitTestsDistanceOffsetAfterResponseTime.cpp
  physics/MathUnitTestsInputRangeChecks.cpp
  physics/MathUnitTestsStoppingDistance.cpp
  physics/MathUnitTestsTimeToCoverDistance.cpp
  physics/MathUnitTestsVelocityAfterResponseTime.cpp
  situation/RSSFormulaTestsCalculateDistanceAfterStatedBrakingPattern.cpp
  situation/RSSFormulaTestsCalculateSafeLateralDistance.cpp
  situation/RSSFormulaTestsCalculateSafeLongitudinalDistanceSameDirection.cpp
  situation/RSSFormulaTestsInputRangeChecks.cpp
  situation/VehicleTests.cpp
  test_support/wrap_new.cpp
  ${RSS_TEST_SOURCES_WITH_PRIVATE_ACCESS}
  ${GENERATED_TEST_SOURCES}
)

set_source_files_properties(${RSS_TEST_SOURCES_WITH_PRIVATE_ACCESS} PROPERITES COMPILE_FLAGS -fno-access-control)


add_executable(${EXEC_NAME} ${RSS_TEST_SOURCES})

target_include_directories(${EXEC_NAME}
  PRIVATE
  ../src
  test_support
)

target_link_libraries(${EXEC_NAME} PRIVATE
  GTest::Main
  ${PROJECT_NAME}
)

# Disable warnings for gtest and gtest_main
set_property(TARGET gtest gtest_main APPEND_STRING PROPERTY COMPILE_FLAGS " -w")

# Clang is more restrictive with warnings than GCC
# Some warnings are due to required tests, e.g. force move operator
# Disable these warnings
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  target_compile_options(${EXEC_NAME} PRIVATE ${COVERAGE_FLAG} ${TARGET_COMPILE_OPTIONS} -Wno-pessimizing-move -Wno-unused-comparison)
endif()
set_target_properties(${EXEC_NAME} PROPERTIES LINK_FLAGS "${COVERAGE_FLAG} ${HARDENING_LD_FLAGS}")

add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME})
