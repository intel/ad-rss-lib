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
  configure_file(
    ${PYTHON_WRAPPER_HELPER_DIR}/python_wrapper_helper.py.in
    python_wrapper_helper.py
    @ONLY
  )

  set(PYTHON_CMD python)
  if ( PYTHON_BINDINGS )
    list(GET PYTHON_BINDINGS 0 PYTHON_CMD)
  endif()

  execute_process(
    COMMAND ${PYTHON_CMD} generate_python_lib.py
    WORKING_DIRECTORY ${WORKING_DIR}
    RESULT_VARIABLE GENERATE_PYTHON_RESULT
    OUTPUT_VARIABLE GENERATE_PYTHON_STDOUT_STDERR
    ERROR_VARIABLE GENERATE_PYTHON_STDOUT_STDERR
  )

  set(message_level STATUS)
  if ( ${GENERATE_PYTHON_RESULT} )
    set(message_level WARNING)
  endif()
  message(${message_level} "Generator call: ${PYTHON_CMD} generate_python_lib.py")
  message(${message_level} "Generating result: ${GENERATE_PYTHON_RESULT}")
  message(${message_level} "Generator output: ${GENERATE_PYTHON_STDOUT_STDERR}")
endfunction()


function(find_python_binding_packages)

  find_package(Boost 1.80 REQUIRED)
  if(${Boost_MAJOR_VERSION}.${Boost_MINOR_VERSION} VERSION_GREATER 1.66)
    set(BOOST_PYTHON_SHORT_NAME ON)
  endif()

  if ("${PYTHON_BINDING_VERSIONS}" STREQUAL "")
    set(PYTHON_BINDING_VERSIONS 2.7 3.5 3.6 3.7 3.8)
  endif()
  set(REPORT_FIND_PACKAGE_ERROR 0)
  foreach(PYTHON_VERSION_SEARCH ${PYTHON_BINDING_VERSIONS})
    unset(PYTHON_INCLUDE_DIR)
    unset(PYTHON_INCLUDE_DIR CACHE)
    unset(PYTHON_LIBRARY)
    unset(PYTHON_LIBRARY CACHE)
    #message(STATUS "Trying python version ${PYTHON_VERSION_SEARCH}...")
    find_package(PythonLibs EXACT ${PYTHON_VERSION_SEARCH} QUIET)
    if (PYTHONLIBS_FOUND)
      #message(STATUS "Trying boost python for ${PYTHON_VERSION_SEARCH}...")
      string(REGEX REPLACE "^([0-9]+)\\.([0-9]+).*" "\\1\\2" PYTHON_MAJ_MIN ${PYTHONLIBS_VERSION_STRING})
      string(REGEX REPLACE "^([0-9]+\.[0-9]+).*" "\\1" PYTHON_MAJ_DOT_MIN ${PYTHONLIBS_VERSION_STRING})
      set(BINDING_NAME "python${PYTHON_MAJ_DOT_MIN}")
      if(BOOST_PYTHON_SHORT_NAME)
        if (REPORT_FIND_PACKAGE_ERROR)
          message(FATAL_ERROR "Newer boost python versions (verified for 1.71.0/1.72.0 for now) don't support search for multiple versions,"
            " because in the first run the Boost::python target is created and the detailed python-sub versions are scanned once."
            " Consecutive runs don't scan the sub versions anymore and therefore the Boost::python IMPORTED_LOCATION_RELEASE is"
            " not touched. A second scan is impossible.\n"
            "Please provide your desired boost_python version via PYTHON_BINDING_VERSIONS cmake variable (e.g. one out of: ${PYTHON_BINDING_VERSIONS})")
        endif()
        set(REPORT_FIND_PACKAGE_ERROR 1)
        set(BOOST_COMPONENT_${BINDING_NAME} python${PYTHON_MAJ_MIN})
      else()
        set(BOOST_COMPONENT_${BINDING_NAME} python-py${PYTHON_MAJ_MIN})
      endif()
      find_package(Boost 1.80 COMPONENTS REQUIRED ${BOOST_COMPONENT_${BINDING_NAME}})
      message(STATUS "Found Boost version '${Boost_VERSION}' includes '${Boost_INCLUDE_DIRS}' link-target 'Boost::${BOOST_COMPONENT_${BINDING_NAME}}'\n: using Python includes '${PYTHON_INCLUDE_DIRS}' and lib '${PYTHON_LIBRARIES}'")
      list(APPEND LOCAL_PYTHON_BINDINGS ${BINDING_NAME})
      set(LOCAL_PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_${BINDING_NAME}
        ${Boost_INCLUDE_DIRS}
        ${PYTHON_INCLUDE_DIRS})
      set(LOCAL_PYTHON_BINDING_PACKAGE_LIBRARIES_${BINDING_NAME}
        Boost::${BOOST_COMPONENT_${BINDING_NAME}}
        ${PYTHON_LIBRARIES})
      set(PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_${BINDING_NAME}
        ${LOCAL_PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_${BINDING_NAME}}
        PARENT_SCOPE)
      set(PYTHON_BINDING_PACKAGE_LIBRARIES_${BINDING_NAME}
        ${LOCAL_PYTHON_BINDING_PACKAGE_LIBRARIES_${BINDING_NAME}}
        PARENT_SCOPE)
    endif()
  endforeach()

  set(PYTHON_BINDINGS ${LOCAL_PYTHON_BINDINGS} PARENT_SCOPE)

  set(LOCAL_PYTHON_BINDING_STRING_LIST)
  foreach(binding ${LOCAL_PYTHON_BINDINGS})
    message(STATUS "  ${binding}: Includes: ${LOCAL_PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_${binding}}; Libs: ${LOCAL_PYTHON_BINDING_PACKAGE_LIBRARIES_${binding}}")
    string(REPLACE "." "" binding_string ${binding})
    if("${LOCAL_PYTHON_BINDING_STRING_LIST}" STREQUAL "")
      set(LOCAL_PYTHON_BINDING_STRING_LIST "\"${binding_string}\"")
    else()
      set(LOCAL_PYTHON_BINDING_STRING_LIST "${LOCAL_PYTHON_BINDING_STRING_LIST}, \"${binding_string}\"")
    endif()
  endforeach()
  set(PYTHON_BINDING_STRING_LIST ${LOCAL_PYTHON_BINDING_STRING_LIST} PARENT_SCOPE)
endfunction()

function(get_python_test_environment python_binding)
  set(TEST_LD_LIBRARY_PATH "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}")
  set(TEST_PYTHONPATH "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}/${python_binding}")
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
      set(TEST_PYTHONPATH "${TEST_PYTHONPATH}:${TEST_${dep}_LOCATION}/${python_binding}")
    else()
      message(WARNING "Failed to query mandatory location of dependency ${dep}")
    endif()
  endforeach()
  set(PYTHON_TEST_ENVIRONMENT "PYTHONPATH=${TEST_PYTHONPATH}; LD_LIBRARY_PATH=${TEST_LD_LIBRARY_PATH}" PARENT_SCOPE)
endfunction()
