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

#include "ad_rss/physics/SpeedSquared.hpp"
#include "ad_rss/physics/Speed.hpp"

const double ::ad_rss::physics::SpeedSquared::cMinValue = -1e6;

const double ::ad_rss::physics::SpeedSquared::cMaxValue = 1e6;

const double ::ad_rss::physics::SpeedSquared::cPrecisionValue = 1e-6;

namespace std {

::ad_rss::physics::Speed sqrt(::ad_rss::physics::SpeedSquared const other)
{
  ::ad_rss::physics::Speed result(std::sqrt(static_cast<double>(other)));
  result.ensureValid();
  return result;
}

} // namespace std
