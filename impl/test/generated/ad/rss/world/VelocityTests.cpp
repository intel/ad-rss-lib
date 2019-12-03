/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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
#include "ad/rss/world/Velocity.hpp"

class VelocityTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::Velocity value;
    ::ad::physics::Speed valueSpeedLonMin(-100.);
    valueSpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    value.speedLonMin = valueSpeedLonMin;
    ::ad::physics::Speed valueSpeedLonMax(-100.);
    value.speedLonMax = valueSpeedLonMax;
    ::ad::physics::Speed valueSpeedLatMin(-100.);
    valueSpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
    value.speedLatMin = valueSpeedLatMin;
    ::ad::physics::Speed valueSpeedLatMax(-100.);
    value.speedLatMax = valueSpeedLatMax;
    value.speedLonMax = value.speedLonMin;
    value.speedLatMax = value.speedLatMin;
    value.speedLonMin = value.speedLonMax;
    value.speedLatMin = value.speedLatMax;
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
  ::ad::rss::world::Velocity value(std::move(::ad::rss::world::Velocity(mValue)));
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
  ::ad::rss::world::Velocity value;
  value = std::move(::ad::rss::world::Velocity(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, comparisonOperatorEqual)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(VelocityTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::world::Velocity value;
  stream << value;
  ASSERT_GT(stream.str().size(), 0);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLonMinDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speedLonMin(100.);
  valueA.speedLonMin = speedLonMin;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLonMaxDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speedLonMax(100.);
  valueA.speedLonMax = speedLonMax;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLatMinDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speedLatMin(100.);
  valueA.speedLatMin = speedLatMin;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLatMaxDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speedLatMax(100.);
  valueA.speedLatMax = speedLatMax;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
