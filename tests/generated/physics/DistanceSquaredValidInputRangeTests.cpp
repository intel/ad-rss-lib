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

#include "ad_rss/physics/DistanceSquaredValidInputRange.hpp"

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::DistanceSquared value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad_rss::physics::DistanceSquared value(-1e12);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad_rss::physics::DistanceSquared value(1e12);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad_rss::physics::DistanceSquared value(-1e12 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad_rss::physics::DistanceSquared value(1e12 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::DistanceSquared value(0.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::DistanceSquared value(1e12);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::DistanceSquared value(0. - ::ad_rss::physics::DistanceSquared::cPrecisionValue);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DistanceSquaredValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::DistanceSquared value(1e12 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
