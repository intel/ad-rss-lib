/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#include "ad_rss/physics/Duration.hpp"
#include "ad_rss/physics/DurationSquared.hpp"

const double ::ad_rss::physics::Duration::cMinValue = -1e6;

const double ::ad_rss::physics::Duration::cMaxValue = 1e6;

const double ::ad_rss::physics::Duration::cPrecisionValue = 1e-3;

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace physics
 */
namespace physics {

::ad_rss::physics::DurationSquared Duration::operator*(const Duration &other) const
{
  ensureValid();
  other.ensureValid();
  ::ad_rss::physics::DurationSquared const result(mDuration * other.mDuration);
  result.ensureValid(); // LCOV_EXCL_BR_LINE On correct definition of squarerooted type, this cannot not happen
  return result;
}

} // namespace physics
} // namespace ad_rss
