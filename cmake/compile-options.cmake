# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019-2020 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

option(BUILD_SHARED_LIBS "Build shared libraries instead of static ones" ON)

# ensure correct safe datatype handling
list(APPEND TARGET_COMPILE_OPTIONS $<$<NOT:$<BOOL:${DISABLE_SAFE_DATATYPES_EXPLICIT_CONVERSION}>>:-DSAFE_DATATYPES_EXPLICIT_CONVERSION=1>)
