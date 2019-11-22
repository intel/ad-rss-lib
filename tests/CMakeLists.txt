# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

#####################################################################
# rss_tests - executable setup
#####################################################################
set(EXEC_NAME ad-rss-tests)

include(generated/CMakeLists.txt)

set(RSS_TEST_SOURCES_WITH_PRIVATE_ACCESS
  core/RssResponseCombineTests.cpp
  core/RssSituationExtractionInputRangeTests.cpp
  core/RssSituationExtractionRelativePositionTests.cpp
  situation/RssSituationCheckingInputRangeTests.cpp
  situation/RssSituationCheckingTestsIntersectionInputRangeTests.cpp
  situation/RssSituationCheckingTestsIntersectionNoPriority.cpp
  situation/RssSituationCheckingTestsIntersectionPriority.cpp
  situation/RssSituationCheckingTestsLateral.cpp
  situation/RssSituationCheckingTestsLongitudinal.cpp
  situation/RssSituationCheckingTestsNotRelevant.cpp
  situation/RssSituationCheckingTestsOppositeDirection.cpp
)

set(RSS_TEST_SOURCES
  core/RssCheckIntersectionTests.cpp
  core/RssCheckLateralTests.cpp
  core/RssCheckNotRelevantTests.cpp
  core/RssCheckObjectTests.cpp
  core/RssCheckOppositeDirectionTests.cpp
  core/RssCheckSameDirectionTests.cpp
  core/RssCheckSceneTests.cpp
  core/RssCheckTimeIndexTests.cpp
  core/RssResponseResolvingTests.cpp
  core/RssResponseTransformationTests.cpp
  core/RssSituationExtractionIntersectionTests.cpp
  core/RssSituationExtractionOppositeDirectionTests.cpp
  core/RssSituationExtractionSameDirectionTests.cpp
  core/RssSituationIdProviderTests.cpp
  physics/MathUnitTestsDistanceOffsetAfterResponseTime.cpp
  physics/MathUnitTestsInputRangeChecks.cpp
  physics/MathUnitTestsStoppingDistance.cpp
  physics/MathUnitTestsTimeToCoverDistance.cpp
  physics/MathUnitTestsVelocityAfterResponseTime.cpp
  state/RssStateSafeTests.cpp
  situation/RssFormulaTestsCalculateDistanceAfterStatedBrakingPattern.cpp
  situation/RssFormulaTestsCalculateSafeLateralDistance.cpp
  situation/RssFormulaTestsCalculateSafeLongitudinalDistanceSameDirection.cpp
  situation/RssFormulaTestsInputRangeChecks.cpp
  situation/VehicleTests.cpp
  test_support/TestSupport.cpp
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
  gtest_main
  ${PROJECT_NAME}
)

# Disable warnings for gtest and gtest_main
if(TARGET gtest)
  set_property(TARGET gtest APPEND_STRING PROPERTY COMPILE_FLAGS " -w")
  get_target_property(lib_include_dirs gtest INCLUDE_DIRECTORIES)
  target_include_directories(${EXEC_NAME} SYSTEM PRIVATE ${lib_include_dirs})
endif()
if(TARGET gtest_main)
  set_property(TARGET gtest_main APPEND_STRING PROPERTY COMPILE_FLAGS " -w")
endif()


target_compile_options(${EXEC_NAME} PRIVATE ${COVERAGE_FLAG} ${TARGET_COMPILE_OPTIONS})

# Clang is more restrictive with warnings than GCC
# Some warnings are due to required tests, e.g. force move operator
# Disable these warnings
if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
  target_compile_options(${EXEC_NAME} PRIVATE -Wno-unused-comparison)
  if(CMAKE_CXX_COMPILER_VERSION VERSION_GREATER 3.5)
    target_compile_options(${EXEC_NAME} PRIVATE -Wno-pessimizing-move)
  endif()
endif()
set_target_properties(${EXEC_NAME} PROPERTIES LINK_FLAGS "${COVERAGE_FLAG} ${HARDENING_LD_FLAGS}")

add_test(NAME ${EXEC_NAME} COMMAND ${EXEC_NAME})
