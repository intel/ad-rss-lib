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
#include "ad/rss/map/RssRouteCheckResult.hpp"

class RssRouteCheckResultTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::map::RssRouteCheckResult value;
    ::ad::rss::map::RssRoute valueRss_route;
    ::ad::rss::map::RssRouteId valueRss_routeRoute_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
    valueRss_route.route_id = valueRss_routeRoute_id;
    ::ad::map::route::FullRoute valueRss_routeRoute;
    ::ad::map::route::RoadSegmentList valueRss_routeRouteRoad_segments;
    ::ad::map::route::RoadSegment valueRss_routeRouteRoad_segmentsElement;
    ::ad::map::route::LaneSegmentList valueRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
    ::ad::map::route::LaneSegment valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement;
    ::ad::map::lane::LaneId valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(1);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
    ::ad::map::lane::LaneId valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(1);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
    ::ad::map::lane::LaneIdList valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
    ::ad::map::lane::LaneId valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(1);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
      1, valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
    ::ad::map::lane::LaneIdList valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
    ::ad::map::lane::LaneId valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(1);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
      1, valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
    ::ad::map::route::LaneInterval valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
    ::ad::map::lane::LaneId valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(1);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.lane_id
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
    ::ad::physics::ParametricValue
      valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(0.);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
    ::ad::physics::ParametricValue valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(
      0.);
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
    bool valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{true};
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.wrong_way
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
    ::ad::map::route::RouteLaneOffset
      valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
        std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
    valueRss_routeRouteRoad_segmentsElementDrivable_lane_segments.resize(
      1, valueRss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement);
    valueRss_routeRouteRoad_segmentsElement.drivable_lane_segments
      = valueRss_routeRouteRoad_segmentsElementDrivable_lane_segments;
    ::ad::map::route::SegmentCounter valueRss_routeRouteRoad_segmentsElementSegment_count_from_destination(
      std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
    valueRss_routeRouteRoad_segmentsElement.segment_count_from_destination
      = valueRss_routeRouteRoad_segmentsElementSegment_count_from_destination;
    ::ad::map::point::BoundingSphere valueRss_routeRouteRoad_segmentsElementBounding_sphere;
    ::ad::map::point::ECEFPoint valueRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
    ::ad::map::point::ECEFCoordinate valueRss_routeRouteRoad_segmentsElementBounding_sphereCenterX(-6400000);
    valueRss_routeRouteRoad_segmentsElementBounding_sphereCenter.x
      = valueRss_routeRouteRoad_segmentsElementBounding_sphereCenterX;
    ::ad::map::point::ECEFCoordinate valueRss_routeRouteRoad_segmentsElementBounding_sphereCenterY(-6400000);
    valueRss_routeRouteRoad_segmentsElementBounding_sphereCenter.y
      = valueRss_routeRouteRoad_segmentsElementBounding_sphereCenterY;
    ::ad::map::point::ECEFCoordinate valueRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ(-6400000);
    valueRss_routeRouteRoad_segmentsElementBounding_sphereCenter.z
      = valueRss_routeRouteRoad_segmentsElementBounding_sphereCenterZ;
    valueRss_routeRouteRoad_segmentsElementBounding_sphere.center
      = valueRss_routeRouteRoad_segmentsElementBounding_sphereCenter;
    ::ad::physics::Distance valueRss_routeRouteRoad_segmentsElementBounding_sphereRadius(-1e9);
    valueRss_routeRouteRoad_segmentsElementBounding_sphere.radius
      = valueRss_routeRouteRoad_segmentsElementBounding_sphereRadius;
    valueRss_routeRouteRoad_segmentsElement.bounding_sphere = valueRss_routeRouteRoad_segmentsElementBounding_sphere;
    valueRss_routeRouteRoad_segments.resize(1, valueRss_routeRouteRoad_segmentsElement);
    valueRss_routeRoute.road_segments = valueRss_routeRouteRoad_segments;
    ::ad::map::route::RoutePlanningCounter valueRss_routeRouteRoute_planning_counter(
      std::numeric_limits<::ad::map::route::RoutePlanningCounter>::lowest());
    valueRss_routeRoute.route_planning_counter = valueRss_routeRouteRoute_planning_counter;
    ::ad::map::route::SegmentCounter valueRss_routeRouteFull_route_segment_count(
      std::numeric_limits<::ad::map::route::SegmentCounter>::lowest());
    valueRss_routeRoute.full_route_segment_count = valueRss_routeRouteFull_route_segment_count;
    ::ad::map::route::RouteLaneOffset valueRss_routeRouteDestination_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
    valueRss_routeRoute.destination_lane_offset = valueRss_routeRouteDestination_lane_offset;
    ::ad::map::route::RouteLaneOffset valueRss_routeRouteMin_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
    valueRss_routeRoute.min_lane_offset = valueRss_routeRouteMin_lane_offset;
    ::ad::map::route::RouteLaneOffset valueRss_routeRouteMax_lane_offset(
      std::numeric_limits<::ad::map::route::RouteLaneOffset>::lowest());
    valueRss_routeRoute.max_lane_offset = valueRss_routeRouteMax_lane_offset;
    ::ad::map::route::RouteCreationMode valueRss_routeRouteRoute_creation_mode(
      ::ad::map::route::RouteCreationMode::Undefined);
    valueRss_routeRoute.route_creation_mode = valueRss_routeRouteRoute_creation_mode;
    valueRss_route.route = valueRss_routeRoute;
    ::ad::physics::Probability valueRss_routeLikelihood(0.);
    valueRss_route.likelihood = valueRss_routeLikelihood;
    ::ad::rss::map::RssEgoVehicleDynamicsOnRoute valueRss_routeVehicle_dynamics_on_route;
    std::chrono::system_clock::time_point valueRss_routeVehicle_dynamics_on_routeLast_update{std::chrono::hours(0)};
    valueRss_routeVehicle_dynamics_on_route.last_update = valueRss_routeVehicle_dynamics_on_routeLast_update;
    ::ad::physics::Acceleration valueRss_routeVehicle_dynamics_on_routeRoute_accel_lon(-1e2);
    valueRss_routeVehicle_dynamics_on_route.route_accel_lon = valueRss_routeVehicle_dynamics_on_routeRoute_accel_lon;
    ::ad::physics::Acceleration valueRss_routeVehicle_dynamics_on_routeRoute_accel_lat(-1e2);
    valueRss_routeVehicle_dynamics_on_route.route_accel_lat = valueRss_routeVehicle_dynamics_on_routeRoute_accel_lat;
    ::ad::physics::Acceleration valueRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon(-1e2);
    valueRss_routeVehicle_dynamics_on_route.avg_route_accel_lon
      = valueRss_routeVehicle_dynamics_on_routeAvg_route_accel_lon;
    ::ad::physics::Acceleration valueRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat(-1e2);
    valueRss_routeVehicle_dynamics_on_route.avg_route_accel_lat
      = valueRss_routeVehicle_dynamics_on_routeAvg_route_accel_lat;
    valueRss_route.vehicle_dynamics_on_route = valueRss_routeVehicle_dynamics_on_route;
    ::ad::rss::map::RssRouteId valueRss_routeParent_route_id(std::numeric_limits<::ad::rss::map::RssRouteId>::lowest());
    valueRss_route.parent_route_id = valueRss_routeParent_route_id;
    ::ad::physics::Distance valueRss_routeProgress_on_route(-1e9);
    valueRss_route.progress_on_route = valueRss_routeProgress_on_route;
    ::ad::rss::map::RssObjectDataOnRoute valueRss_routeObject_data_on_route;
    ::ad::map::point::ENUHeading valueRss_routeObject_data_on_routeRoute_heading(-3.141592655);
    valueRss_routeObject_data_on_route.route_heading = valueRss_routeObject_data_on_routeRoute_heading;
    ::ad::physics::Distance valueRss_routeObject_data_on_routeRoute_radius(-1e9);
    valueRss_routeObject_data_on_route.route_radius = valueRss_routeObject_data_on_routeRoute_radius;
    ::ad::physics::Angle valueRss_routeObject_data_on_routeRoute_heading_delta(-6.283185308);
    valueRss_routeObject_data_on_route.route_heading_delta = valueRss_routeObject_data_on_routeRoute_heading_delta;
    ::ad::physics::Speed valueRss_routeObject_data_on_routeRoute_speed_lat(-100.);
    valueRss_routeObject_data_on_route.route_speed_lat = valueRss_routeObject_data_on_routeRoute_speed_lat;
    ::ad::physics::Speed valueRss_routeObject_data_on_routeRoute_speed_lon(-100.);
    valueRss_routeObject_data_on_route.route_speed_lon = valueRss_routeObject_data_on_routeRoute_speed_lon;
    bool valueRss_routeObject_data_on_routeObject_center_within_route{true};
    valueRss_routeObject_data_on_route.object_center_within_route
      = valueRss_routeObject_data_on_routeObject_center_within_route;
    bool valueRss_routeObject_data_on_routeObject_within_route{true};
    valueRss_routeObject_data_on_route.object_within_route = valueRss_routeObject_data_on_routeObject_within_route;
    ::ad::map::point::ENUPoint valueRss_routeObject_data_on_routeObject_center_position_projected_on_route;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_center_position_projected_on_routeX(-1e8);
    valueRss_routeObject_data_on_routeObject_center_position_projected_on_route.x
      = valueRss_routeObject_data_on_routeObject_center_position_projected_on_routeX;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_center_position_projected_on_routeY(-1e8);
    valueRss_routeObject_data_on_routeObject_center_position_projected_on_route.y
      = valueRss_routeObject_data_on_routeObject_center_position_projected_on_routeY;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ(-1e8);
    valueRss_routeObject_data_on_routeObject_center_position_projected_on_route.z
      = valueRss_routeObject_data_on_routeObject_center_position_projected_on_routeZ;
    valueRss_routeObject_data_on_route.object_center_position_projected_on_route
      = valueRss_routeObject_data_on_routeObject_center_position_projected_on_route;
    bool valueRss_routeObject_data_on_routeIs_valid{true};
    valueRss_routeObject_data_on_route.is_valid = valueRss_routeObject_data_on_routeIs_valid;
    ::ad::physics::Distance valueRss_routeObject_data_on_routeObject_center_distance_to_route(-1e9);
    valueRss_routeObject_data_on_route.object_center_distance_to_route
      = valueRss_routeObject_data_on_routeObject_center_distance_to_route;
    ::ad::map::point::ENUPoint
      valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
    ::ad::map::point::ENUCoordinate
      valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(-1e8);
    valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.x
      = valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
    ::ad::map::point::ENUCoordinate
      valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(-1e8);
    valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.y
      = valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
    ::ad::map::point::ENUCoordinate
      valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(-1e8);
    valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.z
      = valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
    valueRss_routeObject_data_on_route.object_center_position_projected_on_lane_in_nominal_route_direction
      = valueRss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
    ::ad::physics::Distance valueRss_routeObject_data_on_routeObject_center_distance_along_route(-1e9);
    valueRss_routeObject_data_on_route.object_center_distance_along_route
      = valueRss_routeObject_data_on_routeObject_center_distance_along_route;
    ::ad::map::point::ENUPoint
      valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
    ::ad::map::point::ENUCoordinate
      valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(-1e8);
    valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
      = valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
    ::ad::map::point::ENUCoordinate
      valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(-1e8);
    valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
      = valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
    ::ad::map::point::ENUCoordinate
      valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(-1e8);
    valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.z
      = valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
    valueRss_routeObject_data_on_route.nominal_center_position_of_lane_in_nominal_route_direction
      = valueRss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
    ::ad::map::point::ENUPoint valueRss_routeObject_data_on_routeObject_route_section_front_left;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_front_leftX(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_front_left.x
      = valueRss_routeObject_data_on_routeObject_route_section_front_leftX;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_front_leftY(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_front_left.y
      = valueRss_routeObject_data_on_routeObject_route_section_front_leftY;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_front_leftZ(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_front_left.z
      = valueRss_routeObject_data_on_routeObject_route_section_front_leftZ;
    valueRss_routeObject_data_on_route.object_route_section_front_left
      = valueRss_routeObject_data_on_routeObject_route_section_front_left;
    ::ad::map::point::ENUPoint valueRss_routeObject_data_on_routeObject_route_section_front_right;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_front_rightX(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_front_right.x
      = valueRss_routeObject_data_on_routeObject_route_section_front_rightX;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_front_rightY(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_front_right.y
      = valueRss_routeObject_data_on_routeObject_route_section_front_rightY;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_front_rightZ(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_front_right.z
      = valueRss_routeObject_data_on_routeObject_route_section_front_rightZ;
    valueRss_routeObject_data_on_route.object_route_section_front_right
      = valueRss_routeObject_data_on_routeObject_route_section_front_right;
    ::ad::map::point::ENUPoint valueRss_routeObject_data_on_routeObject_route_section_back_left;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_back_leftX(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_back_left.x
      = valueRss_routeObject_data_on_routeObject_route_section_back_leftX;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_back_leftY(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_back_left.y
      = valueRss_routeObject_data_on_routeObject_route_section_back_leftY;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_back_leftZ(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_back_left.z
      = valueRss_routeObject_data_on_routeObject_route_section_back_leftZ;
    valueRss_routeObject_data_on_route.object_route_section_back_left
      = valueRss_routeObject_data_on_routeObject_route_section_back_left;
    ::ad::map::point::ENUPoint valueRss_routeObject_data_on_routeObject_route_section_back_right;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_back_rightX(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_back_right.x
      = valueRss_routeObject_data_on_routeObject_route_section_back_rightX;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_back_rightY(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_back_right.y
      = valueRss_routeObject_data_on_routeObject_route_section_back_rightY;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_route_section_back_rightZ(-1e8);
    valueRss_routeObject_data_on_routeObject_route_section_back_right.z
      = valueRss_routeObject_data_on_routeObject_route_section_back_rightZ;
    valueRss_routeObject_data_on_route.object_route_section_back_right
      = valueRss_routeObject_data_on_routeObject_route_section_back_right;
    ::ad::map::point::ENUPoint valueRss_routeObject_data_on_routeObject_turning_center;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_turning_centerX(-1e8);
    valueRss_routeObject_data_on_routeObject_turning_center.x
      = valueRss_routeObject_data_on_routeObject_turning_centerX;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_turning_centerY(-1e8);
    valueRss_routeObject_data_on_routeObject_turning_center.y
      = valueRss_routeObject_data_on_routeObject_turning_centerY;
    ::ad::map::point::ENUCoordinate valueRss_routeObject_data_on_routeObject_turning_centerZ(-1e8);
    valueRss_routeObject_data_on_routeObject_turning_center.z
      = valueRss_routeObject_data_on_routeObject_turning_centerZ;
    valueRss_routeObject_data_on_route.object_turning_center = valueRss_routeObject_data_on_routeObject_turning_center;
    valueRss_route.object_data_on_route = valueRss_routeObject_data_on_route;
    value.rss_route = valueRss_route;
    bool valueIs_valid{true};
    value.is_valid = valueIs_valid;
    ::ad::rss::world::WorldModel valueWorld_model;
    ::ad::rss::world::TimeIndex valueWorld_modelTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueWorld_modelTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    valueWorld_model.time_index = valueWorld_modelTime_index;
    ::ad::rss::world::RssDynamics valueWorld_modelDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lon
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
    valueWorld_modelDefault_ego_vehicle_rss_dynamics.alpha_lat
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueWorld_modelDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueWorld_modelDefault_ego_vehicle_rss_dynamics.response_time
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueWorld_modelDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_brake_intermediate_acceleration_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueWorld_modelDefault_ego_vehicle_rss_dynamics.unstructured_settings
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
    valueWorld_modelDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
      = valueWorld_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
    valueWorld_model.default_ego_vehicle_rss_dynamics = valueWorld_modelDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::world::ConstellationVector valueWorld_modelConstellations;
    ::ad::rss::world::Constellation valueWorld_modelConstellationsElement;
    ::ad::rss::world::ConstellationType valueWorld_modelConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
    valueWorld_modelConstellationsElement.constellation_type = valueWorld_modelConstellationsElementConstellation_type;
    ::ad::rss::world::Object valueWorld_modelConstellationsElementEgo_vehicle;
    ::ad::rss::world::ObjectId valueWorld_modelConstellationsElementEgo_vehicleObject_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueWorld_modelConstellationsElementEgo_vehicle.object_id
      = valueWorld_modelConstellationsElementEgo_vehicleObject_id;
    ::ad::rss::world::ObjectType valueWorld_modelConstellationsElementEgo_vehicleObject_type(
      ::ad::rss::world::ObjectType::Invalid);
    valueWorld_modelConstellationsElementEgo_vehicle.object_type
      = valueWorld_modelConstellationsElementEgo_vehicleObject_type;
    ::ad::rss::world::OccupiedRegionVector valueWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
    ::ad::rss::world::OccupiedRegion valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement;
    ::ad::rss::world::LaneSegmentId valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.segment_id
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
    ::ad::physics::ParametricRange valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
    ::ad::physics::ParametricValue
      valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(0.);
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
    ::ad::physics::ParametricValue
      valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(0.);
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum;
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum;
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lon_range
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
    ::ad::physics::ParametricRange valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
    ::ad::physics::ParametricValue
      valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(0.);
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
    ::ad::physics::ParametricValue
      valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(0.);
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum;
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum;
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lat_range
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
    valueWorld_modelConstellationsElementEgo_vehicleOccupied_regions.resize(
      1, valueWorld_modelConstellationsElementEgo_vehicleOccupied_regionsElement);
    valueWorld_modelConstellationsElementEgo_vehicle.occupied_regions
      = valueWorld_modelConstellationsElementEgo_vehicleOccupied_regions;
    ::ad::rss::world::Velocity valueWorld_modelConstellationsElementEgo_vehicleVelocity;
    ::ad::physics::Speed valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min(-100.);
    valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min
      = ::ad::physics::Speed(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
      = valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min;
    ::ad::physics::Speed valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max(-100.);
    valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
      = valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max;
    ::ad::physics::Speed valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min(-100.);
    valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
      = valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min;
    ::ad::physics::Speed valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max(-100.);
    valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
      = valueWorld_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max;
    valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
      = valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min;
    valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
      = valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min;
    valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
      = valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max;
    valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
      = valueWorld_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max;
    valueWorld_modelConstellationsElementEgo_vehicle.velocity
      = valueWorld_modelConstellationsElementEgo_vehicleVelocity;
    ::ad::rss::world::ObjectState valueWorld_modelConstellationsElementEgo_vehicleState;
    ::ad::physics::Angle valueWorld_modelConstellationsElementEgo_vehicleStateYaw(-6.283185308);
    valueWorld_modelConstellationsElementEgo_vehicleState.yaw
      = valueWorld_modelConstellationsElementEgo_vehicleStateYaw;
    ::ad::physics::Dimension2D valueWorld_modelConstellationsElementEgo_vehicleStateDimension;
    ::ad::physics::Distance valueWorld_modelConstellationsElementEgo_vehicleStateDimensionLength(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicleStateDimension.length
      = valueWorld_modelConstellationsElementEgo_vehicleStateDimensionLength;
    ::ad::physics::Distance valueWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicleStateDimension.width
      = valueWorld_modelConstellationsElementEgo_vehicleStateDimensionWidth;
    valueWorld_modelConstellationsElementEgo_vehicleState.dimension
      = valueWorld_modelConstellationsElementEgo_vehicleStateDimension;
    ::ad::physics::AngularVelocity valueWorld_modelConstellationsElementEgo_vehicleStateYaw_rate(-100.);
    valueWorld_modelConstellationsElementEgo_vehicleState.yaw_rate
      = valueWorld_modelConstellationsElementEgo_vehicleStateYaw_rate;
    ::ad::physics::Distance2D valueWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
    ::ad::physics::Distance valueWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicleStateCenter_point.x
      = valueWorld_modelConstellationsElementEgo_vehicleStateCenter_pointX;
    ::ad::physics::Distance valueWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicleStateCenter_point.y
      = valueWorld_modelConstellationsElementEgo_vehicleStateCenter_pointY;
    valueWorld_modelConstellationsElementEgo_vehicleState.center_point
      = valueWorld_modelConstellationsElementEgo_vehicleStateCenter_point;
    ::ad::physics::SpeedRange valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
    ::ad::physics::Speed valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum(-100.);
    valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
      = valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum;
    ::ad::physics::Speed valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum(-100.);
    valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
      = valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum;
    valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
      = valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum;
    valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
      = valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum;
    valueWorld_modelConstellationsElementEgo_vehicleState.speed_range
      = valueWorld_modelConstellationsElementEgo_vehicleStateSpeed_range;
    ::ad::physics::Angle valueWorld_modelConstellationsElementEgo_vehicleStateSteering_angle(-6.283185308);
    valueWorld_modelConstellationsElementEgo_vehicleState.steering_angle
      = valueWorld_modelConstellationsElementEgo_vehicleStateSteering_angle;
    valueWorld_modelConstellationsElementEgo_vehicle.state = valueWorld_modelConstellationsElementEgo_vehicleState;
    valueWorld_modelConstellationsElement.ego_vehicle = valueWorld_modelConstellationsElementEgo_vehicle;
    ::ad::rss::world::RssDynamics valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lon
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lat
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(
      -1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time(0.);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.response_time
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.max_speed_on_acceleration
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
        -6.283185308);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
        0.);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_trajectory_calculation_step
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_brake_intermediate_acceleration_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_brake_intermediate_acceleration_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
    valueWorld_modelConstellationsElement.ego_vehicle_rss_dynamics
      = valueWorld_modelConstellationsElementEgo_vehicle_rss_dynamics;
    ::ad::rss::world::Object valueWorld_modelConstellationsElementObject;
    ::ad::rss::world::ObjectId valueWorld_modelConstellationsElementObjectObject_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueWorld_modelConstellationsElementObject.object_id = valueWorld_modelConstellationsElementObjectObject_id;
    ::ad::rss::world::ObjectType valueWorld_modelConstellationsElementObjectObject_type(
      ::ad::rss::world::ObjectType::Invalid);
    valueWorld_modelConstellationsElementObject.object_type = valueWorld_modelConstellationsElementObjectObject_type;
    ::ad::rss::world::OccupiedRegionVector valueWorld_modelConstellationsElementObjectOccupied_regions;
    ::ad::rss::world::OccupiedRegion valueWorld_modelConstellationsElementObjectOccupied_regionsElement;
    ::ad::rss::world::LaneSegmentId valueWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueWorld_modelConstellationsElementObjectOccupied_regionsElement.segment_id
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementSegment_id;
    ::ad::physics::ParametricRange valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
    ::ad::physics::ParametricValue valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum(
      0.);
    valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
    ::ad::physics::ParametricValue valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum(
      0.);
    valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
    valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum;
    valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum;
    valueWorld_modelConstellationsElementObjectOccupied_regionsElement.lon_range
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLon_range;
    ::ad::physics::ParametricRange valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
    ::ad::physics::ParametricValue valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum(
      0.);
    valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
    ::ad::physics::ParametricValue valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum(
      0.);
    valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
    valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum;
    valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum;
    valueWorld_modelConstellationsElementObjectOccupied_regionsElement.lat_range
      = valueWorld_modelConstellationsElementObjectOccupied_regionsElementLat_range;
    valueWorld_modelConstellationsElementObjectOccupied_regions.resize(
      1, valueWorld_modelConstellationsElementObjectOccupied_regionsElement);
    valueWorld_modelConstellationsElementObject.occupied_regions
      = valueWorld_modelConstellationsElementObjectOccupied_regions;
    ::ad::rss::world::Velocity valueWorld_modelConstellationsElementObjectVelocity;
    ::ad::physics::Speed valueWorld_modelConstellationsElementObjectVelocitySpeed_lon_min(-100.);
    valueWorld_modelConstellationsElementObjectVelocitySpeed_lon_min
      = ::ad::physics::Speed(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementObjectVelocity.speed_lon_min
      = valueWorld_modelConstellationsElementObjectVelocitySpeed_lon_min;
    ::ad::physics::Speed valueWorld_modelConstellationsElementObjectVelocitySpeed_lon_max(-100.);
    valueWorld_modelConstellationsElementObjectVelocity.speed_lon_max
      = valueWorld_modelConstellationsElementObjectVelocitySpeed_lon_max;
    ::ad::physics::Speed valueWorld_modelConstellationsElementObjectVelocitySpeed_lat_min(-100.);
    valueWorld_modelConstellationsElementObjectVelocity.speed_lat_min
      = valueWorld_modelConstellationsElementObjectVelocitySpeed_lat_min;
    ::ad::physics::Speed valueWorld_modelConstellationsElementObjectVelocitySpeed_lat_max(-100.);
    valueWorld_modelConstellationsElementObjectVelocity.speed_lat_max
      = valueWorld_modelConstellationsElementObjectVelocitySpeed_lat_max;
    valueWorld_modelConstellationsElementObjectVelocity.speed_lon_max
      = valueWorld_modelConstellationsElementObjectVelocity.speed_lon_min;
    valueWorld_modelConstellationsElementObjectVelocity.speed_lat_max
      = valueWorld_modelConstellationsElementObjectVelocity.speed_lat_min;
    valueWorld_modelConstellationsElementObjectVelocity.speed_lon_min
      = valueWorld_modelConstellationsElementObjectVelocity.speed_lon_max;
    valueWorld_modelConstellationsElementObjectVelocity.speed_lat_min
      = valueWorld_modelConstellationsElementObjectVelocity.speed_lat_max;
    valueWorld_modelConstellationsElementObject.velocity = valueWorld_modelConstellationsElementObjectVelocity;
    ::ad::rss::world::ObjectState valueWorld_modelConstellationsElementObjectState;
    ::ad::physics::Angle valueWorld_modelConstellationsElementObjectStateYaw(-6.283185308);
    valueWorld_modelConstellationsElementObjectState.yaw = valueWorld_modelConstellationsElementObjectStateYaw;
    ::ad::physics::Dimension2D valueWorld_modelConstellationsElementObjectStateDimension;
    ::ad::physics::Distance valueWorld_modelConstellationsElementObjectStateDimensionLength(-1e9);
    valueWorld_modelConstellationsElementObjectStateDimension.length
      = valueWorld_modelConstellationsElementObjectStateDimensionLength;
    ::ad::physics::Distance valueWorld_modelConstellationsElementObjectStateDimensionWidth(-1e9);
    valueWorld_modelConstellationsElementObjectStateDimension.width
      = valueWorld_modelConstellationsElementObjectStateDimensionWidth;
    valueWorld_modelConstellationsElementObjectState.dimension
      = valueWorld_modelConstellationsElementObjectStateDimension;
    ::ad::physics::AngularVelocity valueWorld_modelConstellationsElementObjectStateYaw_rate(-100.);
    valueWorld_modelConstellationsElementObjectState.yaw_rate
      = valueWorld_modelConstellationsElementObjectStateYaw_rate;
    ::ad::physics::Distance2D valueWorld_modelConstellationsElementObjectStateCenter_point;
    ::ad::physics::Distance valueWorld_modelConstellationsElementObjectStateCenter_pointX(-1e9);
    valueWorld_modelConstellationsElementObjectStateCenter_point.x
      = valueWorld_modelConstellationsElementObjectStateCenter_pointX;
    ::ad::physics::Distance valueWorld_modelConstellationsElementObjectStateCenter_pointY(-1e9);
    valueWorld_modelConstellationsElementObjectStateCenter_point.y
      = valueWorld_modelConstellationsElementObjectStateCenter_pointY;
    valueWorld_modelConstellationsElementObjectState.center_point
      = valueWorld_modelConstellationsElementObjectStateCenter_point;
    ::ad::physics::SpeedRange valueWorld_modelConstellationsElementObjectStateSpeed_range;
    ::ad::physics::Speed valueWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum(-100.);
    valueWorld_modelConstellationsElementObjectStateSpeed_range.minimum
      = valueWorld_modelConstellationsElementObjectStateSpeed_rangeMinimum;
    ::ad::physics::Speed valueWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum(-100.);
    valueWorld_modelConstellationsElementObjectStateSpeed_range.maximum
      = valueWorld_modelConstellationsElementObjectStateSpeed_rangeMaximum;
    valueWorld_modelConstellationsElementObjectStateSpeed_range.maximum
      = valueWorld_modelConstellationsElementObjectStateSpeed_range.minimum;
    valueWorld_modelConstellationsElementObjectStateSpeed_range.minimum
      = valueWorld_modelConstellationsElementObjectStateSpeed_range.maximum;
    valueWorld_modelConstellationsElementObjectState.speed_range
      = valueWorld_modelConstellationsElementObjectStateSpeed_range;
    ::ad::physics::Angle valueWorld_modelConstellationsElementObjectStateSteering_angle(-6.283185308);
    valueWorld_modelConstellationsElementObjectState.steering_angle
      = valueWorld_modelConstellationsElementObjectStateSteering_angle;
    valueWorld_modelConstellationsElementObject.state = valueWorld_modelConstellationsElementObjectState;
    valueWorld_modelConstellationsElement.object = valueWorld_modelConstellationsElementObject;
    ::ad::rss::world::RssDynamics valueWorld_modelConstellationsElementObject_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.accel_max
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct;
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
    valueWorld_modelConstellationsElementObject_rss_dynamics.alpha_lon
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.accel_max
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat.brake_min
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min;
    valueWorld_modelConstellationsElementObject_rss_dynamics.alpha_lat
      = valueWorld_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementObject_rss_dynamics.lateral_fluctuation_margin
      = valueWorld_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueWorld_modelConstellationsElementObject_rss_dynamicsResponse_time(0.);
    valueWorld_modelConstellationsElementObject_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueWorld_modelConstellationsElementObject_rss_dynamics.response_time
      = valueWorld_modelConstellationsElementObject_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueWorld_modelConstellationsElementObject_rss_dynamics.max_speed_on_acceleration
      = valueWorld_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
        0.);
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_brake_intermediate_acceleration_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_brake_intermediate_acceleration_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueWorld_modelConstellationsElementObject_rss_dynamics.unstructured_settings
      = valueWorld_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
    valueWorld_modelConstellationsElementObject_rss_dynamics.min_longitudinal_safety_distance
      = valueWorld_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
    valueWorld_modelConstellationsElement.object_rss_dynamics
      = valueWorld_modelConstellationsElementObject_rss_dynamics;
    ::ad::rss::world::RoadArea valueWorld_modelConstellationsElementIntersecting_road;
    ::ad::rss::world::RoadSegment valueWorld_modelConstellationsElementIntersecting_roadElement;
    ::ad::rss::world::RoadSegmentType valueWorld_modelConstellationsElementIntersecting_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
    valueWorld_modelConstellationsElementIntersecting_roadElement.type
      = valueWorld_modelConstellationsElementIntersecting_roadElementType;
    ::ad::rss::world::LaneSegmentVector valueWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
    ::ad::rss::world::LaneSegment valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement;
    ::ad::rss::world::LaneSegmentId valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.id
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId;
    ::ad::rss::world::LaneDrivingDirection
      valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
        ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.driving_direction
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
    ::ad::physics::MetricRange valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(-1e9);
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(-1e9);
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum;
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum;
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.length
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
    ::ad::physics::MetricRange valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(-1e9);
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(-1e9);
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum;
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum;
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.width
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
    valueWorld_modelConstellationsElementIntersecting_roadElementLane_segments.resize(
      1, valueWorld_modelConstellationsElementIntersecting_roadElementLane_segmentsElement);
    valueWorld_modelConstellationsElementIntersecting_roadElement.lane_segments
      = valueWorld_modelConstellationsElementIntersecting_roadElementLane_segments;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(-1e9);
    valueWorld_modelConstellationsElementIntersecting_roadElement.minimum_length_after_intersecting_area
      = valueWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(-1e9);
    valueWorld_modelConstellationsElementIntersecting_roadElement.minimum_length_before_intersecting_area
      = valueWorld_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
    valueWorld_modelConstellationsElementIntersecting_road.resize(
      1, valueWorld_modelConstellationsElementIntersecting_roadElement);
    valueWorld_modelConstellationsElement.intersecting_road = valueWorld_modelConstellationsElementIntersecting_road;
    ::ad::rss::world::RoadArea valueWorld_modelConstellationsElementEgo_vehicle_road;
    ::ad::rss::world::RoadSegment valueWorld_modelConstellationsElementEgo_vehicle_roadElement;
    ::ad::rss::world::RoadSegmentType valueWorld_modelConstellationsElementEgo_vehicle_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElement.type
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementType;
    ::ad::rss::world::LaneSegmentVector valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
    ::ad::rss::world::LaneSegment valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement;
    ::ad::rss::world::LaneSegmentId valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
    ::ad::rss::world::LaneDrivingDirection
      valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
        ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.driving_direction
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
    ::ad::physics::MetricRange valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.length
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
    ::ad::physics::MetricRange valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
    valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments.resize(
      1, valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElement.lane_segments
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElement.minimum_length_after_intersecting_area
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
    ::ad::physics::Distance
      valueWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(-1e9);
    valueWorld_modelConstellationsElementEgo_vehicle_roadElement.minimum_length_before_intersecting_area
      = valueWorld_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
    valueWorld_modelConstellationsElementEgo_vehicle_road.resize(
      1, valueWorld_modelConstellationsElementEgo_vehicle_roadElement);
    valueWorld_modelConstellationsElement.ego_vehicle_road = valueWorld_modelConstellationsElementEgo_vehicle_road;
    valueWorld_modelConstellations.resize(1, valueWorld_modelConstellationsElement);
    valueWorld_model.constellations = valueWorld_modelConstellations;
    value.world_model = valueWorld_model;
    ::ad::rss::core::RssSituationSnapshot valueRss_situation_snapshot;
    ::ad::rss::world::TimeIndex valueRss_situation_snapshotTime_index(
      std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueRss_situation_snapshotTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    valueRss_situation_snapshot.time_index = valueRss_situation_snapshotTime_index;
    ::ad::rss::world::RssDynamics valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(
      -1e2);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.response_time
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
        -6.283185308);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
        0.);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_brake_intermediate_acceleration_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_brake_intermediate_acceleration_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
    valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
    valueRss_situation_snapshot.default_ego_vehicle_rss_dynamics
      = valueRss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::core::RelativeConstellationVector valueRss_situation_snapshotConstellations;
    ::ad::rss::core::RelativeConstellation valueRss_situation_snapshotConstellationsElement;
    ::ad::rss::world::ObjectId valueRss_situation_snapshotConstellationsElementEgo_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueRss_situation_snapshotConstellationsElement.ego_id = valueRss_situation_snapshotConstellationsElementEgo_id;
    ::ad::rss::world::ObjectId valueRss_situation_snapshotConstellationsElementObject_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueRss_situation_snapshotConstellationsElement.object_id
      = valueRss_situation_snapshotConstellationsElementObject_id;
    ::ad::rss::core::RelativeConstellationId valueRss_situation_snapshotConstellationsElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
    valueRss_situation_snapshotConstellationsElement.constellation_id
      = valueRss_situation_snapshotConstellationsElementConstellation_id;
    ::ad::rss::world::ConstellationType valueRss_situation_snapshotConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
    valueRss_situation_snapshotConstellationsElement.constellation_type
      = valueRss_situation_snapshotConstellationsElementConstellation_type;
    ::ad::rss::core::RelativeObjectState valueRss_situation_snapshotConstellationsElementEgo_state;
    ::ad::rss::world::ObjectType valueRss_situation_snapshotConstellationsElementEgo_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
    valueRss_situation_snapshotConstellationsElementEgo_state.object_type
      = valueRss_situation_snapshotConstellationsElementEgo_stateObject_type;
    ::ad::rss::world::RssDynamics valueRss_situation_snapshotConstellationsElementEgo_stateDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(
      -1e2);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(
      -1e2);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(
      -1e2);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max;
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct;
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lon
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(
      -1e2);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(
      -1e2);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lat
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
    ::ad::physics::Distance valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(
      -1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamics.lateral_fluctuation_margin
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time(0.);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamics.response_time
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time;
    ::ad::physics::Speed valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(
      -100.);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamics.max_speed_on_acceleration
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
        -1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
        -6.283185308);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
        -1e2);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
        0.);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .vehicle_trajectory_calculation_step
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .vehicle_brake_intermediate_acceleration_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .pedestrian_brake_intermediate_acceleration_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamics.unstructured_settings
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateDynamics.min_longitudinal_safety_distance
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
    valueRss_situation_snapshotConstellationsElementEgo_state.dynamics
      = valueRss_situation_snapshotConstellationsElementEgo_stateDynamics;
    ::ad::rss::world::ObjectState valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
    ::ad::physics::Angle valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw(
      -6.283185308);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw;
    ::ad::physics::Dimension2D
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(-1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension.length
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension.width
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.dimension
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
    ::ad::physics::AngularVelocity
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(-100.);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw_rate
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
    ::ad::physics::Distance2D
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point.x
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point.y
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.center_point
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
    ::ad::physics::SpeedRange
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum;
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum;
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.speed_range
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
    ::ad::physics::Angle
      valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
    valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.steering_angle
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
    valueRss_situation_snapshotConstellationsElementEgo_state.unstructured_object_state
      = valueRss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
    ::ad::rss::core::StructuredObjectState
      valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
    ::ad::rss::world::Velocity valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
      = ::ad::physics::Speed(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min;
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min;
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max;
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max;
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.velocity
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
    bool valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority{true};
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.has_priority
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority;
    bool valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{true};
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.is_in_correct_lane
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
        -1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
        -1e9);
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection;
    valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection;
    valueRss_situation_snapshotConstellationsElementEgo_state.structured_object_state
      = valueRss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
    valueRss_situation_snapshotConstellationsElement.ego_state
      = valueRss_situation_snapshotConstellationsElementEgo_state;
    ::ad::rss::core::RelativeObjectState valueRss_situation_snapshotConstellationsElementOther_state;
    ::ad::rss::world::ObjectType valueRss_situation_snapshotConstellationsElementOther_stateObject_type(
      ::ad::rss::world::ObjectType::Invalid);
    valueRss_situation_snapshotConstellationsElementOther_state.object_type
      = valueRss_situation_snapshotConstellationsElementOther_stateObject_type;
    ::ad::rss::world::RssDynamics valueRss_situation_snapshotConstellationsElementOther_stateDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(
      -1e2);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(
      -1e2);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(
      -1e2);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max;
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct;
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
    valueRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lon
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max(
      -1e2);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min(
      -1e2);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
    valueRss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lat
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(-1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementOther_stateDynamics.lateral_fluctuation_margin
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time(0.);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementOther_stateDynamics.response_time
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time;
    ::ad::physics::Speed valueRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(
      -100.);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamics.max_speed_on_acceleration
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
        -1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
        -6.283185308);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(
        -1e2);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
        0.);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .vehicle_trajectory_calculation_step
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .vehicle_brake_intermediate_acceleration_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .pedestrian_brake_intermediate_acceleration_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueRss_situation_snapshotConstellationsElementOther_stateDynamics.unstructured_settings
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateDynamics.min_longitudinal_safety_distance
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
    valueRss_situation_snapshotConstellationsElementOther_state.dynamics
      = valueRss_situation_snapshotConstellationsElementOther_stateDynamics;
    ::ad::rss::world::ObjectState valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
    ::ad::physics::Angle valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw(
      -6.283185308);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw;
    ::ad::physics::Dimension2D
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength(-1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension.length
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(-1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension.width
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.dimension
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
    ::ad::physics::AngularVelocity
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate(-100.);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw_rate
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
    ::ad::physics::Distance2D
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(-1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point.x
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(-1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point.y
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.center_point
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
    ::ad::physics::SpeedRange
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum;
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum;
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.speed_range
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
    ::ad::physics::Angle
      valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
    valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.steering_angle
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
    valueRss_situation_snapshotConstellationsElementOther_state.unstructured_object_state
      = valueRss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
    ::ad::rss::core::StructuredObjectState
      valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
    ::ad::rss::world::Velocity
      valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
      = ::ad::physics::Speed(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
    ::ad::physics::Speed
      valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min;
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min;
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max;
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max;
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.velocity
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
    bool valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority{true};
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.has_priority
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority;
    bool valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{true};
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.is_in_correct_lane
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
        -1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
    ::ad::physics::Distance
      valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
        -1e9);
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
          .distance_to_enter_intersection;
    valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state
          .distance_to_leave_intersection;
    valueRss_situation_snapshotConstellationsElementOther_state.structured_object_state
      = valueRss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
    valueRss_situation_snapshotConstellationsElement.other_state
      = valueRss_situation_snapshotConstellationsElementOther_state;
    ::ad::rss::core::RelativePosition valueRss_situation_snapshotConstellationsElementRelative_position;
    ::ad::rss::core::LongitudinalRelativePosition
      valueRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position(
        ::ad::rss::core::LongitudinalRelativePosition::InFront);
    valueRss_situation_snapshotConstellationsElementRelative_position.longitudinal_position
      = valueRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position;
    ::ad::physics::Distance valueRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance(
      -1e9);
    valueRss_situation_snapshotConstellationsElementRelative_position.longitudinal_distance
      = valueRss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance;
    ::ad::rss::core::LateralRelativePosition
      valueRss_situation_snapshotConstellationsElementRelative_positionLateral_position(
        ::ad::rss::core::LateralRelativePosition::AtLeft);
    valueRss_situation_snapshotConstellationsElementRelative_position.lateral_position
      = valueRss_situation_snapshotConstellationsElementRelative_positionLateral_position;
    ::ad::physics::Distance valueRss_situation_snapshotConstellationsElementRelative_positionLateral_distance(-1e9);
    valueRss_situation_snapshotConstellationsElementRelative_position.lateral_distance
      = valueRss_situation_snapshotConstellationsElementRelative_positionLateral_distance;
    valueRss_situation_snapshotConstellationsElement.relative_position
      = valueRss_situation_snapshotConstellationsElementRelative_position;
    ::ad::rss::world::WorldModelIndexVector valueRss_situation_snapshotConstellationsElementWorld_model_indices;
    ::ad::rss::world::WorldModelIndex valueRss_situation_snapshotConstellationsElementWorld_model_indicesElement(
      std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
    valueRss_situation_snapshotConstellationsElementWorld_model_indices.resize(
      1, valueRss_situation_snapshotConstellationsElementWorld_model_indicesElement);
    valueRss_situation_snapshotConstellationsElement.world_model_indices
      = valueRss_situation_snapshotConstellationsElementWorld_model_indices;
    valueRss_situation_snapshotConstellations.resize(1, valueRss_situation_snapshotConstellationsElement);
    valueRss_situation_snapshot.constellations = valueRss_situation_snapshotConstellations;
    value.rss_situation_snapshot = valueRss_situation_snapshot;
    ::ad::rss::state::RssStateSnapshot valueRss_state_snapshot;
    ::ad::rss::world::TimeIndex valueRss_state_snapshotTime_index(
      std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueRss_state_snapshotTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    valueRss_state_snapshot.time_index = valueRss_state_snapshotTime_index;
    ::ad::rss::world::RssDynamics valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics.response_time
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
        0.);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_brake_intermediate_acceleration_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_brake_intermediate_acceleration_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(
      -1e9);
    valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
      = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
    valueRss_state_snapshot.default_ego_vehicle_rss_dynamics = valueRss_state_snapshotDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::state::RssStateVector valueRss_state_snapshotIndividual_responses;
    ::ad::rss::state::RssState valueRss_state_snapshotIndividual_responsesElement;
    ::ad::rss::world::ObjectId valueRss_state_snapshotIndividual_responsesElementEgo_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueRss_state_snapshotIndividual_responsesElement.ego_id
      = valueRss_state_snapshotIndividual_responsesElementEgo_id;
    ::ad::rss::world::ObjectId valueRss_state_snapshotIndividual_responsesElementObject_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueRss_state_snapshotIndividual_responsesElement.object_id
      = valueRss_state_snapshotIndividual_responsesElementObject_id;
    ::ad::rss::core::RelativeConstellationId valueRss_state_snapshotIndividual_responsesElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
    valueRss_state_snapshotIndividual_responsesElement.constellation_id
      = valueRss_state_snapshotIndividual_responsesElementConstellation_id;
    ::ad::rss::state::LongitudinalRssState valueRss_state_snapshotIndividual_responsesElementLongitudinal_state;
    bool valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe{true};
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_state.is_safe
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe;
    ::ad::rss::state::LongitudinalResponse valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse(
      ::ad::rss::state::LongitudinalResponse::None);
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_state.response
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
    ::ad::physics::Acceleration valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max(
      -1e2);
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.accel_max
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max(
      -1e2);
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min(
      -1e2);
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
    ::ad::physics::Acceleration
      valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max;
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct;
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_state.alpha_lon
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
    ::ad::rss::state::RssStateInformation
      valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(-1e9);
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.safe_distance
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.current_distance
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
    ::ad::rss::state::RssStateEvaluator
      valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
        ::ad::rss::state::RssStateEvaluator::None);
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.evaluator
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
    valueRss_state_snapshotIndividual_responsesElementLongitudinal_state.rss_state_information
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
    valueRss_state_snapshotIndividual_responsesElement.longitudinal_state
      = valueRss_state_snapshotIndividual_responsesElementLongitudinal_state;
    ::ad::rss::state::LateralRssState valueRss_state_snapshotIndividual_responsesElementLateral_state_right;
    bool valueRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe{true};
    valueRss_state_snapshotIndividual_responsesElementLateral_state_right.is_safe
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe;
    ::ad::rss::state::LateralResponse valueRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse(
      ::ad::rss::state::LateralResponse::None);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_right.response
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightResponse;
    ::ad::rss::world::LateralRssAccelerationValues
      valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
    ::ad::physics::Acceleration valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max(
      -1e2);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.accel_max
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max;
    ::ad::physics::Acceleration valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min(
      -1e2);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.brake_min
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min;
    valueRss_state_snapshotIndividual_responsesElementLateral_state_right.alpha_lat
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
    ::ad::rss::state::RssStateInformation
      valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance(-1e9);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.safe_distance
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(-1e9);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.current_distance
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
    ::ad::rss::state::RssStateEvaluator
      valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator(
        ::ad::rss::state::RssStateEvaluator::None);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.evaluator
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator;
    valueRss_state_snapshotIndividual_responsesElementLateral_state_right.rss_state_information
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
    valueRss_state_snapshotIndividual_responsesElement.lateral_state_right
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_right;
    ::ad::rss::state::LateralRssState valueRss_state_snapshotIndividual_responsesElementLateral_state_left;
    bool valueRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe{true};
    valueRss_state_snapshotIndividual_responsesElementLateral_state_left.is_safe
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe;
    ::ad::rss::state::LateralResponse valueRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse(
      ::ad::rss::state::LateralResponse::None);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_left.response
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftResponse;
    ::ad::rss::world::LateralRssAccelerationValues
      valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
    ::ad::physics::Acceleration valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max(
      -1e2);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.accel_max
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max;
    ::ad::physics::Acceleration valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min(
      -1e2);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.brake_min
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min;
    valueRss_state_snapshotIndividual_responsesElementLateral_state_left.alpha_lat
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
    ::ad::rss::state::RssStateInformation
      valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance(-1e9);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.safe_distance
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(-1e9);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.current_distance
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
    ::ad::rss::state::RssStateEvaluator
      valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator(
        ::ad::rss::state::RssStateEvaluator::None);
    valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.evaluator
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator;
    valueRss_state_snapshotIndividual_responsesElementLateral_state_left.rss_state_information
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
    valueRss_state_snapshotIndividual_responsesElement.lateral_state_left
      = valueRss_state_snapshotIndividual_responsesElementLateral_state_left;
    ::ad::rss::state::UnstructuredConstellationRssState
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
    bool valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe{true};
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.is_safe
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe;
    ::ad::rss::state::UnstructuredConstellationResponse
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse(
        ::ad::rss::state::UnstructuredConstellationResponse::None);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.response
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse;
    ::ad::geometry::HeadingRange
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
    ::ad::physics::Angle
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(
        -6.283185308);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range.begin
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
    ::ad::physics::Angle
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range.end
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.heading_range
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
    ::ad::rss::state::UnstructuredConstellationStateInformation
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
    ::ad::physics::Distance2DList
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
    ::ad::physics::Distance2D
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
        -1e9);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
      .x
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
        -1e9);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
      .y
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set
      .resize(
        1,
        valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
      .brake_trajectory_set
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
    ::ad::physics::Distance2DList
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
    ::ad::physics::Distance2D
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
        -1e9);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
      .x
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
    ::ad::physics::Distance
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
        -1e9);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
      .y
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set
      .resize(
        1,
        valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
      .continue_forward_trajectory_set
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
    ::ad::physics::Angle
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
        -6.283185308);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
      .considered_drive_away_steering_angle
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.rss_state_information
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
    ::ad::physics::Acceleration
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.accel_max
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
    ::ad::physics::Acceleration
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
    ::ad::physics::Acceleration
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
    ::ad::physics::Acceleration
      valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(
        -1e2);
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
    valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.alpha_lon
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
    valueRss_state_snapshotIndividual_responsesElement.unstructured_constellation_state
      = valueRss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
    ::ad::rss::world::ConstellationType valueRss_state_snapshotIndividual_responsesElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
    valueRss_state_snapshotIndividual_responsesElement.constellation_type
      = valueRss_state_snapshotIndividual_responsesElementConstellation_type;
    valueRss_state_snapshotIndividual_responses.resize(1, valueRss_state_snapshotIndividual_responsesElement);
    valueRss_state_snapshot.individual_responses = valueRss_state_snapshotIndividual_responses;
    ::ad::rss::state::UnstructuredConstellationStateInformation
      valueRss_state_snapshotUnstructured_constellation_ego_information;
    ::ad::physics::Distance2DList valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
    ::ad::physics::Distance2D
      valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement;
    ::ad::physics::Distance
      valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX(-1e9);
    valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement.x
      = valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX;
    ::ad::physics::Distance
      valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY(-1e9);
    valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement.y
      = valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY;
    valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set.resize(
      1, valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement);
    valueRss_state_snapshotUnstructured_constellation_ego_information.brake_trajectory_set
      = valueRss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
    ::ad::physics::Distance2DList
      valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
    ::ad::physics::Distance2D
      valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
    ::ad::physics::Distance
      valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(-1e9);
    valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement.x
      = valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
    ::ad::physics::Distance
      valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(-1e9);
    valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement.y
      = valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
    valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set.resize(
      1, valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
    valueRss_state_snapshotUnstructured_constellation_ego_information.continue_forward_trajectory_set
      = valueRss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
    ::ad::physics::Angle
      valueRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle(
        -6.283185308);
    valueRss_state_snapshotUnstructured_constellation_ego_information.considered_drive_away_steering_angle
      = valueRss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
    valueRss_state_snapshot.unstructured_constellation_ego_information
      = valueRss_state_snapshotUnstructured_constellation_ego_information;
    value.rss_state_snapshot = valueRss_state_snapshot;
    ::ad::rss::state::ProperResponse valueProper_response;
    ::ad::rss::world::TimeIndex valueProper_responseTime_index(
      std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueProper_responseTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    valueProper_response.time_index = valueProper_responseTime_index;
    bool valueProper_responseIs_safe{true};
    valueProper_response.is_safe = valueProper_responseIs_safe;
    ::ad::rss::world::ObjectIdVector valueProper_responseDangerous_objects;
    ::ad::rss::world::ObjectId valueProper_responseDangerous_objectsElement(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueProper_responseDangerous_objects.resize(1, valueProper_responseDangerous_objectsElement);
    valueProper_response.dangerous_objects = valueProper_responseDangerous_objects;
    ::ad::rss::state::LongitudinalResponse valueProper_responseLongitudinal_response(
      ::ad::rss::state::LongitudinalResponse::None);
    valueProper_response.longitudinal_response = valueProper_responseLongitudinal_response;
    ::ad::rss::state::LateralResponse valueProper_responseLateral_response_right(
      ::ad::rss::state::LateralResponse::None);
    valueProper_response.lateral_response_right = valueProper_responseLateral_response_right;
    ::ad::rss::state::LateralResponse valueProper_responseLateral_response_left(
      ::ad::rss::state::LateralResponse::None);
    valueProper_response.lateral_response_left = valueProper_responseLateral_response_left;
    ::ad::geometry::HeadingRangeVector valueProper_responseHeading_ranges;
    ::ad::geometry::HeadingRange valueProper_responseHeading_rangesElement;
    ::ad::physics::Angle valueProper_responseHeading_rangesElementBegin(-6.283185308);
    valueProper_responseHeading_rangesElement.begin = valueProper_responseHeading_rangesElementBegin;
    ::ad::physics::Angle valueProper_responseHeading_rangesElementEnd(-6.283185308);
    valueProper_responseHeading_rangesElement.end = valueProper_responseHeading_rangesElementEnd;
    valueProper_responseHeading_ranges.resize(1, valueProper_responseHeading_rangesElement);
    valueProper_response.heading_ranges = valueProper_responseHeading_ranges;
    ::ad::rss::state::AccelerationRestriction valueProper_responseAcceleration_restrictions;
    ::ad::physics::AccelerationRange valueProper_responseAcceleration_restrictionsLateral_left_range;
    ::ad::physics::Acceleration valueProper_responseAcceleration_restrictionsLateral_left_rangeMinimum(-1e2);
    valueProper_responseAcceleration_restrictionsLateral_left_range.minimum
      = valueProper_responseAcceleration_restrictionsLateral_left_rangeMinimum;
    ::ad::physics::Acceleration valueProper_responseAcceleration_restrictionsLateral_left_rangeMaximum(-1e2);
    valueProper_responseAcceleration_restrictionsLateral_left_range.maximum
      = valueProper_responseAcceleration_restrictionsLateral_left_rangeMaximum;
    valueProper_responseAcceleration_restrictionsLateral_left_range.maximum
      = valueProper_responseAcceleration_restrictionsLateral_left_range.minimum;
    valueProper_responseAcceleration_restrictionsLateral_left_range.minimum
      = valueProper_responseAcceleration_restrictionsLateral_left_range.maximum;
    valueProper_responseAcceleration_restrictions.lateral_left_range
      = valueProper_responseAcceleration_restrictionsLateral_left_range;
    ::ad::physics::AccelerationRange valueProper_responseAcceleration_restrictionsLongitudinal_range;
    ::ad::physics::Acceleration valueProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum(-1e2);
    valueProper_responseAcceleration_restrictionsLongitudinal_range.minimum
      = valueProper_responseAcceleration_restrictionsLongitudinal_rangeMinimum;
    ::ad::physics::Acceleration valueProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum(-1e2);
    valueProper_responseAcceleration_restrictionsLongitudinal_range.maximum
      = valueProper_responseAcceleration_restrictionsLongitudinal_rangeMaximum;
    valueProper_responseAcceleration_restrictionsLongitudinal_range.maximum
      = valueProper_responseAcceleration_restrictionsLongitudinal_range.minimum;
    valueProper_responseAcceleration_restrictionsLongitudinal_range.minimum
      = valueProper_responseAcceleration_restrictionsLongitudinal_range.maximum;
    valueProper_responseAcceleration_restrictions.longitudinal_range
      = valueProper_responseAcceleration_restrictionsLongitudinal_range;
    ::ad::physics::AccelerationRange valueProper_responseAcceleration_restrictionsLateral_right_range;
    ::ad::physics::Acceleration valueProper_responseAcceleration_restrictionsLateral_right_rangeMinimum(-1e2);
    valueProper_responseAcceleration_restrictionsLateral_right_range.minimum
      = valueProper_responseAcceleration_restrictionsLateral_right_rangeMinimum;
    ::ad::physics::Acceleration valueProper_responseAcceleration_restrictionsLateral_right_rangeMaximum(-1e2);
    valueProper_responseAcceleration_restrictionsLateral_right_range.maximum
      = valueProper_responseAcceleration_restrictionsLateral_right_rangeMaximum;
    valueProper_responseAcceleration_restrictionsLateral_right_range.maximum
      = valueProper_responseAcceleration_restrictionsLateral_right_range.minimum;
    valueProper_responseAcceleration_restrictionsLateral_right_range.minimum
      = valueProper_responseAcceleration_restrictionsLateral_right_range.maximum;
    valueProper_responseAcceleration_restrictions.lateral_right_range
      = valueProper_responseAcceleration_restrictionsLateral_right_range;
    valueProper_response.acceleration_restrictions = valueProper_responseAcceleration_restrictions;
    ::ad::rss::state::UnstructuredConstellationResponse valueProper_responseUnstructured_constellation_response(
      ::ad::rss::state::UnstructuredConstellationResponse::None);
    valueProper_response.unstructured_constellation_response = valueProper_responseUnstructured_constellation_response;
    value.proper_response = valueProper_response;
    ::ad::rss::map::RssRouteCheckResultAnalysis valueResult_analysis;
    bool valueResult_analysisDangerous_state{true};
    valueResult_analysis.dangerous_state = valueResult_analysisDangerous_state;
    bool valueResult_analysisDangerous_vehicle{true};
    valueResult_analysis.dangerous_vehicle = valueResult_analysisDangerous_vehicle;
    bool valueResult_analysisDangerous_opposite_state{true};
    valueResult_analysis.dangerous_opposite_state = valueResult_analysisDangerous_opposite_state;
    bool valueResult_analysisVehicle_crossing_road_boundaries{true};
    valueResult_analysis.vehicle_crossing_road_boundaries = valueResult_analysisVehicle_crossing_road_boundaries;
    value.result_analysis = valueResult_analysis;
    mValue = value;
  }

  ::ad::rss::map::RssRouteCheckResult mValue;
};

TEST_F(RssRouteCheckResultTests, copyConstruction)
{
  ::ad::rss::map::RssRouteCheckResult value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteCheckResultTests, moveConstruction)
{
  ::ad::rss::map::RssRouteCheckResult tmpValue(mValue);
  ::ad::rss::map::RssRouteCheckResult value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteCheckResultTests, copyAssignment)
{
  ::ad::rss::map::RssRouteCheckResult value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteCheckResultTests, moveAssignment)
{
  ::ad::rss::map::RssRouteCheckResult tmpValue(mValue);
  ::ad::rss::map::RssRouteCheckResult value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteCheckResultTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssRouteCheckResult valueA = mValue;
  ::ad::rss::map::RssRouteCheckResult valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssRouteCheckResultTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssRouteCheckResultTests, comparisonOperatorRss_routeDiffers)
{
  ::ad::rss::map::RssRouteCheckResult valueA = mValue;
  ::ad::rss::map::RssRoute rss_route;
  ::ad::rss::map::RssRouteId rss_routeRoute_id(std::numeric_limits<::ad::rss::map::RssRouteId>::max());
  rss_route.route_id = rss_routeRoute_id;
  ::ad::map::route::FullRoute rss_routeRoute;
  ::ad::map::route::RoadSegmentList rss_routeRouteRoad_segments;
  ::ad::map::route::RoadSegment rss_routeRouteRoad_segmentsElement;
  ::ad::map::route::LaneSegmentList rss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::LaneSegment rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement;
  ::ad::map::lane::LaneId rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.left_neighbor
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLeft_neighbor;
  ::ad::map::lane::LaneId rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.right_neighbor
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRight_neighbor;
  ::ad::map::lane::LaneIdList rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneId rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors.resize(
    2, rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessorsElement);
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.predecessors
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementPredecessors;
  ::ad::map::lane::LaneIdList rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::lane::LaneId rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors.resize(
    2, rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessorsElement);
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.successors
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementSuccessors;
  ::ad::map::route::LaneInterval rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::lane::LaneId rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id(
    std::numeric_limits<::ad::map::lane::LaneId>::max());
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.lane_id
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalLane_id;
  ::ad::physics::ParametricValue rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart(1.);
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.start
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalStart;
  ::ad::physics::ParametricValue rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd(1.);
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.end
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalEnd;
  bool rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way{false};
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval.wrong_way
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_intervalWrong_way;
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.lane_interval
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementLane_interval;
  ::ad::map::route::RouteLaneOffset rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::max());
  rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement.route_lane_offset
    = rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElementRoute_lane_offset;
  rss_routeRouteRoad_segmentsElementDrivable_lane_segments.resize(
    2, rss_routeRouteRoad_segmentsElementDrivable_lane_segmentsElement);
  rss_routeRouteRoad_segmentsElement.drivable_lane_segments = rss_routeRouteRoad_segmentsElementDrivable_lane_segments;
  ::ad::map::route::SegmentCounter rss_routeRouteRoad_segmentsElementSegment_count_from_destination(
    std::numeric_limits<::ad::map::route::SegmentCounter>::max());
  rss_routeRouteRoad_segmentsElement.segment_count_from_destination
    = rss_routeRouteRoad_segmentsElementSegment_count_from_destination;
  ::ad::map::point::BoundingSphere rss_routeRouteRoad_segmentsElementBounding_sphere;
  ::ad::map::point::ECEFPoint rss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::map::point::ECEFCoordinate rss_routeRouteRoad_segmentsElementBounding_sphereCenterX(6400000);
  rss_routeRouteRoad_segmentsElementBounding_sphereCenter.x = rss_routeRouteRoad_segmentsElementBounding_sphereCenterX;
  ::ad::map::point::ECEFCoordinate rss_routeRouteRoad_segmentsElementBounding_sphereCenterY(6400000);
  rss_routeRouteRoad_segmentsElementBounding_sphereCenter.y = rss_routeRouteRoad_segmentsElementBounding_sphereCenterY;
  ::ad::map::point::ECEFCoordinate rss_routeRouteRoad_segmentsElementBounding_sphereCenterZ(6400000);
  rss_routeRouteRoad_segmentsElementBounding_sphereCenter.z = rss_routeRouteRoad_segmentsElementBounding_sphereCenterZ;
  rss_routeRouteRoad_segmentsElementBounding_sphere.center = rss_routeRouteRoad_segmentsElementBounding_sphereCenter;
  ::ad::physics::Distance rss_routeRouteRoad_segmentsElementBounding_sphereRadius(1e9);
  rss_routeRouteRoad_segmentsElementBounding_sphere.radius = rss_routeRouteRoad_segmentsElementBounding_sphereRadius;
  rss_routeRouteRoad_segmentsElement.bounding_sphere = rss_routeRouteRoad_segmentsElementBounding_sphere;
  rss_routeRouteRoad_segments.resize(2, rss_routeRouteRoad_segmentsElement);
  rss_routeRoute.road_segments = rss_routeRouteRoad_segments;
  ::ad::map::route::RoutePlanningCounter rss_routeRouteRoute_planning_counter(
    std::numeric_limits<::ad::map::route::RoutePlanningCounter>::max());
  rss_routeRoute.route_planning_counter = rss_routeRouteRoute_planning_counter;
  ::ad::map::route::SegmentCounter rss_routeRouteFull_route_segment_count(
    std::numeric_limits<::ad::map::route::SegmentCounter>::max());
  rss_routeRoute.full_route_segment_count = rss_routeRouteFull_route_segment_count;
  ::ad::map::route::RouteLaneOffset rss_routeRouteDestination_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::max());
  rss_routeRoute.destination_lane_offset = rss_routeRouteDestination_lane_offset;
  ::ad::map::route::RouteLaneOffset rss_routeRouteMin_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::max());
  rss_routeRoute.min_lane_offset = rss_routeRouteMin_lane_offset;
  ::ad::map::route::RouteLaneOffset rss_routeRouteMax_lane_offset(
    std::numeric_limits<::ad::map::route::RouteLaneOffset>::max());
  rss_routeRoute.max_lane_offset = rss_routeRouteMax_lane_offset;
  ::ad::map::route::RouteCreationMode rss_routeRouteRoute_creation_mode(
    ::ad::map::route::RouteCreationMode::AllNeighborLanes);
  rss_routeRoute.route_creation_mode = rss_routeRouteRoute_creation_mode;
  rss_route.route = rss_routeRoute;
  ::ad::physics::Probability rss_routeLikelihood(1.);
  rss_route.likelihood = rss_routeLikelihood;
  ::ad::rss::map::RssEgoVehicleDynamicsOnRoute rss_routeVehicle_dynamics_on_route;
  std::chrono::system_clock::time_point rss_routeVehicle_dynamics_on_routeLast_update{std::chrono::hours(1)};
  rss_routeVehicle_dynamics_on_route.last_update = rss_routeVehicle_dynamics_on_routeLast_update;
  ::ad::physics::Acceleration rss_routeVehicle_dynamics_on_routeRoute_accel_lon(1e2);
  rss_routeVehicle_dynamics_on_route.route_accel_lon = rss_routeVehicle_dynamics_on_routeRoute_accel_lon;
  ::ad::physics::Acceleration rss_routeVehicle_dynamics_on_routeRoute_accel_lat(1e2);
  rss_routeVehicle_dynamics_on_route.route_accel_lat = rss_routeVehicle_dynamics_on_routeRoute_accel_lat;
  ::ad::physics::Acceleration rss_routeVehicle_dynamics_on_routeAvg_route_accel_lon(1e2);
  rss_routeVehicle_dynamics_on_route.avg_route_accel_lon = rss_routeVehicle_dynamics_on_routeAvg_route_accel_lon;
  ::ad::physics::Acceleration rss_routeVehicle_dynamics_on_routeAvg_route_accel_lat(1e2);
  rss_routeVehicle_dynamics_on_route.avg_route_accel_lat = rss_routeVehicle_dynamics_on_routeAvg_route_accel_lat;
  rss_route.vehicle_dynamics_on_route = rss_routeVehicle_dynamics_on_route;
  ::ad::rss::map::RssRouteId rss_routeParent_route_id(std::numeric_limits<::ad::rss::map::RssRouteId>::max());
  rss_route.parent_route_id = rss_routeParent_route_id;
  ::ad::physics::Distance rss_routeProgress_on_route(1e9);
  rss_route.progress_on_route = rss_routeProgress_on_route;
  ::ad::rss::map::RssObjectDataOnRoute rss_routeObject_data_on_route;
  ::ad::map::point::ENUHeading rss_routeObject_data_on_routeRoute_heading(3.141592655);
  rss_routeObject_data_on_route.route_heading = rss_routeObject_data_on_routeRoute_heading;
  ::ad::physics::Distance rss_routeObject_data_on_routeRoute_radius(1e9);
  rss_routeObject_data_on_route.route_radius = rss_routeObject_data_on_routeRoute_radius;
  ::ad::physics::Angle rss_routeObject_data_on_routeRoute_heading_delta(6.283185308);
  rss_routeObject_data_on_route.route_heading_delta = rss_routeObject_data_on_routeRoute_heading_delta;
  ::ad::physics::Speed rss_routeObject_data_on_routeRoute_speed_lat(100.);
  rss_routeObject_data_on_route.route_speed_lat = rss_routeObject_data_on_routeRoute_speed_lat;
  ::ad::physics::Speed rss_routeObject_data_on_routeRoute_speed_lon(100.);
  rss_routeObject_data_on_route.route_speed_lon = rss_routeObject_data_on_routeRoute_speed_lon;
  bool rss_routeObject_data_on_routeObject_center_within_route{false};
  rss_routeObject_data_on_route.object_center_within_route = rss_routeObject_data_on_routeObject_center_within_route;
  bool rss_routeObject_data_on_routeObject_within_route{false};
  rss_routeObject_data_on_route.object_within_route = rss_routeObject_data_on_routeObject_within_route;
  ::ad::map::point::ENUPoint rss_routeObject_data_on_routeObject_center_position_projected_on_route;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_center_position_projected_on_routeX(1e8);
  rss_routeObject_data_on_routeObject_center_position_projected_on_route.x
    = rss_routeObject_data_on_routeObject_center_position_projected_on_routeX;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_center_position_projected_on_routeY(1e8);
  rss_routeObject_data_on_routeObject_center_position_projected_on_route.y
    = rss_routeObject_data_on_routeObject_center_position_projected_on_routeY;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_center_position_projected_on_routeZ(1e8);
  rss_routeObject_data_on_routeObject_center_position_projected_on_route.z
    = rss_routeObject_data_on_routeObject_center_position_projected_on_routeZ;
  rss_routeObject_data_on_route.object_center_position_projected_on_route
    = rss_routeObject_data_on_routeObject_center_position_projected_on_route;
  bool rss_routeObject_data_on_routeIs_valid{false};
  rss_routeObject_data_on_route.is_valid = rss_routeObject_data_on_routeIs_valid;
  ::ad::physics::Distance rss_routeObject_data_on_routeObject_center_distance_to_route(1e9);
  rss_routeObject_data_on_route.object_center_distance_to_route
    = rss_routeObject_data_on_routeObject_center_distance_to_route;
  ::ad::map::point::ENUPoint
    rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX(1e8);
  rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.x
    = rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY(1e8);
  rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.y
    = rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ(1e8);
  rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction.z
    = rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_directionZ;
  rss_routeObject_data_on_route.object_center_position_projected_on_lane_in_nominal_route_direction
    = rss_routeObject_data_on_routeObject_center_position_projected_on_lane_in_nominal_route_direction;
  ::ad::physics::Distance rss_routeObject_data_on_routeObject_center_distance_along_route(1e9);
  rss_routeObject_data_on_route.object_center_distance_along_route
    = rss_routeObject_data_on_routeObject_center_distance_along_route;
  ::ad::map::point::ENUPoint rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUCoordinate
    rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX(1e8);
  rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.x
    = rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionX;
  ::ad::map::point::ENUCoordinate
    rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY(1e8);
  rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.y
    = rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionY;
  ::ad::map::point::ENUCoordinate
    rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ(1e8);
  rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction.z
    = rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_directionZ;
  rss_routeObject_data_on_route.nominal_center_position_of_lane_in_nominal_route_direction
    = rss_routeObject_data_on_routeNominal_center_position_of_lane_in_nominal_route_direction;
  ::ad::map::point::ENUPoint rss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_front_leftX(1e8);
  rss_routeObject_data_on_routeObject_route_section_front_left.x
    = rss_routeObject_data_on_routeObject_route_section_front_leftX;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_front_leftY(1e8);
  rss_routeObject_data_on_routeObject_route_section_front_left.y
    = rss_routeObject_data_on_routeObject_route_section_front_leftY;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_front_leftZ(1e8);
  rss_routeObject_data_on_routeObject_route_section_front_left.z
    = rss_routeObject_data_on_routeObject_route_section_front_leftZ;
  rss_routeObject_data_on_route.object_route_section_front_left
    = rss_routeObject_data_on_routeObject_route_section_front_left;
  ::ad::map::point::ENUPoint rss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_front_rightX(1e8);
  rss_routeObject_data_on_routeObject_route_section_front_right.x
    = rss_routeObject_data_on_routeObject_route_section_front_rightX;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_front_rightY(1e8);
  rss_routeObject_data_on_routeObject_route_section_front_right.y
    = rss_routeObject_data_on_routeObject_route_section_front_rightY;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_front_rightZ(1e8);
  rss_routeObject_data_on_routeObject_route_section_front_right.z
    = rss_routeObject_data_on_routeObject_route_section_front_rightZ;
  rss_routeObject_data_on_route.object_route_section_front_right
    = rss_routeObject_data_on_routeObject_route_section_front_right;
  ::ad::map::point::ENUPoint rss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_back_leftX(1e8);
  rss_routeObject_data_on_routeObject_route_section_back_left.x
    = rss_routeObject_data_on_routeObject_route_section_back_leftX;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_back_leftY(1e8);
  rss_routeObject_data_on_routeObject_route_section_back_left.y
    = rss_routeObject_data_on_routeObject_route_section_back_leftY;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_back_leftZ(1e8);
  rss_routeObject_data_on_routeObject_route_section_back_left.z
    = rss_routeObject_data_on_routeObject_route_section_back_leftZ;
  rss_routeObject_data_on_route.object_route_section_back_left
    = rss_routeObject_data_on_routeObject_route_section_back_left;
  ::ad::map::point::ENUPoint rss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_back_rightX(1e8);
  rss_routeObject_data_on_routeObject_route_section_back_right.x
    = rss_routeObject_data_on_routeObject_route_section_back_rightX;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_back_rightY(1e8);
  rss_routeObject_data_on_routeObject_route_section_back_right.y
    = rss_routeObject_data_on_routeObject_route_section_back_rightY;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_route_section_back_rightZ(1e8);
  rss_routeObject_data_on_routeObject_route_section_back_right.z
    = rss_routeObject_data_on_routeObject_route_section_back_rightZ;
  rss_routeObject_data_on_route.object_route_section_back_right
    = rss_routeObject_data_on_routeObject_route_section_back_right;
  ::ad::map::point::ENUPoint rss_routeObject_data_on_routeObject_turning_center;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_turning_centerX(1e8);
  rss_routeObject_data_on_routeObject_turning_center.x = rss_routeObject_data_on_routeObject_turning_centerX;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_turning_centerY(1e8);
  rss_routeObject_data_on_routeObject_turning_center.y = rss_routeObject_data_on_routeObject_turning_centerY;
  ::ad::map::point::ENUCoordinate rss_routeObject_data_on_routeObject_turning_centerZ(1e8);
  rss_routeObject_data_on_routeObject_turning_center.z = rss_routeObject_data_on_routeObject_turning_centerZ;
  rss_routeObject_data_on_route.object_turning_center = rss_routeObject_data_on_routeObject_turning_center;
  rss_route.object_data_on_route = rss_routeObject_data_on_route;
  valueA.rss_route = rss_route;
  ::ad::rss::map::RssRouteCheckResult valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultTests, comparisonOperatorIs_validDiffers)
{
  ::ad::rss::map::RssRouteCheckResult valueA = mValue;
  bool is_valid{false};
  valueA.is_valid = is_valid;
  ::ad::rss::map::RssRouteCheckResult valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultTests, comparisonOperatorWorld_modelDiffers)
{
  ::ad::rss::map::RssRouteCheckResult valueA = mValue;
  ::ad::rss::world::WorldModel world_model;
  ::ad::rss::world::TimeIndex world_modelTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  world_model.time_index = world_modelTime_index;
  ::ad::rss::world::RssDynamics world_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(1e2);
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(1e2);
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(1e2);
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  world_modelDefault_ego_vehicle_rss_dynamics.alpha_lon = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration world_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(1e2);
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration world_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(1e2);
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  world_modelDefault_ego_vehicle_rss_dynamics.alpha_lat = world_modelDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance world_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(1e9);
  world_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  world_modelDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = world_modelDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration world_modelDefault_ego_vehicle_rss_dynamicsResponse_time(1e6);
  world_modelDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  world_modelDefault_ego_vehicle_rss_dynamics.response_time = world_modelDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed world_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(100.);
  world_modelDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = world_modelDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
    1e9);
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
    6.283185308);
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  world_modelDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = world_modelDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance world_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  world_modelDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = world_modelDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  world_model.default_ego_vehicle_rss_dynamics = world_modelDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::ConstellationVector world_modelConstellations;
  ::ad::rss::world::Constellation world_modelConstellationsElement;
  ::ad::rss::world::ConstellationType world_modelConstellationsElementConstellation_type(
    ::ad::rss::world::ConstellationType::Unstructured);
  world_modelConstellationsElement.constellation_type = world_modelConstellationsElementConstellation_type;
  ::ad::rss::world::Object world_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::ObjectId world_modelConstellationsElementEgo_vehicleObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  world_modelConstellationsElementEgo_vehicle.object_id = world_modelConstellationsElementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType world_modelConstellationsElementEgo_vehicleObject_type(
    ::ad::rss::world::ObjectType::OtherObject);
  world_modelConstellationsElementEgo_vehicle.object_type = world_modelConstellationsElementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector world_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion world_modelConstellationsElementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId world_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElement.segment_id
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(1.);
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(1.);
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum;
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum;
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lon_range
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(1.);
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(1.);
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum;
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum;
  world_modelConstellationsElementEgo_vehicleOccupied_regionsElement.lat_range
    = world_modelConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  world_modelConstellationsElementEgo_vehicleOccupied_regions.resize(
    0 + 1, world_modelConstellationsElementEgo_vehicleOccupied_regionsElement);
  world_modelConstellationsElementEgo_vehicle.occupied_regions
    = world_modelConstellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity world_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::physics::Speed world_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min(100.);
  world_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = world_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed world_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max(100.);
  world_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = world_modelConstellationsElementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed world_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min(100.);
  world_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = world_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed world_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max(100.);
  world_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = world_modelConstellationsElementEgo_vehicleVelocitySpeed_lat_max;
  world_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max
    = world_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min;
  world_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max
    = world_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min;
  world_modelConstellationsElementEgo_vehicleVelocity.speed_lat_min
    = world_modelConstellationsElementEgo_vehicleVelocity.speed_lat_max;
  world_modelConstellationsElementEgo_vehicleVelocity.speed_lon_min
    = world_modelConstellationsElementEgo_vehicleVelocity.speed_lon_max;
  world_modelConstellationsElementEgo_vehicle.velocity = world_modelConstellationsElementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState world_modelConstellationsElementEgo_vehicleState;
  ::ad::physics::Angle world_modelConstellationsElementEgo_vehicleStateYaw(6.283185308);
  world_modelConstellationsElementEgo_vehicleState.yaw = world_modelConstellationsElementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D world_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicleStateDimensionLength(1e9);
  world_modelConstellationsElementEgo_vehicleStateDimension.length
    = world_modelConstellationsElementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicleStateDimensionWidth(1e9);
  world_modelConstellationsElementEgo_vehicleStateDimension.width
    = world_modelConstellationsElementEgo_vehicleStateDimensionWidth;
  world_modelConstellationsElementEgo_vehicleState.dimension
    = world_modelConstellationsElementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity world_modelConstellationsElementEgo_vehicleStateYaw_rate(100.);
  world_modelConstellationsElementEgo_vehicleState.yaw_rate = world_modelConstellationsElementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D world_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicleStateCenter_pointX(1e9);
  world_modelConstellationsElementEgo_vehicleStateCenter_point.x
    = world_modelConstellationsElementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicleStateCenter_pointY(1e9);
  world_modelConstellationsElementEgo_vehicleStateCenter_point.y
    = world_modelConstellationsElementEgo_vehicleStateCenter_pointY;
  world_modelConstellationsElementEgo_vehicleState.center_point
    = world_modelConstellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange world_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed world_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum(100.);
  world_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = world_modelConstellationsElementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed world_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum(100.);
  world_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = world_modelConstellationsElementEgo_vehicleStateSpeed_rangeMaximum;
  world_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum
    = world_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum;
  world_modelConstellationsElementEgo_vehicleStateSpeed_range.minimum
    = world_modelConstellationsElementEgo_vehicleStateSpeed_range.maximum;
  world_modelConstellationsElementEgo_vehicleState.speed_range
    = world_modelConstellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle world_modelConstellationsElementEgo_vehicleStateSteering_angle(6.283185308);
  world_modelConstellationsElementEgo_vehicleState.steering_angle
    = world_modelConstellationsElementEgo_vehicleStateSteering_angle;
  world_modelConstellationsElementEgo_vehicle.state = world_modelConstellationsElementEgo_vehicleState;
  world_modelConstellationsElement.ego_vehicle = world_modelConstellationsElementEgo_vehicle;
  ::ad::rss::world::RssDynamics world_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(1e2);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(1e2);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(1e2);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  world_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lon
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(1e2);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(1e2);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  world_modelConstellationsElementEgo_vehicle_rss_dynamics.alpha_lat
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(1e9);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  world_modelConstellationsElementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration world_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time(1e6);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  world_modelConstellationsElementEgo_vehicle_rss_dynamics.response_time
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed world_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(100.);
  world_modelConstellationsElementEgo_vehicle_rss_dynamics.max_speed_on_acceleration
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      1e6);
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  world_modelConstellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  world_modelConstellationsElementEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = world_modelConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  world_modelConstellationsElement.ego_vehicle_rss_dynamics = world_modelConstellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object world_modelConstellationsElementObject;
  ::ad::rss::world::ObjectId world_modelConstellationsElementObjectObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  world_modelConstellationsElementObject.object_id = world_modelConstellationsElementObjectObject_id;
  ::ad::rss::world::ObjectType world_modelConstellationsElementObjectObject_type(
    ::ad::rss::world::ObjectType::OtherObject);
  world_modelConstellationsElementObject.object_type = world_modelConstellationsElementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector world_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion world_modelConstellationsElementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId world_modelConstellationsElementObjectOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  world_modelConstellationsElementObjectOccupied_regionsElement.segment_id
    = world_modelConstellationsElementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange world_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue world_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum(1.);
  world_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = world_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue world_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum(1.);
  world_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = world_modelConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
  world_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum
    = world_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum;
  world_modelConstellationsElementObjectOccupied_regionsElementLon_range.minimum
    = world_modelConstellationsElementObjectOccupied_regionsElementLon_range.maximum;
  world_modelConstellationsElementObjectOccupied_regionsElement.lon_range
    = world_modelConstellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange world_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue world_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum(1.);
  world_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = world_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue world_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum(1.);
  world_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = world_modelConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
  world_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum
    = world_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum;
  world_modelConstellationsElementObjectOccupied_regionsElementLat_range.minimum
    = world_modelConstellationsElementObjectOccupied_regionsElementLat_range.maximum;
  world_modelConstellationsElementObjectOccupied_regionsElement.lat_range
    = world_modelConstellationsElementObjectOccupied_regionsElementLat_range;
  world_modelConstellationsElementObjectOccupied_regions.resize(
    0 + 1, world_modelConstellationsElementObjectOccupied_regionsElement);
  world_modelConstellationsElementObject.occupied_regions = world_modelConstellationsElementObjectOccupied_regions;
  ::ad::rss::world::Velocity world_modelConstellationsElementObjectVelocity;
  ::ad::physics::Speed world_modelConstellationsElementObjectVelocitySpeed_lon_min(100.);
  world_modelConstellationsElementObjectVelocity.speed_lon_min
    = world_modelConstellationsElementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed world_modelConstellationsElementObjectVelocitySpeed_lon_max(100.);
  world_modelConstellationsElementObjectVelocity.speed_lon_max
    = world_modelConstellationsElementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed world_modelConstellationsElementObjectVelocitySpeed_lat_min(100.);
  world_modelConstellationsElementObjectVelocity.speed_lat_min
    = world_modelConstellationsElementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed world_modelConstellationsElementObjectVelocitySpeed_lat_max(100.);
  world_modelConstellationsElementObjectVelocity.speed_lat_max
    = world_modelConstellationsElementObjectVelocitySpeed_lat_max;
  world_modelConstellationsElementObjectVelocity.speed_lat_max
    = world_modelConstellationsElementObjectVelocity.speed_lat_min;
  world_modelConstellationsElementObjectVelocity.speed_lon_max
    = world_modelConstellationsElementObjectVelocity.speed_lon_min;
  world_modelConstellationsElementObjectVelocity.speed_lat_min
    = world_modelConstellationsElementObjectVelocity.speed_lat_max;
  world_modelConstellationsElementObjectVelocity.speed_lon_min
    = world_modelConstellationsElementObjectVelocity.speed_lon_max;
  world_modelConstellationsElementObject.velocity = world_modelConstellationsElementObjectVelocity;
  ::ad::rss::world::ObjectState world_modelConstellationsElementObjectState;
  ::ad::physics::Angle world_modelConstellationsElementObjectStateYaw(6.283185308);
  world_modelConstellationsElementObjectState.yaw = world_modelConstellationsElementObjectStateYaw;
  ::ad::physics::Dimension2D world_modelConstellationsElementObjectStateDimension;
  ::ad::physics::Distance world_modelConstellationsElementObjectStateDimensionLength(1e9);
  world_modelConstellationsElementObjectStateDimension.length
    = world_modelConstellationsElementObjectStateDimensionLength;
  ::ad::physics::Distance world_modelConstellationsElementObjectStateDimensionWidth(1e9);
  world_modelConstellationsElementObjectStateDimension.width
    = world_modelConstellationsElementObjectStateDimensionWidth;
  world_modelConstellationsElementObjectState.dimension = world_modelConstellationsElementObjectStateDimension;
  ::ad::physics::AngularVelocity world_modelConstellationsElementObjectStateYaw_rate(100.);
  world_modelConstellationsElementObjectState.yaw_rate = world_modelConstellationsElementObjectStateYaw_rate;
  ::ad::physics::Distance2D world_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::Distance world_modelConstellationsElementObjectStateCenter_pointX(1e9);
  world_modelConstellationsElementObjectStateCenter_point.x = world_modelConstellationsElementObjectStateCenter_pointX;
  ::ad::physics::Distance world_modelConstellationsElementObjectStateCenter_pointY(1e9);
  world_modelConstellationsElementObjectStateCenter_point.y = world_modelConstellationsElementObjectStateCenter_pointY;
  world_modelConstellationsElementObjectState.center_point = world_modelConstellationsElementObjectStateCenter_point;
  ::ad::physics::SpeedRange world_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Speed world_modelConstellationsElementObjectStateSpeed_rangeMinimum(100.);
  world_modelConstellationsElementObjectStateSpeed_range.minimum
    = world_modelConstellationsElementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed world_modelConstellationsElementObjectStateSpeed_rangeMaximum(100.);
  world_modelConstellationsElementObjectStateSpeed_range.maximum
    = world_modelConstellationsElementObjectStateSpeed_rangeMaximum;
  world_modelConstellationsElementObjectStateSpeed_range.maximum
    = world_modelConstellationsElementObjectStateSpeed_range.minimum;
  world_modelConstellationsElementObjectStateSpeed_range.minimum
    = world_modelConstellationsElementObjectStateSpeed_range.maximum;
  world_modelConstellationsElementObjectState.speed_range = world_modelConstellationsElementObjectStateSpeed_range;
  ::ad::physics::Angle world_modelConstellationsElementObjectStateSteering_angle(6.283185308);
  world_modelConstellationsElementObjectState.steering_angle
    = world_modelConstellationsElementObjectStateSteering_angle;
  world_modelConstellationsElementObject.state = world_modelConstellationsElementObjectState;
  world_modelConstellationsElement.object = world_modelConstellationsElementObject;
  ::ad::rss::world::RssDynamics world_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues world_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration world_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max(1e2);
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.accel_max
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration world_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max(1e2);
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration world_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min(1e2);
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration world_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  world_modelConstellationsElementObject_rss_dynamics.alpha_lon
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues world_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration world_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max(1e2);
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lat.accel_max
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration world_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min(1e2);
  world_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  world_modelConstellationsElementObject_rss_dynamicsAlpha_lat.brake_min
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_latBrake_min;
  world_modelConstellationsElementObject_rss_dynamics.alpha_lat
    = world_modelConstellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance world_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin(1e9);
  world_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  world_modelConstellationsElementObject_rss_dynamics.lateral_fluctuation_margin
    = world_modelConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration world_modelConstellationsElementObject_rss_dynamicsResponse_time(1e6);
  world_modelConstellationsElementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  world_modelConstellationsElementObject_rss_dynamics.response_time
    = world_modelConstellationsElementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed world_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration(100.);
  world_modelConstellationsElementObject_rss_dynamics.max_speed_on_acceleration
    = world_modelConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
    6.283185308);
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(
    1e9);
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  world_modelConstellationsElementObject_rss_dynamics.unstructured_settings
    = world_modelConstellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance world_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  world_modelConstellationsElementObject_rss_dynamics.min_longitudinal_safety_distance
    = world_modelConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
  world_modelConstellationsElement.object_rss_dynamics = world_modelConstellationsElementObject_rss_dynamics;
  ::ad::rss::world::RoadArea world_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadSegment world_modelConstellationsElementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType world_modelConstellationsElementIntersecting_roadElementType(
    ::ad::rss::world::RoadSegmentType::Intersection);
  world_modelConstellationsElementIntersecting_roadElement.type
    = world_modelConstellationsElementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector world_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment world_modelConstellationsElementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.id
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Negative);
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.driving_direction
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(
    1e9);
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(
    1e9);
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum;
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum;
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.length
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(1e9);
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(1e9);
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum;
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum;
  world_modelConstellationsElementIntersecting_roadElementLane_segmentsElement.width
    = world_modelConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  world_modelConstellationsElementIntersecting_roadElementLane_segments.resize(
    1 + 1, world_modelConstellationsElementIntersecting_roadElementLane_segmentsElement);
  world_modelConstellationsElementIntersecting_roadElement.lane_segments
    = world_modelConstellationsElementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance
    world_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(1e9);
  world_modelConstellationsElementIntersecting_roadElement.minimum_length_after_intersecting_area
    = world_modelConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    world_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(1e9);
  world_modelConstellationsElementIntersecting_roadElement.minimum_length_before_intersecting_area
    = world_modelConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
  world_modelConstellationsElementIntersecting_road.resize(0 + 1,
                                                           world_modelConstellationsElementIntersecting_roadElement);
  world_modelConstellationsElement.intersecting_road = world_modelConstellationsElementIntersecting_road;
  ::ad::rss::world::RoadArea world_modelConstellationsElementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment world_modelConstellationsElementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType world_modelConstellationsElementEgo_vehicle_roadElementType(
    ::ad::rss::world::RoadSegmentType::Intersection);
  world_modelConstellationsElementEgo_vehicle_roadElement.type
    = world_modelConstellationsElementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector world_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Negative);
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.driving_direction
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(1e9);
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(1e9);
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.length
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(1e9);
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(1e9);
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  world_modelConstellationsElementEgo_vehicle_roadElementLane_segments.resize(
    1 + 1, world_modelConstellationsElementEgo_vehicle_roadElementLane_segmentsElement);
  world_modelConstellationsElementEgo_vehicle_roadElement.lane_segments
    = world_modelConstellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance world_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(
    1e9);
  world_modelConstellationsElementEgo_vehicle_roadElement.minimum_length_after_intersecting_area
    = world_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance
    world_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(1e9);
  world_modelConstellationsElementEgo_vehicle_roadElement.minimum_length_before_intersecting_area
    = world_modelConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  world_modelConstellationsElementEgo_vehicle_road.resize(0 + 1,
                                                          world_modelConstellationsElementEgo_vehicle_roadElement);
  world_modelConstellationsElement.ego_vehicle_road = world_modelConstellationsElementEgo_vehicle_road;
  world_modelConstellations.resize(0 + 1, world_modelConstellationsElement);
  world_model.constellations = world_modelConstellations;
  valueA.world_model = world_model;
  ::ad::rss::map::RssRouteCheckResult valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultTests, comparisonOperatorRss_situation_snapshotDiffers)
{
  ::ad::rss::map::RssRouteCheckResult valueA = mValue;
  ::ad::rss::core::RssSituationSnapshot rss_situation_snapshot;
  ::ad::rss::world::TimeIndex rss_situation_snapshotTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  rss_situation_snapshot.time_index = rss_situation_snapshotTime_index;
  ::ad::rss::world::RssDynamics rss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(1e2);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(1e2);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(1e2);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(1e2);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(1e2);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(1e9);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(1e6);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(100.);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
    6.283185308);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
    1e9);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  rss_situation_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = rss_situation_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  rss_situation_snapshot.default_ego_vehicle_rss_dynamics = rss_situation_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::core::RelativeConstellationVector rss_situation_snapshotConstellations;
  ::ad::rss::core::RelativeConstellation rss_situation_snapshotConstellationsElement;
  ::ad::rss::world::ObjectId rss_situation_snapshotConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  rss_situation_snapshotConstellationsElement.ego_id = rss_situation_snapshotConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId rss_situation_snapshotConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  rss_situation_snapshotConstellationsElement.object_id = rss_situation_snapshotConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId rss_situation_snapshotConstellationsElementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::max());
  rss_situation_snapshotConstellationsElement.constellation_id
    = rss_situation_snapshotConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType rss_situation_snapshotConstellationsElementConstellation_type(
    ::ad::rss::world::ConstellationType::Unstructured);
  rss_situation_snapshotConstellationsElement.constellation_type
    = rss_situation_snapshotConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState rss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType rss_situation_snapshotConstellationsElementEgo_stateObject_type(
    ::ad::rss::world::ObjectType::OtherObject);
  rss_situation_snapshotConstellationsElementEgo_state.object_type
    = rss_situation_snapshotConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics rss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(1e2);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(1e2);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(1e2);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(
    1e2);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max;
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct;
  rss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lon
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(1e2);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(1e2);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  rss_situation_snapshotConstellationsElementEgo_stateDynamics.alpha_lat
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(1e9);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  rss_situation_snapshotConstellationsElementEgo_stateDynamics.lateral_fluctuation_margin
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration rss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time(1e6);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  rss_situation_snapshotConstellationsElementEgo_stateDynamics.response_time
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed rss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(100.);
  rss_situation_snapshotConstellationsElementEgo_stateDynamics.max_speed_on_acceleration
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(1e9);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      1e6);
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  rss_situation_snapshotConstellationsElementEgo_stateDynamics.unstructured_settings
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(
    1e9);
  rss_situation_snapshotConstellationsElementEgo_stateDynamics.min_longitudinal_safety_distance
    = rss_situation_snapshotConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  rss_situation_snapshotConstellationsElementEgo_state.dynamics
    = rss_situation_snapshotConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw(6.283185308);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(
    1e9);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension.length
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(
    1e9);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension.width
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.dimension
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(
    100.);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.yaw_rate
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(
    1e9);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point.x
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(
    1e9);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point.y
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.center_point
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(
    100.);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(
    100.);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum;
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum;
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.speed_range
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(
    6.283185308);
  rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state.steering_angle
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  rss_situation_snapshotConstellationsElementEgo_state.unstructured_object_state
    = rss_situation_snapshotConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(
    100.);
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(
    100.);
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(
    100.);
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(
    100.);
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min;
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min;
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max;
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max;
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.velocity
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority{false};
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.has_priority
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{false};
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.is_in_correct_lane
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(1e9);
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(1e9);
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection;
  rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection;
  rss_situation_snapshotConstellationsElementEgo_state.structured_object_state
    = rss_situation_snapshotConstellationsElementEgo_stateStructured_object_state;
  rss_situation_snapshotConstellationsElement.ego_state = rss_situation_snapshotConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState rss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::world::ObjectType rss_situation_snapshotConstellationsElementOther_stateObject_type(
    ::ad::rss::world::ObjectType::OtherObject);
  rss_situation_snapshotConstellationsElementOther_state.object_type
    = rss_situation_snapshotConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics rss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(1e2);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(1e2);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(1e2);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(
    1e2);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max;
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct;
  rss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lon
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues
    rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max(1e2);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min(1e2);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  rss_situation_snapshotConstellationsElementOther_stateDynamics.alpha_lat
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(1e9);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  rss_situation_snapshotConstellationsElementOther_stateDynamics.lateral_fluctuation_margin
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration rss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time(1e6);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  rss_situation_snapshotConstellationsElementOther_stateDynamics.response_time
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed rss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(100.);
  rss_situation_snapshotConstellationsElementOther_stateDynamics.max_speed_on_acceleration
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
      6.283185308);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(1e9);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
      1e6);
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_trajectory_calculation_step
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_brake_intermediate_acceleration_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  rss_situation_snapshotConstellationsElementOther_stateDynamics.unstructured_settings
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(1e9);
  rss_situation_snapshotConstellationsElementOther_stateDynamics.min_longitudinal_safety_distance
    = rss_situation_snapshotConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  rss_situation_snapshotConstellationsElementOther_state.dynamics
    = rss_situation_snapshotConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw(6.283185308);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength(1e9);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension.length
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(
    1e9);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension.width
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.dimension
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity
    rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate(100.);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.yaw_rate
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(
    1e9);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point.x
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(
    1e9);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point.y
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.center_point
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed
    rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(100.);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed
    rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(100.);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum;
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum;
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.speed_range
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle(
    6.283185308);
  rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state.steering_angle
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  rss_situation_snapshotConstellationsElementOther_state.unstructured_object_state
    = rss_situation_snapshotConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState rss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed
    rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(100.);
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed
    rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(100.);
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed
    rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(100.);
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed
    rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(100.);
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min;
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min;
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max;
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max;
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.velocity
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateVelocity;
  bool rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority{false};
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.has_priority
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{false};
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.is_in_correct_lane
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(1e9);
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance
    rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(1e9);
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection;
  rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection;
  rss_situation_snapshotConstellationsElementOther_state.structured_object_state
    = rss_situation_snapshotConstellationsElementOther_stateStructured_object_state;
  rss_situation_snapshotConstellationsElement.other_state = rss_situation_snapshotConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition rss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition
    rss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position(
      ::ad::rss::core::LongitudinalRelativePosition::AtBack);
  rss_situation_snapshotConstellationsElementRelative_position.longitudinal_position
    = rss_situation_snapshotConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance(1e9);
  rss_situation_snapshotConstellationsElementRelative_position.longitudinal_distance
    = rss_situation_snapshotConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition rss_situation_snapshotConstellationsElementRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtRight);
  rss_situation_snapshotConstellationsElementRelative_position.lateral_position
    = rss_situation_snapshotConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance rss_situation_snapshotConstellationsElementRelative_positionLateral_distance(1e9);
  rss_situation_snapshotConstellationsElementRelative_position.lateral_distance
    = rss_situation_snapshotConstellationsElementRelative_positionLateral_distance;
  rss_situation_snapshotConstellationsElement.relative_position
    = rss_situation_snapshotConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector rss_situation_snapshotConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex rss_situation_snapshotConstellationsElementWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::max());
  rss_situation_snapshotConstellationsElementWorld_model_indices.resize(
    2, rss_situation_snapshotConstellationsElementWorld_model_indicesElement);
  rss_situation_snapshotConstellationsElement.world_model_indices
    = rss_situation_snapshotConstellationsElementWorld_model_indices;
  rss_situation_snapshotConstellations.resize(0 + 1, rss_situation_snapshotConstellationsElement);
  rss_situation_snapshot.constellations = rss_situation_snapshotConstellations;
  valueA.rss_situation_snapshot = rss_situation_snapshot;
  ::ad::rss::map::RssRouteCheckResult valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultTests, comparisonOperatorRss_state_snapshotDiffers)
{
  ::ad::rss::map::RssRouteCheckResult valueA = mValue;
  ::ad::rss::state::RssStateSnapshot rss_state_snapshot;
  ::ad::rss::world::TimeIndex rss_state_snapshotTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  rss_state_snapshot.time_index = rss_state_snapshotTime_index;
  ::ad::rss::world::RssDynamics rss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(1e2);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(1e2);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(1e2);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  rss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lon
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(1e2);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(1e2);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  rss_state_snapshotDefault_ego_vehicle_rss_dynamics.alpha_lat
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance rss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(1e9);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  rss_state_snapshotDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration rss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time(1e6);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  rss_state_snapshotDefault_ego_vehicle_rss_dynamics.response_time
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed rss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(100.);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
    6.283185308);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
    1e9);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_brake_intermediate_acceleration_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  rss_state_snapshotDefault_ego_vehicle_rss_dynamics.unstructured_settings
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance rss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  rss_state_snapshotDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = rss_state_snapshotDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  rss_state_snapshot.default_ego_vehicle_rss_dynamics = rss_state_snapshotDefault_ego_vehicle_rss_dynamics;
  ::ad::rss::state::RssStateVector rss_state_snapshotIndividual_responses;
  ::ad::rss::state::RssState rss_state_snapshotIndividual_responsesElement;
  ::ad::rss::world::ObjectId rss_state_snapshotIndividual_responsesElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  rss_state_snapshotIndividual_responsesElement.ego_id = rss_state_snapshotIndividual_responsesElementEgo_id;
  ::ad::rss::world::ObjectId rss_state_snapshotIndividual_responsesElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  rss_state_snapshotIndividual_responsesElement.object_id = rss_state_snapshotIndividual_responsesElementObject_id;
  ::ad::rss::core::RelativeConstellationId rss_state_snapshotIndividual_responsesElementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::max());
  rss_state_snapshotIndividual_responsesElement.constellation_id
    = rss_state_snapshotIndividual_responsesElementConstellation_id;
  ::ad::rss::state::LongitudinalRssState rss_state_snapshotIndividual_responsesElementLongitudinal_state;
  bool rss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe{false};
  rss_state_snapshotIndividual_responsesElementLongitudinal_state.is_safe
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse rss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse(
    ::ad::rss::state::LongitudinalResponse::BrakeMin);
  rss_state_snapshotIndividual_responsesElementLongitudinal_state.response
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max(1e2);
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.accel_max
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max(1e2);
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min(1e2);
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(
    1e2);
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max;
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct;
  rss_state_snapshotIndividual_responsesElementLongitudinal_state.alpha_lon
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation
    rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(1e9);
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.safe_distance
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(1e9);
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.current_distance
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information.evaluator
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
  rss_state_snapshotIndividual_responsesElementLongitudinal_state.rss_state_information
    = rss_state_snapshotIndividual_responsesElementLongitudinal_stateRss_state_information;
  rss_state_snapshotIndividual_responsesElement.longitudinal_state
    = rss_state_snapshotIndividual_responsesElementLongitudinal_state;
  ::ad::rss::state::LateralRssState rss_state_snapshotIndividual_responsesElementLateral_state_right;
  bool rss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe{false};
  rss_state_snapshotIndividual_responsesElementLateral_state_right.is_safe
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse rss_state_snapshotIndividual_responsesElementLateral_state_rightResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  rss_state_snapshotIndividual_responsesElementLateral_state_right.response
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max(1e2);
  rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.accel_max
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min(1e2);
  rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat.brake_min
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_latBrake_min;
  rss_state_snapshotIndividual_responsesElementLateral_state_right.alpha_lat
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation
    rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance(1e9);
  rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.safe_distance
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(1e9);
  rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.current_distance
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information.evaluator
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator;
  rss_state_snapshotIndividual_responsesElementLateral_state_right.rss_state_information
    = rss_state_snapshotIndividual_responsesElementLateral_state_rightRss_state_information;
  rss_state_snapshotIndividual_responsesElement.lateral_state_right
    = rss_state_snapshotIndividual_responsesElementLateral_state_right;
  ::ad::rss::state::LateralRssState rss_state_snapshotIndividual_responsesElementLateral_state_left;
  bool rss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe{false};
  rss_state_snapshotIndividual_responsesElementLateral_state_left.is_safe
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse rss_state_snapshotIndividual_responsesElementLateral_state_leftResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  rss_state_snapshotIndividual_responsesElementLateral_state_left.response
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues
    rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max(1e2);
  rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.accel_max
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min(1e2);
  rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat.brake_min
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_latBrake_min;
  rss_state_snapshotIndividual_responsesElementLateral_state_left.alpha_lat
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation
    rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance(1e9);
  rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.safe_distance
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(1e9);
  rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.current_distance
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator
    rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator(
      ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information.evaluator
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator;
  rss_state_snapshotIndividual_responsesElementLateral_state_left.rss_state_information
    = rss_state_snapshotIndividual_responsesElementLateral_state_leftRss_state_information;
  rss_state_snapshotIndividual_responsesElement.lateral_state_left
    = rss_state_snapshotIndividual_responsesElementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  bool rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe{false};
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.is_safe
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse(
      ::ad::rss::state::UnstructuredConstellationResponse::Brake);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.response
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(
    6.283185308);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range.begin
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(
    6.283185308);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range.end
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.heading_range
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
      1e9);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .x
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
      1e9);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement
    .y
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set
    .resize(
      2,
      rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .brake_trajectory_set
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
      1e9);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .x
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
      1e9);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .y
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set
    .resize(
      2,
      rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .continue_forward_trajectory_set
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
      6.283185308);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information
    .considered_drive_away_steering_angle
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.rss_state_information
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(1e2);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.accel_max
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(1e2);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(1e2);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration
    rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(1e2);
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  rss_state_snapshotIndividual_responsesElementUnstructured_constellation_state.alpha_lon
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
  rss_state_snapshotIndividual_responsesElement.unstructured_constellation_state
    = rss_state_snapshotIndividual_responsesElementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType rss_state_snapshotIndividual_responsesElementConstellation_type(
    ::ad::rss::world::ConstellationType::Unstructured);
  rss_state_snapshotIndividual_responsesElement.constellation_type
    = rss_state_snapshotIndividual_responsesElementConstellation_type;
  rss_state_snapshotIndividual_responses.resize(0 + 1, rss_state_snapshotIndividual_responsesElement);
  rss_state_snapshot.individual_responses = rss_state_snapshotIndividual_responses;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    rss_state_snapshotUnstructured_constellation_ego_information;
  ::ad::physics::Distance2DList rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2D rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement;
  ::ad::physics::Distance rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX(1e9);
  rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement.x
    = rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY(1e9);
  rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement.y
    = rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElementY;
  rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set.resize(
    2, rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_setElement);
  rss_state_snapshotUnstructured_constellation_ego_information.brake_trajectory_set
    = rss_state_snapshotUnstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(1e9);
  rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement.x
    = rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(1e9);
  rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement.y
    = rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
  rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set.resize(
    2, rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
  rss_state_snapshotUnstructured_constellation_ego_information.continue_forward_trajectory_set
    = rss_state_snapshotUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle rss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle(
    6.283185308);
  rss_state_snapshotUnstructured_constellation_ego_information.considered_drive_away_steering_angle
    = rss_state_snapshotUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
  rss_state_snapshot.unstructured_constellation_ego_information
    = rss_state_snapshotUnstructured_constellation_ego_information;
  valueA.rss_state_snapshot = rss_state_snapshot;
  ::ad::rss::map::RssRouteCheckResult valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultTests, comparisonOperatorProper_responseDiffers)
{
  ::ad::rss::map::RssRouteCheckResult valueA = mValue;
  ::ad::rss::state::ProperResponse proper_response;
  ::ad::rss::world::TimeIndex proper_responseTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  proper_response.time_index = proper_responseTime_index;
  bool proper_responseIs_safe{false};
  proper_response.is_safe = proper_responseIs_safe;
  ::ad::rss::world::ObjectIdVector proper_responseDangerous_objects;
  ::ad::rss::world::ObjectId proper_responseDangerous_objectsElement(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  proper_responseDangerous_objects.resize(0 + 1, proper_responseDangerous_objectsElement);
  proper_response.dangerous_objects = proper_responseDangerous_objects;
  ::ad::rss::state::LongitudinalResponse proper_responseLongitudinal_response(
    ::ad::rss::state::LongitudinalResponse::BrakeMin);
  proper_response.longitudinal_response = proper_responseLongitudinal_response;
  ::ad::rss::state::LateralResponse proper_responseLateral_response_right(::ad::rss::state::LateralResponse::BrakeMin);
  proper_response.lateral_response_right = proper_responseLateral_response_right;
  ::ad::rss::state::LateralResponse proper_responseLateral_response_left(::ad::rss::state::LateralResponse::BrakeMin);
  proper_response.lateral_response_left = proper_responseLateral_response_left;
  ::ad::geometry::HeadingRangeVector proper_responseHeading_ranges;
  ::ad::geometry::HeadingRange proper_responseHeading_rangesElement;
  ::ad::physics::Angle proper_responseHeading_rangesElementBegin(6.283185308);
  proper_responseHeading_rangesElement.begin = proper_responseHeading_rangesElementBegin;
  ::ad::physics::Angle proper_responseHeading_rangesElementEnd(6.283185308);
  proper_responseHeading_rangesElement.end = proper_responseHeading_rangesElementEnd;
  proper_responseHeading_ranges.resize(2, proper_responseHeading_rangesElement);
  proper_response.heading_ranges = proper_responseHeading_ranges;
  ::ad::rss::state::AccelerationRestriction proper_responseAcceleration_restrictions;
  ::ad::physics::AccelerationRange proper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::Acceleration proper_responseAcceleration_restrictionsLateral_left_rangeMinimum(1e2);
  proper_responseAcceleration_restrictionsLateral_left_range.minimum
    = proper_responseAcceleration_restrictionsLateral_left_rangeMinimum;
  ::ad::physics::Acceleration proper_responseAcceleration_restrictionsLateral_left_rangeMaximum(1e2);
  proper_responseAcceleration_restrictionsLateral_left_range.maximum
    = proper_responseAcceleration_restrictionsLateral_left_rangeMaximum;
  proper_responseAcceleration_restrictionsLateral_left_range.maximum
    = proper_responseAcceleration_restrictionsLateral_left_range.minimum;
  proper_responseAcceleration_restrictionsLateral_left_range.minimum
    = proper_responseAcceleration_restrictionsLateral_left_range.maximum;
  proper_responseAcceleration_restrictions.lateral_left_range
    = proper_responseAcceleration_restrictionsLateral_left_range;
  ::ad::physics::AccelerationRange proper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::Acceleration proper_responseAcceleration_restrictionsLongitudinal_rangeMinimum(1e2);
  proper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = proper_responseAcceleration_restrictionsLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration proper_responseAcceleration_restrictionsLongitudinal_rangeMaximum(1e2);
  proper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = proper_responseAcceleration_restrictionsLongitudinal_rangeMaximum;
  proper_responseAcceleration_restrictionsLongitudinal_range.maximum
    = proper_responseAcceleration_restrictionsLongitudinal_range.minimum;
  proper_responseAcceleration_restrictionsLongitudinal_range.minimum
    = proper_responseAcceleration_restrictionsLongitudinal_range.maximum;
  proper_responseAcceleration_restrictions.longitudinal_range
    = proper_responseAcceleration_restrictionsLongitudinal_range;
  ::ad::physics::AccelerationRange proper_responseAcceleration_restrictionsLateral_right_range;
  ::ad::physics::Acceleration proper_responseAcceleration_restrictionsLateral_right_rangeMinimum(1e2);
  proper_responseAcceleration_restrictionsLateral_right_range.minimum
    = proper_responseAcceleration_restrictionsLateral_right_rangeMinimum;
  ::ad::physics::Acceleration proper_responseAcceleration_restrictionsLateral_right_rangeMaximum(1e2);
  proper_responseAcceleration_restrictionsLateral_right_range.maximum
    = proper_responseAcceleration_restrictionsLateral_right_rangeMaximum;
  proper_responseAcceleration_restrictionsLateral_right_range.maximum
    = proper_responseAcceleration_restrictionsLateral_right_range.minimum;
  proper_responseAcceleration_restrictionsLateral_right_range.minimum
    = proper_responseAcceleration_restrictionsLateral_right_range.maximum;
  proper_responseAcceleration_restrictions.lateral_right_range
    = proper_responseAcceleration_restrictionsLateral_right_range;
  proper_response.acceleration_restrictions = proper_responseAcceleration_restrictions;
  ::ad::rss::state::UnstructuredConstellationResponse proper_responseUnstructured_constellation_response(
    ::ad::rss::state::UnstructuredConstellationResponse::Brake);
  proper_response.unstructured_constellation_response = proper_responseUnstructured_constellation_response;
  valueA.proper_response = proper_response;
  ::ad::rss::map::RssRouteCheckResult valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultTests, comparisonOperatorResult_analysisDiffers)
{
  ::ad::rss::map::RssRouteCheckResult valueA = mValue;
  ::ad::rss::map::RssRouteCheckResultAnalysis result_analysis;
  bool result_analysisDangerous_state{false};
  result_analysis.dangerous_state = result_analysisDangerous_state;
  bool result_analysisDangerous_vehicle{false};
  result_analysis.dangerous_vehicle = result_analysisDangerous_vehicle;
  bool result_analysisDangerous_opposite_state{false};
  result_analysis.dangerous_opposite_state = result_analysisDangerous_opposite_state;
  bool result_analysisVehicle_crossing_road_boundaries{false};
  result_analysis.vehicle_crossing_road_boundaries = result_analysisVehicle_crossing_road_boundaries;
  valueA.result_analysis = result_analysis;
  ::ad::rss::map::RssRouteCheckResult valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
