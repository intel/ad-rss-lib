/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad_rss/physics/CoordinateSystemAxisValidInputRange.hpp"

TEST(CoordinateSystemAxisValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad_rss::physics::CoordinateSystemAxis::Longitudinal));
  ASSERT_TRUE(withinValidInputRange(::ad_rss::physics::CoordinateSystemAxis::Lateral));
}

TEST(CoordinateSystemAxisValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::physics::CoordinateSystemAxis::Longitudinal));
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::physics::CoordinateSystemAxis::Lateral));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad_rss::physics::CoordinateSystemAxis>(minValue - 1)));
}
