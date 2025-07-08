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
#include "ad/rss/map/RssObjectDataOnRoute.hpp"

class RssObjectDataOnRouteTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    mValue = value;
  }

  ::ad::rss::map::RssObjectDataOnRoute mValue;
};

TEST_F(RssObjectDataOnRouteTests, copyConstruction)
{
  ::ad::rss::map::RssObjectDataOnRoute value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssObjectDataOnRouteTests, moveConstruction)
{
  ::ad::rss::map::RssObjectDataOnRoute tmpValue(mValue);
  ::ad::rss::map::RssObjectDataOnRoute value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssObjectDataOnRouteTests, copyAssignment)
{
  ::ad::rss::map::RssObjectDataOnRoute value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssObjectDataOnRouteTests, moveAssignment)
{
  ::ad::rss::map::RssObjectDataOnRoute tmpValue(mValue);
  ::ad::rss::map::RssObjectDataOnRoute value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorRoute_headingDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUHeading route_heading(3.141592655);
  valueA.route_heading = route_heading;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorRoute_radiusDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::physics::Distance route_radius(1e9);
  valueA.route_radius = route_radius;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorRoute_heading_deltaDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::physics::Angle route_heading_delta(6.283185308);
  valueA.route_heading_delta = route_heading_delta;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorRoute_speed_latDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::physics::Speed route_speed_lat(100.);
  valueA.route_speed_lat = route_speed_lat;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorRoute_speed_lonDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::physics::Speed route_speed_lon(100.);
  valueA.route_speed_lon = route_speed_lon;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_center_within_routeDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  bool object_center_within_route{false};
  valueA.object_center_within_route = object_center_within_route;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_within_routeDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  bool object_within_route{false};
  valueA.object_within_route = object_within_route;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_center_position_projected_on_routeDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUPoint object_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate object_center_position_projected_on_routeX(1e8);
  object_center_position_projected_on_route.x = object_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate object_center_position_projected_on_routeY(1e8);
  object_center_position_projected_on_route.y = object_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate object_center_position_projected_on_routeZ(1e8);
  object_center_position_projected_on_route.z = object_center_position_projected_on_routeZ;
  valueA.object_center_position_projected_on_route = object_center_position_projected_on_route;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorIs_validDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  bool is_valid{false};
  valueA.is_valid = is_valid;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_center_distance_to_routeDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::physics::Distance object_center_distance_to_route(1e9);
  valueA.object_center_distance_to_route = object_center_distance_to_route;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests,
       comparisonOperatorObject_center_position_projected_on_lane_in_nominal_route_directionDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUPoint object_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate object_center_position_projected_on_lane_in_nominal_route_directionX(1e8);
  object_center_position_projected_on_lane_in_nominal_route_direction.x
    = object_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate object_center_position_projected_on_lane_in_nominal_route_directionY(1e8);
  object_center_position_projected_on_lane_in_nominal_route_direction.y
    = object_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate object_center_position_projected_on_lane_in_nominal_route_directionZ(1e8);
  object_center_position_projected_on_lane_in_nominal_route_direction.z
    = object_center_position_projected_on_lane_in_nominal_route_directionZ;
  valueA.object_center_position_projected_on_lane_in_nominal_route_direction
    = object_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_center_distance_along_routeDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::physics::Distance object_center_distance_along_route(1e9);
  valueA.object_center_distance_along_route = object_center_distance_along_route;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorNominal_center_position_of_lane_in_nominal_route_directionDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUPoint nominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate nominal_center_position_of_lane_in_nominal_route_directionX(1e8);
  nominal_center_position_of_lane_in_nominal_route_direction.x
    = nominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate nominal_center_position_of_lane_in_nominal_route_directionY(1e8);
  nominal_center_position_of_lane_in_nominal_route_direction.y
    = nominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate nominal_center_position_of_lane_in_nominal_route_directionZ(1e8);
  nominal_center_position_of_lane_in_nominal_route_direction.z
    = nominal_center_position_of_lane_in_nominal_route_directionZ;
  valueA.nominal_center_position_of_lane_in_nominal_route_direction
    = nominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_route_section_front_leftDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUPoint object_route_section_front_left;
  ::ad::map::point::ENUCoordinate object_route_section_front_leftX(1e8);
  object_route_section_front_left.x = object_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate object_route_section_front_leftY(1e8);
  object_route_section_front_left.y = object_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate object_route_section_front_leftZ(1e8);
  object_route_section_front_left.z = object_route_section_front_leftZ;
  valueA.object_route_section_front_left = object_route_section_front_left;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_route_section_front_rightDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUPoint object_route_section_front_right;
  ::ad::map::point::ENUCoordinate object_route_section_front_rightX(1e8);
  object_route_section_front_right.x = object_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate object_route_section_front_rightY(1e8);
  object_route_section_front_right.y = object_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate object_route_section_front_rightZ(1e8);
  object_route_section_front_right.z = object_route_section_front_rightZ;
  valueA.object_route_section_front_right = object_route_section_front_right;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_route_section_back_leftDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUPoint object_route_section_back_left;
  ::ad::map::point::ENUCoordinate object_route_section_back_leftX(1e8);
  object_route_section_back_left.x = object_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate object_route_section_back_leftY(1e8);
  object_route_section_back_left.y = object_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate object_route_section_back_leftZ(1e8);
  object_route_section_back_left.z = object_route_section_back_leftZ;
  valueA.object_route_section_back_left = object_route_section_back_left;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_route_section_back_rightDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUPoint object_route_section_back_right;
  ::ad::map::point::ENUCoordinate object_route_section_back_rightX(1e8);
  object_route_section_back_right.x = object_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate object_route_section_back_rightY(1e8);
  object_route_section_back_right.y = object_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate object_route_section_back_rightZ(1e8);
  object_route_section_back_right.z = object_route_section_back_rightZ;
  valueA.object_route_section_back_right = object_route_section_back_right;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssObjectDataOnRouteTests, comparisonOperatorObject_turning_centerDiffers)
{
  ::ad::rss::map::RssObjectDataOnRoute valueA = mValue;
  ::ad::map::point::ENUPoint object_turning_center;
  ::ad::map::point::ENUCoordinate object_turning_centerX(1e8);
  object_turning_center.x = object_turning_centerX;
  ::ad::map::point::ENUCoordinate object_turning_centerY(1e8);
  object_turning_center.y = object_turning_centerY;
  ::ad::map::point::ENUCoordinate object_turning_centerZ(1e8);
  object_turning_center.z = object_turning_centerZ;
  valueA.object_turning_center = object_turning_center;
  ::ad::rss::map::RssObjectDataOnRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
