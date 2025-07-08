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
#include "ad/rss/map/RouteAccelerations.hpp"

class RouteAccelerationsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::map::RouteAccelerations value;
    ::ad::rss::map::RssRouteId valueRoute_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
    value.route_id = valueRoute_id;
    ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
    value.route_heading = valueRoute_heading;
    ::ad::physics::Distance valueRoute_radius(-1e9);
    value.route_radius = valueRoute_radius;
    ::ad::physics::Speed valueRoute_speed_lon(-100.);
    value.route_speed_lon = valueRoute_speed_lon;
    ::ad::physics::Speed valueRoute_speed_lat(-100.);
    value.route_speed_lat = valueRoute_speed_lat;
    ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
    value.route_heading_delta = valueRoute_heading_delta;
    ::ad::physics::Acceleration valueRoute_centripetal_acceleration(-1e2);
    value.route_centripetal_acceleration = valueRoute_centripetal_acceleration;
    mValue = value;
  }

  ::ad::rss::map::RouteAccelerations mValue;
};

TEST_F(RouteAccelerationsTests, copyConstruction)
{
  ::ad::rss::map::RouteAccelerations value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RouteAccelerationsTests, moveConstruction)
{
  ::ad::rss::map::RouteAccelerations tmpValue(mValue);
  ::ad::rss::map::RouteAccelerations value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RouteAccelerationsTests, copyAssignment)
{
  ::ad::rss::map::RouteAccelerations value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RouteAccelerationsTests, moveAssignment)
{
  ::ad::rss::map::RouteAccelerations tmpValue(mValue);
  ::ad::rss::map::RouteAccelerations value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RouteAccelerationsTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RouteAccelerations valueA = mValue;
  ::ad::rss::map::RouteAccelerations valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RouteAccelerationsTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RouteAccelerationsTests, comparisonOperatorRoute_idDiffers)
{
  ::ad::rss::map::RouteAccelerations valueA = mValue;
  ::ad::rss::map::RssRouteId route_id(std::numeric_limits<::ad::rss::map::RssRouteId>::max());
  valueA.route_id = route_id;
  ::ad::rss::map::RouteAccelerations valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RouteAccelerationsTests, comparisonOperatorRoute_headingDiffers)
{
  ::ad::rss::map::RouteAccelerations valueA = mValue;
  ::ad::map::point::ENUHeading route_heading(3.141592655);
  valueA.route_heading = route_heading;
  ::ad::rss::map::RouteAccelerations valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RouteAccelerationsTests, comparisonOperatorRoute_radiusDiffers)
{
  ::ad::rss::map::RouteAccelerations valueA = mValue;
  ::ad::physics::Distance route_radius(1e9);
  valueA.route_radius = route_radius;
  ::ad::rss::map::RouteAccelerations valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RouteAccelerationsTests, comparisonOperatorRoute_speed_lonDiffers)
{
  ::ad::rss::map::RouteAccelerations valueA = mValue;
  ::ad::physics::Speed route_speed_lon(100.);
  valueA.route_speed_lon = route_speed_lon;
  ::ad::rss::map::RouteAccelerations valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RouteAccelerationsTests, comparisonOperatorRoute_speed_latDiffers)
{
  ::ad::rss::map::RouteAccelerations valueA = mValue;
  ::ad::physics::Speed route_speed_lat(100.);
  valueA.route_speed_lat = route_speed_lat;
  ::ad::rss::map::RouteAccelerations valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RouteAccelerationsTests, comparisonOperatorRoute_heading_deltaDiffers)
{
  ::ad::rss::map::RouteAccelerations valueA = mValue;
  ::ad::physics::Angle route_heading_delta(6.283185308);
  valueA.route_heading_delta = route_heading_delta;
  ::ad::rss::map::RouteAccelerations valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RouteAccelerationsTests, comparisonOperatorRoute_centripetal_accelerationDiffers)
{
  ::ad::rss::map::RouteAccelerations valueA = mValue;
  ::ad::physics::Acceleration route_centripetal_acceleration(1e2);
  valueA.route_centripetal_acceleration = route_centripetal_acceleration;
  ::ad::rss::map::RouteAccelerations valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
