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

#include "ad/rss/map/RssRouteValidInputRange.hpp"

TEST(RssRouteValidInputRangeTests, testValidInputRange)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeRouteTooSmall)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value below input range minimum
  ::ad::map::route::FullRoute invalidInitializedMember;
  ::ad::map::route::RouteCreationMode invalidInitializedMemberRoute_creation_mode(
    static_cast<::ad::map::route::RouteCreationMode>(-1));
  invalidInitializedMember.route_creation_mode = invalidInitializedMemberRoute_creation_mode;
  value.route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeRouteTooBig)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value above input range maximum
  ::ad::map::route::FullRoute invalidInitializedMember;
  ::ad::map::route::RouteCreationMode invalidInitializedMemberRoute_creation_mode(
    static_cast<::ad::map::route::RouteCreationMode>(-1));
  invalidInitializedMember.route_creation_mode = invalidInitializedMemberRoute_creation_mode;
  value.route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeLikelihoodTooSmall)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value below input range minimum
  ::ad::physics::Probability invalidInitializedMember(0. - ::ad::physics::Probability::cPrecisionValue);
  value.likelihood = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeLikelihoodTooBig)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value above input range maximum
  ::ad::physics::Probability invalidInitializedMember(1. * 1.1);
  value.likelihood = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangelikelihoodDefault)
{
  ::ad::rss::map::RssRoute value;
  ::ad::physics::Probability valueDefault;
  value.likelihood = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeVehicle_dynamics_on_routeTooSmall)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value below input range minimum
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberRoute_accel_lon(-1e2 * 1.1);
  invalidInitializedMember.route_accel_lon = invalidInitializedMemberRoute_accel_lon;
  value.vehicle_dynamics_on_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeVehicle_dynamics_on_routeTooBig)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value above input range maximum
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberRoute_accel_lon(1e2 * 1.1);
  invalidInitializedMember.route_accel_lon = invalidInitializedMemberRoute_accel_lon;
  value.vehicle_dynamics_on_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeProgress_on_routeTooSmall)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.progress_on_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeProgress_on_routeTooBig)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.progress_on_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeprogress_on_routeDefault)
{
  ::ad::rss::map::RssRoute value;
  ::ad::physics::Distance valueDefault;
  value.progress_on_route = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeObject_data_on_routeTooSmall)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value below input range minimum
  ::ad::rss::map::RssObjectDataOnRoute invalidInitializedMember;
  ::ad::map::point::ENUHeading invalidInitializedMemberRoute_heading(-3.141592655 * 1.1);
  invalidInitializedMember.route_heading = invalidInitializedMemberRoute_heading;
  value.object_data_on_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssRouteValidInputRangeTests, testValidInputRangeObject_data_on_routeTooBig)
{
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
  valueObject_data_on_route.object_center_distance_to_route = valueObject_data_on_routeObject_center_distance_to_route;
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
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(
    -1e8);
  valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(
    -1e8);
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
  valueObject_data_on_route.object_route_section_front_left = valueObject_data_on_routeObject_route_section_front_left;
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
  valueObject_data_on_routeObject_route_section_back_left.x = valueObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftY(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.y = valueObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  valueObject_data_on_routeObject_route_section_back_left.z = valueObject_data_on_routeObject_route_section_back_leftZ;
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
  valueObject_data_on_route.object_route_section_back_right = valueObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint valueObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerX(-1e8);
  valueObject_data_on_routeObject_turning_center.x = valueObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerY(-1e8);
  valueObject_data_on_routeObject_turning_center.y = valueObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate valueObject_data_on_routeObject_turning_centerZ(-1e8);
  valueObject_data_on_routeObject_turning_center.z = valueObject_data_on_routeObject_turning_centerZ;
  valueObject_data_on_route.object_turning_center = valueObject_data_on_routeObject_turning_center;
  value.object_data_on_route = valueObject_data_on_route;

  // override member with data type value above input range maximum
  ::ad::rss::map::RssObjectDataOnRoute invalidInitializedMember;
  ::ad::map::point::ENUHeading invalidInitializedMemberRoute_heading(3.141592655 * 1.1);
  invalidInitializedMember.route_heading = invalidInitializedMemberRoute_heading;
  value.object_data_on_route = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
