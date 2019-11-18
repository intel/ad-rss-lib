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
#include "ad_rss/world/Velocity.hpp"

class VelocityTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::Velocity value;
    ::ad_rss::physics::Speed valueSpeedLon(-100.);
    valueSpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    value.speedLon = valueSpeedLon;
    ::ad_rss::physics::Speed valueSpeedLat(-100.);
    valueSpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    value.speedLat = valueSpeedLat;
    mValue = value;
  }

  ::ad_rss::world::Velocity mValue;
};

TEST_F(VelocityTests, copyConstruction)
{
  ::ad_rss::world::Velocity value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, moveConstruction)
{
  ::ad_rss::world::Velocity value(std::move(::ad_rss::world::Velocity(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, copyAssignment)
{
  ::ad_rss::world::Velocity value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, moveAssignment)
{
  ::ad_rss::world::Velocity value;
  value = std::move(::ad_rss::world::Velocity(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityTests, comparisonOperatorEqual)
{
  ::ad_rss::world::Velocity valueA = mValue;
  ::ad_rss::world::Velocity valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLonDiffers)
{
  ::ad_rss::world::Velocity valueA = mValue;
  ::ad_rss::physics::Speed speedLon(100.);
  valueA.speedLon = speedLon;
  ::ad_rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityTests, comparisonOperatorSpeedLatDiffers)
{
  ::ad_rss::world::Velocity valueA = mValue;
  ::ad_rss::physics::Speed speedLat(100.);
  valueA.speedLat = speedLat;
  ::ad_rss::world::Velocity valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
