# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2020 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

include(CMakeDependentOption)

option(BUILD_PYTHON_BINDING "Build python binding" OFF)
list(APPEND TARGET_COMPILE_OPTIONS $<$<BOOL:${BUILD_PYTHON_BINDING}>:-Wno-sign-conversion -Wno-conversion>)
set(PYTHON_WRAPPER_HELPER_DIR ${CMAKE_CURRENT_LIST_DIR}/python)

function(generate_python_binding_source_code WORKING_DIR)

  message(STATUS "Generating python binding source code at ${WORKING_DIR}" )
  configure_file(${PYTHON_WRAPPER_HELPER_DIR}/python_wrapper_helper.py.in python_wrapper_helper.py @ONLY)

  execute_process(
    COMMAND ${PYTHON_BINDING_EXECUTABLE} generate_python_lib.py
    WORKING_DIRECTORY ${WORKING_DIR}
    RESULT_VARIABLE GENERATE_PYTHON_RESULT
    OUTPUT_VARIABLE GENERATE_PYTHON_STDOUT_STDERR
    ERROR_VARIABLE GENERATE_PYTHON_STDOUT_STDERR
  )

  set(message_level STATUS)
  if ( ${GENERATE_PYTHON_RESULT} )
    set(message_level WARNING)
  endif()
  message(${message_level} "Generator call: ${PYTHON_BINDING_EXECUTABLE} generate_python_lib.py")
  message(${message_level} "Generating result: ${GENERATE_PYTHON_RESULT}")
  message(${message_level} "Generator output: ${GENERATE_PYTHON_STDOUT_STDERR}")
endfunction()


function(find_python_binding_packages)

  if ("${PYTHON_BINDING_VERSION}" STREQUAL "")
    find_package(Python3 COMPONENTS Interpreter Development REQUIRED)
  else()
    find_package(Python3 COMPONENTS Interpreter Development EXACT "${PYTHON_BINDING_VERSION}" REQUIRED)
  endif()

  find_package(Boost CONFIG REQUIRED)
  if(${Boost_MAJOR_VERSION}.${Boost_MINOR_VERSION} VERSION_GREATER 1.66)
    set(BOOST_PYTHON_COMPONENT python${Python3_VERSION_MAJOR}${Python3_VERSION_MINOR})
  else()
    set(BOOST_PYTHON_COMPONENT python-py${Python3_VERSION_MAJOR}${Python3_VERSION_MINOR})
  endif()
  find_package(Boost CONFIG COMPONENTS REQUIRED ${BOOST_PYTHON_COMPONENT})

  set(PYTHON_BINDING_NAME
    "python${Python3_VERSION_MAJOR}${Python3_VERSION_MINOR}"
    PARENT_SCOPE)
  set(PYTHON_BINDING_FOLDER_NAME
    "python${Python3_VERSION_MAJOR}.${Python3_VERSION_MINOR}"
    PARENT_SCOPE)
  set(PYTHON_BINDING_PACKAGE_INCLUDE_DIRS
    ${Boost_INCLUDE_DIRS}
    ${Python3_INCLUDE_DIRS}
    PARENT_SCOPE)
  set(PYTHON_BINDING_PACKAGE_LIBRARIES
    Boost::${BOOST_PYTHON_COMPONENT}
    ${Python3_LIBRARIES}
    PARENT_SCOPE)
  set(PYTHON_BINDING_EXECUTABLE
    ${Python3_EXECUTABLE}
    PARENT_SCOPE)

endfunction()

function(get_python_test_environment)
  set(PACKAGE_FOLDER_NAME "${PYTHON_PACKAGE_FOLDER_NAME}")
  if ("${PACKAGE_FOLDER_NAME}" STREQUAL "")
    set(PACKAGE_FOLDER_NAME "site-packages")
  endif()
  if ("${PACKAGE_FOLDER_NAME}" STREQUAL "dist-packages")
    set(LIBDIR_PREFIX "local/")
  else()
    set(LIBDIR_PREFIX "")
  endif()
  
  set(TEST_LD_LIBRARY_PATH "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}")
  set(TEST_PYTHONPATH "${CMAKE_INSTALL_PREFIX}/${LIBDIR_PREFIX}${CMAKE_INSTALL_LIBDIR}/${PYTHON_BINDING_FOLDER_NAME}/${PACKAGE_FOLDER_NAME}")
  foreach(dep ${ARGN})
    get_target_property(dep_configurations ${dep} IMPORTED_CONFIGURATIONS)
    set(TEST_${dep}_LOCATION False)
    foreach(dep_config ${dep_configurations})
      get_target_property(dep_location ${dep} IMPORTED_LOCATION_${dep_config})
      if(dep_location)
        get_filename_component(TEST_${dep}_LOCATION ${dep_location} PATH)
        break()
      endif()
    endforeach()
    if(TEST_${dep}_LOCATION)
      set(TEST_LD_LIBRARY_PATH "${LD_LIBRARY_PATH}:${TEST_${dep}_LOCATION}")
      string(REGEX REPLACE "/${CMAKE_INSTALL_LIBDIR}$" "" TEST_${dep}_INSTALL_PREFIX ${TEST_${dep}_LOCATION})
      set(TEST_PYTHONPATH "${TEST_PYTHONPATH}:${TEST_${dep}_INSTALL_PREFIX}/${LIBDIR_PREFIX}${CMAKE_INSTALL_LIBDIR}/${PYTHON_BINDING_FOLDER_NAME}/${PACKAGE_FOLDER_NAME}")
    else()
      message(WARNING "Failed to query mandatory location of dependency ${dep}")
    endif()
  endforeach()
  set(PYTHON_TEST_ENVIRONMENT "PYTHONPATH=${TEST_PYTHONPATH}; LD_LIBRARY_PATH=${TEST_LD_LIBRARY_PATH}" PARENT_SCOPE)
endfunction()
