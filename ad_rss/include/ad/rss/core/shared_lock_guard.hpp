// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <mutex>
#include <shared_mutex>

/*!
 * @brief namespace rss
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace core {

class shared_lock_guard
{
public:
  shared_lock_guard(std::shared_timed_mutex &lock)
    : mLock(lock)
  {
    mLock.lock_shared();
  }
  ~shared_lock_guard()
  {
    mLock.unlock_shared();
  }

private:
  std::shared_timed_mutex &mLock;
};

} // namespace core
} // namespace rss
} // namespace ad
