# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

if(NOT TARGET GTest::gtest)
  find_package(GTest QUIET CONFIG)
  if (NOT GTest_FOUND)
    #As Ubuntu never ships precompiled gtest libraries, build them on-the-fly from source
    #requires gtest-dev package to be intalled
    set(gtest_source_paths /usr/src/googletest/ /usr/src/gtest/ ${GTEST_SRC_PATH})
    foreach (src_path IN LISTS gtest_source_paths)
      if(EXISTS ${src_path}/CMakeLists.txt)
        set(gtest_src_path ${src_path})
        break()
      endif()
    endforeach()
    if(gtest_src_path)
      message(STATUS "Using gtest source build from: ${gtest_src_path}")
      set(BUILD_SHARED_LIBS_SAVED "${BUILD_SHARED_LIBS}")
      set(BUILD_SHARED_LIBS OFF)
      set(CMAKE_POSITION_INDEPENDENT_CODE ON)
      add_subdirectory(${gtest_src_path} gtest EXCLUDE_FROM_ALL)
      set(BUILD_SHARED_LIBS "${BUILD_SHARED_LIBS_SAVED}")
      add_library(GTest::gtest ALIAS gtest)
      add_library(GTest::gtest_main ALIAS gtest_main)
    else()
      message(ERROR "Neither installed gtest nor sources found.")
    endif()
  else()
    message(STATUS "Using installed gtest")
  endif()
endif()
