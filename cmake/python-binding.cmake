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

  find_package(Boost REQUIRED)
  if(${Boost_MAJOR_VERSION}.${Boost_MINOR_VERSION} VERSION_GREATER 1.66)
    set(BOOST_PYTHON_SHORT_NAME ON)
  endif()

  #python2
  unset(PYTHON_INCLUDE_DIR)
  unset(PYTHON_INCLUDE_DIR CACHE)
  unset(PYTHON_LIBRARY)
  unset(PYTHON_LIBRARY CACHE)
  find_package(PythonLibs 2)
  if (PYTHONLIBS_FOUND)
    string(REGEX REPLACE "^([0-9]+)\\.([0-9]+).*" "\\1\\2" PYTHON_MAJ_MIN ${PYTHONLIBS_VERSION_STRING})
    if(BOOST_PYTHON_SHORT_NAME)
      set(BOOST_COMPONENT_PYTHON2 python${PYTHON_MAJ_MIN})
    else()
      set(BOOST_COMPONENT_PYTHON2 python-py${PYTHON_MAJ_MIN})
    endif()
    find_package(Boost COMPONENTS REQUIRED ${BOOST_COMPONENT_PYTHON2})
    message(STATUS "PythonLib 2 found. ${PYTHON_INCLUDE_DIRS}, ${PYTHON_LIBRARIES}")
    list(APPEND LOCAL_PYTHON_BINDINGS PYTHON2)
    set(LOCAL_PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_PYTHON2
      ${PYTHON_INCLUDE_DIRS})
    set(LOCAL_PYTHON_BINDING_PACKAGE_LIBRARIES_PYTHON2
      Boost::${BOOST_COMPONENT_PYTHON2}
      ${PYTHON_LIBRARIES})
    set(PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_PYTHON2
      ${LOCAL_PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_PYTHON2}
      PARENT_SCOPE)
    set(PYTHON_BINDING_PACKAGE_LIBRARIES_PYTHON2
      ${LOCAL_PYTHON_BINDING_PACKAGE_LIBRARIES_PYTHON2}
      PARENT_SCOPE)
  endif()

  #python3
  unset(PYTHON_INCLUDE_DIR)
  unset(PYTHON_INCLUDE_DIR CACHE)
  unset(PYTHON_LIBRARY)
  unset(PYTHON_LIBRARY CACHE)
  find_package(PythonLibs 3)
  if (PYTHONLIBS_FOUND)
    string(REGEX REPLACE "^([0-9]+)\\.([0-9]+).*" "\\1\\2" PYTHON_MAJ_MIN ${PYTHONLIBS_VERSION_STRING})
    if(BOOST_PYTHON_SHORT_NAME)
      set(BOOST_COMPONENT_PYTHON3 python${PYTHON_MAJ_MIN})
    else()
      set(BOOST_COMPONENT_PYTHON3 python-py${PYTHON_MAJ_MIN})
    endif()
    find_package(Boost COMPONENTS REQUIRED ${BOOST_COMPONENT_PYTHON3})
    list(APPEND LOCAL_PYTHON_BINDINGS PYTHON3)
    set(LOCAL_PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_PYTHON3
      ${PYTHON_INCLUDE_DIRS})
    set(LOCAL_PYTHON_BINDING_PACKAGE_LIBRARIES_PYTHON3
      Boost::${BOOST_COMPONENT_PYTHON3}
      ${PYTHON_LIBRARIES})
    set(PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_PYTHON3
      ${LOCAL_PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_PYTHON3}
      PARENT_SCOPE)
    set(PYTHON_BINDING_PACKAGE_LIBRARIES_PYTHON3
      ${LOCAL_PYTHON_BINDING_PACKAGE_LIBRARIES_PYTHON3}
      PARENT_SCOPE)
  endif()

  set(PYTHON_BINDINGS ${LOCAL_PYTHON_BINDINGS} PARENT_SCOPE)

  #message(STATUS "Boost_VERSION: ${Boost_VERSION}; Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}; Boost_LIBRARY_DIRS: ${Boost_LIBRARY_DIRS}")
  foreach(binding ${LOCAL_PYTHON_BINDINGS})
    message(STATUS "  ${binding}: Includes: ${LOCAL_PYTHON_BINDING_PACKAGE_INCLUDE_DIRS_${binding}}; Libs: ${LOCAL_PYTHON_BINDING_PACKAGE_LIBRARIES_${binding}}")
  endforeach()
endfunction()

function(get_python_test_environment)
  set(TEST_DEPS_LOCATION "${CMAKE_INSTALL_PREFIX}/${CMAKE_INSTALL_LIBDIR}")
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
      set(TEST_DEPS_LOCATION "${TEST_DEPS_LOCATION}:${TEST_${dep}_LOCATION}")
    else()
      message(WARNING "Failed to query mandatory location of dependency ${dep}")
    endif()
  endforeach()
  set(PYTHON_TEST_ENVIRONMENT "PYTHONPATH=${TEST_DEPS_LOCATION}; LD_LIBRARY_PATH=${TEST_DEPS_LOCATION}" PARENT_SCOPE)
endfunction()
