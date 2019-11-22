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
#include "ad_rss/physics/SpeedRange.hpp"

class SpeedRangeTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::physics::SpeedRange value;
    ::ad_rss::physics::Speed valueMinimum(-100.);
    value.minimum = valueMinimum;
    ::ad_rss::physics::Speed valueMaximum(-100.);
    value.maximum = valueMaximum;
    value.maximum = value.minimum;
    value.minimum = value.maximum;
    mValue = value;
  }

  ::ad_rss::physics::SpeedRange mValue;
};

TEST_F(SpeedRangeTests, copyConstruction)
{
  ::ad_rss::physics::SpeedRange value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SpeedRangeTests, moveConstruction)
{
  ::ad_rss::physics::SpeedRange value(std::move(::ad_rss::physics::SpeedRange(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(SpeedRangeTests, copyAssignment)
{
  ::ad_rss::physics::SpeedRange value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SpeedRangeTests, moveAssignment)
{
  ::ad_rss::physics::SpeedRange value;
  value = std::move(::ad_rss::physics::SpeedRange(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SpeedRangeTests, comparisonOperatorEqual)
{
  ::ad_rss::physics::SpeedRange valueA = mValue;
  ::ad_rss::physics::SpeedRange valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SpeedRangeTests, comparisonOperatorMinimumDiffers)
{
  ::ad_rss::physics::SpeedRange valueA = mValue;
  ::ad_rss::physics::Speed minimum(100.);
  valueA.minimum = minimum;
  ::ad_rss::physics::SpeedRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SpeedRangeTests, comparisonOperatorMaximumDiffers)
{
  ::ad_rss::physics::SpeedRange valueA = mValue;
  ::ad_rss::physics::Speed maximum(100.);
  valueA.maximum = maximum;
  ::ad_rss::physics::SpeedRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
