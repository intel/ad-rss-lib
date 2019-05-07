# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2018-2019 Intel Corporation
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
##
cmake_minimum_required(VERSION 3.5)
set(BUILD_TESTING "ON" CACHE BOOL "Enable test compilation")
set(BUILD_DOC "OFF" CACHE BOOL "Enable compilation of doxygen documentation")
set(BUILD_HARDENING "OFF" CACHE BOOL "Enable build hardening flags")
set(BUILD_COVERAGE "OFF" CACHE BOOL "Enable test coverage")
set(BUILD_STATIC_ANALYSIS "OFF" CACHE BOOL "Enable static code analysis")

option(BUILD_SHARED_LIBS "Libraries will be built as shared libraries" On)

include(GNUInstallDirs)
include(CMakePackageConfigHelpers)
project(ad-rss-lib VERSION 1.3.0)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    # require at least gcc 4.8
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 4.8)
        message(FATAL_ERROR "GCC version must be at least 4.8!")
    endif()
elseif("${CMAKE_CXX_COMPILER_ID}" STREQUAL "Clang")
    # require at least clang 5
    if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 3.4)
        message(FATAL_ERROR "Clang version must be at least 3.4!")
    endif()
else()
    message(WARNING "You are using an unsupported compiler! Compilation has only been tested with GCC/Clang.")
endif()

# enable a bunch of warning
add_compile_options(-Wall -Wextra -pedantic -Wfloat-equal -Wshadow -Wswitch-default -Wenum-compare -Wformat -Wformat-security)
# use some warnings only for library code not for gtest
set(TARGET_COMPILE_OPTIONS -Wconversion -Wsign-conversion)
# warnings are treated as error
add_compile_options(-Werror)

# hardening
if (BUILD_HARDENING)
  set(HARDENING_LD_FLAGS "-Wl,-z,now -Wl,-z,relro -pie")
  add_compile_options(-fstack-protector-all -fasynchronous-unwind-tables -fno-omit-frame-pointer -fwrapv -fPIE -fPIC -D_FORTIFY_SOURCE=2)
  if("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
    add_compile_options(-fno-delete-null-pointer-checks -fno-strict-overflow)
  endif()
else()
  set(HARDENING_LD_FLAGS "")
endif()

# activate code coverage
if (BUILD_COVERAGE)
  set(COVERAGE_FLAG "--coverage")
else()
  set(COVERAGE_FLAG "")
endif()


set(GENERATED_SOURCES
  src/generated/physics/Acceleration.cpp
  src/generated/physics/CoordinateSystemAxis.cpp
  src/generated/physics/Distance.cpp
  src/generated/physics/DistanceSquared.cpp
  src/generated/physics/Duration.cpp
  src/generated/physics/DurationSquared.cpp
  src/generated/physics/ParametricValue.cpp
  src/generated/physics/Speed.cpp
  src/generated/physics/SpeedSquared.cpp
  src/generated/situation/LateralRelativePosition.cpp
  src/generated/situation/LongitudinalRelativePosition.cpp
  src/generated/situation/SituationType.cpp
  src/generated/state/LateralResponse.cpp
  src/generated/state/LongitudinalResponse.cpp
  src/generated/state/ResponseEvaluator.cpp
  src/generated/world/LaneDrivingDirection.cpp
  src/generated/world/LaneSegmentType.cpp
  src/generated/world/ObjectType.cpp
)

add_library(${PROJECT_NAME}
  src/core/RssCheck.cpp
  src/core/RssResponseResolving.cpp
  src/core/RssResponseTransformation.cpp
  src/core/RssSituationChecking.cpp
  src/core/RssSituationExtraction.cpp
  src/physics/Math.cpp
  src/situation/RssFormulas.cpp
  src/situation/RssIntersectionChecker.cpp
  src/situation/RssSituation.cpp
  src/world/RssSituationCoordinateSystemConversion.cpp
  src/world/RssSituationIdProvider.cpp
  src/world/RssObjectPositionExtractor.cpp
  ${GENERATED_SOURCES}
)

set_target_properties(${PROJECT_NAME} PROPERTIES
  OUTPUT_NAME ad-rss
  VERSION ${PROJECT_VERSION}
  SOVERSION ${PROJECT_VERSION_MAJOR})

target_include_directories(${PROJECT_NAME}
  PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include/generated>
  $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>
  PRIVATE
  src
)

target_compile_options(${PROJECT_NAME} PRIVATE ${COVERAGE_FLAG} ${TARGET_COMPILE_OPTIONS})
set_target_properties(${PROJECT_NAME} PROPERTIES LINK_FLAGS "${COVERAGE_FLAG} ${HARDENING_LD_FLAGS}")

################################################################################
# Install section
################################################################################
# common section
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/ad_rss
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/generated/ad_rss
        DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})

