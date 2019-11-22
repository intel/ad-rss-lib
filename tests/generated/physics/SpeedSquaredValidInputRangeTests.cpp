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

#include "ad_rss/physics/SpeedSquaredValidInputRange.hpp"

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::SpeedSquared value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad_rss::physics::SpeedSquared value(-1e6);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad_rss::physics::SpeedSquared value(1e6);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad_rss::physics::SpeedSquared value(-1e6 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad_rss::physics::SpeedSquared value(1e6 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::SpeedSquared value(-1e4);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::SpeedSquared value(1e4);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::SpeedSquared value(-1e4 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedSquaredValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::SpeedSquared value(1e4 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
