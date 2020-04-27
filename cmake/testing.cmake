# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

include(CMakeDependentOption)

option(BUILD_TESTING "Include tests into build" OFF)
cmake_dependent_option(BUILD_COVERAGE "Enable test coverage" OFF "BUILD_TESTING" OFF)

if(BUILD_TESTING)
  include(CTest)

  include("${CMAKE_CURRENT_LIST_DIR}/gtest.cmake")
endif()

# coverage
if(BUILD_COVERAGE)
  list(APPEND TARGET_LINK_OPTIONS --coverage)
endif()
list(APPEND TARGET_COMPILE_OPTIONS $<$<BOOL:${BUILD_COVERAGE}>:--coverage -O0 -fno-inline -fno-inline-small-functions -fno-default-inline>)
