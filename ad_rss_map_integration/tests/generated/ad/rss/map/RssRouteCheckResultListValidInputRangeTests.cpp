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

#include "ad/rss/map/RssRouteCheckResultListValidInputRange.hpp"

TEST(RssRouteCheckResultListValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::map::RssRouteCheckResultList value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssRouteCheckResultListValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::map::RssRouteCheckResultList value;
  ::ad::rss::map::RssRouteCheckResult element;
  ::ad::rss::map::RssRoute elementRss_route;
  ::ad::rss::map::RssRouteId elementRss_routeRoute_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  elementRss_route.route_id = elementRss_routeRoute_id;
  ::ad::map::route::FullRoute elementRss_routeRoute;
  ::ad::map::route::RoadSegmentList elementRss_routeRouteRoad_segments;
  ::ad::map::route::RoadSegment elementRss_routeRouteRoad_segmentsElement;
  ::ad::map::route::LaneSegmentList elementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::LaneSegment elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement;
  ::ad::map::lane::LaneId elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(1);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
  ::ad::map::lane::LaneId elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(1);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
  ::ad::map::lane::LaneIdList elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneId elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(1);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
    1, elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneIdList elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::lane::LaneId elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(1);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
    1, elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::route::LaneInterval elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::lane::LaneId elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(1);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.lane_id
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
  ::ad::physics::ParametricValue
    elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(0.);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
  ::ad::physics::ParametricValue elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(
    0.);
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
  bool elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{true};
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.wrong_way
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::route::RouteLaneOffset
    elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
  elementRss_routeRouteRoad_segmentsElementDrivable_lane_segments.resize(
    1, elementRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement);
  elementRss_routeRouteRoad_segmentsElement.drivable_lane_segments
    = elementRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::SegmentCounter elementRss_routeRouteRoad_segmentsElementSegment_count_from_destination(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  elementRss_routeRouteRoad_segmentsElement.segment_count_from_destination
    = elementRss_routeRouteRoad_segmentsElementSegment_count_from_destination;
  ::ad::map::point::BoundingSphere elementRss_routeRouteRoad_segmentsElementBounding_sphere;
  ::ad::map::point::ECEFPoint elementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::map::point::ECEFCoordinate elementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX(-6400000);
  elementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.x
    = elementRss_routeRouteRoad_segmentsElementBounding_sphereCenterX;
  ::ad::map::point::ECEFCoordinate elementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY(-6400000);
  elementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.y
    = elementRss_routeRouteRoad_segmentsElementBounding_sphereCenterY;
  ::ad::map::point::ECEFCoordinate elementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ(-6400000);
  elementRss_routeRouteRoad_segmentsElementBounding_sphereCenter.z
    = elementRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ;
  elementRss_routeRouteRoad_segmentsElementBounding_sphere.center
    = elementRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::physics::Distance elementRss_routeRouteRoad_segmentsElementBounding_sphereRadius(-1e9);
  elementRss_routeRouteRoad_segmentsElementBounding_sphere.radius
    = elementRss_routeRouteRoad_segmentsElementBounding_sphereRadius;
  elementRss_routeRouteRoad_segmentsElement.bounding_sphere = elementRss_routeRouteRoad_segmentsElementBounding_sphere;
  elementRss_routeRouteRoad_segments.resize(1, elementRss_routeRouteRoad_segmentsElement);
  elementRss_routeRoute.road_segments = elementRss_routeRouteRoad_segments;
  ::ad::map::route::RoutePlanningCounter elementRss_routeRouteRoute_planning_counter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
  elementRss_routeRoute.route_planning_counter = elementRss_routeRouteRoute_planning_counter;
  ::ad::map::route::SegmentCounter elementRss_routeRouteFull_route_segment_count(
    std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
  elementRss_routeRoute.full_route_segment_count = elementRss_routeRouteFull_route_segment_count;
  ::ad::map::route::RouteLaneOffset elementRss_routeRouteDestination_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementRss_routeRoute.destination_lane_offset = elementRss_routeRouteDestination_lane_offset;
  ::ad::map::route::RouteLaneOffset elementRss_routeRouteMin_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementRss_routeRoute.min_lane_offset = elementRss_routeRouteMin_lane_offset;
  ::ad::map::route::RouteLaneOffset elementRss_routeRouteMax_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
  elementRss_routeRoute.max_lane_offset = elementRss_routeRouteMax_lane_offset;
  ::ad::map::route::RouteCreationMode elementRss_routeRouteRoute_creation_mode(
    ::ad::map::route::RouteCreationMode::Undefined);
  elementRss_routeRoute.route_creation_mode = elementRss_routeRouteRoute_creation_mode;
  elementRss_route.route = elementRss_routeRoute;
  ::ad::physics::Probability elementRss_routeLikelihood(0.);
  elementRss_route.likelihood = elementRss_routeLikelihood;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute elementRss_routeVehicle_dynamics_on_route;
  std::chrono::system_clock::time_point elementRss_routeVehicle_dynamics_on_routeLast_update{std::chrono::hours(0)};
  elementRss_routeVehicle_dynamics_on_route.last_update = elementRss_routeVehicle_dynamics_on_routeLast_update;
  ::ad::physics::Acceleration elementRss_routeVehicle_dynamics_on_routeRoute_accel_lon(-1e2);
  elementRss_routeVehicle_dynamics_on_route.route_accel_lon = elementRss_routeVehicle_dynamics_on_routeRoute_accel_lon;
  ::ad::physics::Acceleration elementRss_routeVehicle_dynamics_on_routeRoute_accel_lat(-1e2);
  elementRss_routeVehicle_dynamics_on_route.route_accel_lat = elementRss_routeVehicle_dynamics_on_routeRoute_accel_lat;
  ::ad::physics::Acceleration elementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon(-1e2);
  elementRss_routeVehicle_dynamics_on_route.avg_route_accel_lon
    = elementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon;
  ::ad::physics::Acceleration elementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat(-1e2);
  elementRss_routeVehicle_dynamics_on_route.avg_route_accel_lat
    = elementRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat;
  elementRss_route.vehicle_dynamics_on_route = elementRss_routeVehicle_dynamics_on_route;
  ::ad::rss::map::RssRouteId elementRss_routeParent_route_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
  elementRss_route.parent_route_id = elementRss_routeParent_route_id;
  ::ad::physics::Distance elementRss_routeProgress_on_route(-1e9);
  elementRss_route.progress_on_route = elementRss_routeProgress_on_route;
  ::ad::rss::map::RssObjectDataOnRoute elementRss_routeObject_data_on_route;
  ::ad::map::point::ENUHeading elementRss_routeObject_data_on_routeRoute_heading(-3.141592655);
  elementRss_routeObject_data_on_route.route_heading = elementRss_routeObject_data_on_routeRoute_heading;
  ::ad::physics::Distance elementRss_routeObject_data_on_routeRoute_radius(-1e9);
  elementRss_routeObject_data_on_route.route_radius = elementRss_routeObject_data_on_routeRoute_radius;
  ::ad::physics::Angle elementRss_routeObject_data_on_routeRoute_heading_delta(-6.283185308);
  elementRss_routeObject_data_on_route.route_heading_delta = elementRss_routeObject_data_on_routeRoute_heading_delta;
  ::ad::physics::Speed elementRss_routeObject_data_on_routeRoute_speed_lat(-100.);
  elementRss_routeObject_data_on_route.route_speed_lat = elementRss_routeObject_data_on_routeRoute_speed_lat;
  ::ad::physics::Speed elementRss_routeObject_data_on_routeRoute_speed_lon(-100.);
  elementRss_routeObject_data_on_route.route_speed_lon = elementRss_routeObject_data_on_routeRoute_speed_lon;
  bool elementRss_routeObject_data_on_routeObject_center_within_route{true};
  elementRss_routeObject_data_on_route.object_center_within_route
    = elementRss_routeObject_data_on_routeObject_center_within_route;
  bool elementRss_routeObject_data_on_routeObject_within_route{true};
  elementRss_routeObject_data_on_route.object_within_route = elementRss_routeObject_data_on_routeObject_within_route;
  ::ad::map::point::ENUPoint elementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX(-1e8);
  elementRss_routeObject_data_on_routeObject_center_position_projected_on_route.x
    = elementRss_routeObject_data_on_routeObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY(-1e8);
  elementRss_routeObject_data_on_routeObject_center_position_projected_on_route.y
    = elementRss_routeObject_data_on_routeObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ(-1e8);
  elementRss_routeObject_data_on_routeObject_center_position_projected_on_route.z
    = elementRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ;
  elementRss_routeObject_data_on_route.object_center_position_projected_on_route
    = elementRss_routeObject_data_on_routeObject_center_position_projected_on_route;
  bool elementRss_routeObject_data_on_routeIs_valid{true};
  elementRss_routeObject_data_on_route.is_valid = elementRss_routeObject_data_on_routeIs_valid;
  ::ad::physics::Distance elementRss_routeObject_data_on_routeObject_center_distance_to_route(-1e9);
  elementRss_routeObject_data_on_route.object_center_distance_to_route
    = elementRss_routeObject_data_on_routeObject_center_distance_to_route;
  ::ad::map::point::ENUPoint
    elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
  elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
  elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
  elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  elementRss_routeObject_data_on_route.object_center_position_projected_on_lane_in_nominal_route_direction
    = elementRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance elementRss_routeObject_data_on_routeObject_center_distance_along_route(-1e9);
  elementRss_routeObject_data_on_route.object_center_distance_along_route
    = elementRss_routeObject_data_on_routeObject_center_distance_along_route;
  ::ad::map::point::ENUPoint
    elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
  elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
  elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
  elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.z
    = elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
  elementRss_routeObject_data_on_route.nominal_center_position_of_lane_in_nominal_route_direction
    = elementRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint elementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_front_leftX(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_front_left.x
    = elementRss_routeObject_data_on_routeObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_front_leftY(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_front_left.y
    = elementRss_routeObject_data_on_routeObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_front_leftZ(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_front_left.z
    = elementRss_routeObject_data_on_routeObject_route_section_front_leftZ;
  elementRss_routeObject_data_on_route.object_route_section_front_left
    = elementRss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUPoint elementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_front_rightX(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_front_right.x
    = elementRss_routeObject_data_on_routeObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_front_rightY(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_front_right.y
    = elementRss_routeObject_data_on_routeObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_front_rightZ(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_front_right.z
    = elementRss_routeObject_data_on_routeObject_route_section_front_rightZ;
  elementRss_routeObject_data_on_route.object_route_section_front_right
    = elementRss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUPoint elementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_back_leftX(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_back_left.x
    = elementRss_routeObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_back_leftY(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_back_left.y
    = elementRss_routeObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_back_leftZ(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_back_left.z
    = elementRss_routeObject_data_on_routeObject_route_section_back_leftZ;
  elementRss_routeObject_data_on_route.object_route_section_back_left
    = elementRss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUPoint elementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_back_rightX(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_back_right.x
    = elementRss_routeObject_data_on_routeObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_back_rightY(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_back_right.y
    = elementRss_routeObject_data_on_routeObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_route_section_back_rightZ(-1e8);
  elementRss_routeObject_data_on_routeObject_route_section_back_right.z
    = elementRss_routeObject_data_on_routeObject_route_section_back_rightZ;
  elementRss_routeObject_data_on_route.object_route_section_back_right
    = elementRss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint elementRss_routeObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_turning_centerX(-1e8);
  elementRss_routeObject_data_on_routeObject_turning_center.x
    = elementRss_routeObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_turning_centerY(-1e8);
  elementRss_routeObject_data_on_routeObject_turning_center.y
    = elementRss_routeObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate elementRss_routeObject_data_on_routeObject_turning_centerZ(-1e8);
  elementRss_routeObject_data_on_routeObject_turning_center.z
    = elementRss_routeObject_data_on_routeObject_turning_centerZ;
  elementRss_routeObject_data_on_route.object_turning_center
    = elementRss_routeObject_data_on_routeObject_turning_center;
  elementRss_route.object_data_on_route = elementRss_routeObject_data_on_route;
  element.rss_route = elementRss_route;
  bool elementIs_valid{true};
  element.is_valid = elementIs_valid;
  ::ad::rss::world::WorldModel elementWorld_model;
  ::ad::rss::world::TimeIndex elementWorld_modelTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  elementWorld_modelTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  elementWorld_model.time_index = elementWorld_modelTime_index;
  ::ad::rss::world::RssDynamics elementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lon
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lat
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWorld_modelDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementWorld_modelDefault_ego_vehicle_rss_dynamics.response_time
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementWorld_modelDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
    -6.283185308);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
    -1e9);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementWorld_modelDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementWorld_modelDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = elementWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  elementWorld_model.default_ego_vehicle_rss_dynamics = elementWorld_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::ConstellationVector elementWorld_modelConstellations;
  ::ad::rss::world::Constellation elementWorld_modelConstellationsElement;
  ::ad::rss::world::ConstellationType elementWorld_modelConstellationsElementConstellation_type(
    ::ad::rss::world::ConstellationType::NotRelevant);
  elementWorld_modelConstellationsElement.constellation_type
    = elementWorld_modelConstellationsElementConstellation_type;
  ::ad::rss::world::Object elementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::ObjectId elementWorld_modelConstellationsElementEgo_vehicleObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementWorld_modelConstellationsElementEgo_vehicle.object_id
    = elementWorld_modelConstellationsElementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType elementWorld_modelConstellationsElementEgo_vehicleObject_type(
    ::ad::rss::world::ObjectType::Invalid);
  elementWorld_modelConstellationsElementEgo_vehicle.object_type
    = elementWorld_modelConstellationsElementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector elementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.segment_id
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue
    elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(0.);
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue
    elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(0.);
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum;
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum;
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lon_range
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue
    elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(0.);
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue
    elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(0.);
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum;
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum;
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lat_range
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  elementWorld_modelConstellationsElementEgo_vehicleOccupied_regions.resize(
    1, elementWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement);
  elementWorld_modelConstellationsElementEgo_vehicle.occupied_regions
    = elementWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity elementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::physics::Speed elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min(-100.);
  elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max(-100.);
  elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min(-100.);
  elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max(-100.);
  elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = elementWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max;
  elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min;
  elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min;
  elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max;
  elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = elementWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max;
  elementWorld_modelConstellationsElementEgo_vehicle.velocity
    = elementWorld_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState elementWorld_modelConstellationsElementEgo_vehicleState;
  ::ad::physics::Angle elementWorld_modelConstellationsElementEgo_vehicleStateYaw(-6.283185308);
  elementWorld_modelConstellationsElementEgo_vehicleState.yaw
    = elementWorld_modelConstellationsElementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D elementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::Distance elementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicleStateDimension.length
    = elementWorld_modelConstellationsElementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance elementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicleStateDimension.width
    = elementWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth;
  elementWorld_modelConstellationsElementEgo_vehicleState.dimension
    = elementWorld_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity elementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate(-100.);
  elementWorld_modelConstellationsElementEgo_vehicleState.yaw_rate
    = elementWorld_modelConstellationsElementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D elementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance elementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.x
    = elementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance elementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicleStateCenter_point.y
    = elementWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY;
  elementWorld_modelConstellationsElementEgo_vehicleState.center_point
    = elementWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum(-100.);
  elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum(-100.);
  elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum;
  elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum;
  elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum;
  elementWorld_modelConstellationsElementEgo_vehicleState.speed_range
    = elementWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle elementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle(-6.283185308);
  elementWorld_modelConstellationsElementEgo_vehicleState.steering_angle
    = elementWorld_modelConstellationsElementEgo_vehicleStateSteering_angle;
  elementWorld_modelConstellationsElementEgo_vehicle.state = elementWorld_modelConstellationsElementEgo_vehicleState;
  elementWorld_modelConstellationsElement.ego_vehicle = elementWorld_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::RssDynamics elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
    -1e2);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lon
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lat
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(
    -1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time(0.);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.response_time
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.max_speed_on_acceleration
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  elementWorld_modelConstellationsElement.ego_vehicle_rss_dynamics
    = elementWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object elementWorld_modelConstellationsElementObject;
  ::ad::rss::world::ObjectId elementWorld_modelConstellationsElementObjectObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementWorld_modelConstellationsElementObject.object_id = elementWorld_modelConstellationsElementObjectObject_id;
  ::ad::rss::world::ObjectType elementWorld_modelConstellationsElementObjectObject_type(
    ::ad::rss::world::ObjectType::Invalid);
  elementWorld_modelConstellationsElementObject.object_type = elementWorld_modelConstellationsElementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector elementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion elementWorld_modelConstellationsElementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId elementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementWorld_modelConstellationsElementObjectOccupied_regionsElement.segment_id
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum(
    0.);
  elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum(
    0.);
  elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
  elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum;
  elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum;
  elementWorld_modelConstellationsElementObjectOccupied_regionsElement.lon_range
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum(
    0.);
  elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum(
    0.);
  elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
  elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum;
  elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum;
  elementWorld_modelConstellationsElementObjectOccupied_regionsElement.lat_range
    = elementWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  elementWorld_modelConstellationsElementObjectOccupied_regions.resize(
    1, elementWorld_modelConstellationsElementObjectOccupied_regionsElement);
  elementWorld_modelConstellationsElementObject.occupied_regions
    = elementWorld_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::Velocity elementWorld_modelConstellationsElementObjectVelocity;
  ::ad::physics::Speed elementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min(-100.);
  elementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = elementWorld_modelConstellationsElementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed elementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max(-100.);
  elementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = elementWorld_modelConstellationsElementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed elementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min(-100.);
  elementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = elementWorld_modelConstellationsElementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed elementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max(-100.);
  elementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = elementWorld_modelConstellationsElementObjectVelocitySpeed_lat_max;
  elementWorld_modelConstellationsElementObjectVelocity.speed_lon_max
    = elementWorld_modelConstellationsElementObjectVelocity.speed_lon_min;
  elementWorld_modelConstellationsElementObjectVelocity.speed_lat_max
    = elementWorld_modelConstellationsElementObjectVelocity.speed_lat_min;
  elementWorld_modelConstellationsElementObjectVelocity.speed_lon_min
    = elementWorld_modelConstellationsElementObjectVelocity.speed_lon_max;
  elementWorld_modelConstellationsElementObjectVelocity.speed_lat_min
    = elementWorld_modelConstellationsElementObjectVelocity.speed_lat_max;
  elementWorld_modelConstellationsElementObject.velocity = elementWorld_modelConstellationsElementObjectVelocity;
  ::ad::rss::world::ObjectState elementWorld_modelConstellationsElementObjectState;
  ::ad::physics::Angle elementWorld_modelConstellationsElementObjectStateYaw(-6.283185308);
  elementWorld_modelConstellationsElementObjectState.yaw = elementWorld_modelConstellationsElementObjectStateYaw;
  ::ad::physics::Dimension2D elementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::Distance elementWorld_modelConstellationsElementObjectStateDimensionLength(-1e9);
  elementWorld_modelConstellationsElementObjectStateDimension.length
    = elementWorld_modelConstellationsElementObjectStateDimensionLength;
  ::ad::physics::Distance elementWorld_modelConstellationsElementObjectStateDimensionWidth(-1e9);
  elementWorld_modelConstellationsElementObjectStateDimension.width
    = elementWorld_modelConstellationsElementObjectStateDimensionWidth;
  elementWorld_modelConstellationsElementObjectState.dimension
    = elementWorld_modelConstellationsElementObjectStateDimension;
  ::ad::physics::AngularVelocity elementWorld_modelConstellationsElementObjectStateYaw_rate(-100.);
  elementWorld_modelConstellationsElementObjectState.yaw_rate
    = elementWorld_modelConstellationsElementObjectStateYaw_rate;
  ::ad::physics::Distance2D elementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::Distance elementWorld_modelConstellationsElementObjectStateCenter_pointX(-1e9);
  elementWorld_modelConstellationsElementObjectStateCenter_point.x
    = elementWorld_modelConstellationsElementObjectStateCenter_pointX;
  ::ad::physics::Distance elementWorld_modelConstellationsElementObjectStateCenter_pointY(-1e9);
  elementWorld_modelConstellationsElementObjectStateCenter_point.y
    = elementWorld_modelConstellationsElementObjectStateCenter_pointY;
  elementWorld_modelConstellationsElementObjectState.center_point
    = elementWorld_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::SpeedRange elementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Speed elementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum(-100.);
  elementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = elementWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed elementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum(-100.);
  elementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = elementWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum;
  elementWorld_modelConstellationsElementObjectStateSpeed_range.maximum
    = elementWorld_modelConstellationsElementObjectStateSpeed_range.minimum;
  elementWorld_modelConstellationsElementObjectStateSpeed_range.minimum
    = elementWorld_modelConstellationsElementObjectStateSpeed_range.maximum;
  elementWorld_modelConstellationsElementObjectState.speed_range
    = elementWorld_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Angle elementWorld_modelConstellationsElementObjectStateSteering_angle(-6.283185308);
  elementWorld_modelConstellationsElementObjectState.steering_angle
    = elementWorld_modelConstellationsElementObjectStateSteering_angle;
  elementWorld_modelConstellationsElementObject.state = elementWorld_modelConstellationsElementObjectState;
  elementWorld_modelConstellationsElement.object = elementWorld_modelConstellationsElementObject;
  ::ad::rss::world::RssDynamics elementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.accel_max
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(
    -1e2);
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  elementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lon
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.accel_max
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.brake_min
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min;
  elementWorld_modelConstellationsElementObject_rss_dynamics.alpha_lat
    = elementWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementObject_rss_dynamics.lateral_fluctuation_margin
    = elementWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time(0.);
  elementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementWorld_modelConstellationsElementObject_rss_dynamics.response_time
    = elementWorld_modelConstellationsElementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementWorld_modelConstellationsElementObject_rss_dynamics.max_speed_on_acceleration
    = elementWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementWorld_modelConstellationsElementObject_rss_dynamics.unstructured_settings
    = elementWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(
    -1e9);
  elementWorld_modelConstellationsElementObject_rss_dynamics.min_longitudinal_safety_distance
    = elementWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
  elementWorld_modelConstellationsElement.object_rss_dynamics
    = elementWorld_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::RoadArea elementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadSegment elementWorld_modelConstellationsElementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType elementWorld_modelConstellationsElementIntersecting_roadElementType(
    ::ad::rss::world::RoadSegmentType::Normal);
  elementWorld_modelConstellationsElementIntersecting_roadElement.type
    = elementWorld_modelConstellationsElementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector elementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.id
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.driving_direction
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(-1e9);
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(-1e9);
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum;
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum;
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.length
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(-1e9);
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(-1e9);
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum;
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum;
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.width
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  elementWorld_modelConstellationsElementIntersecting_roadElementLane_segments.resize(
    1, elementWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement);
  elementWorld_modelConstellationsElementIntersecting_roadElement.lane_segments
    = elementWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(-1e9);
  elementWorld_modelConstellationsElementIntersecting_roadElement.minimum_length_after_intersecting_area
    = elementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(-1e9);
  elementWorld_modelConstellationsElementIntersecting_roadElement.minimum_length_before_intersecting_area
    = elementWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
  elementWorld_modelConstellationsElementIntersecting_road.resize(
    1, elementWorld_modelConstellationsElementIntersecting_roadElement);
  elementWorld_modelConstellationsElement.intersecting_road = elementWorld_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadArea elementWorld_modelConstellationsElementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment elementWorld_modelConstellationsElementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType elementWorld_modelConstellationsElementEgo_vehicle_roadElementType(
    ::ad::rss::world::RoadSegmentType::Normal);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElement.type
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.driving_direction
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.length
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments.resize(
    1, elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElement.lane_segments
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElement.minimum_length_after_intersecting_area
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    elementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(-1e9);
  elementWorld_modelConstellationsElementEgo_vehicle_roadElement.minimum_length_before_intersecting_area
    = elementWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  elementWorld_modelConstellationsElementEgo_vehicle_road.resize(
    1, elementWorld_modelConstellationsElementEgo_vehicle_roadElement);
  elementWorld_modelConstellationsElement.ego_vehicle_road = elementWorld_modelConstellationsElementEgo_vehicle_road;
  elementWorld_modelConstellations.resize(1, elementWorld_modelConstellationsElement);
  elementWorld_model.constellations = elementWorld_modelConstellations;
  element.world_model = elementWorld_model;
  ::ad::rss::core::RssSituationSnapshot elementRss_situation_snapshot;
  ::ad::rss::world::TimeIndex elementRss_situation_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  elementRss_situation_snapshotTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  elementRss_situation_snapshot.time_index = elementRss_situation_snapshotTime_index;
  ::ad::rss::world::RssDynamics elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
    -1e2);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
    -1e9);
  elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  elementRss_situation_snapshot.default_ego_vehicle_rss_dynamics
    = elementRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::core::RelativeConstellationVector elementRss_situation_snapshotConstellations;
  ::ad::rss::core::RelativeConstellation elementRss_situation_snapshotConstellationsElement;
  ::ad::rss::world::ObjectId elementRss_situation_snapshotConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementRss_situation_snapshotConstellationsElement.ego_id = elementRss_situation_snapshotConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId elementRss_situation_snapshotConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementRss_situation_snapshotConstellationsElement.object_id
    = elementRss_situation_snapshotConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId elementRss_situation_snapshotConstellationsElementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  elementRss_situation_snapshotConstellationsElement.constellation_id
    = elementRss_situation_snapshotConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType elementRss_situation_snapshotConstellationsElementConstellation_type(
    ::ad::rss::world::ConstellationType::NotRelevant);
  elementRss_situation_snapshotConstellationsElement.constellation_type
    = elementRss_situation_snapshotConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState elementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType elementRss_situation_snapshotConstellationsElementEgo_stateObject_type(
    ::ad::rss::world::ObjectType::Invalid);
  elementRss_situation_snapshotConstellationsElementEgo_state.object_type
    = elementRss_situation_snapshotConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics elementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(
    -1e2);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(
    -1e2);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(
    -1e2);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max;
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct;
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lon
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(
    -1e2);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(
    -1e2);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lat
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(
    -1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamics.lateral_fluctuation_margin
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time(0.);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamics.response_time
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(
    -100.);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamics.max_speed_on_acceleration
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamics.unstructured_settings
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateDynamics.min_longitudinal_safety_distance
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  elementRss_situation_snapshotConstellationsElementEgo_state.dynamics
    = elementRss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw(
    -6.283185308);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension.length
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension.width
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.dimension
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(-100.);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw_rate
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point.x
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point.y
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.center_point
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum;
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum;
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.speed_range
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.steering_angle
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  elementRss_situation_snapshotConstellationsElementEgo_state.unstructured_object_state
    = elementRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min;
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min;
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max;
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max;
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.velocity
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority{true};
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.has_priority
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{true};
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.is_in_correct_lane
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection;
  elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection;
  elementRss_situation_snapshotConstellationsElementEgo_state.structured_object_state
    = elementRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  elementRss_situation_snapshotConstellationsElement.ego_state
    = elementRss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState elementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::world::ObjectType elementRss_situation_snapshotConstellationsElementOther_stateObject_type(
    ::ad::rss::world::ObjectType::Invalid);
  elementRss_situation_snapshotConstellationsElementOther_state.object_type
    = elementRss_situation_snapshotConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics elementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(
    -1e2);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(
    -1e2);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(
    -1e2);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max;
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct;
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  elementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lon
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max(
    -1e2);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min(
    -1e2);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  elementRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lat
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementOther_stateDynamics.lateral_fluctuation_margin
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time(0.);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementOther_stateDynamics.response_time
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed elementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(
    -100.);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamics.max_speed_on_acceleration
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
      -1e2);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementRss_situation_snapshotConstellationsElementOther_stateDynamics.unstructured_settings
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateDynamics.min_longitudinal_safety_distance
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  elementRss_situation_snapshotConstellationsElementOther_state.dynamics
    = elementRss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw(
    -6.283185308);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength(-1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension.length
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension.width
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.dimension
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate(-100.);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw_rate
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point.x
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point.y
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.center_point
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum;
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum;
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.speed_range
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle
    elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.steering_angle
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  elementRss_situation_snapshotConstellationsElementOther_state.unstructured_object_state
    = elementRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState
    elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity
    elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min;
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min;
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max;
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max;
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.velocity
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  bool elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority{true};
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.has_priority
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{true};
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.is_in_correct_lane
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
      -1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
      -1e9);
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_enter_intersection;
  elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
        .distance_to_leave_intersection;
  elementRss_situation_snapshotConstellationsElementOther_state.structured_object_state
    = elementRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  elementRss_situation_snapshotConstellationsElement.other_state
    = elementRss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition elementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition
    elementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position(
      ::ad::rss::core::LongitudinalRelativePosition::InFront);
  elementRss_situation_snapshotConstellationsElementRelative_position.longitudinal_position
    = elementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance elementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance(
    -1e9);
  elementRss_situation_snapshotConstellationsElementRelative_position.longitudinal_distance
    = elementRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition
    elementRss_situation_snapshotConstellationsElementRelative_positionLateral_position(
      ::ad::rss::core::LateralRelativePosition::AtLeft);
  elementRss_situation_snapshotConstellationsElementRelative_position.lateral_position
    = elementRss_situation_snapshotConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance elementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance(-1e9);
  elementRss_situation_snapshotConstellationsElementRelative_position.lateral_distance
    = elementRss_situation_snapshotConstellationsElementRelative_positionLateral_distance;
  elementRss_situation_snapshotConstellationsElement.relative_position
    = elementRss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector elementRss_situation_snapshotConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex elementRss_situation_snapshotConstellationsElementWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  elementRss_situation_snapshotConstellationsElementWorld_model_indices.resize(
    1, elementRss_situation_snapshotConstellationsElementWorld_model_indicesElement);
  elementRss_situation_snapshotConstellationsElement.world_model_indices
    = elementRss_situation_snapshotConstellationsElementWorld_model_indices;
  elementRss_situation_snapshotConstellations.resize(1, elementRss_situation_snapshotConstellationsElement);
  elementRss_situation_snapshot.constellations = elementRss_situation_snapshotConstellations;
  element.rss_situation_snapshot = elementRss_situation_snapshot;
  ::ad::rss::state::RssStateSnapshot elementRss_state_snapshot;
  ::ad::rss::world::TimeIndex elementRss_state_snapshotTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  elementRss_state_snapshotTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  elementRss_state_snapshot.time_index = elementRss_state_snapshotTime_index;
  ::ad::rss::world::RssDynamics elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      0.);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
    -1e9);
  elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  elementRss_state_snapshot.default_ego_vehicle_rss_dynamics
    = elementRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::state::RssStateVector elementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::RssState elementRss_state_snapshotIndividual_responsesElement;
  ::ad::rss::world::ObjectId elementRss_state_snapshotIndividual_responsesElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementRss_state_snapshotIndividual_responsesElement.ego_id
    = elementRss_state_snapshotIndividual_responsesElementEgo_id;
  ::ad::rss::world::ObjectId elementRss_state_snapshotIndividual_responsesElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementRss_state_snapshotIndividual_responsesElement.object_id
    = elementRss_state_snapshotIndividual_responsesElementObject_id;
  ::ad::rss::core::RelativeConstellationId elementRss_state_snapshotIndividual_responsesElementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  elementRss_state_snapshotIndividual_responsesElement.constellation_id
    = elementRss_state_snapshotIndividual_responsesElementConstellation_id;
  ::ad::rss::state::LongitudinalRssState elementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  bool elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe{true};
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_state.is_safe
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_state.response
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max(
    -1e2);
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.accel_max
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max(
    -1e2);
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min(
    -1e2);
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max;
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct;
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_state.alpha_lon
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation
    elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.safe_distance
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.current_distance
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.evaluator
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
  elementRss_state_snapshotIndividual_responsesElementLongitudinal_state.rss_state_information
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  elementRss_state_snapshotIndividual_responsesElement.longitudinal_state
    = elementRss_state_snapshotIndividual_responsesElementLongitudinal_state;
  ::ad::rss::state::LateralRssState elementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  bool elementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe{true};
  elementRss_state_snapshotIndividual_responsesElementLateral_state_right.is_safe
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse elementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse(
    ::ad::rss::state::LateralResponse::None);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_right.response
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max(
    -1e2);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.accel_max
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min(
    -1e2);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.brake_min
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min;
  elementRss_state_snapshotIndividual_responsesElementLateral_state_right.alpha_lat
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation
    elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance(-1e9);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.safe_distance
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.current_distance
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.evaluator
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator;
  elementRss_state_snapshotIndividual_responsesElementLateral_state_right.rss_state_information
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  elementRss_state_snapshotIndividual_responsesElement.lateral_state_right
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_right;
  ::ad::rss::state::LateralRssState elementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  bool elementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe{true};
  elementRss_state_snapshotIndividual_responsesElementLateral_state_left.is_safe
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse elementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse(
    ::ad::rss::state::LateralResponse::None);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_left.response
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max(
    -1e2);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.accel_max
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min(
    -1e2);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.brake_min
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min;
  elementRss_state_snapshotIndividual_responsesElementLateral_state_left.alpha_lat
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation
    elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance(-1e9);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.safe_distance
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.current_distance
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::None);
  elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.evaluator
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator;
  elementRss_state_snapshotIndividual_responsesElementLateral_state_left.rss_state_information
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  elementRss_state_snapshotIndividual_responsesElement.lateral_state_left
    = elementRss_state_snapshotIndividual_responsesElementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  bool elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe{true};
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.is_safe
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.response
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(
      -6.283185308);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range.begin
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range.end
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.heading_range
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
      -1e9);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .x
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
      -1e9);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .y
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set
    .resize(
      1,
      elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .brake_trajectory_set
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
      -1e9);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .x
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
      -1e9);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .y
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set
    .resize(
      1,
      elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .continue_forward_trajectory_set
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .considered_drive_away_steering_angle
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.rss_state_information
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.accel_max
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(
      -1e2);
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
  elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.alpha_lon
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  elementRss_state_snapshotIndividual_responsesElement.unstructured_constellation_state
    = elementRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType elementRss_state_snapshotIndividual_responsesElementConstellation_type(
    ::ad::rss::world::ConstellationType::NotRelevant);
  elementRss_state_snapshotIndividual_responsesElement.constellation_type
    = elementRss_state_snapshotIndividual_responsesElementConstellation_type;
  elementRss_state_snapshotIndividual_responses.resize(1, elementRss_state_snapshotIndividual_responsesElement);
  elementRss_state_snapshot.individual_responses = elementRss_state_snapshotIndividual_responses;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    elementRss_state_snapshotUnstructured_constellation_ego_information;
  ::ad::physics::Distance2DList elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX(-1e9);
  elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement.x
    = elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY(-1e9);
  elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement.y
    = elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY;
  elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set.resize(
    1, elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement);
  elementRss_state_snapshotUnstructured_constellation_ego_information.brake_trajectory_set
    = elementRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(-1e9);
  elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement.x
    = elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(-1e9);
  elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement.y
    = elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
  elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set.resize(
    1, elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
  elementRss_state_snapshotUnstructured_constellation_ego_information.continue_forward_trajectory_set
    = elementRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    elementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle(
      -6.283185308);
  elementRss_state_snapshotUnstructured_constellation_ego_information.considered_drive_away_steering_angle
    = elementRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
  elementRss_state_snapshot.unstructured_constellation_ego_information
    = elementRss_state_snapshotUnstructured_constellation_ego_information;
  element.rss_state_snapshot = elementRss_state_snapshot;
  ::ad::rss::state::ProperResponse elementProper_response;
  ::ad::rss::world::TimeIndex elementProper_responseTime_index(
    std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  elementProper_responseTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  elementProper_response.time_index = elementProper_responseTime_index;
  bool elementProper_responseIs_safe{true};
  elementProper_response.is_safe = elementProper_responseIs_safe;
  ::ad::rss::world::ObjectIdVector elementProper_responseDangerous_objects;
  ::ad::rss::world::ObjectId elementProper_responseDangerous_objectsElement(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementProper_responseDangerous_objects.resize(1, elementProper_responseDangerous_objectsElement);
  elementProper_response.dangerous_objects = elementProper_responseDangerous_objects;
  ::ad::rss::state::LongitudinalResponse elementProper_responseLongitudinal_response(
    ::ad::rss::state::LongitudinalResponse::None);
  elementProper_response.longitudinal_response = elementProper_responseLongitudinal_response;
  ::ad::rss::state::LateralResponse elementProper_responseLateral_response_right(
    ::ad::rss::state::LateralResponse::None);
  elementProper_response.lateral_response_right = elementProper_responseLateral_response_right;
  ::ad::rss::state::LateralResponse elementProper_responseLateral_response_left(
    ::ad::rss::state::LateralResponse::None);
  elementProper_response.lateral_response_left = elementProper_responseLateral_response_left;
  ::ad::geometry::HeadingRangeVector elementProper_responseHeading_ranges;
  ::ad::geometry::HeadingRange elementProper_responseHeading_rangesElement;
  ::ad::physics::Angle elementProper_responseHeading_rangesElementBegin(-6.283185308);
  elementProper_responseHeading_rangesElement.begin = elementProper_responseHeading_rangesElementBegin;
  ::ad::physics::Angle elementProper_responseHeading_rangesElementEnd(-6.283185308);
  elementProper_responseHeading_rangesElement.end = elementProper_responseHeading_rangesElementEnd;
  elementProper_responseHeading_ranges.resize(1, elementProper_responseHeading_rangesElement);
  elementProper_response.heading_ranges = elementProper_responseHeading_ranges;
  ::ad::rss::state::AccelerationRestriction elementProper_responseAcceleration_restrictions;
  ::ad::physics::AccelerationRange elementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::Acceleration elementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum(-1e2);
  elementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = elementProper_responseAcceleration_restrictionsLateral_left_rangeMinimum;
  ::ad::physics::Acceleration elementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum(-1e2);
  elementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = elementProper_responseAcceleration_restrictionsLateral_left_rangeMaximum;
  elementProper_responseAcceleration_restrictionsLateral_left_range.maximum
    = elementProper_responseAcceleration_restrictionsLateral_left_range.minimum;
  elementProper_responseAcceleration_restrictionsLateral_left_range.minimum
    = elementProper_responseAcceleration_restrictionsLateral_left_range.maximum;
  elementProper_responseAcceleration_restrictions.lateral_left_range
    = elementProper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::AccelerationRange elementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::Acceleration elementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum(-1e2);
  elementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = elementProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration elementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum(-1e2);
  elementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = elementProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum;
  elementProper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = elementProper_responseAcceleration_restrictionsLongitudinal_range.minimum;
  elementProper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = elementProper_responseAcceleration_restrictionsLongitudinal_range.maximum;
  elementProper_responseAcceleration_restrictions.longitudinal_range
    = elementProper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::AccelerationRange elementProper_responseAcceleration_restrictionsLateral_right_range;
  ::ad::physics::Acceleration elementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum(-1e2);
  elementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = elementProper_responseAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration elementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
  elementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = elementProper_responseAcceleration_restrictionsLateral_right_rangeMaximum;
  elementProper_responseAcceleration_restrictionsLateral_right_range.maximum
    = elementProper_responseAcceleration_restrictionsLateral_right_range.minimum;
  elementProper_responseAcceleration_restrictionsLateral_right_range.minimum
    = elementProper_responseAcceleration_restrictionsLateral_right_range.maximum;
  elementProper_responseAcceleration_restrictions.lateral_right_range
    = elementProper_responseAcceleration_restrictionsLateral_right_range;
  elementProper_response.acceleration_restrictions = elementProper_responseAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse elementProper_responseUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  elementProper_response.unstructured_constellation_response
    = elementProper_responseUnstructured_constellation_response;
  element.proper_response = elementProper_response;
  ::ad::rss::map::RssRouteCheckResultAnalysis elementResult_analysis;
  bool elementResult_analysisDangerous_state{true};
  elementResult_analysis.dangerous_state = elementResult_analysisDangerous_state;
  bool elementResult_analysisDangerous_vehicle{true};
  elementResult_analysis.dangerous_vehicle = elementResult_analysisDangerous_vehicle;
  bool elementResult_analysisDangerous_opposite_state{true};
  elementResult_analysis.dangerous_opposite_state = elementResult_analysisDangerous_opposite_state;
  bool elementResult_analysisVehicle_crossing_road_boundaries{true};
  elementResult_analysis.vehicle_crossing_road_boundaries = elementResult_analysisVehicle_crossing_road_boundaries;
  element.result_analysis = elementResult_analysis;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssRouteCheckResultListValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::map::RssRouteCheckResultList value;
  ::ad::rss::map::RssRouteCheckResult element;
  ::ad::rss::map::RssRoute elementRss_route;
  ::ad::map::route::FullRoute elementRss_routeRoute;
  ::ad::map::route::RouteCreationMode elementRss_routeRouteRoute_creation_mode(
    static_cast<::ad::map::route::RouteCreationMode>(-1));
  elementRss_routeRoute.route_creation_mode = elementRss_routeRouteRoute_creation_mode;
  elementRss_route.route = elementRss_routeRoute;
  element.rss_route = elementRss_route;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
