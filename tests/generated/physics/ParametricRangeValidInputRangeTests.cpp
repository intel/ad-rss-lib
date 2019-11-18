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

#include "ad_rss/physics/ParametricRangeValidInputRange.hpp"

TEST(ParametricRangeValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::ParametricValue valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ParametricRangeValidInputRangeTests, testValidInputRangeMinimumTooSmall)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::ParametricValue valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::ParametricValue invalidInitializedMember(0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ParametricRangeValidInputRangeTests, testValidInputRangeMinimumTooBig)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::ParametricValue valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::ParametricValue invalidInitializedMember(1. * 1.1);
  value.minimum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ParametricRangeValidInputRangeTests, testValidInputRangeminimumDefault)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueDefault;
  value.minimum = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ParametricRangeValidInputRangeTests, testValidInputRangeMaximumTooSmall)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::ParametricValue valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::ParametricValue invalidInitializedMember(0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ParametricRangeValidInputRangeTests, testValidInputRangeMaximumTooBig)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueMinimum(0.);
  value.minimum = valueMinimum;
  ::ad_rss::physics::ParametricValue valueMaximum(0.);
  value.maximum = valueMaximum;
  value.maximum = value.minimum;
  value.minimum = value.maximum;

  // override member with invalid value
  ::ad_rss::physics::ParametricValue invalidInitializedMember(1. * 1.1);
  value.maximum = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ParametricRangeValidInputRangeTests, testValidInputRangemaximumDefault)
{
  ::ad_rss::physics::ParametricRange value;
  ::ad_rss::physics::ParametricValue valueDefault;
  value.maximum = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
