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

#include "ad_rss/physics/DurationValidInputRange.hpp"

TEST(DurationValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::Duration value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad_rss::physics::Duration value(-1e6);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad_rss::physics::Duration value(1e6);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad_rss::physics::Duration value(-1e6 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad_rss::physics::Duration value(1e6 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::Duration value(0.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DurationValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::Duration value(100.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DurationValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::Duration value(0. - ::ad_rss::physics::Duration::cPrecisionValue);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::Duration value(100. * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
