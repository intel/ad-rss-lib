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
#include "ad/rss/world/Velocity.hpp"

class VelocityTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::Velocity value;
    ::ad::physics::Speed valueSpeed_lon_min(-100.);
    valueSpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
    value.speed_lon_min = valueSpeed_lon_min;
    ::ad::physics::Speed valueSpeed_lon_max(-100.);
    value.speed_lon_max = valueSpeed_lon_max;
    ::ad::physics::Speed valueSpeed_lat_min(-100.);
    value.speed_lat_min = valueSpeed_lat_min;
    ::ad::physics::Speed valueSpeed_lat_max(-100.);
    value.speed_lat_max = valueSpeed_lat_max;
    value.speed_lon_max = value.speed_lon_min;
    value.speed_lat_max = value.speed_lat_min;
    value.speed_lon_min = value.speed_lon_max;
    value.speed_lat_min = value.speed_lat_max;
    mValue = value;
  }

  ::ad::rss::world::Velocity mValue;
};

TEST_F(VelocityTests, copyConstruction)
{
  ::ad::rss::world::Velocity value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, moveConstruction)
{
  ::ad::rss::world::Velocity tmpValue(mValue);
  ::ad::rss::world::Velocity value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, copyAssignment)
{
  ::ad::rss::world::Velocity value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, moveAssignment)
{
  ::ad::rss::world::Velocity tmpValue(mValue);
  ::ad::rss::world::Velocity value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, comparisonOperatorEqual)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(VelocityTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(VelocityTests, comparisonOperatorSpeed_lon_minDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speed_lon_min(100.);
  valueA.speed_lon_min = speed_lon_min;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeed_lon_maxDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speed_lon_max(100.);
  valueA.speed_lon_max = speed_lon_max;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeed_lat_minDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speed_lat_min(100.);
  valueA.speed_lat_min = speed_lat_min;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeed_lat_maxDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speed_lat_max(100.);
  valueA.speed_lat_max = speed_lat_max;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
