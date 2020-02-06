# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

include(CMakeDependentOption)

option(BUILD_APIDOC "Enable API documentation build" OFF)
set(DOXYFILE_TEMPLATE ${CMAKE_SOURCE_DIR}/doc/Doxyfile.in CACHE FILEPATH "Doxyfile template to use")


if(BUILD_APIDOC)
  find_package(Doxygen REQUIRED)

  if(DOXYGEN_FOUND)
    configure_file(${DOXYFILE_TEMPLATE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)

    add_custom_target(apidoc ALL
      COMMAND ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
      WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
      COMMENT "Build API documentation with doxygen"
    )
  else()
    message(SEND_ERROR "Doxygen required for creating API documentation")
  endif()
endif()
