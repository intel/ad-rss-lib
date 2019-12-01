# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (c) 2019 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

FIND_PACKAGE(PythonInterp REQUIRED)

if (PYTHONINTERP_FOUND)
  if (PYTHON_VERSION_MAJOR EQUAL 3)
    FIND_PACKAGE(Boost COMPONENTS REQUIRED python${PYTHON_VERSION_SUFFIX})
    FIND_PACKAGE(PythonInterp 3)
    FIND_PACKAGE(PythonLibs 3 REQUIRED)
  else()
    FIND_PACKAGE(Boost COMPONENTS REQUIRED python)
    FIND_PACKAGE(PythonInterp 2.7 EXACT REQUIRED)    
    FIND_PACKAGE(PythonLibs 2.7 EXACT)
    if (PYTHONLIBS_VERSION_STRING VERSION_GREATER "2.7")
      set(PYTHON_INCLUDE_DIRS "/usr/include/python2.7")
      set(PYTHON_LIBRARIES "/usr/lib/x86_64-linux-gnu/libpython2.7.so")
    endif()
  endif()
endif()

add_library(ad_rss_python SHARED
  PythonWrapper.cpp
)
  
include_directories(
  ${PYTHON_INCLUDE_DIRS}
)

target_link_libraries(ad_rss_python PRIVATE
  ${PROJECT_NAME}
  Boost::python
  ${PYTHON_LIBRARIES}
)

################################################################################
# Install section
################################################################################

if(IS_ABSOLUTE "${CMAKE_INSTALL_LIBDIR}")
  file(RELATIVE_PATH CMAKE_INSTALL_LIBDIR_RELATIVE "${CMAKE_INSTALL_PREFIX}" "${CMAKE_INSTALL_LIBDIR}")
else()
  set(CMAKE_INSTALL_LIBDIR_RELATIVE "${CMAKE_INSTALL_LIBDIR}")
endif()

install(TARGETS ad_rss_python EXPORT ad_rss_python_EXPORT
	      LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR_RELATIVE})
