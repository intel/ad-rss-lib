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

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/situation/VelocityRange.hpp"

class VelocityRangeTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::situation::VelocityRange value;
    ::ad::physics::SpeedRange valueSpeedLon;
    ::ad::physics::Speed valueSpeedLonMinimum(-100.);
    valueSpeedLon.minimum = valueSpeedLonMinimum;
    ::ad::physics::Speed valueSpeedLonMaximum(-100.);
    valueSpeedLon.maximum = valueSpeedLonMaximum;
    valueSpeedLon.maximum = valueSpeedLon.minimum;
    valueSpeedLon.minimum = valueSpeedLon.maximum;
    value.speedLon = valueSpeedLon;
    ::ad::physics::SpeedRange valueSpeedLat;
    ::ad::physics::Speed valueSpeedLatMinimum(-100.);
    valueSpeedLat.minimum = valueSpeedLatMinimum;
    ::ad::physics::Speed valueSpeedLatMaximum(-100.);
    valueSpeedLat.maximum = valueSpeedLatMaximum;
    valueSpeedLat.maximum = valueSpeedLat.minimum;
    valueSpeedLat.minimum = valueSpeedLat.maximum;
    value.speedLat = valueSpeedLat;
    mValue = value;
  }

  ::ad::rss::situation::VelocityRange mValue;
};

TEST_F(VelocityRangeTests, copyConstruction)
{
  ::ad::rss::situation::VelocityRange value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityRangeTests, moveConstruction)
{
  ::ad::rss::situation::VelocityRange value(std::move(::ad::rss::situation::VelocityRange(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityRangeTests, copyAssignment)
{
  ::ad::rss::situation::VelocityRange value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityRangeTests, moveAssignment)
{
  ::ad::rss::situation::VelocityRange value;
  value = std::move(::ad::rss::situation::VelocityRange(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(VelocityRangeTests, comparisonOperatorEqual)
{
  ::ad::rss::situation::VelocityRange valueA = mValue;
  ::ad::rss::situation::VelocityRange valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(VelocityRangeTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(VelocityRangeTests, comparisonOperatorSpeedLonDiffers)
{
  ::ad::rss::situation::VelocityRange valueA = mValue;
  ::ad::physics::SpeedRange speedLon;
  ::ad::physics::Speed speedLonMinimum(100.);
  speedLon.minimum = speedLonMinimum;
  ::ad::physics::Speed speedLonMaximum(100.);
  speedLon.maximum = speedLonMaximum;
  speedLon.maximum = speedLon.minimum;
  speedLon.minimum = speedLon.maximum;
  valueA.speedLon = speedLon;
  ::ad::rss::situation::VelocityRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VelocityRangeTests, comparisonOperatorSpeedLatDiffers)
{
  ::ad::rss::situation::VelocityRange valueA = mValue;
  ::ad::physics::SpeedRange speedLat;
  ::ad::physics::Speed speedLatMinimum(100.);
  speedLat.minimum = speedLatMinimum;
  ::ad::physics::Speed speedLatMaximum(100.);
  speedLat.maximum = speedLatMaximum;
  speedLat.maximum = speedLat.minimum;
  speedLat.minimum = speedLat.maximum;
  valueA.speedLat = speedLat;
  ::ad::rss::situation::VelocityRange valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
