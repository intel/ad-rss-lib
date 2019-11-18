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
#include "ad_rss/physics/AccelerationRange.hpp"

class AccelerationRangeTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::physics::AccelerationRange value;
    ::ad_rss::physics::Acceleration valueMinimum(-1e2);
    value.minimum = valueMinimum;
    ::ad_rss::physics::Acceleration valueMaximum(-1e2);
    value.maximum = valueMaximum;
    value.maximum = value.minimum;
    value.minimum = value.maximum;
    mValue = value;
  }

  ::ad_rss::physics::AccelerationRange mValue;
};

TEST_F(AccelerationRangeTests, copyConstruction)
{
  ::ad_rss::physics::AccelerationRange value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRangeTests, moveConstruction)
{
  ::ad_rss::physics::AccelerationRange value(std::move(::ad_rss::physics::AccelerationRange(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRangeTests, copyAssignment)
{
  ::ad_rss::physics::AccelerationRange value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRangeTests, moveAssignment)
{
  ::ad_rss::physics::AccelerationRange value;
  value = std::move(::ad_rss::physics::AccelerationRange(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(AccelerationRangeTests, comparisonOperatorEqual)
{
  ::ad_rss::physics::AccelerationRange valueA = mValue;
  ::ad_rss::physics::AccelerationRange valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(AccelerationRangeTests, comparisonOperatorMinimumDiffers)
{
  ::ad_rss::physics::AccelerationRange valueA = mValue;
  ::ad_rss::physics::Acceleration minimum(1e2);
  valueA.minimum = minimum;
  ::ad_rss::physics::AccelerationRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(AccelerationRangeTests, comparisonOperatorMaximumDiffers)
{
  ::ad_rss::physics::AccelerationRange valueA = mValue;
  ::ad_rss::physics::Acceleration maximum(1e2);
  valueA.maximum = maximum;
  ::ad_rss::physics::AccelerationRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
