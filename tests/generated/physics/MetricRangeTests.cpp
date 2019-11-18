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
#include "ad_rss/physics/MetricRange.hpp"

class MetricRangeTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::physics::MetricRange value;
    ::ad_rss::physics::Distance valueMinimum(0.);
    value.minimum = valueMinimum;
    ::ad_rss::physics::Distance valueMaximum(0.);
    value.maximum = valueMaximum;
    value.maximum = value.minimum;
    value.minimum = value.maximum;
    mValue = value;
  }

  ::ad_rss::physics::MetricRange mValue;
};

TEST_F(MetricRangeTests, copyConstruction)
{
  ::ad_rss::physics::MetricRange value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(MetricRangeTests, moveConstruction)
{
  ::ad_rss::physics::MetricRange value(std::move(::ad_rss::physics::MetricRange(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(MetricRangeTests, copyAssignment)
{
  ::ad_rss::physics::MetricRange value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(MetricRangeTests, moveAssignment)
{
  ::ad_rss::physics::MetricRange value;
  value = std::move(::ad_rss::physics::MetricRange(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(MetricRangeTests, comparisonOperatorEqual)
{
  ::ad_rss::physics::MetricRange valueA = mValue;
  ::ad_rss::physics::MetricRange valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(MetricRangeTests, comparisonOperatorMinimumDiffers)
{
  ::ad_rss::physics::MetricRange valueA = mValue;
  ::ad_rss::physics::Distance minimum(1e6);
  valueA.minimum = minimum;
  ::ad_rss::physics::MetricRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(MetricRangeTests, comparisonOperatorMaximumDiffers)
{
  ::ad_rss::physics::MetricRange valueA = mValue;
  ::ad_rss::physics::Distance maximum(1e6);
  valueA.maximum = maximum;
  ::ad_rss::physics::MetricRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