if(IS_ABSOLUTE "${CMAKE_INSTALL_LIBDIR}")
  file(RELATIVE_PATH CMAKE_INSTALL_LIBDIR_RELATIVE "${CMAKE_INSTALL_PREFIX}" "${CMAKE_INSTALL_LIBDIR}")
else()
  set(CMAKE_INSTALL_LIBDIR_RELATIVE "${CMAKE_INSTALL_LIBDIR}")
endif()

install(TARGETS ${PROJECT_NAME} EXPORT ${PROJECT_NAME}_EXPORT
  ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR_RELATIVE}
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR_RELATIVE})

set(CMAKECONFIG_INSTALL_DIR "${CMAKE_INSTALL_LIBDIR_RELATIVE}/cmake/${PROJECT_NAME}")

install(EXPORT ${PROJECT_NAME}_EXPORT FILE ${PROJECT_NAME}Targets.cmake
  DESTINATION ${CMAKECONFIG_INSTALL_DIR})

configure_package_config_file(${PROJECT_NAME}Config.cmake.in ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake INSTALL_DESTINATION ${CMAKECONFIG_INSTALL_DIR})

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}Config.cmake"
  DESTINATION ${CMAKECONFIG_INSTALL_DIR}
  COMPONENT libs)

################################################################################
# Test section
################################################################################

if(BUILD_TESTING)
message(STATUS "Build Testing")
  enable_testing()

  configure_file(tests/gtest-cmake.txt.in googletest-download/CMakeLists.txt)
  execute_process(COMMAND "${CMAKE_COMMAND}" -G "Eclipse CDT4 - Unix Makefiles" . RESULT_VARIABLE result WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/googletest-download")
  execute_process(COMMAND "${CMAKE_COMMAND}" --build . RESULT_VARIABLE result WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/googletest-download")

  set(BUILD_SHARED_LIBS OFF)
  add_subdirectory("${CMAKE_CURRENT_BINARY_DIR}/googletest-src"
                   "${CMAKE_CURRENT_BINARY_DIR}/googletest-build"
                   EXCLUDE_FROM_ALL)
  add_subdirectory(tests)
endif()


################################################################################
# Doxygen documentation
################################################################################
if(BUILD_DOC)
  find_package(Doxygen REQUIRED)
  if (DOXYGEN_FOUND)
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/doc/apidoc/Doxyfile.in
                   ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
                   @ONLY)
    add_custom_target(apidoc
                      COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
                      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
                      COMMENT "Build doxygen documentation")
    file(MAKE_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/doc/apidoc)
  else()
    message(FATAL_ERROR, "Doxygen needs to be installed")
  endif()
endif()


################################################################################
# Run clang-tidy to perform static code checks
################################################################################

if(BUILD_STATIC_ANALYSIS)

  if(NOT EXISTS /usr/bin/clang-tidy)
    message(FATAL_ERROR "Static code analysis requires clang-tidy to be installed in /usr/bin")
  endif()

  file(GLOB_RECURSE ALL_SOURCE_FILES src/*.cpp)

  add_custom_target(
    clang-tidy
    COMMAND /usr/bin/clang-tidy
    ${ALL_SOURCE_FILES}
    -config=''
    -header-filter=.*
    -export-fixes=${CMAKE_CURRENT_SOURCE_DIR}/build/clangtidy.yml
    --
    -std=c++11
    -I${CMAKE_CURRENT_SOURCE_DIR}/include/
    -I${CMAKE_CURRENT_SOURCE_DIR}/include/generated/
    -I${CMAKE_CURRENT_SOURCE_DIR}/src/
    -I${CMAKE_CURRENT_SOURCE_DIR}/src/generated/
  )
endif()

