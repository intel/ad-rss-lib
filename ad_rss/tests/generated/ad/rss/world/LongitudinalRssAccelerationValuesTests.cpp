/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
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
    ::ad::physics::Acceleration valueAccel_max(-1e2);
    valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
    value.accel_max = valueAccel_max;
    ::ad::physics::Acceleration valueBrake_max(-1e2);
    value.brake_max = valueBrake_max;
    ::ad::physics::Acceleration valueBrake_min(-1e2);
    value.brake_min = valueBrake_min;
    ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
    value.brake_min_correct = valueBrake_min_correct;
    value.brake_min = value.brake_max;
    value.brake_min_correct = value.brake_min;
    value.brake_min = value.brake_min_correct;
    value.brake_max = value.brake_min;
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

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorAccel_maxDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration accel_max(1e2);
  valueA.accel_max = accel_max;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrake_maxDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brake_max(1e2);
  valueA.brake_max = brake_max;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrake_minDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brake_min(1e2);
  valueA.brake_min = brake_min;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LongitudinalRssAccelerationValuesTests, comparisonOperatorBrake_min_correctDiffers)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brake_min_correct(1e2);
  valueA.brake_min_correct = brake_min_correct;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
