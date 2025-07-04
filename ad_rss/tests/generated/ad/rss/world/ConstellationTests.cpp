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
#include "ad/rss/world/Constellation.hpp"

class ConstellationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::Constellation value;
    ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
    value.constellation_type = valueConstellation_type;
    ::ad::rss::world::Object valueEgo_vehicle;
    ::ad::rss::world::ObjectId valueEgo_vehicleObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueEgo_vehicle.object_id = valueEgo_vehicleObject_id;
    ::ad::rss::world::ObjectType valueEgo_vehicleObject_type(::ad::rss::world::ObjectType::Invalid);
    valueEgo_vehicle.object_type = valueEgo_vehicleObject_type;
    ::ad::rss::world::OccupiedRegionVector valueEgo_vehicleOccupied_regions;
    ::ad::rss::world::OccupiedRegion valueEgo_vehicleOccupied_regionsElement;
    ::ad::rss::world::LaneSegmentId valueEgo_vehicleOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueEgo_vehicleOccupied_regionsElement.segment_id = valueEgo_vehicleOccupied_regionsElementSegment_id;
    ::ad::physics::ParametricRange valueEgo_vehicleOccupied_regionsElementLon_range;
    ::ad::physics::ParametricValue valueEgo_vehicleOccupied_regionsElementLon_rangeMinimum(0.);
    valueEgo_vehicleOccupied_regionsElementLon_range.minimum = valueEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
    ::ad::physics::ParametricValue valueEgo_vehicleOccupied_regionsElementLon_rangeMaximum(0.);
    valueEgo_vehicleOccupied_regionsElementLon_range.maximum = valueEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
    valueEgo_vehicleOccupied_regionsElementLon_range.maximum = valueEgo_vehicleOccupied_regionsElementLon_range.minimum;
    valueEgo_vehicleOccupied_regionsElementLon_range.minimum = valueEgo_vehicleOccupied_regionsElementLon_range.maximum;
    valueEgo_vehicleOccupied_regionsElement.lon_range = valueEgo_vehicleOccupied_regionsElementLon_range;
    ::ad::physics::ParametricRange valueEgo_vehicleOccupied_regionsElementLat_range;
    ::ad::physics::ParametricValue valueEgo_vehicleOccupied_regionsElementLat_rangeMinimum(0.);
    valueEgo_vehicleOccupied_regionsElementLat_range.minimum = valueEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
    ::ad::physics::ParametricValue valueEgo_vehicleOccupied_regionsElementLat_rangeMaximum(0.);
    valueEgo_vehicleOccupied_regionsElementLat_range.maximum = valueEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
    valueEgo_vehicleOccupied_regionsElementLat_range.maximum = valueEgo_vehicleOccupied_regionsElementLat_range.minimum;
    valueEgo_vehicleOccupied_regionsElementLat_range.minimum = valueEgo_vehicleOccupied_regionsElementLat_range.maximum;
    valueEgo_vehicleOccupied_regionsElement.lat_range = valueEgo_vehicleOccupied_regionsElementLat_range;
    valueEgo_vehicleOccupied_regions.resize(1, valueEgo_vehicleOccupied_regionsElement);
    valueEgo_vehicle.occupied_regions = valueEgo_vehicleOccupied_regions;
    ::ad::rss::world::Velocity valueEgo_vehicleVelocity;
    ::ad::physics::Speed valueEgo_vehicleVelocitySpeed_lon_min(-100.);
    valueEgo_vehicleVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
    valueEgo_vehicleVelocity.speed_lon_min = valueEgo_vehicleVelocitySpeed_lon_min;
    ::ad::physics::Speed valueEgo_vehicleVelocitySpeed_lon_max(-100.);
    valueEgo_vehicleVelocity.speed_lon_max = valueEgo_vehicleVelocitySpeed_lon_max;
    ::ad::physics::Speed valueEgo_vehicleVelocitySpeed_lat_min(-100.);
    valueEgo_vehicleVelocity.speed_lat_min = valueEgo_vehicleVelocitySpeed_lat_min;
    ::ad::physics::Speed valueEgo_vehicleVelocitySpeed_lat_max(-100.);
    valueEgo_vehicleVelocity.speed_lat_max = valueEgo_vehicleVelocitySpeed_lat_max;
    valueEgo_vehicleVelocity.speed_lon_max = valueEgo_vehicleVelocity.speed_lon_min;
    valueEgo_vehicleVelocity.speed_lat_max = valueEgo_vehicleVelocity.speed_lat_min;
    valueEgo_vehicleVelocity.speed_lon_min = valueEgo_vehicleVelocity.speed_lon_max;
    valueEgo_vehicleVelocity.speed_lat_min = valueEgo_vehicleVelocity.speed_lat_max;
    valueEgo_vehicle.velocity = valueEgo_vehicleVelocity;
    ::ad::rss::world::ObjectState valueEgo_vehicleState;
    ::ad::physics::Angle valueEgo_vehicleStateYaw(-6.283185308);
    valueEgo_vehicleState.yaw = valueEgo_vehicleStateYaw;
    ::ad::physics::Dimension2D valueEgo_vehicleStateDimension;
    ::ad::physics::Distance valueEgo_vehicleStateDimensionLength(-1e9);
    valueEgo_vehicleStateDimension.length = valueEgo_vehicleStateDimensionLength;
    ::ad::physics::Distance valueEgo_vehicleStateDimensionWidth(-1e9);
    valueEgo_vehicleStateDimension.width = valueEgo_vehicleStateDimensionWidth;
    valueEgo_vehicleState.dimension = valueEgo_vehicleStateDimension;
    ::ad::physics::AngularVelocity valueEgo_vehicleStateYaw_rate(-100.);
    valueEgo_vehicleState.yaw_rate = valueEgo_vehicleStateYaw_rate;
    ::ad::physics::Distance2D valueEgo_vehicleStateCenter_point;
    ::ad::physics::Distance valueEgo_vehicleStateCenter_pointX(-1e9);
    valueEgo_vehicleStateCenter_point.x = valueEgo_vehicleStateCenter_pointX;
    ::ad::physics::Distance valueEgo_vehicleStateCenter_pointY(-1e9);
    valueEgo_vehicleStateCenter_point.y = valueEgo_vehicleStateCenter_pointY;
    valueEgo_vehicleState.center_point = valueEgo_vehicleStateCenter_point;
    ::ad::physics::SpeedRange valueEgo_vehicleStateSpeed_range;
    ::ad::physics::Speed valueEgo_vehicleStateSpeed_rangeMinimum(-100.);
    valueEgo_vehicleStateSpeed_range.minimum = valueEgo_vehicleStateSpeed_rangeMinimum;
    ::ad::physics::Speed valueEgo_vehicleStateSpeed_rangeMaximum(-100.);
    valueEgo_vehicleStateSpeed_range.maximum = valueEgo_vehicleStateSpeed_rangeMaximum;
    valueEgo_vehicleStateSpeed_range.maximum = valueEgo_vehicleStateSpeed_range.minimum;
    valueEgo_vehicleStateSpeed_range.minimum = valueEgo_vehicleStateSpeed_range.maximum;
    valueEgo_vehicleState.speed_range = valueEgo_vehicleStateSpeed_range;
    ::ad::physics::Angle valueEgo_vehicleStateSteering_angle(-6.283185308);
    valueEgo_vehicleState.steering_angle = valueEgo_vehicleStateSteering_angle;
    valueEgo_vehicle.state = valueEgo_vehicleState;
    value.ego_vehicle = valueEgo_vehicle;
    ::ad::rss::world::RssDynamics valueEgo_vehicle_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgo_vehicle_rss_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
    valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
    valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
    valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
    valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueEgo_vehicle_rss_dynamics.alpha_lon = valueEgo_vehicle_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueEgo_vehicle_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgo_vehicle_rss_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueEgo_vehicle_rss_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
    valueEgo_vehicle_rss_dynamics.alpha_lat = valueEgo_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueEgo_vehicle_rss_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueEgo_vehicle_rss_dynamicsResponse_time(0.);
    valueEgo_vehicle_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgo_vehicle_rss_dynamics.response_time = valueEgo_vehicle_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueEgo_vehicle_rss_dynamics.max_speed_on_acceleration = valueEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle valueEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    valueEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
      = valueEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueEgo_vehicle_rss_dynamics.unstructured_settings = valueEgo_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
    valueEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
      = valueEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
    value.ego_vehicle_rss_dynamics = valueEgo_vehicle_rss_dynamics;
    ::ad::rss::world::Object valueObject;
    ::ad::rss::world::ObjectId valueObjectObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueObject.object_id = valueObjectObject_id;
    ::ad::rss::world::ObjectType valueObjectObject_type(::ad::rss::world::ObjectType::Invalid);
    valueObject.object_type = valueObjectObject_type;
    ::ad::rss::world::OccupiedRegionVector valueObjectOccupied_regions;
    ::ad::rss::world::OccupiedRegion valueObjectOccupied_regionsElement;
    ::ad::rss::world::LaneSegmentId valueObjectOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueObjectOccupied_regionsElement.segment_id = valueObjectOccupied_regionsElementSegment_id;
    ::ad::physics::ParametricRange valueObjectOccupied_regionsElementLon_range;
    ::ad::physics::ParametricValue valueObjectOccupied_regionsElementLon_rangeMinimum(0.);
    valueObjectOccupied_regionsElementLon_range.minimum = valueObjectOccupied_regionsElementLon_rangeMinimum;
    ::ad::physics::ParametricValue valueObjectOccupied_regionsElementLon_rangeMaximum(0.);
    valueObjectOccupied_regionsElementLon_range.maximum = valueObjectOccupied_regionsElementLon_rangeMaximum;
    valueObjectOccupied_regionsElementLon_range.maximum = valueObjectOccupied_regionsElementLon_range.minimum;
    valueObjectOccupied_regionsElementLon_range.minimum = valueObjectOccupied_regionsElementLon_range.maximum;
    valueObjectOccupied_regionsElement.lon_range = valueObjectOccupied_regionsElementLon_range;
    ::ad::physics::ParametricRange valueObjectOccupied_regionsElementLat_range;
    ::ad::physics::ParametricValue valueObjectOccupied_regionsElementLat_rangeMinimum(0.);
    valueObjectOccupied_regionsElementLat_range.minimum = valueObjectOccupied_regionsElementLat_rangeMinimum;
    ::ad::physics::ParametricValue valueObjectOccupied_regionsElementLat_rangeMaximum(0.);
    valueObjectOccupied_regionsElementLat_range.maximum = valueObjectOccupied_regionsElementLat_rangeMaximum;
    valueObjectOccupied_regionsElementLat_range.maximum = valueObjectOccupied_regionsElementLat_range.minimum;
    valueObjectOccupied_regionsElementLat_range.minimum = valueObjectOccupied_regionsElementLat_range.maximum;
    valueObjectOccupied_regionsElement.lat_range = valueObjectOccupied_regionsElementLat_range;
    valueObjectOccupied_regions.resize(1, valueObjectOccupied_regionsElement);
    valueObject.occupied_regions = valueObjectOccupied_regions;
    ::ad::rss::world::Velocity valueObjectVelocity;
    ::ad::physics::Speed valueObjectVelocitySpeed_lon_min(-100.);
    valueObjectVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
    valueObjectVelocity.speed_lon_min = valueObjectVelocitySpeed_lon_min;
    ::ad::physics::Speed valueObjectVelocitySpeed_lon_max(-100.);
    valueObjectVelocity.speed_lon_max = valueObjectVelocitySpeed_lon_max;
    ::ad::physics::Speed valueObjectVelocitySpeed_lat_min(-100.);
    valueObjectVelocity.speed_lat_min = valueObjectVelocitySpeed_lat_min;
    ::ad::physics::Speed valueObjectVelocitySpeed_lat_max(-100.);
    valueObjectVelocity.speed_lat_max = valueObjectVelocitySpeed_lat_max;
    valueObjectVelocity.speed_lon_max = valueObjectVelocity.speed_lon_min;
    valueObjectVelocity.speed_lat_max = valueObjectVelocity.speed_lat_min;
    valueObjectVelocity.speed_lon_min = valueObjectVelocity.speed_lon_max;
    valueObjectVelocity.speed_lat_min = valueObjectVelocity.speed_lat_max;
    valueObject.velocity = valueObjectVelocity;
    ::ad::rss::world::ObjectState valueObjectState;
    ::ad::physics::Angle valueObjectStateYaw(-6.283185308);
    valueObjectState.yaw = valueObjectStateYaw;
    ::ad::physics::Dimension2D valueObjectStateDimension;
    ::ad::physics::Distance valueObjectStateDimensionLength(-1e9);
    valueObjectStateDimension.length = valueObjectStateDimensionLength;
    ::ad::physics::Distance valueObjectStateDimensionWidth(-1e9);
    valueObjectStateDimension.width = valueObjectStateDimensionWidth;
    valueObjectState.dimension = valueObjectStateDimension;
    ::ad::physics::AngularVelocity valueObjectStateYaw_rate(-100.);
    valueObjectState.yaw_rate = valueObjectStateYaw_rate;
    ::ad::physics::Distance2D valueObjectStateCenter_point;
    ::ad::physics::Distance valueObjectStateCenter_pointX(-1e9);
    valueObjectStateCenter_point.x = valueObjectStateCenter_pointX;
    ::ad::physics::Distance valueObjectStateCenter_pointY(-1e9);
    valueObjectStateCenter_point.y = valueObjectStateCenter_pointY;
    valueObjectState.center_point = valueObjectStateCenter_point;
    ::ad::physics::SpeedRange valueObjectStateSpeed_range;
    ::ad::physics::Speed valueObjectStateSpeed_rangeMinimum(-100.);
    valueObjectStateSpeed_range.minimum = valueObjectStateSpeed_rangeMinimum;
    ::ad::physics::Speed valueObjectStateSpeed_rangeMaximum(-100.);
    valueObjectStateSpeed_range.maximum = valueObjectStateSpeed_rangeMaximum;
    valueObjectStateSpeed_range.maximum = valueObjectStateSpeed_range.minimum;
    valueObjectStateSpeed_range.minimum = valueObjectStateSpeed_range.maximum;
    valueObjectState.speed_range = valueObjectStateSpeed_range;
    ::ad::physics::Angle valueObjectStateSteering_angle(-6.283185308);
    valueObjectState.steering_angle = valueObjectStateSteering_angle;
    valueObject.state = valueObjectState;
    value.object = valueObject;
    ::ad::rss::world::RssDynamics valueObject_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueObject_rss_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueObject_rss_dynamicsAlpha_lon.accel_max = valueObject_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueObject_rss_dynamicsAlpha_lon.brake_max = valueObject_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueObject_rss_dynamicsAlpha_lon.brake_min = valueObject_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueObject_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
    valueObject_rss_dynamicsAlpha_lon.brake_min_correct = valueObject_rss_dynamicsAlpha_lonBrake_min_correct;
    valueObject_rss_dynamicsAlpha_lon.brake_min = valueObject_rss_dynamicsAlpha_lon.brake_max;
    valueObject_rss_dynamicsAlpha_lon.brake_min_correct = valueObject_rss_dynamicsAlpha_lon.brake_min;
    valueObject_rss_dynamicsAlpha_lon.brake_min = valueObject_rss_dynamicsAlpha_lon.brake_min_correct;
    valueObject_rss_dynamicsAlpha_lon.brake_max = valueObject_rss_dynamicsAlpha_lon.brake_min;
    valueObject_rss_dynamics.alpha_lon = valueObject_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueObject_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueObject_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueObject_rss_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueObject_rss_dynamicsAlpha_lat.accel_max = valueObject_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueObject_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueObject_rss_dynamicsAlpha_lat.brake_min = valueObject_rss_dynamicsAlpha_latBrake_min;
    valueObject_rss_dynamics.alpha_lat = valueObject_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueObject_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueObject_rss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
    valueObject_rss_dynamics.lateral_fluctuation_margin = valueObject_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueObject_rss_dynamicsResponse_time(0.);
    valueObject_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueObject_rss_dynamics.response_time = valueObject_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueObject_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueObject_rss_dynamics.max_speed_on_acceleration = valueObject_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings valueObject_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle valueObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
    valueObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration valueObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance valueObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration valueObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
    valueObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t valueObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valueObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valueObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
      = valueObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t valueObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
      = valueObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t valueObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
      = valueObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t valueObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
      = valueObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t valueObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
      = valueObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t valueObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    valueObject_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
      = valueObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueObject_rss_dynamics.unstructured_settings = valueObject_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueObject_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
    valueObject_rss_dynamics.min_longitudinal_safety_distance
      = valueObject_rss_dynamicsMin_longitudinal_safety_distance;
    value.object_rss_dynamics = valueObject_rss_dynamics;
    ::ad::rss::world::RoadArea valueIntersecting_road;
    ::ad::rss::world::RoadSegment valueIntersecting_roadElement;
    ::ad::rss::world::RoadSegmentType valueIntersecting_roadElementType(::ad::rss::world::RoadSegmentType::Normal);
    valueIntersecting_roadElement.type = valueIntersecting_roadElementType;
    ::ad::rss::world::LaneSegmentVector valueIntersecting_roadElementLane_segments;
    ::ad::rss::world::LaneSegment valueIntersecting_roadElementLane_segmentsElement;
    ::ad::rss::world::LaneSegmentId valueIntersecting_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueIntersecting_roadElementLane_segmentsElement.id = valueIntersecting_roadElementLane_segmentsElementId;
    ::ad::rss::world::LaneDrivingDirection valueIntersecting_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueIntersecting_roadElementLane_segmentsElement.driving_direction
      = valueIntersecting_roadElementLane_segmentsElementDriving_direction;
    ::ad::physics::MetricRange valueIntersecting_roadElementLane_segmentsElementLength;
    ::ad::physics::Distance valueIntersecting_roadElementLane_segmentsElementLengthMinimum(-1e9);
    valueIntersecting_roadElementLane_segmentsElementLengthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueIntersecting_roadElementLane_segmentsElementLength.minimum
      = valueIntersecting_roadElementLane_segmentsElementLengthMinimum;
    ::ad::physics::Distance valueIntersecting_roadElementLane_segmentsElementLengthMaximum(-1e9);
    valueIntersecting_roadElementLane_segmentsElementLength.maximum
      = valueIntersecting_roadElementLane_segmentsElementLengthMaximum;
    valueIntersecting_roadElementLane_segmentsElementLength.maximum
      = valueIntersecting_roadElementLane_segmentsElementLength.minimum;
    valueIntersecting_roadElementLane_segmentsElementLength.minimum
      = valueIntersecting_roadElementLane_segmentsElementLength.maximum;
    valueIntersecting_roadElementLane_segmentsElement.length = valueIntersecting_roadElementLane_segmentsElementLength;
    ::ad::physics::MetricRange valueIntersecting_roadElementLane_segmentsElementWidth;
    ::ad::physics::Distance valueIntersecting_roadElementLane_segmentsElementWidthMinimum(-1e9);
    valueIntersecting_roadElementLane_segmentsElementWidthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueIntersecting_roadElementLane_segmentsElementWidth.minimum
      = valueIntersecting_roadElementLane_segmentsElementWidthMinimum;
    ::ad::physics::Distance valueIntersecting_roadElementLane_segmentsElementWidthMaximum(-1e9);
    valueIntersecting_roadElementLane_segmentsElementWidth.maximum
      = valueIntersecting_roadElementLane_segmentsElementWidthMaximum;
    valueIntersecting_roadElementLane_segmentsElementWidth.maximum
      = valueIntersecting_roadElementLane_segmentsElementWidth.minimum;
    valueIntersecting_roadElementLane_segmentsElementWidth.minimum
      = valueIntersecting_roadElementLane_segmentsElementWidth.maximum;
    valueIntersecting_roadElementLane_segmentsElement.width = valueIntersecting_roadElementLane_segmentsElementWidth;
    valueIntersecting_roadElementLane_segments.resize(1, valueIntersecting_roadElementLane_segmentsElement);
    valueIntersecting_roadElement.lane_segments = valueIntersecting_roadElementLane_segments;
    ::ad::physics::Distance valueIntersecting_roadElementMinimum_length_after_intersecting_area(-1e9);
    valueIntersecting_roadElement.minimum_length_after_intersecting_area
      = valueIntersecting_roadElementMinimum_length_after_intersecting_area;
    ::ad::physics::Distance valueIntersecting_roadElementMinimum_length_before_intersecting_area(-1e9);
    valueIntersecting_roadElement.minimum_length_before_intersecting_area
      = valueIntersecting_roadElementMinimum_length_before_intersecting_area;
    valueIntersecting_road.resize(1, valueIntersecting_roadElement);
    value.intersecting_road = valueIntersecting_road;
    ::ad::rss::world::RoadArea valueEgo_vehicle_road;
    ::ad::rss::world::RoadSegment valueEgo_vehicle_roadElement;
    ::ad::rss::world::RoadSegmentType valueEgo_vehicle_roadElementType(::ad::rss::world::RoadSegmentType::Normal);
    valueEgo_vehicle_roadElement.type = valueEgo_vehicle_roadElementType;
    ::ad::rss::world::LaneSegmentVector valueEgo_vehicle_roadElementLane_segments;
    ::ad::rss::world::LaneSegment valueEgo_vehicle_roadElementLane_segmentsElement;
    ::ad::rss::world::LaneSegmentId valueEgo_vehicle_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueEgo_vehicle_roadElementLane_segmentsElement.id = valueEgo_vehicle_roadElementLane_segmentsElementId;
    ::ad::rss::world::LaneDrivingDirection valueEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueEgo_vehicle_roadElementLane_segmentsElement.driving_direction
      = valueEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
    ::ad::physics::MetricRange valueEgo_vehicle_roadElementLane_segmentsElementLength;
    ::ad::physics::Distance valueEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(-1e9);
    valueEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueEgo_vehicle_roadElementLane_segmentsElementLength.minimum
      = valueEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
    ::ad::physics::Distance valueEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(-1e9);
    valueEgo_vehicle_roadElementLane_segmentsElementLength.maximum
      = valueEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
    valueEgo_vehicle_roadElementLane_segmentsElementLength.maximum
      = valueEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
    valueEgo_vehicle_roadElementLane_segmentsElementLength.minimum
      = valueEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
    valueEgo_vehicle_roadElementLane_segmentsElement.length = valueEgo_vehicle_roadElementLane_segmentsElementLength;
    ::ad::physics::MetricRange valueEgo_vehicle_roadElementLane_segmentsElementWidth;
    ::ad::physics::Distance valueEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(-1e9);
    valueEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
      = valueEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
    ::ad::physics::Distance valueEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(-1e9);
    valueEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
      = valueEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
    valueEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
      = valueEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
    valueEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
      = valueEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
    valueEgo_vehicle_roadElementLane_segmentsElement.width = valueEgo_vehicle_roadElementLane_segmentsElementWidth;
    valueEgo_vehicle_roadElementLane_segments.resize(1, valueEgo_vehicle_roadElementLane_segmentsElement);
    valueEgo_vehicle_roadElement.lane_segments = valueEgo_vehicle_roadElementLane_segments;
    ::ad::physics::Distance valueEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
    valueEgo_vehicle_roadElement.minimum_length_after_intersecting_area
      = valueEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
    ::ad::physics::Distance valueEgo_vehicle_roadElementMinimum_length_before_intersecting_area(-1e9);
    valueEgo_vehicle_roadElement.minimum_length_before_intersecting_area
      = valueEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
    valueEgo_vehicle_road.resize(1, valueEgo_vehicle_roadElement);
    value.ego_vehicle_road = valueEgo_vehicle_road;
    mValue = value;
  }

  ::ad::rss::world::Constellation mValue;
};

