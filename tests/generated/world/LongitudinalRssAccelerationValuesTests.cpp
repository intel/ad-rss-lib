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
#include "ad_rss/world/LongitudinalRssAccelerationValues.hpp"

class LongitudinalRssAccelerationValuesTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::LongitudinalRssAccelerationValues value;
    ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
    valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    value.accelMax = valueAccelMax;
    ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
    value.brakeMax = valueBrakeMax;
    ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
    value.brakeMin = valueBrakeMin;
    ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
    valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    value.brakeMinCorrect = valueBrakeMinCorrect;
    value.brakeMin = value.brakeMinCorrect;
    value.brakeMax = value.brakeMin;
    value.brakeMin = value.brakeMax;
    value.brakeMinCorrect = value.brakeMin;
    mValue = value;
  }

  ::ad_rss::world::LongitudinalRssAccelerationValues mValue;
};

TEST_F(LongitudinalRssAccelerationValuesTests, copyConstruction)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, moveConstruction)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value(
    std::move(::ad_rss::world::LongitudinalRssAccelerationValues(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, copyAssignment)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, moveAssignment)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  value = std::move(::ad_rss::world::LongitudinalRssAccelerationValues(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorEqual)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorAccelMaxDiffers)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad_rss::physics::Acceleration accelMax(1e2);
  valueA.accelMax = accelMax;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMaxDiffers)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad_rss::physics::Acceleration brakeMax(1e2);
  valueA.brakeMax = brakeMax;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMinDiffers)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad_rss::physics::Acceleration brakeMin(1e2);
  valueA.brakeMin = brakeMin;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMinCorrectDiffers)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad_rss::physics::Acceleration brakeMinCorrect(1e2);
  valueA.brakeMinCorrect = brakeMinCorrect;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
