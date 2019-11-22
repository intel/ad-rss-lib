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

#include "ad_rss/physics/SpeedValidInputRange.hpp"

TEST(SpeedValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::Speed value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad_rss::physics::Speed value(-1e3);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad_rss::physics::Speed value(1e3);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad_rss::physics::Speed value(-1e3 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad_rss::physics::Speed value(1e3 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::Speed value(-100.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SpeedValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::Speed value(100.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SpeedValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::Speed value(-100. * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::Speed value(100. * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
