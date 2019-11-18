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

#include "ad_rss/physics/AccelerationValidInputRange.hpp"

TEST(AccelerationValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::Acceleration value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad_rss::physics::Acceleration value(-1e3);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad_rss::physics::Acceleration value(1e3);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad_rss::physics::Acceleration value(-1e3 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad_rss::physics::Acceleration value(1e3 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::Acceleration value(-1e2);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::Acceleration value(1e2);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::Acceleration value(-1e2 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::Acceleration value(1e2 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
