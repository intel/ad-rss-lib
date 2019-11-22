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
#include "ad_rss/world/LateralRssAccelerationValues.hpp"

class LateralRssAccelerationValuesTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::LateralRssAccelerationValues value;
    ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
    valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    value.accelMax = valueAccelMax;
    ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
    valueBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    value.brakeMin = valueBrakeMin;
    mValue = value;
  }

  ::ad_rss::world::LateralRssAccelerationValues mValue;
};

TEST_F(LateralRssAccelerationValuesTests, copyConstruction)
{
  ::ad_rss::world::LateralRssAccelerationValues value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, moveConstruction)
{
  ::ad_rss::world::LateralRssAccelerationValues value(std::move(::ad_rss::world::LateralRssAccelerationValues(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, copyAssignment)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, moveAssignment)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  value = std::move(::ad_rss::world::LateralRssAccelerationValues(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorEqual)
{
  ::ad_rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad_rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorAccelMaxDiffers)
{
  ::ad_rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad_rss::physics::Acceleration accelMax(1e2);
  valueA.accelMax = accelMax;
  ::ad_rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorBrakeMinDiffers)
{
  ::ad_rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad_rss::physics::Acceleration brakeMin(1e2);
  valueA.brakeMin = brakeMin;
  ::ad_rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
