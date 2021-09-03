/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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
    ::ad::physics::Acceleration valueAccelMax(-1e2);
    valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    value.accelMax = valueAccelMax;
    ::ad::physics::Acceleration valueBrakeMin(-1e2);
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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
