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
#include "ad/rss/world/LateralRssAccelerationValues.hpp"

class LateralRssAccelerationValuesTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::LateralRssAccelerationValues value;
    ::ad::physics::Acceleration valueAccel_max(-1e2);
    valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
    value.accel_max = valueAccel_max;
    ::ad::physics::Acceleration valueBrake_min(-1e2);
    value.brake_min = valueBrake_min;
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
  ::ad::rss::world::LateralRssAccelerationValues tmpValue(mValue);
  ::ad::rss::world::LateralRssAccelerationValues value(std::move(tmpValue));
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
  ::ad::rss::world::LateralRssAccelerationValues tmpValue(mValue);
  ::ad::rss::world::LateralRssAccelerationValues value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorEqual)
{
  ::ad::rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LateralRssAccelerationValuesTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorAccel_maxDiffers)
{
  ::ad::rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration accel_max(1e2);
  valueA.accel_max = accel_max;
  ::ad::rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LateralRssAccelerationValuesTests, comparisonOperatorBrake_minDiffers)
{
  ::ad::rss::world::LateralRssAccelerationValues valueA = mValue;
  ::ad::physics::Acceleration brake_min(1e2);
  valueA.brake_min = brake_min;
  ::ad::rss::world::LateralRssAccelerationValues valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