TEST_F(ConstellationTests, copyConstruction)
{
  ::ad::rss::world::Constellation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ConstellationTests, moveConstruction)
{
  ::ad::rss::world::Constellation tmpValue(mValue);
  ::ad::rss::world::Constellation value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ConstellationTests, copyAssignment)
{
  ::ad::rss::world::Constellation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(ConstellationTests, moveAssignment)
{
  ::ad::rss::world::Constellation tmpValue(mValue);
  ::ad::rss::world::Constellation value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ConstellationTests, comparisonOperatorEqual)
{
  ::ad::rss::world::Constellation valueA = mValue;
  ::ad::rss::world::Constellation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(ConstellationTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(ConstellationTests, comparisonOperatorConstellation_typeDiffers)
{
  ::ad::rss::world::Constellation valueA = mValue;
  ::ad::rss::world::ConstellationType constellation_type(::ad::rss::world::ConstellationType::Unstructured);
  valueA.constellation_type = constellation_type;
  ::ad::rss::world::Constellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ConstellationTests, comparisonOperatorEgo_vehicleDiffers)
{
  ::ad::rss::world::Constellation valueA = mValue;
  ::ad::rss::world::Object ego_vehicle;
  ::ad::rss::world::ObjectId ego_vehicleObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  ego_vehicle.object_id = ego_vehicleObject_id;
  ::ad::rss::world::ObjectType ego_vehicleObject_type(::ad::rss::world::ObjectType::OtherObject);
  ego_vehicle.object_type = ego_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector ego_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion ego_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId ego_vehicleOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  ego_vehicleOccupied_regionsElement.segment_id = ego_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange ego_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue ego_vehicleOccupied_regionsElementLon_rangeMinimum(1.);
  ego_vehicleOccupied_regionsElementLon_range.minimum = ego_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue ego_vehicleOccupied_regionsElementLon_rangeMaximum(1.);
  ego_vehicleOccupied_regionsElementLon_range.maximum = ego_vehicleOccupied_regionsElementLon_rangeMaximum;
  ego_vehicleOccupied_regionsElementLon_range.maximum = ego_vehicleOccupied_regionsElementLon_range.minimum;
  ego_vehicleOccupied_regionsElementLon_range.minimum = ego_vehicleOccupied_regionsElementLon_range.maximum;
  ego_vehicleOccupied_regionsElement.lon_range = ego_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange ego_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue ego_vehicleOccupied_regionsElementLat_rangeMinimum(1.);
  ego_vehicleOccupied_regionsElementLat_range.minimum = ego_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue ego_vehicleOccupied_regionsElementLat_rangeMaximum(1.);
  ego_vehicleOccupied_regionsElementLat_range.maximum = ego_vehicleOccupied_regionsElementLat_rangeMaximum;
  ego_vehicleOccupied_regionsElementLat_range.maximum = ego_vehicleOccupied_regionsElementLat_range.minimum;
  ego_vehicleOccupied_regionsElementLat_range.minimum = ego_vehicleOccupied_regionsElementLat_range.maximum;
  ego_vehicleOccupied_regionsElement.lat_range = ego_vehicleOccupied_regionsElementLat_range;
  ego_vehicleOccupied_regions.resize(0 + 1, ego_vehicleOccupied_regionsElement);
  ego_vehicle.occupied_regions = ego_vehicleOccupied_regions;
  ::ad::rss::world::Velocity ego_vehicleVelocity;
  ::ad::physics::Speed ego_vehicleVelocitySpeed_lon_min(100.);
  ego_vehicleVelocity.speed_lon_min = ego_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed ego_vehicleVelocitySpeed_lon_max(100.);
  ego_vehicleVelocity.speed_lon_max = ego_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed ego_vehicleVelocitySpeed_lat_min(100.);
  ego_vehicleVelocity.speed_lat_min = ego_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed ego_vehicleVelocitySpeed_lat_max(100.);
  ego_vehicleVelocity.speed_lat_max = ego_vehicleVelocitySpeed_lat_max;
  ego_vehicleVelocity.speed_lat_max = ego_vehicleVelocity.speed_lat_min;
  ego_vehicleVelocity.speed_lon_max = ego_vehicleVelocity.speed_lon_min;
  ego_vehicleVelocity.speed_lat_min = ego_vehicleVelocity.speed_lat_max;
  ego_vehicleVelocity.speed_lon_min = ego_vehicleVelocity.speed_lon_max;
  ego_vehicle.velocity = ego_vehicleVelocity;
  ::ad::rss::world::ObjectState ego_vehicleState;
  ::ad::physics::Angle ego_vehicleStateYaw(6.283185308);
  ego_vehicleState.yaw = ego_vehicleStateYaw;
  ::ad::physics::Dimension2D ego_vehicleStateDimension;
  ::ad::physics::Distance ego_vehicleStateDimensionLength(1e9);
  ego_vehicleStateDimension.length = ego_vehicleStateDimensionLength;
  ::ad::physics::Distance ego_vehicleStateDimensionWidth(1e9);
  ego_vehicleStateDimension.width = ego_vehicleStateDimensionWidth;
  ego_vehicleState.dimension = ego_vehicleStateDimension;
  ::ad::physics::AngularVelocity ego_vehicleStateYaw_rate(100.);
  ego_vehicleState.yaw_rate = ego_vehicleStateYaw_rate;
  ::ad::physics::Distance2D ego_vehicleStateCenter_point;
  ::ad::physics::Distance ego_vehicleStateCenter_pointX(1e9);
  ego_vehicleStateCenter_point.x = ego_vehicleStateCenter_pointX;
  ::ad::physics::Distance ego_vehicleStateCenter_pointY(1e9);
  ego_vehicleStateCenter_point.y = ego_vehicleStateCenter_pointY;
  ego_vehicleState.center_point = ego_vehicleStateCenter_point;
  ::ad::physics::SpeedRange ego_vehicleStateSpeed_range;
  ::ad::physics::Speed ego_vehicleStateSpeed_rangeMinimum(100.);
  ego_vehicleStateSpeed_range.minimum = ego_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed ego_vehicleStateSpeed_rangeMaximum(100.);
  ego_vehicleStateSpeed_range.maximum = ego_vehicleStateSpeed_rangeMaximum;
  ego_vehicleStateSpeed_range.maximum = ego_vehicleStateSpeed_range.minimum;
  ego_vehicleStateSpeed_range.minimum = ego_vehicleStateSpeed_range.maximum;
  ego_vehicleState.speed_range = ego_vehicleStateSpeed_range;
  ::ad::physics::Angle ego_vehicleStateSteering_angle(6.283185308);
  ego_vehicleState.steering_angle = ego_vehicleStateSteering_angle;
  ego_vehicle.state = ego_vehicleState;
  valueA.ego_vehicle = ego_vehicle;
  ::ad::rss::world::Constellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ConstellationTests, comparisonOperatorEgo_vehicle_rss_dynamicsDiffers)
{
  ::ad::rss::world::Constellation valueA = mValue;
  ::ad::rss::world::RssDynamics ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration ego_vehicle_rss_dynamicsAlpha_lonAccel_max(1e2);
  ego_vehicle_rss_dynamicsAlpha_lon.accel_max = ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration ego_vehicle_rss_dynamicsAlpha_lonBrake_max(1e2);
  ego_vehicle_rss_dynamicsAlpha_lon.brake_max = ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration ego_vehicle_rss_dynamicsAlpha_lonBrake_min(1e2);
  ego_vehicle_rss_dynamicsAlpha_lon.brake_min = ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  ego_vehicle_rss_dynamicsAlpha_lon.brake_min = ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  ego_vehicle_rss_dynamicsAlpha_lon.brake_max = ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  ego_vehicle_rss_dynamicsAlpha_lon.brake_min = ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  ego_vehicle_rss_dynamics.alpha_lon = ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration ego_vehicle_rss_dynamicsAlpha_latAccel_max(1e2);
  ego_vehicle_rss_dynamicsAlpha_lat.accel_max = ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration ego_vehicle_rss_dynamicsAlpha_latBrake_min(1e2);
  ego_vehicle_rss_dynamicsAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within
                                                                                      // struct
  ego_vehicle_rss_dynamicsAlpha_lat.brake_min = ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  ego_vehicle_rss_dynamics.alpha_lat = ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance ego_vehicle_rss_dynamicsLateral_fluctuation_margin(1e9);
  ego_vehicle_rss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(1.); // set to valid value within struct
  ego_vehicle_rss_dynamics.lateral_fluctuation_margin = ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration ego_vehicle_rss_dynamicsResponse_time(1e6);
  ego_vehicle_rss_dynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  ego_vehicle_rss_dynamics.response_time = ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed ego_vehicle_rss_dynamicsMax_speed_on_acceleration(100.);
  ego_vehicle_rss_dynamics.max_speed_on_acceleration = ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  ego_vehicle_rss_dynamics.unstructured_settings = ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  ego_vehicle_rss_dynamics.min_longitudinal_safety_distance = ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueA.ego_vehicle_rss_dynamics = ego_vehicle_rss_dynamics;
  ::ad::rss::world::Constellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ConstellationTests, comparisonOperatorObjectDiffers)
{
  ::ad::rss::world::Constellation valueA = mValue;
  ::ad::rss::world::Object object;
  ::ad::rss::world::ObjectId objectObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  object.object_id = objectObject_id;
  ::ad::rss::world::ObjectType objectObject_type(::ad::rss::world::ObjectType::OtherObject);
  object.object_type = objectObject_type;
  ::ad::rss::world::OccupiedRegionVector objectOccupied_regions;
  ::ad::rss::world::OccupiedRegion objectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId objectOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  objectOccupied_regionsElement.segment_id = objectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange objectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue objectOccupied_regionsElementLon_rangeMinimum(1.);
  objectOccupied_regionsElementLon_range.minimum = objectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue objectOccupied_regionsElementLon_rangeMaximum(1.);
  objectOccupied_regionsElementLon_range.maximum = objectOccupied_regionsElementLon_rangeMaximum;
  objectOccupied_regionsElementLon_range.maximum = objectOccupied_regionsElementLon_range.minimum;
  objectOccupied_regionsElementLon_range.minimum = objectOccupied_regionsElementLon_range.maximum;
  objectOccupied_regionsElement.lon_range = objectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange objectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue objectOccupied_regionsElementLat_rangeMinimum(1.);
  objectOccupied_regionsElementLat_range.minimum = objectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue objectOccupied_regionsElementLat_rangeMaximum(1.);
  objectOccupied_regionsElementLat_range.maximum = objectOccupied_regionsElementLat_rangeMaximum;
  objectOccupied_regionsElementLat_range.maximum = objectOccupied_regionsElementLat_range.minimum;
  objectOccupied_regionsElementLat_range.minimum = objectOccupied_regionsElementLat_range.maximum;
  objectOccupied_regionsElement.lat_range = objectOccupied_regionsElementLat_range;
  objectOccupied_regions.resize(0 + 1, objectOccupied_regionsElement);
  object.occupied_regions = objectOccupied_regions;
  ::ad::rss::world::Velocity objectVelocity;
  ::ad::physics::Speed objectVelocitySpeed_lon_min(100.);
  objectVelocity.speed_lon_min = objectVelocitySpeed_lon_min;
  ::ad::physics::Speed objectVelocitySpeed_lon_max(100.);
  objectVelocity.speed_lon_max = objectVelocitySpeed_lon_max;
  ::ad::physics::Speed objectVelocitySpeed_lat_min(100.);
  objectVelocity.speed_lat_min = objectVelocitySpeed_lat_min;
  ::ad::physics::Speed objectVelocitySpeed_lat_max(100.);
  objectVelocity.speed_lat_max = objectVelocitySpeed_lat_max;
  objectVelocity.speed_lat_max = objectVelocity.speed_lat_min;
  objectVelocity.speed_lon_max = objectVelocity.speed_lon_min;
  objectVelocity.speed_lat_min = objectVelocity.speed_lat_max;
  objectVelocity.speed_lon_min = objectVelocity.speed_lon_max;
  object.velocity = objectVelocity;
  ::ad::rss::world::ObjectState objectState;
  ::ad::physics::Angle objectStateYaw(6.283185308);
  objectState.yaw = objectStateYaw;
  ::ad::physics::Dimension2D objectStateDimension;
  ::ad::physics::Distance objectStateDimensionLength(1e9);
  objectStateDimension.length = objectStateDimensionLength;
  ::ad::physics::Distance objectStateDimensionWidth(1e9);
  objectStateDimension.width = objectStateDimensionWidth;
  objectState.dimension = objectStateDimension;
  ::ad::physics::AngularVelocity objectStateYaw_rate(100.);
  objectState.yaw_rate = objectStateYaw_rate;
  ::ad::physics::Distance2D objectStateCenter_point;
  ::ad::physics::Distance objectStateCenter_pointX(1e9);
  objectStateCenter_point.x = objectStateCenter_pointX;
  ::ad::physics::Distance objectStateCenter_pointY(1e9);
  objectStateCenter_point.y = objectStateCenter_pointY;
  objectState.center_point = objectStateCenter_point;
  ::ad::physics::SpeedRange objectStateSpeed_range;
  ::ad::physics::Speed objectStateSpeed_rangeMinimum(100.);
  objectStateSpeed_range.minimum = objectStateSpeed_rangeMinimum;
  ::ad::physics::Speed objectStateSpeed_rangeMaximum(100.);
  objectStateSpeed_range.maximum = objectStateSpeed_rangeMaximum;
  objectStateSpeed_range.maximum = objectStateSpeed_range.minimum;
  objectStateSpeed_range.minimum = objectStateSpeed_range.maximum;
  objectState.speed_range = objectStateSpeed_range;
  ::ad::physics::Angle objectStateSteering_angle(6.283185308);
  objectState.steering_angle = objectStateSteering_angle;
  object.state = objectState;
  valueA.object = object;
  ::ad::rss::world::Constellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ConstellationTests, comparisonOperatorObject_rss_dynamicsDiffers)
{
  ::ad::rss::world::Constellation valueA = mValue;
  ::ad::rss::world::RssDynamics object_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues object_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration object_rss_dynamicsAlpha_lonAccel_max(1e2);
  object_rss_dynamicsAlpha_lon.accel_max = object_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration object_rss_dynamicsAlpha_lonBrake_max(1e2);
  object_rss_dynamicsAlpha_lon.brake_max = object_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration object_rss_dynamicsAlpha_lonBrake_min(1e2);
  object_rss_dynamicsAlpha_lon.brake_min = object_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration object_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  object_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  object_rss_dynamicsAlpha_lon.brake_min_correct = object_rss_dynamicsAlpha_lonBrake_min_correct;
  object_rss_dynamicsAlpha_lon.brake_min_correct = object_rss_dynamicsAlpha_lon.brake_min;
  object_rss_dynamicsAlpha_lon.brake_min = object_rss_dynamicsAlpha_lon.brake_max;
  object_rss_dynamicsAlpha_lon.brake_max = object_rss_dynamicsAlpha_lon.brake_min;
  object_rss_dynamicsAlpha_lon.brake_min = object_rss_dynamicsAlpha_lon.brake_min_correct;
  object_rss_dynamics.alpha_lon = object_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues object_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration object_rss_dynamicsAlpha_latAccel_max(1e2);
  object_rss_dynamicsAlpha_lat.accel_max = object_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration object_rss_dynamicsAlpha_latBrake_min(1e2);
  object_rss_dynamicsAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  object_rss_dynamicsAlpha_lat.brake_min = object_rss_dynamicsAlpha_latBrake_min;
  object_rss_dynamics.alpha_lat = object_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance object_rss_dynamicsLateral_fluctuation_margin(1e9);
  object_rss_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(1.); // set to valid value within struct
  object_rss_dynamics.lateral_fluctuation_margin = object_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration object_rss_dynamicsResponse_time(1e6);
  object_rss_dynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  object_rss_dynamics.response_time = object_rss_dynamicsResponse_time;
  ::ad::physics::Speed object_rss_dynamicsMax_speed_on_acceleration(100.);
  object_rss_dynamics.max_speed_on_acceleration = object_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings object_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance object_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  object_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = object_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle object_rss_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  object_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = object_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration object_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  object_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = object_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance object_rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  object_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = object_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration object_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  object_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = object_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t object_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = object_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = object_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = object_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = object_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = object_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = object_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = object_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = object_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = object_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t object_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = object_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  object_rss_dynamics.unstructured_settings = object_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance object_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  object_rss_dynamics.min_longitudinal_safety_distance = object_rss_dynamicsMin_longitudinal_safety_distance;
  valueA.object_rss_dynamics = object_rss_dynamics;
  ::ad::rss::world::Constellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ConstellationTests, comparisonOperatorIntersecting_roadDiffers)
{
  ::ad::rss::world::Constellation valueA = mValue;
  ::ad::rss::world::RoadArea intersecting_road;
  ::ad::rss::world::RoadSegment intersecting_roadElement;
  ::ad::rss::world::RoadSegmentType intersecting_roadElementType(::ad::rss::world::RoadSegmentType::Intersection);
  intersecting_roadElement.type = intersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector intersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment intersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId intersecting_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  intersecting_roadElementLane_segmentsElement.id = intersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection intersecting_roadElementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  intersecting_roadElementLane_segmentsElement.driving_direction
    = intersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange intersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance intersecting_roadElementLane_segmentsElementLengthMinimum(1e9);
  intersecting_roadElementLane_segmentsElementLength.minimum
    = intersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance intersecting_roadElementLane_segmentsElementLengthMaximum(1e9);
  intersecting_roadElementLane_segmentsElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  intersecting_roadElementLane_segmentsElementLength.maximum
    = intersecting_roadElementLane_segmentsElementLengthMaximum;
  intersecting_roadElementLane_segmentsElementLength.maximum
    = intersecting_roadElementLane_segmentsElementLength.minimum;
  intersecting_roadElementLane_segmentsElementLength.minimum
    = intersecting_roadElementLane_segmentsElementLength.maximum;
  intersecting_roadElementLane_segmentsElement.length = intersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange intersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance intersecting_roadElementLane_segmentsElementWidthMinimum(1e9);
  intersecting_roadElementLane_segmentsElementWidth.minimum = intersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance intersecting_roadElementLane_segmentsElementWidthMaximum(1e9);
  intersecting_roadElementLane_segmentsElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  intersecting_roadElementLane_segmentsElementWidth.maximum = intersecting_roadElementLane_segmentsElementWidthMaximum;
  intersecting_roadElementLane_segmentsElementWidth.maximum = intersecting_roadElementLane_segmentsElementWidth.minimum;
  intersecting_roadElementLane_segmentsElementWidth.minimum = intersecting_roadElementLane_segmentsElementWidth.maximum;
  intersecting_roadElementLane_segmentsElement.width = intersecting_roadElementLane_segmentsElementWidth;
  intersecting_roadElementLane_segments.resize(1 + 1, intersecting_roadElementLane_segmentsElement);
  intersecting_roadElement.lane_segments = intersecting_roadElementLane_segments;
  ::ad::physics::Distance intersecting_roadElementMinimum_length_after_intersecting_area(1e9);
  intersecting_roadElement.minimum_length_after_intersecting_area
    = intersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance intersecting_roadElementMinimum_length_before_intersecting_area(1e9);
  intersecting_roadElement.minimum_length_before_intersecting_area
    = intersecting_roadElementMinimum_length_before_intersecting_area;
  intersecting_road.resize(0 + 1, intersecting_roadElement);
  valueA.intersecting_road = intersecting_road;
  ::ad::rss::world::Constellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ConstellationTests, comparisonOperatorEgo_vehicle_roadDiffers)
{
  ::ad::rss::world::Constellation valueA = mValue;
  ::ad::rss::world::RoadArea ego_vehicle_road;
  ::ad::rss::world::RoadSegment ego_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType ego_vehicle_roadElementType(::ad::rss::world::RoadSegmentType::Intersection);
  ego_vehicle_roadElement.type = ego_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector ego_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment ego_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId ego_vehicle_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  ego_vehicle_roadElementLane_segmentsElement.id = ego_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection ego_vehicle_roadElementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  ego_vehicle_roadElementLane_segmentsElement.driving_direction
    = ego_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange ego_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance ego_vehicle_roadElementLane_segmentsElementLengthMinimum(1e9);
  ego_vehicle_roadElementLane_segmentsElementLength.minimum = ego_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance ego_vehicle_roadElementLane_segmentsElementLengthMaximum(1e9);
  ego_vehicle_roadElementLane_segmentsElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  ego_vehicle_roadElementLane_segmentsElementLength.maximum = ego_vehicle_roadElementLane_segmentsElementLengthMaximum;
  ego_vehicle_roadElementLane_segmentsElementLength.maximum = ego_vehicle_roadElementLane_segmentsElementLength.minimum;
  ego_vehicle_roadElementLane_segmentsElementLength.minimum = ego_vehicle_roadElementLane_segmentsElementLength.maximum;
  ego_vehicle_roadElementLane_segmentsElement.length = ego_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange ego_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance ego_vehicle_roadElementLane_segmentsElementWidthMinimum(1e9);
  ego_vehicle_roadElementLane_segmentsElementWidth.minimum = ego_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance ego_vehicle_roadElementLane_segmentsElementWidthMaximum(1e9);
  ego_vehicle_roadElementLane_segmentsElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  ego_vehicle_roadElementLane_segmentsElementWidth.maximum = ego_vehicle_roadElementLane_segmentsElementWidthMaximum;
  ego_vehicle_roadElementLane_segmentsElementWidth.maximum = ego_vehicle_roadElementLane_segmentsElementWidth.minimum;
  ego_vehicle_roadElementLane_segmentsElementWidth.minimum = ego_vehicle_roadElementLane_segmentsElementWidth.maximum;
  ego_vehicle_roadElementLane_segmentsElement.width = ego_vehicle_roadElementLane_segmentsElementWidth;
  ego_vehicle_roadElementLane_segments.resize(1 + 1, ego_vehicle_roadElementLane_segmentsElement);
  ego_vehicle_roadElement.lane_segments = ego_vehicle_roadElementLane_segments;
  ::ad::physics::Distance ego_vehicle_roadElementMinimum_length_after_intersecting_area(1e9);
  ego_vehicle_roadElement.minimum_length_after_intersecting_area
    = ego_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance ego_vehicle_roadElementMinimum_length_before_intersecting_area(1e9);
  ego_vehicle_roadElement.minimum_length_before_intersecting_area
    = ego_vehicle_roadElementMinimum_length_before_intersecting_area;
  ego_vehicle_road.resize(0 + 1, ego_vehicle_roadElement);
  valueA.ego_vehicle_road = ego_vehicle_road;
  ::ad::rss::world::Constellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
