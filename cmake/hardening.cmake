# ----------------- BEGIN LICENSE BLOCK ---------------------------------
#
# Copyright (C) 2019 Intel Corporation
#
# ----------------- END LICENSE BLOCK -----------------------------------

option(BUILD_HARDENING "Enable build hardening flags" OFF)

# hardening
if (BUILD_HARDENING)
  list(APPEND TARGET_LINK_OPTIONS -Wl,-z,now -Wl,-z,relro -pie)
endif()
list(APPEND TARGET_COMPILE_OPTIONS $<$<BOOL:${BUILD_HARDENING}>:-fstack-protector-all -fasynchronous-unwind-tables -fno-omit-frame-pointer -fwrapv -fPIE -fPIC -D_FORTIFY_SOURCE=2>)
list(APPEND TARGET_COMPILE_OPTIONS $<$<CXX_COMPILER_ID:GNU>:-fno-delete-null-pointer-checks -fno-strict-overflow>)
