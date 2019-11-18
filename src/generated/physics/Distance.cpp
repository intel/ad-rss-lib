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

#include "ad_rss/physics/Distance.hpp"
#include "ad_rss/physics/DistanceSquared.hpp"

const double ::ad_rss::physics::Distance::cMinValue = -1e6;

const double ::ad_rss::physics::Distance::cMaxValue = 1e6;

const double ::ad_rss::physics::Distance::cPrecisionValue = 1e-3;

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace physics
 */
namespace physics {

::ad_rss::physics::DistanceSquared Distance::operator*(const Distance &other) const
{
  ensureValid();
  other.ensureValid();
  ::ad_rss::physics::DistanceSquared const result(mDistance * other.mDistance);
  result.ensureValid(); // LCOV_EXCL_BR_LINE On correct definition of squarerooted type, this cannot not happen
  return result;
}

} // namespace physics
} // namespace ad_rss
