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

#include "ad_rss/physics/MetricRangeValidInputRange.hpp"

TEST(MetricRangeValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::physics::MetricRange value;
  ::ad_rss::physics::Distance valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Distance valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(MetricRangeValidInputRangeTests, testValidInputRangeMinimumTooSmall)
{
  ::ad_rss::physics::MetricRange value;
  ::ad_rss::physics::Distance valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Distance valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MetricRangeValidInputRangeTests, testValidInputRangeMinimumTooBig)
{
  ::ad_rss::physics::MetricRange value;
  ::ad_rss::physics::Distance valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Distance valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MetricRangeValidInputRangeTests, testValidInputRangeminimumDefault)
{
  ::ad_rss::physics::MetricRange value;
  ::ad_rss::physics::Distance valueDefault;
  value.minimum = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MetricRangeValidInputRangeTests, testValidInputRangeMaximumTooSmall)
{
  ::ad_rss::physics::MetricRange value;
  ::ad_rss::physics::Distance valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Distance valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MetricRangeValidInputRangeTests, testValidInputRangeMaximumTooBig)
{
  ::ad_rss::physics::MetricRange value;
  ::ad_rss::physics::Distance valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::Distance valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(MetricRangeValidInputRangeTests, testValidInputRangemaximumDefault)
{
  ::ad_rss::physics::MetricRange value;
  ::ad_rss::physics::Distance valueDefault;
  value.maximum = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
