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

#include "ad_rss/physics/DurationSquared.hpp"
#include "ad_rss/physics/Duration.hpp"

const double ::ad_rss::physics::DurationSquared::cMinValue = -1e12;

const double ::ad_rss::physics::DurationSquared::cMaxValue = 1e12;

const double ::ad_rss::physics::DurationSquared::cPrecisionValue = 1e-6;

namespace std {

::ad_rss::physics::Duration sqrt(::ad_rss::physics::DurationSquared const other)
{
  ::ad_rss::physics::Duration result(std::sqrt(static_cast<double>(other)));
  result.ensureValid();
  return result;
}

} // namespace std
