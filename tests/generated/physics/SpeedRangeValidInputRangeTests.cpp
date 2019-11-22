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

#include "ad_rss/physics/SpeedRangeValidInputRange.hpp"

TEST(SpeedRangeValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::physics::SpeedRange value;
  ::ad_rss::physics::Speed valueMinimum(-100.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Speed valueMaximum(-100.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SpeedRangeValidInputRangeTests, testValidInputRangeMinimumTooSmall)
{
  ::ad_rss::physics::SpeedRange value;
  ::ad_rss::physics::Speed valueMinimum(-100.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Speed valueMaximum(-100.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedRangeValidInputRangeTests, testValidInputRangeMinimumTooBig)
{
  ::ad_rss::physics::SpeedRange value;
  ::ad_rss::physics::Speed valueMinimum(-100.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Speed valueMaximum(-100.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Speed invalidInitializedMember(100. * 1.1);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedRangeValidInputRangeTests, testValidInputRangeminimumDefault)
{
  ::ad_rss::physics::SpeedRange value;
  ::ad_rss::physics::Speed valueDefault;
  value.minimum = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedRangeValidInputRangeTests, testValidInputRangeMaximumTooSmall)
{
  ::ad_rss::physics::SpeedRange value;
  ::ad_rss::physics::Speed valueMinimum(-100.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Speed valueMaximum(-100.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedRangeValidInputRangeTests, testValidInputRangeMaximumTooBig)
{
  ::ad_rss::physics::SpeedRange value;
  ::ad_rss::physics::Speed valueMinimum(-100.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Speed valueMaximum(-100.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Speed invalidInitializedMember(100. * 1.1);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SpeedRangeValidInputRangeTests, testValidInputRangemaximumDefault)
{
  ::ad_rss::physics::SpeedRange value;
  ::ad_rss::physics::Speed valueDefault;
  value.maximum = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
