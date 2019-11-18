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

#include "ad_rss/physics/Speed.hpp"
#include "ad_rss/physics/SpeedSquared.hpp"

const double ::ad_rss::physics::Speed::cMinValue = -1e3;

const double ::ad_rss::physics::Speed::cMaxValue = 1e3;

const double ::ad_rss::physics::Speed::cPrecisionValue = 1e-3;

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace physics
 */
namespace physics {

::ad_rss::physics::SpeedSquared Speed::operator*(const Speed &other) const
{
  ensureValid();
  other.ensureValid();
  ::ad_rss::physics::SpeedSquared const result(mSpeed * other.mSpeed);
  result.ensureValid(); // LCOV_EXCL_BR_LINE On correct definition of squarerooted type, this cannot not happen
  return result;
}

} // namespace physics
} // namespace ad_rss
