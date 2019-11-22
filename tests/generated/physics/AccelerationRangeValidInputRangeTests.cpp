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

#include "ad_rss/physics/AccelerationRangeValidInputRange.hpp"

TEST(AccelerationRangeValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::physics::AccelerationRange value;
  ::ad_rss::physics::Acceleration valueMinimum(-1e2);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Acceleration valueMaximum(-1e2);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationRangeValidInputRangeTests, testValidInputRangeMinimumTooSmall)
{
  ::ad_rss::physics::AccelerationRange value;
  ::ad_rss::physics::Acceleration valueMinimum(-1e2);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Acceleration valueMaximum(-1e2);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRangeValidInputRangeTests, testValidInputRangeMinimumTooBig)
{
  ::ad_rss::physics::AccelerationRange value;
  ::ad_rss::physics::Acceleration valueMinimum(-1e2);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Acceleration valueMaximum(-1e2);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRangeValidInputRangeTests, testValidInputRangeminimumDefault)
{
  ::ad_rss::physics::AccelerationRange value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.minimum = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRangeValidInputRangeTests, testValidInputRangeMaximumTooSmall)
{
  ::ad_rss::physics::AccelerationRange value;
  ::ad_rss::physics::Acceleration valueMinimum(-1e2);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Acceleration valueMaximum(-1e2);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRangeValidInputRangeTests, testValidInputRangeMaximumTooBig)
{
  ::ad_rss::physics::AccelerationRange value;
  ::ad_rss::physics::Acceleration valueMinimum(-1e2);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Acceleration valueMaximum(-1e2);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRangeValidInputRangeTests, testValidInputRangemaximumDefault)
{
  ::ad_rss::physics::AccelerationRange value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.maximum = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
