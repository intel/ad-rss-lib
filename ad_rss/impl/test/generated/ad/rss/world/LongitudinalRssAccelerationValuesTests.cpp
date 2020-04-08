/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/LongitudinalRssAccelerationValues.hpp"

class LongitudinalRssAccelerationValuesTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::LongitudinalRssAccelerationValues value;
    ::ad::physics::Acceleration valueAccelMax(-1e2);
    valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    value.accelMax = valueAccelMax;
    ::ad::physics::Acceleration valueBrakeMax(-1e2);
    value.brakeMax = valueBrakeMax;
    ::ad::physics::Acceleration valueBrakeMin(-1e2);
    value.brakeMin = valueBrakeMin;
    ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
    value.brakeMinCorrect = valueBrakeMinCorrect;
    value.brakeMin = value.brakeMax;
    value.brakeMinCorrect = value.brakeMin;
    value.brakeMin = value.brakeMinCorrect;
    value.brakeMax = value.brakeMin;
    mValue = value;
  }

  ::ad::rss::world::LongitudinalRssAccelerationValues mValue;
};

TEST_F(LongitudinalRssAccelerationValuesTests, copyConstruction)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, moveConstruction)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues tmpValue(mValue);
  ::ad::rss::world::LongitudinalRssAccelerationValues value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, copyAssignment)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, moveAssignment)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues tmpValue(mValue);
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorEqual)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorAccelMaxDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration accelMax(1e2);
  valueA.accelMax = accelMax;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMaxDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brakeMax(1e2);
  valueA.brakeMax = brakeMax;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMinDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brakeMin(1e2);
  valueA.brakeMin = brakeMin;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrakeMinCorrectDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brakeMinCorrect(1e2);
  valueA.brakeMinCorrect = brakeMinCorrect;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
