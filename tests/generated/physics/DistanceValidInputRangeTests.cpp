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

#include "ad_rss/physics/DistanceValidInputRange.hpp"

TEST(DistanceValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::Distance value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad_rss::physics::Distance value(-1e6);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad_rss::physics::Distance value(1e6);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DistanceValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad_rss::physics::Distance value(-1e6 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad_rss::physics::Distance value(1e6 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::Distance value(0.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DistanceValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::Distance value(1e6);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DistanceValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::Distance value(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::Distance value(1e6 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
