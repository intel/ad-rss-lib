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
#include "ad_rss/physics/ParametricRange.hpp"

class ParametricRangeTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::physics::ParametricRange value;
    ::ad_rss::physics::ParametricValue valueMinimum(0.);
    value.minimum = valueMinimum;
    ::ad_rss::physics::ParametricValue valueMaximum(0.);
    value.maximum = valueMaximum;
    value.maximum = value.minimum;
    value.minimum = value.maximum;
    mValue = value;
  }

  ::ad_rss::physics::ParametricRange mValue;
};

TEST_F(ParametricRangeTests, copyConstruction)
{
  ::ad_rss::physics::ParametricRange value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ParametricRangeTests, moveConstruction)
{
  ::ad_rss::physics::ParametricRange value(std::move(::ad_rss::physics::ParametricRange(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(ParametricRangeTests, copyAssignment)
{
  ::ad_rss::physics::ParametricRange value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(ParametricRangeTests, moveAssignment)
{
  ::ad_rss::physics::ParametricRange value;
  value = std::move(::ad_rss::physics::ParametricRange(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ParametricRangeTests, comparisonOperatorEqual)
{
  ::ad_rss::physics::ParametricRange valueA = mValue;
  ::ad_rss::physics::ParametricRange valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(ParametricRangeTests, comparisonOperatorMinimumDiffers)
{
  ::ad_rss::physics::ParametricRange valueA = mValue;
  ::ad_rss::physics::ParametricValue minimum(1.);
  valueA.minimum = minimum;
  ::ad_rss::physics::ParametricRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ParametricRangeTests, comparisonOperatorMaximumDiffers)
{
  ::ad_rss::physics::ParametricRange valueA = mValue;
  ::ad_rss::physics::ParametricValue maximum(1.);
  valueA.maximum = maximum;
  ::ad_rss::physics::ParametricRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
