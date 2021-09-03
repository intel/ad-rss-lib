/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

#include "wrap_new.hpp"
#include <malloc.h>

uint64_t gNewThrowCounter{0u};
uint64_t gNewThrowSize{0u};

void *operator new(std::size_t count)
{
  if (gNewThrowCounter > 0u)
  {
    if ((gNewThrowSize == 0u) || (gNewThrowSize == count))
    {
      gNewThrowCounter--;
    }
    if (gNewThrowCounter == 0u)
    {
      throw std::bad_alloc();
    }
  }
  return malloc(count);
}
