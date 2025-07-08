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
#include "ad/rss/map/RssEgoVehicleDynamicsOnRoute.hpp"

class RssEgoVehicleDynamicsOnRouteTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value;
    std::chrono::system_clock::time_point valueLast_update{std::chrono::hours(0)};
    value.last_update = valueLast_update;
    ::ad::physics::Acceleration valueRoute_accel_lon(-1e2);
    value.route_accel_lon = valueRoute_accel_lon;
    ::ad::physics::Acceleration valueRoute_accel_lat(-1e2);
    value.route_accel_lat = valueRoute_accel_lat;
    ::ad::physics::Acceleration valueAvg_route_accel_lon(-1e2);
    value.avg_route_accel_lon = valueAvg_route_accel_lon;
    ::ad::physics::Acceleration valueAvg_route_accel_lat(-1e2);
    value.avg_route_accel_lat = valueAvg_route_accel_lat;
    mValue = value;
  }

  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute mValue;
};

TEST_F(RssEgoVehicleDynamicsOnRouteTests, copyConstruction)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, moveConstruction)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute tmpValue(mValue);
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, copyAssignment)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, moveAssignment)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute tmpValue(mValue);
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueA = mValue;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, comparisonOperatorLast_updateDiffers)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueA = mValue;
  std::chrono::system_clock::time_point last_update{std::chrono::hours(1)};
  valueA.last_update = last_update;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, comparisonOperatorRoute_accel_lonDiffers)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueA = mValue;
  ::ad::physics::Acceleration route_accel_lon(1e2);
  valueA.route_accel_lon = route_accel_lon;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, comparisonOperatorRoute_accel_latDiffers)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueA = mValue;
  ::ad::physics::Acceleration route_accel_lat(1e2);
  valueA.route_accel_lat = route_accel_lat;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, comparisonOperatorAvg_route_accel_lonDiffers)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueA = mValue;
  ::ad::physics::Acceleration avg_route_accel_lon(1e2);
  valueA.avg_route_accel_lon = avg_route_accel_lon;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssEgoVehicleDynamicsOnRouteTests, comparisonOperatorAvg_route_accel_latDiffers)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueA = mValue;
  ::ad::physics::Acceleration avg_route_accel_lat(1e2);
  valueA.avg_route_accel_lat = avg_route_accel_lat;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
