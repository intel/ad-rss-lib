// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
#pragma once

#include <cstdint>
#include <new>

/**
 * @brief if the counter switches to zero when new() is called,
 * an std::bad_alloc() exception is thrown.
 */
extern uint64_t gNewThrowCounter;

/**
 * @brief if size number of bytes should be allocated by new() (gNewThrowSize>0),
 * then an std::bad_alloc() exception is thrown.
 */
extern uint64_t gNewThrowSize;
