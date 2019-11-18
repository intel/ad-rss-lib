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

#include "ad_rss/physics/DistanceSquared.hpp"
#include "ad_rss/physics/Distance.hpp"

const double ::ad_rss::physics::DistanceSquared::cMinValue = -1e12;

const double ::ad_rss::physics::DistanceSquared::cMaxValue = 1e12;

const double ::ad_rss::physics::DistanceSquared::cPrecisionValue = 1e-6;

namespace std {

::ad_rss::physics::Distance sqrt(::ad_rss::physics::DistanceSquared const other)
{
  ::ad_rss::physics::Distance result(std::sqrt(static_cast<double>(other)));
  result.ensureValid();
  return result;
}

} // namespace std
