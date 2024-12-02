# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

# enable warnings
list(APPEND TARGET_COMPILE_OPTIONS -Wall -Wextra -pedantic -Wfloat-equal -Wshadow -Wswitch-default -Wenum-compare -Wformat -Wformat-security -Wconversion -Wsign-conversion)

# treat warnings as errors
list(APPEND TARGET_COMPILE_OPTIONS $<$<NOT:$<BOOL:${DISABLE_WARNINGS_AS_ERRORS}>>:-Werror>)

# disable some warnings on 3rd party code
list(APPEND TARGET_COMPILE_OPTIONS $<$<CXX_COMPILER_ID:CXX,gcc>:-Wno-error=maybe-uninitialized>)
list(APPEND TARGET_COMPILE_OPTIONS -Wno-error=deprecated-declarations)

