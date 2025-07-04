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

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/map/RssEgoVehicleDynamicsOnRouteValidInputRange.hpp"

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRange)
{
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeRoute_accel_lonTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.route_accel_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeRoute_accel_lonTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.route_accel_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeroute_accel_lonDefault)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value;
  ::ad::physics::Acceleration valueDefault;
  value.route_accel_lon = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeRoute_accel_latTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.route_accel_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeRoute_accel_latTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.route_accel_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeroute_accel_latDefault)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value;
  ::ad::physics::Acceleration valueDefault;
  value.route_accel_lat = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeAvg_route_accel_lonTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.avg_route_accel_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeAvg_route_accel_lonTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.avg_route_accel_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeavg_route_accel_lonDefault)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value;
  ::ad::physics::Acceleration valueDefault;
  value.avg_route_accel_lon = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeAvg_route_accel_latTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.avg_route_accel_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeAvg_route_accel_latTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.avg_route_accel_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssEgoVehicleDynamicsOnRouteValidInputRangeTests, testValidInputRangeavg_route_accel_latDefault)
{
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute value;
  ::ad::physics::Acceleration valueDefault;
  value.avg_route_accel_lat = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
