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

#include "ad/rss/map/RssObjectDataOnRouteValidInputRange.hpp"

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_headingTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUHeading invalidInitializedMember(-3.141592655 * 1.1);
  value.route_heading = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_headingTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUHeading invalidInitializedMember(3.141592655 * 1.1);
  value.route_heading = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeroute_headingDefault)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueDefault;
  value.route_heading = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_radiusTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.route_radius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_radiusTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.route_radius = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeroute_radiusDefault)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::physics::Distance valueDefault;
  value.route_radius = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_heading_deltaTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.route_heading_delta = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_heading_deltaTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.route_heading_delta = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeroute_heading_deltaDefault)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::physics::Angle valueDefault;
  value.route_heading_delta = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_speed_latTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.route_speed_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_speed_latTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.route_speed_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeroute_speed_latDefault)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::physics::Speed valueDefault;
  value.route_speed_lat = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_speed_lonTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.route_speed_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeRoute_speed_lonTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.route_speed_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeroute_speed_lonDefault)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::physics::Speed valueDefault;
  value.route_speed_lon = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_center_position_projected_on_routeTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(-1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_center_position_projected_on_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_center_position_projected_on_routeTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_center_position_projected_on_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_center_distance_to_routeTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.object_center_distance_to_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_center_distance_to_routeTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.object_center_distance_to_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeobject_center_distance_to_routeDefault)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::physics::Distance valueDefault;
  value.object_center_distance_to_route = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests,
     testValidInputRangeObject_center_position_projected_on_lane_in_nominal_route_directionTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(-1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_center_position_projected_on_lane_in_nominal_route_direction = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests,
     testValidInputRangeObject_center_position_projected_on_lane_in_nominal_route_directionTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_center_position_projected_on_lane_in_nominal_route_direction = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_center_distance_along_routeTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.object_center_distance_along_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_center_distance_along_routeTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.object_center_distance_along_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeobject_center_distance_along_routeDefault)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::physics::Distance valueDefault;
  value.object_center_distance_along_route = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests,
     testValidInputRangeNominal_center_position_of_lane_in_nominal_route_directionTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(-1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.nominal_center_position_of_lane_in_nominal_route_direction = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests,
     testValidInputRangeNominal_center_position_of_lane_in_nominal_route_directionTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.nominal_center_position_of_lane_in_nominal_route_direction = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_route_section_front_leftTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(-1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_route_section_front_left = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_route_section_front_leftTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_route_section_front_left = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_route_section_front_rightTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(-1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_route_section_front_right = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_route_section_front_rightTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_route_section_front_right = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_route_section_back_leftTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(-1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_route_section_back_left = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_route_section_back_leftTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_route_section_back_left = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_route_section_back_rightTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(-1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_route_section_back_right = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_route_section_back_rightTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_route_section_back_right = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_turning_centerTooSmall)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value below input range minimum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(-1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_turning_center = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssObjectDataOnRouteValidInputRangeTests, testValidInputRangeObject_turning_centerTooBig)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  ::ad::map::point::ENUHeading valueRoute_heading(-3.141592655);
  value.route_heading = valueRoute_heading;
  ::ad::physics::Distance valueRoute_radius(-1e9);
  value.route_radius = valueRoute_radius;
  ::ad::physics::Angle valueRoute_heading_delta(-6.283185308);
  value.route_heading_delta = valueRoute_heading_delta;
  ::ad::physics::Speed valueRoute_speed_lat(-100.);
  value.route_speed_lat = valueRoute_speed_lat;
  ::ad::physics::Speed valueRoute_speed_lon(-100.);
  value.route_speed_lon = valueRoute_speed_lon;
  bool valueObject_center_within_route{true};
  value.object_center_within_route = valueObject_center_within_route;
  bool valueObject_within_route{true};
  value.object_within_route = valueObject_within_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeX(-1e8);
  valueObject_center_position_projected_on_route.x = valueObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeY(-1e8);
  valueObject_center_position_projected_on_route.y = valueObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_routeZ(-1e8);
  valueObject_center_position_projected_on_route.z = valueObject_center_position_projected_on_routeZ;
  value.object_center_position_projected_on_route = valueObject_center_position_projected_on_route;
  bool valueIs_valid{true};
  value.is_valid = valueIs_valid;
  ::ad::physics::Distance valueObject_center_distance_to_route(-1e9);
  value.object_center_distance_to_route = valueObject_center_distance_to_route;
  ::ad::map::point::ENUPoint valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  valueObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = valueObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  value.object_center_position_projected_on_lane_in_nominal_route_direction
    = valueObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance valueObject_center_distance_along_route(-1e9);
  value.object_center_distance_along_route = valueObject_center_distance_along_route;
  ::ad::map::point::ENUPoint valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  valueNominal_center_position_of_lane_in_nominal_route_direction.z
    = valueNominal_center_position_of_lane_in_nominal_route_directionZ;
  value.nominal_center_position_of_lane_in_nominal_route_direction
    = valueNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint valueObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftX(-1e8);
  valueObject_route_section_front_left.x = valueObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftY(-1e8);
  valueObject_route_section_front_left.y = valueObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_leftZ(-1e8);
  valueObject_route_section_front_left.z = valueObject_route_section_front_leftZ;
  value.object_route_section_front_left = valueObject_route_section_front_left;
  ::ad::map::point::ENUPoint valueObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightX(-1e8);
  valueObject_route_section_front_right.x = valueObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightY(-1e8);
  valueObject_route_section_front_right.y = valueObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_front_rightZ(-1e8);
  valueObject_route_section_front_right.z = valueObject_route_section_front_rightZ;
  value.object_route_section_front_right = valueObject_route_section_front_right;
  ::ad::map::point::ENUPoint valueObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftX(-1e8);
  valueObject_route_section_back_left.x = valueObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftY(-1e8);
  valueObject_route_section_back_left.y = valueObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_leftZ(-1e8);
  valueObject_route_section_back_left.z = valueObject_route_section_back_leftZ;
  value.object_route_section_back_left = valueObject_route_section_back_left;
  ::ad::map::point::ENUPoint valueObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightX(-1e8);
  valueObject_route_section_back_right.x = valueObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightY(-1e8);
  valueObject_route_section_back_right.y = valueObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate valueObject_route_section_back_rightZ(-1e8);
  valueObject_route_section_back_right.z = valueObject_route_section_back_rightZ;
  value.object_route_section_back_right = valueObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerX(-1e8);
  valueObject_turning_center.x = valueObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerY(-1e8);
  valueObject_turning_center.y = valueObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_turning_centerZ(-1e8);
  valueObject_turning_center.z = valueObject_turning_centerZ;
  value.object_turning_center = valueObject_turning_center;

  // override member with data type value above input range maximum
  ::ad::map::point::ENUPoint invalidInitializedMember;
  ::ad::map::point::ENUCoordinate invalidInitializedMemberX(1e8 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.object_turning_center = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
