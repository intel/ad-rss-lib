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
#include "ad/rss/map/RssRoute.hpp"

class RssRouteTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::map::RssRoute value;
    ::ad::rss::map::RssRouteId valueRoute_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
    value.route_id = valueRoute_id;
    ::ad::map::route::FullRoute valueRoute;
    ::ad::map::route::RoadSegmentList valueRouteRoad_segments;
    ::ad::map::route::RoadSegment valueRouteRoad_segmentsElement;
    ::ad::map::route::LaneSegmentList valueRouteRoad_segmentsElementDrivable_lane_segments;
    ::ad::map::route::LaneSegment valueRouteRoad_segmentsElementDrivable_lane_segmentsElement;
    ::ad::map::lane::LaneId valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(1);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
    ::ad::map::lane::LaneId valueRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(1);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
    ::ad::map::lane::LaneIdList valueRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
    ::ad::map::lane::LaneId valueRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(1);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
      1, valueRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
    ::ad::map::lane::LaneIdList valueRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
    ::ad::map::lane::LaneId valueRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(1);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
      1, valueRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
    ::ad::map::route::LaneInterval valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
    ::ad::map::lane::LaneId valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(1);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.lane_id
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
    ::ad::physics::ParametricValue valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(0.);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
    ::ad::physics::ParametricValue valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(0.);
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
    bool valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{true};
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.wrong_way
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
    ::ad::map::route::RouteLaneOffset valueRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
    valueRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
      = valueRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
    valueRouteRoad_segmentsElementDrivable_lane_segments.resize(
      1, valueRouteRoad_segmentsElementDrivable_lane_segmentsElement);
    valueRouteRoad_segmentsElement.drivable_lane_segments = valueRouteRoad_segmentsElementDrivable_lane_segments;
    ::ad::map::route::SegmentCounter valueRouteRoad_segmentsElementSegment_count_from_destination(
      std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
    valueRouteRoad_segmentsElement.segment_count_from_destination
      = valueRouteRoad_segmentsElementSegment_count_from_destination;
    ::ad::map::point::BoundingSphere valueRouteRoad_segmentsElementBounding_sphere;
    ::ad::map::point::ECEFPoint valueRouteRoad_segmentsElementBounding_sphereCenter;
    ::ad::map::point::ECEFCoordinate valueRouteRoad_segmentsElementBounding_sphereCenterX(-6400000);
    valueRouteRoad_segmentsElementBounding_sphereCenter.x = valueRouteRoad_segmentsElementBounding_sphereCenterX;
    ::ad::map::point::ECEFCoordinate valueRouteRoad_segmentsElementBounding_sphereCenterY(-6400000);
    valueRouteRoad_segmentsElementBounding_sphereCenter.y = valueRouteRoad_segmentsElementBounding_sphereCenterY;
    ::ad::map::point::ECEFCoordinate valueRouteRoad_segmentsElementBounding_sphereCenterZ(-6400000);
    valueRouteRoad_segmentsElementBounding_sphereCenter.z = valueRouteRoad_segmentsElementBounding_sphereCenterZ;
    valueRouteRoad_segmentsElementBounding_sphere.center = valueRouteRoad_segmentsElementBounding_sphereCenter;
    ::ad::physics::Distance valueRouteRoad_segmentsElementBounding_sphereRadius(-1e9);
    valueRouteRoad_segmentsElementBounding_sphere.radius = valueRouteRoad_segmentsElementBounding_sphereRadius;
    valueRouteRoad_segmentsElement.bounding_sphere = valueRouteRoad_segmentsElementBounding_sphere;
    valueRouteRoad_segments.resize(1, valueRouteRoad_segmentsElement);
    valueRoute.road_segments = valueRouteRoad_segments;
    ::ad::map::route::RoutePlanningCounter valueRouteRoute_planning_counter(
      std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
    valueRoute.route_planning_counter = valueRouteRoute_planning_counter;
    ::ad::map::route::SegmentCounter valueRouteFull_route_segment_count(
      std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
    valueRoute.full_route_segment_count = valueRouteFull_route_segment_count;
    ::ad::map::route::RouteLaneOffset valueRouteDestination_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
    valueRoute.destination_lane_offset = valueRouteDestination_lane_offset;
    ::ad::map::route::RouteLaneOffset valueRouteMin_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
    valueRoute.min_lane_offset = valueRouteMin_lane_offset;
    ::ad::map::route::RouteLaneOffset valueRouteMax_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
    valueRoute.max_lane_offset = valueRouteMax_lane_offset;
    ::ad::map::route::RouteCreationMode valueRouteRoute_creation_mode(::ad::map::route::RouteCreationMode::Undefined);
    valueRoute.route_creation_mode = valueRouteRoute_creation_mode;
    value.route = valueRoute;
    ::ad::physics::Probability valueLikelihood(0.);
    value.likelihood = valueLikelihood;
    ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueVehicle_dynamics_on_route;
    std::chrono::system_clock::time_point valueVehicle_dynamics_on_routeLast_update{std::chrono::hours(0)};
    valueVehicle_dynamics_on_route.last_update = valueVehicle_dynamics_on_routeLast_update;
    ::ad::physics::Acceleration valueVehicle_dynamics_on_routeRoute_accel_lon(-1e2);
    valueVehicle_dynamics_on_route.route_accel_lon = valueVehicle_dynamics_on_routeRoute_accel_lon;
    ::ad::physics::Acceleration valueVehicle_dynamics_on_routeRoute_accel_lat(-1e2);
    valueVehicle_dynamics_on_route.route_accel_lat = valueVehicle_dynamics_on_routeRoute_accel_lat;
    ::ad::physics::Acceleration valueVehicle_dynamics_on_routeAvg_route_accel_lon(-1e2);
    valueVehicle_dynamics_on_route.avg_route_accel_lon = valueVehicle_dynamics_on_routeAvg_route_accel_lon;
    ::ad::physics::Acceleration valueVehicle_dynamics_on_routeAvg_route_accel_lat(-1e2);
    valueVehicle_dynamics_on_route.avg_route_accel_lat = valueVehicle_dynamics_on_routeAvg_route_accel_lat;
    value.vehicle_dynamics_on_route = valueVehicle_dynamics_on_route;
    ::ad::rss::map::RssRouteId valueParent_route_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
    value.parent_route_id = valueParent_route_id;
    ::ad::physics::Distance valueProgress_on_route(-1e9);
    value.progress_on_route = valueProgress_on_route;
    ::ad::rss::map::RssObjectDataOnRoute valueObject_data_on_route;
    ::ad::map::point::ENUHeading valueObject_data_on_routeRoute_heading(-3.141592655);
    valueObject_data_on_route.route_heading = valueObject_data_on_routeRoute_heading;
    ::ad::physics::Distance valueObject_data_on_routeRoute_radius(-1e9);
    valueObject_data_on_route.route_radius = valueObject_data_on_routeRoute_radius;
    ::ad::physics::Angle valueObject_data_on_routeRoute_heading_delta(-6.283185308);
    valueObject_data_on_route.route_heading_delta = valueObject_data_on_routeRoute_heading_delta;
    ::ad::physics::Speed valueObject_data_on_routeRoute_speed_lat(-100.);
    valueObject_data_on_route.route_speed_lat = valueObject_data_on_routeRoute_speed_lat;
    ::ad::physics::Speed valueObject_data_on_routeRoute_speed_lon(-100.);
    valueObject_data_on_route.route_speed_lon = valueObject_data_on_routeRoute_speed_lon;
    bool valueObject_data_on_routeObject_center_within_route{true};
    valueObject_data_on_route.object_center_within_route = valueObject_data_on_routeObject_center_within_route;
    bool valueObject_data_on_routeObject_within_route{true};
    valueObject_data_on_route.object_within_route = valueObject_data_on_routeObject_within_route;
    ::ad::map::point::ENUPoint valueObject_data_on_routeObject_center_position_projected_on_route;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_center_position_projected_on_routeX(-1e8);
    valueObject_data_on_routeObject_center_position_projected_on_route.x
      = valueObject_data_on_routeObject_center_position_projected_on_routeX;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_center_position_projected_on_routeY(-1e8);
    valueObject_data_on_routeObject_center_position_projected_on_route.y
      = valueObject_data_on_routeObject_center_position_projected_on_routeY;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_center_position_projected_on_routeZ(-1e8);
    valueObject_data_on_routeObject_center_position_projected_on_route.z
      = valueObject_data_on_routeObject_center_position_projected_on_routeZ;
    valueObject_data_on_route.object_center_position_projected_on_route
      = valueObject_data_on_routeObject_center_position_projected_on_route;
    bool valueObject_data_on_routeIs_valid{true};
    valueObject_data_on_route.is_valid = valueObject_data_on_routeIs_valid;
    ::ad::physics::Distance valueObject_data_on_routeObject_center_distance_to_route(-1e9);
    valueObject_data_on_route.object_center_distance_to_route
      = valueObject_data_on_routeObject_center_distance_to_route;
    ::ad::map::point::ENUPoint
      valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
    ::ad::map::point::ENUCoordinate
      valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
    valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.x
      = valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
    ::ad::map::point::ENUCoordinate
      valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
    valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.y
      = valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
    ::ad::map::point::ENUCoordinate
      valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
    valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.z
      = valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
    valueObject_data_on_route.object_center_position_projected_on_lane_in_nominal_route_direction
      = valueObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
    ::ad::physics::Distance valueObject_data_on_routeObject_center_distance_along_route(-1e9);
    valueObject_data_on_route.object_center_distance_along_route
      = valueObject_data_on_routeObject_center_distance_along_route;
    ::ad::map::point::ENUPoint valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
    ::ad::map::point::ENUCoordinate
      valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
    valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
      = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
    ::ad::map::point::ENUCoordinate
      valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
    valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
      = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
    ::ad::map::point::ENUCoordinate
      valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
    valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.z
      = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
    valueObject_data_on_route.nominal_center_position_of_lane_in_nominal_route_direction
      = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
    ::ad::map::point::ENUPoint valueObject_data_on_routeObject_route_section_front_left;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_front_leftX(-1e8);
    valueObject_data_on_routeObject_route_section_front_left.x
      = valueObject_data_on_routeObject_route_section_front_leftX;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_front_leftY(-1e8);
    valueObject_data_on_routeObject_route_section_front_left.y
      = valueObject_data_on_routeObject_route_section_front_leftY;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_front_leftZ(-1e8);
    valueObject_data_on_routeObject_route_section_front_left.z
      = valueObject_data_on_routeObject_route_section_front_leftZ;
    valueObject_data_on_route.object_route_section_front_left
      = valueObject_data_on_routeObject_route_section_front_left;
    ::ad::map::point::ENUPoint valueObject_data_on_routeObject_route_section_front_right;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_front_rightX(-1e8);
    valueObject_data_on_routeObject_route_section_front_right.x
      = valueObject_data_on_routeObject_route_section_front_rightX;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_front_rightY(-1e8);
    valueObject_data_on_routeObject_route_section_front_right.y
      = valueObject_data_on_routeObject_route_section_front_rightY;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_front_rightZ(-1e8);
    valueObject_data_on_routeObject_route_section_front_right.z
      = valueObject_data_on_routeObject_route_section_front_rightZ;
    valueObject_data_on_route.object_route_section_front_right
      = valueObject_data_on_routeObject_route_section_front_right;
    ::ad::map::point::ENUPoint valueObject_data_on_routeObject_route_section_back_left;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftX(-1e8);
    valueObject_data_on_routeObject_route_section_back_left.x
      = valueObject_data_on_routeObject_route_section_back_leftX;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
    valueObject_data_on_routeObject_route_section_back_left.y
      = valueObject_data_on_routeObject_route_section_back_leftY;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
    valueObject_data_on_routeObject_route_section_back_left.z
      = valueObject_data_on_routeObject_route_section_back_leftZ;
    valueObject_data_on_route.object_route_section_back_left = valueObject_data_on_routeObject_route_section_back_left;
    ::ad::map::point::ENUPoint valueObject_data_on_routeObject_route_section_back_right;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_rightX(-1e8);
    valueObject_data_on_routeObject_route_section_back_right.x
      = valueObject_data_on_routeObject_route_section_back_rightX;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_rightY(-1e8);
    valueObject_data_on_routeObject_route_section_back_right.y
      = valueObject_data_on_routeObject_route_section_back_rightY;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_rightZ(-1e8);
    valueObject_data_on_routeObject_route_section_back_right.z
      = valueObject_data_on_routeObject_route_section_back_rightZ;
    valueObject_data_on_route.object_route_section_back_right
      = valueObject_data_on_routeObject_route_section_back_right;
    ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
    valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
    valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
    ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
    valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
    valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
    value.object_data_on_route = valueObject_data_on_route;
    mValue = value;
  }

  ::ad::rss::map::RssRoute mValue;
};

TEST_F(RssRouteTests, copyConstruction)
{
  ::ad::rss::map::RssRoute value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteTests, moveConstruction)
{
  ::ad::rss::map::RssRoute tmpValue(mValue);
  ::ad::rss::map::RssRoute value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteTests, copyAssignment)
{
  ::ad::rss::map::RssRoute value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteTests, moveAssignment)
{
  ::ad::rss::map::RssRoute tmpValue(mValue);
  ::ad::rss::map::RssRoute value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssRoute valueA = mValue;
  ::ad::rss::map::RssRoute valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssRouteTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssRouteTests, comparisonOperatorRoute_idDiffers)
{
  ::ad::rss::map::RssRoute valueA = mValue;
  ::ad::rss::map::RssRouteId route_id(std::numeric_limits<::ad::rss::map::RssRouteId>::max());
  valueA.route_id = route_id;
  ::ad::rss::map::RssRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteTests, comparisonOperatorRouteDiffers)
{
  ::ad::rss::map::RssRoute valueA = mValue;
  ::ad::map::route::FullRoute route;
  ::ad::map::route::RoadSegmentList routeRoad_segments;
  ::ad::map::route::RoadSegment routeRoad_segmentsElement;
  ::ad::map::route::LaneSegmentList routeRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::LaneSegment routeRoad_segmentsElementDrivable_lane_segmentsElement;
  ::ad::map::lane::LaneId routeRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  routeRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
    = routeRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
  ::ad::map::lane::LaneId routeRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  routeRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
    = routeRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
  ::ad::map::lane::LaneIdList routeRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneId routeRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  routeRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
    2, routeRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
  routeRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
    = routeRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneIdList routeRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::lane::LaneId routeRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  routeRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
    2, routeRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
  routeRoad_segmentsElementDrivable_lane_segmentsElement.successors
    = routeRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::route::LaneInterval routeRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::lane::LaneId routeRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  routeRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.lane_id
    = routeRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
  ::ad::physics::ParametricValue routeRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(1.);
  routeRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
    = routeRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
  ::ad::physics::ParametricValue routeRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(1.);
  routeRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
    = routeRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
  bool routeRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{false};
  routeRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.wrong_way
    = routeRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
  routeRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
    = routeRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::route::RouteLaneOffset routeRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::max());
  routeRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
    = routeRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
  routeRoad_segmentsElementDrivable_lane_segments.resize(2, routeRoad_segmentsElementDrivable_lane_segmentsElement);
  routeRoad_segmentsElement.drivable_lane_segments = routeRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::SegmentCounter routeRoad_segmentsElementSegment_count_from_destination(
    std::numeric_limits<::ad::map::route::SegmentCounter>::max());
  routeRoad_segmentsElement.segment_count_from_destination = routeRoad_segmentsElementSegment_count_from_destination;
  ::ad::map::point::BoundingSphere routeRoad_segmentsElementBounding_sphere;
  ::ad::map::point::ECEFPoint routeRoad_segmentsElementBounding_sphereCenter;
  ::ad::map::point::ECEFCoordinate routeRoad_segmentsElementBounding_sphereCenterX(6400000);
  routeRoad_segmentsElementBounding_sphereCenter.x = routeRoad_segmentsElementBounding_sphereCenterX;
  ::ad::map::point::ECEFCoordinate routeRoad_segmentsElementBounding_sphereCenterY(6400000);
  routeRoad_segmentsElementBounding_sphereCenter.y = routeRoad_segmentsElementBounding_sphereCenterY;
  ::ad::map::point::ECEFCoordinate routeRoad_segmentsElementBounding_sphereCenterZ(6400000);
  routeRoad_segmentsElementBounding_sphereCenter.z = routeRoad_segmentsElementBounding_sphereCenterZ;
  routeRoad_segmentsElementBounding_sphere.center = routeRoad_segmentsElementBounding_sphereCenter;
  ::ad::physics::Distance routeRoad_segmentsElementBounding_sphereRadius(1e9);
  routeRoad_segmentsElementBounding_sphere.radius = routeRoad_segmentsElementBounding_sphereRadius;
  routeRoad_segmentsElement.bounding_sphere = routeRoad_segmentsElementBounding_sphere;
  routeRoad_segments.resize(2, routeRoad_segmentsElement);
  route.road_segments = routeRoad_segments;
  ::ad::map::route::RoutePlanningCounter routeRoute_planning_counter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::max());
  route.route_planning_counter = routeRoute_planning_counter;
  ::ad::map::route::SegmentCounter routeFull_route_segment_count(
    std::numeric_limits<::ad::map::route::SegmentCounter>::max());
  route.full_route_segment_count = routeFull_route_segment_count;
  ::ad::map::route::RouteLaneOffset routeDestination_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::max());
  route.destination_lane_offset = routeDestination_lane_offset;
  ::ad::map::route::RouteLaneOffset routeMin_lane_offset(std::numeric_limits<::ad::map::route::RouteLaneOffset>::max());
  route.min_lane_offset = routeMin_lane_offset;
  ::ad::map::route::RouteLaneOffset routeMax_lane_offset(std::numeric_limits<::ad::map::route::RouteLaneOffset>::max());
  route.max_lane_offset = routeMax_lane_offset;
  ::ad::map::route::RouteCreationMode routeRoute_creation_mode(::ad::map::route::RouteCreationMode::AllNeighborLanes);
  route.route_creation_mode = routeRoute_creation_mode;
  valueA.route = route;
  ::ad::rss::map::RssRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteTests, comparisonOperatorLikelihoodDiffers)
{
  ::ad::rss::map::RssRoute valueA = mValue;
  ::ad::physics::Probability likelihood(1.);
  valueA.likelihood = likelihood;
  ::ad::rss::map::RssRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteTests, comparisonOperatorVehicle_dynamics_on_routeDiffers)
{
  ::ad::rss::map::RssRoute valueA = mValue;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute vehicle_dynamics_on_route;
  std::chrono::system_clock::time_point vehicle_dynamics_on_routeLast_update{std::chrono::hours(1)};
  vehicle_dynamics_on_route.last_update = vehicle_dynamics_on_routeLast_update;
  ::ad::physics::Acceleration vehicle_dynamics_on_routeRoute_accel_lon(1e2);
  vehicle_dynamics_on_route.route_accel_lon = vehicle_dynamics_on_routeRoute_accel_lon;
  ::ad::physics::Acceleration vehicle_dynamics_on_routeRoute_accel_lat(1e2);
  vehicle_dynamics_on_route.route_accel_lat = vehicle_dynamics_on_routeRoute_accel_lat;
  ::ad::physics::Acceleration vehicle_dynamics_on_routeAvg_route_accel_lon(1e2);
  vehicle_dynamics_on_route.avg_route_accel_lon = vehicle_dynamics_on_routeAvg_route_accel_lon;
  ::ad::physics::Acceleration vehicle_dynamics_on_routeAvg_route_accel_lat(1e2);
  vehicle_dynamics_on_route.avg_route_accel_lat = vehicle_dynamics_on_routeAvg_route_accel_lat;
  valueA.vehicle_dynamics_on_route = vehicle_dynamics_on_route;
  ::ad::rss::map::RssRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteTests, comparisonOperatorParent_route_idDiffers)
{
  ::ad::rss::map::RssRoute valueA = mValue;
  ::ad::rss::map::RssRouteId parent_route_id(std::numeric_limits<::ad::rss::map::RssRouteId>::max());
  valueA.parent_route_id = parent_route_id;
  ::ad::rss::map::RssRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteTests, comparisonOperatorProgress_on_routeDiffers)
{
  ::ad::rss::map::RssRoute valueA = mValue;
  ::ad::physics::Distance progress_on_route(1e9);
  valueA.progress_on_route = progress_on_route;
  ::ad::rss::map::RssRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteTests, comparisonOperatorObject_data_on_routeDiffers)
{
  ::ad::rss::map::RssRoute valueA = mValue;
  ::ad::rss::map::RssObjectDataOnRoute object_data_on_route;
  ::ad::map::point::ENUHeading object_data_on_routeRoute_heading(3.141592655);
  object_data_on_route.route_heading = object_data_on_routeRoute_heading;
  ::ad::physics::Distance object_data_on_routeRoute_radius(1e9);
  object_data_on_route.route_radius = object_data_on_routeRoute_radius;
  ::ad::physics::Angle object_data_on_routeRoute_heading_delta(6.283185308);
  object_data_on_route.route_heading_delta = object_data_on_routeRoute_heading_delta;
  ::ad::physics::Speed object_data_on_routeRoute_speed_lat(100.);
  object_data_on_route.route_speed_lat = object_data_on_routeRoute_speed_lat;
  ::ad::physics::Speed object_data_on_routeRoute_speed_lon(100.);
  object_data_on_route.route_speed_lon = object_data_on_routeRoute_speed_lon;
  bool object_data_on_routeObject_center_within_route{false};
  object_data_on_route.object_center_within_route = object_data_on_routeObject_center_within_route;
  bool object_data_on_routeObject_within_route{false};
  object_data_on_route.object_within_route = object_data_on_routeObject_within_route;
  ::ad::map::point::ENUPoint object_data_on_routeObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_center_position_projected_on_routeX(1e8);
  object_data_on_routeObject_center_position_projected_on_route.x
    = object_data_on_routeObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_center_position_projected_on_routeY(1e8);
  object_data_on_routeObject_center_position_projected_on_route.y
    = object_data_on_routeObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_center_position_projected_on_routeZ(1e8);
  object_data_on_routeObject_center_position_projected_on_route.z
    = object_data_on_routeObject_center_position_projected_on_routeZ;
  object_data_on_route.object_center_position_projected_on_route
    = object_data_on_routeObject_center_position_projected_on_route;
  bool object_data_on_routeIs_valid{false};
  object_data_on_route.is_valid = object_data_on_routeIs_valid;
  ::ad::physics::Distance object_data_on_routeObject_center_distance_to_route(1e9);
  object_data_on_route.object_center_distance_to_route = object_data_on_routeObject_center_distance_to_route;
  ::ad::map::point::ENUPoint object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(1e8);
  object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(1e8);
  object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(1e8);
  object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  object_data_on_route.object_center_position_projected_on_lane_in_nominal_route_direction
    = object_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance object_data_on_routeObject_center_distance_along_route(1e9);
  object_data_on_route.object_center_distance_along_route = object_data_on_routeObject_center_distance_along_route;
  ::ad::map::point::ENUPoint object_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate object_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(1e8);
  object_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = object_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate object_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(1e8);
  object_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = object_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate object_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(1e8);
  object_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.z
    = object_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
  object_data_on_route.nominal_center_position_of_lane_in_nominal_route_direction
    = object_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint object_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_front_leftX(1e8);
  object_data_on_routeObject_route_section_front_left.x = object_data_on_routeObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_front_leftY(1e8);
  object_data_on_routeObject_route_section_front_left.y = object_data_on_routeObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_front_leftZ(1e8);
  object_data_on_routeObject_route_section_front_left.z = object_data_on_routeObject_route_section_front_leftZ;
  object_data_on_route.object_route_section_front_left = object_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUPoint object_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_front_rightX(1e8);
  object_data_on_routeObject_route_section_front_right.x = object_data_on_routeObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_front_rightY(1e8);
  object_data_on_routeObject_route_section_front_right.y = object_data_on_routeObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_front_rightZ(1e8);
  object_data_on_routeObject_route_section_front_right.z = object_data_on_routeObject_route_section_front_rightZ;
  object_data_on_route.object_route_section_front_right = object_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUPoint object_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_back_leftX(1e8);
  object_data_on_routeObject_route_section_back_left.x = object_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_back_leftY(1e8);
  object_data_on_routeObject_route_section_back_left.y = object_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_back_leftZ(1e8);
  object_data_on_routeObject_route_section_back_left.z = object_data_on_routeObject_route_section_back_leftZ;
  object_data_on_route.object_route_section_back_left = object_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUPoint object_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_back_rightX(1e8);
  object_data_on_routeObject_route_section_back_right.x = object_data_on_routeObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_back_rightY(1e8);
  object_data_on_routeObject_route_section_back_right.y = object_data_on_routeObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_route_section_back_rightZ(1e8);
  object_data_on_routeObject_route_section_back_right.z = object_data_on_routeObject_route_section_back_rightZ;
  object_data_on_route.object_route_section_back_right = object_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint object_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_turning_centerX(1e8);
  object_data_on_routeObject_turning_center.x = object_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_turning_centerY(1e8);
  object_data_on_routeObject_turning_center.y = object_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate object_data_on_routeObject_turning_centerZ(1e8);
  object_data_on_routeObject_turning_center.z = object_data_on_routeObject_turning_centerZ;
  object_data_on_route.object_turning_center = object_data_on_routeObject_turning_center;
  valueA.object_data_on_route = object_data_on_route;
  ::ad::rss::map::RssRoute valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
