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

#include "ad/rss/map/RouteAccelerationsValidInputRange.hpp"

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRange)
{
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_headingTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::map::point::ENUHeading invalidInitializedMember(-3.141592655 * 1.1);
  value.route_heading = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_headingTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::map::point::ENUHeading invalidInitializedMember(3.141592655 * 1.1);
  value.route_heading = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeroute_headingDefault)
{
  ::ad::rss::map::RouteAccelerations value;
  ::ad::map::point::ENUHeading valueDefault;
  value.route_heading = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_radiusTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.route_radius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_radiusTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.route_radius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeroute_radiusDefault)
{
  ::ad::rss::map::RouteAccelerations value;
  ::ad::physics::Distance valueDefault;
  value.route_radius = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_speed_lonTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.route_speed_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_speed_lonTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.route_speed_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeroute_speed_lonDefault)
{
  ::ad::rss::map::RouteAccelerations value;
  ::ad::physics::Speed valueDefault;
  value.route_speed_lon = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_speed_latTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.route_speed_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_speed_latTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.route_speed_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeroute_speed_latDefault)
{
  ::ad::rss::map::RouteAccelerations value;
  ::ad::physics::Speed valueDefault;
  value.route_speed_lat = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_heading_deltaTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.route_heading_delta = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_heading_deltaTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.route_heading_delta = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeroute_heading_deltaDefault)
{
  ::ad::rss::map::RouteAccelerations value;
  ::ad::physics::Angle valueDefault;
  value.route_heading_delta = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_centripetal_accelerationTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.route_centripetal_acceleration = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeRoute_centripetal_accelerationTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.route_centripetal_acceleration = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RouteAccelerationsValidInputRangeTests, testValidInputRangeroute_centripetal_accelerationDefault)
{
  ::ad::rss::map::RouteAccelerations value;
  ::ad::physics::Acceleration valueDefault;
  value.route_centripetal_acceleration = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
