# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019-2021 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

option(BUILD_SHARED_LIBS "Build shared libraries instead of static ones" ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 14)

# ensure correct safe datatype handling
list(APPEND TARGET_COMPILE_OPTIONS $<$<NOT:$<BOOL:${DISABLE_SAFE_DATATYPES_EXPLICIT_CONVERSION}>>:-DSAFE_DATATYPES_EXPLICIT_CONVERSION=1>)
