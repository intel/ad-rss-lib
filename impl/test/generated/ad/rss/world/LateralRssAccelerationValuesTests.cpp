/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/LateralRssAccelerationValues.hpp"

class LateralRssAccelerationValuesTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::LateralRssAccelerationValues value;
    ::ad::physics::Acceleration valueAccelMax(-1e2);
    valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    value.accelMax = valueAccelMax;
    ::ad::physics::Acceleration valueBrakeMin(-1e2);
    valueBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    value.brakeMin = valueBrakeMin;
    mValue = value;
  }

  ::ad::rss::world::LateralRssAccelerationValues mValue;
};

TEST_F(LateralRssAccelerationValuesTests, copyConstruction)
{
  ::ad::rss::world::LateralRssAccelerationValues value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, moveConstruction)
{
  ::ad::rss::world::LateralRssAccelerationValues value(
    std::move(::ad::rss::world::LateralRssAccelerationValues(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, copyAssignment)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, moveAssignment)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  value = std::move(::ad::rss::world::LateralRssAccelerationValues(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorEqual)
{
  ::ad::rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorAccelMaxDiffers)
{
  ::ad::rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration accelMax(1e2);
  valueA.accelMax = accelMax;
  ::ad::rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorBrakeMinDiffers)
{
  ::ad::rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brakeMin(1e2);
  valueA.brakeMin = brakeMin;
  ::ad::rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
