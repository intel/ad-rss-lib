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

#include "ad/rss/map/RssRouteListValidInputRange.hpp"

TEST(RssRouteListValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::map::RssRouteList value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssRouteListValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::map::RssRouteList value;
  ::ad::rss::map::RssRoute element;
  ::ad::rss::map::RssRouteId elementRoute_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  element.route_id = elementRoute_id;
  ::ad::map::route::FullRoute elementRoute;
  ::ad::map::route::RoadSegmentList elementRouteRoad_segments;
  ::ad::map::route::RoadSegment elementRouteRoad_segmentsElement;
  ::ad::map::route::LaneSegmentList elementRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::LaneSegment elementRouteRoad_segmentsElementDrivable_lane_segmentsElement;
  ::ad::map::lane::LaneId elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(1);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
  ::ad::map::lane::LaneId elementRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(1);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
  ::ad::map::lane::LaneIdList elementRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneId elementRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(1);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
    1, elementRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneIdList elementRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::lane::LaneId elementRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(1);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
    1, elementRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::route::LaneInterval elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::lane::LaneId elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(1);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.lane_id
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
  ::ad::physics::ParametricValue elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(0.);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
  ::ad::physics::ParametricValue elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(0.);
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
  bool elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{true};
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.wrong_way
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::route::RouteLaneOffset elementRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
    = elementRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
  elementRouteRoad_segmentsElementDrivable_lane_segments.resize(
    1, elementRouteRoad_segmentsElementDrivable_lane_segmentsElement);
  elementRouteRoad_segmentsElement.drivable_lane_segments = elementRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::SegmentCounter elementRouteRoad_segmentsElementSegment_count_from_destination(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  elementRouteRoad_segmentsElement.segment_count_from_destination
    = elementRouteRoad_segmentsElementSegment_count_from_destination;
  ::ad::map::point::BoundingSphere elementRouteRoad_segmentsElementBounding_sphere;
  ::ad::map::point::ECEFPoint elementRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::map::point::ECEFCoordinate elementRouteRoad_segmentsElementBounding_sphereCenterX(-6400000);
  elementRouteRoad_segmentsElementBounding_sphereCenter.x = elementRouteRoad_segmentsElementBounding_sphereCenterX;
  ::ad::map::point::ECEFCoordinate elementRouteRoad_segmentsElementBounding_sphereCenterY(-6400000);
  elementRouteRoad_segmentsElementBounding_sphereCenter.y = elementRouteRoad_segmentsElementBounding_sphereCenterY;
  ::ad::map::point::ECEFCoordinate elementRouteRoad_segmentsElementBounding_sphereCenterZ(-6400000);
  elementRouteRoad_segmentsElementBounding_sphereCenter.z = elementRouteRoad_segmentsElementBounding_sphereCenterZ;
  elementRouteRoad_segmentsElementBounding_sphere.center = elementRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::physics::Distance elementRouteRoad_segmentsElementBounding_sphereRadius(-1e9);
  elementRouteRoad_segmentsElementBounding_sphere.radius = elementRouteRoad_segmentsElementBounding_sphereRadius;
  elementRouteRoad_segmentsElement.bounding_sphere = elementRouteRoad_segmentsElementBounding_sphere;
  elementRouteRoad_segments.resize(1, elementRouteRoad_segmentsElement);
  elementRoute.road_segments = elementRouteRoad_segments;
  ::ad::map::route::RoutePlanningCounter elementRouteRoute_planning_counter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
  elementRoute.route_planning_counter = elementRouteRoute_planning_counter;
  ::ad::map::route::SegmentCounter elementRouteFull_route_segment_count(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  elementRoute.full_route_segment_count = elementRouteFull_route_segment_count;
  ::ad::map::route::RouteLaneOffset elementRouteDestination_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementRoute.destination_lane_offset = elementRouteDestination_lane_offset;
  ::ad::map::route::RouteLaneOffset elementRouteMin_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementRoute.min_lane_offset = elementRouteMin_lane_offset;
  ::ad::map::route::RouteLaneOffset elementRouteMax_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementRoute.max_lane_offset = elementRouteMax_lane_offset;
  ::ad::map::route::RouteCreationMode elementRouteRoute_creation_mode(::ad::map::route::RouteCreationMode::Undefined);
  elementRoute.route_creation_mode = elementRouteRoute_creation_mode;
  element.route = elementRoute;
  ::ad::physics::Probability elementLikelihood(0.);
  element.likelihood = elementLikelihood;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute elementVehicle_dynamics_on_route;
  std::chrono::system_clock::time_point elementVehicle_dynamics_on_routeLast_update{std::chrono::hours(0)};
  elementVehicle_dynamics_on_route.last_update = elementVehicle_dynamics_on_routeLast_update;
  ::ad::physics::Acceleration elementVehicle_dynamics_on_routeRoute_accel_lon(-1e2);
  elementVehicle_dynamics_on_route.route_accel_lon = elementVehicle_dynamics_on_routeRoute_accel_lon;
  ::ad::physics::Acceleration elementVehicle_dynamics_on_routeRoute_accel_lat(-1e2);
  elementVehicle_dynamics_on_route.route_accel_lat = elementVehicle_dynamics_on_routeRoute_accel_lat;
  ::ad::physics::Acceleration elementVehicle_dynamics_on_routeAvg_route_accel_lon(-1e2);
  elementVehicle_dynamics_on_route.avg_route_accel_lon = elementVehicle_dynamics_on_routeAvg_route_accel_lon;
  ::ad::physics::Acceleration elementVehicle_dynamics_on_routeAvg_route_accel_lat(-1e2);
  elementVehicle_dynamics_on_route.avg_route_accel_lat = elementVehicle_dynamics_on_routeAvg_route_accel_lat;
  element.vehicle_dynamics_on_route = elementVehicle_dynamics_on_route;
  ::ad::rss::map::RssRouteId elementParent_route_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  element.parent_route_id = elementParent_route_id;
  ::ad::physics::Distance elementProgress_on_route(-1e9);
  element.progress_on_route = elementProgress_on_route;
  ::ad::rss::map::RssObjectDataOnRoute elementObject_data_on_route;
  ::ad::map::point::ENUHeading elementObject_data_on_routeRoute_heading(-3.141592655);
  elementObject_data_on_route.route_heading = elementObject_data_on_routeRoute_heading;
  ::ad::physics::Distance elementObject_data_on_routeRoute_radius(-1e9);
  elementObject_data_on_route.route_radius = elementObject_data_on_routeRoute_radius;
  ::ad::physics::Angle elementObject_data_on_routeRoute_heading_delta(-6.283185308);
  elementObject_data_on_route.route_heading_delta = elementObject_data_on_routeRoute_heading_delta;
  ::ad::physics::Speed elementObject_data_on_routeRoute_speed_lat(-100.);
  elementObject_data_on_route.route_speed_lat = elementObject_data_on_routeRoute_speed_lat;
  ::ad::physics::Speed elementObject_data_on_routeRoute_speed_lon(-100.);
  elementObject_data_on_route.route_speed_lon = elementObject_data_on_routeRoute_speed_lon;
  bool elementObject_data_on_routeObject_center_within_route{true};
  elementObject_data_on_route.object_center_within_route = elementObject_data_on_routeObject_center_within_route;
  bool elementObject_data_on_routeObject_within_route{true};
  elementObject_data_on_route.object_within_route = elementObject_data_on_routeObject_within_route;
  ::ad::map::point::ENUPoint elementObject_data_on_routeObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_center_position_projected_on_routeX(-1e8);
  elementObject_data_on_routeObject_center_position_projected_on_route.x
    = elementObject_data_on_routeObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_center_position_projected_on_routeY(-1e8);
  elementObject_data_on_routeObject_center_position_projected_on_route.y
    = elementObject_data_on_routeObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_center_position_projected_on_routeZ(-1e8);
  elementObject_data_on_routeObject_center_position_projected_on_route.z
    = elementObject_data_on_routeObject_center_position_projected_on_routeZ;
  elementObject_data_on_route.object_center_position_projected_on_route
    = elementObject_data_on_routeObject_center_position_projected_on_route;
  bool elementObject_data_on_routeIs_valid{true};
  elementObject_data_on_route.is_valid = elementObject_data_on_routeIs_valid;
  ::ad::physics::Distance elementObject_data_on_routeObject_center_distance_to_route(-1e9);
  elementObject_data_on_route.object_center_distance_to_route
    = elementObject_data_on_routeObject_center_distance_to_route;
  ::ad::map::point::ENUPoint
    elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  elementObject_data_on_route.object_center_position_projected_on_lane_in_nominal_route_direction
    = elementObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance elementObject_data_on_routeObject_center_distance_along_route(-1e9);
  elementObject_data_on_route.object_center_distance_along_route
    = elementObject_data_on_routeObject_center_distance_along_route;
  ::ad::map::point::ENUPoint elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.z
    = elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
  elementObject_data_on_route.nominal_center_position_of_lane_in_nominal_route_direction
    = elementObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint elementObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_front_leftX(-1e8);
  elementObject_data_on_routeObject_route_section_front_left.x
    = elementObject_data_on_routeObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_front_leftY(-1e8);
  elementObject_data_on_routeObject_route_section_front_left.y
    = elementObject_data_on_routeObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_front_leftZ(-1e8);
  elementObject_data_on_routeObject_route_section_front_left.z
    = elementObject_data_on_routeObject_route_section_front_leftZ;
  elementObject_data_on_route.object_route_section_front_left
    = elementObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUPoint elementObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_front_rightX(-1e8);
  elementObject_data_on_routeObject_route_section_front_right.x
    = elementObject_data_on_routeObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_front_rightY(-1e8);
  elementObject_data_on_routeObject_route_section_front_right.y
    = elementObject_data_on_routeObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_front_rightZ(-1e8);
  elementObject_data_on_routeObject_route_section_front_right.z
    = elementObject_data_on_routeObject_route_section_front_rightZ;
  elementObject_data_on_route.object_route_section_front_right
    = elementObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUPoint elementObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_back_leftX(-1e8);
  elementObject_data_on_routeObject_route_section_back_left.x
    = elementObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_back_leftY(-1e8);
  elementObject_data_on_routeObject_route_section_back_left.y
    = elementObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  elementObject_data_on_routeObject_route_section_back_left.z
    = elementObject_data_on_routeObject_route_section_back_leftZ;
  elementObject_data_on_route.object_route_section_back_left
    = elementObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUPoint elementObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_back_rightX(-1e8);
  elementObject_data_on_routeObject_route_section_back_right.x
    = elementObject_data_on_routeObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_back_rightY(-1e8);
  elementObject_data_on_routeObject_route_section_back_right.y
    = elementObject_data_on_routeObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_route_section_back_rightZ(-1e8);
  elementObject_data_on_routeObject_route_section_back_right.z
    = elementObject_data_on_routeObject_route_section_back_rightZ;
  elementObject_data_on_route.object_route_section_back_right
    = elementObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint elementObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_turning_centerX(-1e8);
  elementObject_data_on_routeObject_turning_center.x = elementObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_turning_centerY(-1e8);
  elementObject_data_on_routeObject_turning_center.y = elementObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate elementObject_data_on_routeObject_turning_centerZ(-1e8);
  elementObject_data_on_routeObject_turning_center.z = elementObject_data_on_routeObject_turning_centerZ;
  elementObject_data_on_route.object_turning_center = elementObject_data_on_routeObject_turning_center;
  element.object_data_on_route = elementObject_data_on_route;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssRouteListValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::map::RssRouteList value;
  ::ad::rss::map::RssRoute element;
  ::ad::map::route::FullRoute elementRoute;
  ::ad::map::route::RouteCreationMode elementRouteRoute_creation_mode(
    static_cast<::ad::map::route::RouteCreationMode>(-1));
  elementRoute.route_creation_mode = elementRouteRoute_creation_mode;
  element.route = elementRoute;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
