# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019 Intel Corporation
#
# SPDX-License-Identifier: LGPL-2.1-only
#
# ----------------- END LICENSE BLOCK -----------------------------------

# enable warnings
list(APPEND TARGET_COMPILE_OPTIONS -Wall -Wextra -pedantic -Wfloat-equal -Wshadow -Wswitch-default -Wenum-compare -Wformat -Wformat-security -Wconversion -Wsign-conversion)

# treat warnings as errors
list(APPEND TARGET_COMPILE_OPTIONS $<$<NOT:$<BOOL:${DISABLE_WARNINGS_AS_ERRORS}>>:-Werror>)
