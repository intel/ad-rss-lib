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
  configure_file(${PYTHON_WRAPPER_HELPER_DIR}/python_wrapper_helper.py python_wrapper_helper.py COPYONLY)

  execute_process(
    COMMAND python generate_python_lib.py
    WORKING_DIRECTORY ${WORKING_DIR}
    RESULT_VARIABLE GENERATE_PYTHON_RESULT
    OUTPUT_VARIABLE GENERATE_PYTHON_STDOUT_STDERR
    ERROR_VARIABLE GENERATE_PYTHON_STDOUT_STDERR
  )

  set(message_level STATUS)
  if ( ${GENERATE_PYTHON_RESULT} )
    set(message_level WARNING)
  endif()
  message(${message_level} "Generating result: ${GENERATE_PYTHON_RESULT}")
  message(${message_level} "Generator output: ${GENERATE_PYTHON_STDOUT_STDERR}")
endfunction()


function(find_python_binding_packages)
  find_package(PythonInterp REQUIRED)

  if (PYTHONINTERP_FOUND)
    find_package(Boost REQUIRED)
    if ( "${Boost_MAJOR_VERSION}" STREQUAL "1")
      if (${Boost_MINOR_VERSION} GREATER 66)
        set(BOOST_PYTHON_VERSION_SUFFIX ${PYTHON_VERSION_MAJOR}${PYTHON_VERSION_MINOR})
      endif()
    endif()

    if (PYTHON_VERSION_MAJOR EQUAL 3)
      find_package(Boost COMPONENTS REQUIRED python${BOOST_PYTHON_VERSION_SUFFIX})
      find_package(PythonInterp 3)
      find_package(PythonLibs 3 REQUIRED)
    else()
      find_package(Boost COMPONENTS REQUIRED python${BOOST_PYTHON_VERSION_SUFFIX})
      find_package(PythonInterp 2.7 EXACT REQUIRED)
      find_package(PythonLibs 2.7 EXACT)
      if (PYTHONLIBS_VERSION_STRING VERSION_GREATER "2.7")
        set(PYTHON_INCLUDE_DIRS "/usr/include/python2.7")
        set(PYTHON_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
      endif()
    endif()
  endif()

  #message(STATUS "Boost_VERSION: ${Boost_VERSION}; Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}; Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")
  message(STATUS "PYTHON_BINDING_PACKAGE_INCLUDE_DIRS=${PYTHON_INCLUDE_DIRS}; PYTHON_BINDING_PACKAGE_LIBRARIES=Boost::python${BOOST_PYTHON_VERSION_SUFFIX}; ${PYTHON_LIBRARIES}")
  set(PYTHON_BINDING_PACKAGE_INCLUDE_DIRS
    ${PYTHON_INCLUDE_DIRS}
    PARENT_SCOPE)
  set(PYTHON_BINDING_PACKAGE_LIBRARIES
    Boost::python${BOOST_PYTHON_VERSION_SUFFIX}
    ${PYTHON_LIBRARIES}
    PARENT_SCOPE)
endfunction()
