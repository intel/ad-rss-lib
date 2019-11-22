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

#include "ad_rss/physics/DurationSquaredValidInputRange.hpp"

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeUninitialized)
{
  ::ad_rss::physics::DurationSquared value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeMinOk)
{
  ::ad_rss::physics::DurationSquared value(-1e12);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeMaxOk)
{
  ::ad_rss::physics::DurationSquared value(1e12);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeBelowMin)
{
  ::ad_rss::physics::DurationSquared value(-1e12 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeExceedsMax)
{
  ::ad_rss::physics::DurationSquared value(1e12 * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeInputMinOk)
{
  ::ad_rss::physics::DurationSquared value(0.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeInputMaxOk)
{
  ::ad_rss::physics::DurationSquared value(10000.);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeBelowInputMin)
{
  ::ad_rss::physics::DurationSquared value(0. - ::ad_rss::physics::DurationSquared::cPrecisionValue);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(DurationSquaredValidInputRangeTests, testValidInputRangeExceedsInputMax)
{
  ::ad_rss::physics::DurationSquared value(10000. * 1.1);
  ASSERT_FALSE(withinValidInputRange(value));
}
