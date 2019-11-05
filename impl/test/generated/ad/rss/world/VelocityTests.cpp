/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
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
    ::ad::physics::Speed valueSpeedLon(-100.);
    valueSpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
    value.speedLon = valueSpeedLon;
    ::ad::physics::Speed valueSpeedLat(-100.);
    valueSpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
    value.speedLat = valueSpeedLat;
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

TEST_F(VelocityTests, comparisonOperatorSpeedLonDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speedLon(100.);
  valueA.speedLon = speedLon;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLatDiffers)
{
  ::ad::rss::world::Velocity valueA = mValue;
  ::ad::physics::Speed speedLat(100.);
  valueA.speedLat = speedLat;
  ::ad::rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
