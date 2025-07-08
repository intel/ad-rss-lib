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
#include "ad/rss/world/WorldModel.hpp"

class WorldModelTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::WorldModel value;
    ::ad::rss::world::TimeIndex valueTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    value.time_index = valueTime_index;
    ::ad::rss::world::RssDynamics valueDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max = valueDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max = valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueDefault_ego_vehicle_rss_dynamics.alpha_lon = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max = valueDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min = valueDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
    valueDefault_ego_vehicle_rss_dynamics.alpha_lat = valueDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
      = valueDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
    valueDefault_ego_vehicle_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueDefault_ego_vehicle_rss_dynamics.response_time = valueDefault_ego_vehicle_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
      = valueDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueDefault_ego_vehicle_rss_dynamics.unstructured_settings
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
    valueDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
      = valueDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
    value.default_ego_vehicle_rss_dynamics = valueDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::world::ConstellationVector valueConstellations;
    ::ad::rss::world::Constellation valueConstellationsElement;
    ::ad::rss::world::ConstellationType valueConstellationsElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
    valueConstellationsElement.constellation_type = valueConstellationsElementConstellation_type;
    ::ad::rss::world::Object valueConstellationsElementEgo_vehicle;
    ::ad::rss::world::ObjectId valueConstellationsElementEgo_vehicleObject_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueConstellationsElementEgo_vehicle.object_id = valueConstellationsElementEgo_vehicleObject_id;
    ::ad::rss::world::ObjectType valueConstellationsElementEgo_vehicleObject_type(
      ::ad::rss::world::ObjectType::Invalid);
    valueConstellationsElementEgo_vehicle.object_type = valueConstellationsElementEgo_vehicleObject_type;
    ::ad::rss::world::OccupiedRegionVector valueConstellationsElementEgo_vehicleOccupied_regions;
    ::ad::rss::world::OccupiedRegion valueConstellationsElementEgo_vehicleOccupied_regionsElement;
    ::ad::rss::world::LaneSegmentId valueConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueConstellationsElementEgo_vehicleOccupied_regionsElement.segment_id
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
    ::ad::physics::ParametricRange valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
    ::ad::physics::ParametricValue valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(0.);
    valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
    ::ad::physics::ParametricValue valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(0.);
    valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
    valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum;
    valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum;
    valueConstellationsElementEgo_vehicleOccupied_regionsElement.lon_range
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLon_range;
    ::ad::physics::ParametricRange valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
    ::ad::physics::ParametricValue valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(0.);
    valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
    ::ad::physics::ParametricValue valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(0.);
    valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
    valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum;
    valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum;
    valueConstellationsElementEgo_vehicleOccupied_regionsElement.lat_range
      = valueConstellationsElementEgo_vehicleOccupied_regionsElementLat_range;
    valueConstellationsElementEgo_vehicleOccupied_regions.resize(
      1, valueConstellationsElementEgo_vehicleOccupied_regionsElement);
    valueConstellationsElementEgo_vehicle.occupied_regions = valueConstellationsElementEgo_vehicleOccupied_regions;
    ::ad::rss::world::Velocity valueConstellationsElementEgo_vehicleVelocity;
    ::ad::physics::Speed valueConstellationsElementEgo_vehicleVelocitySpeed_lon_min(-100.);
    valueConstellationsElementEgo_vehicleVelocitySpeed_lon_min
      = ::ad::physics::Speed(0.); // set to valid value within struct
    valueConstellationsElementEgo_vehicleVelocity.speed_lon_min
      = valueConstellationsElementEgo_vehicleVelocitySpeed_lon_min;
    ::ad::physics::Speed valueConstellationsElementEgo_vehicleVelocitySpeed_lon_max(-100.);
    valueConstellationsElementEgo_vehicleVelocity.speed_lon_max
      = valueConstellationsElementEgo_vehicleVelocitySpeed_lon_max;
    ::ad::physics::Speed valueConstellationsElementEgo_vehicleVelocitySpeed_lat_min(-100.);
    valueConstellationsElementEgo_vehicleVelocity.speed_lat_min
      = valueConstellationsElementEgo_vehicleVelocitySpeed_lat_min;
    ::ad::physics::Speed valueConstellationsElementEgo_vehicleVelocitySpeed_lat_max(-100.);
    valueConstellationsElementEgo_vehicleVelocity.speed_lat_max
      = valueConstellationsElementEgo_vehicleVelocitySpeed_lat_max;
    valueConstellationsElementEgo_vehicleVelocity.speed_lon_max
      = valueConstellationsElementEgo_vehicleVelocity.speed_lon_min;
    valueConstellationsElementEgo_vehicleVelocity.speed_lat_max
      = valueConstellationsElementEgo_vehicleVelocity.speed_lat_min;
    valueConstellationsElementEgo_vehicleVelocity.speed_lon_min
      = valueConstellationsElementEgo_vehicleVelocity.speed_lon_max;
    valueConstellationsElementEgo_vehicleVelocity.speed_lat_min
      = valueConstellationsElementEgo_vehicleVelocity.speed_lat_max;
    valueConstellationsElementEgo_vehicle.velocity = valueConstellationsElementEgo_vehicleVelocity;
    ::ad::rss::world::ObjectState valueConstellationsElementEgo_vehicleState;
    ::ad::physics::Angle valueConstellationsElementEgo_vehicleStateYaw(-6.283185308);
    valueConstellationsElementEgo_vehicleState.yaw = valueConstellationsElementEgo_vehicleStateYaw;
    ::ad::physics::Dimension2D valueConstellationsElementEgo_vehicleStateDimension;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicleStateDimensionLength(-1e9);
    valueConstellationsElementEgo_vehicleStateDimension.length
      = valueConstellationsElementEgo_vehicleStateDimensionLength;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicleStateDimensionWidth(-1e9);
    valueConstellationsElementEgo_vehicleStateDimension.width
      = valueConstellationsElementEgo_vehicleStateDimensionWidth;
    valueConstellationsElementEgo_vehicleState.dimension = valueConstellationsElementEgo_vehicleStateDimension;
    ::ad::physics::AngularVelocity valueConstellationsElementEgo_vehicleStateYaw_rate(-100.);
    valueConstellationsElementEgo_vehicleState.yaw_rate = valueConstellationsElementEgo_vehicleStateYaw_rate;
    ::ad::physics::Distance2D valueConstellationsElementEgo_vehicleStateCenter_point;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicleStateCenter_pointX(-1e9);
    valueConstellationsElementEgo_vehicleStateCenter_point.x = valueConstellationsElementEgo_vehicleStateCenter_pointX;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicleStateCenter_pointY(-1e9);
    valueConstellationsElementEgo_vehicleStateCenter_point.y = valueConstellationsElementEgo_vehicleStateCenter_pointY;
    valueConstellationsElementEgo_vehicleState.center_point = valueConstellationsElementEgo_vehicleStateCenter_point;
    ::ad::physics::SpeedRange valueConstellationsElementEgo_vehicleStateSpeed_range;
    ::ad::physics::Speed valueConstellationsElementEgo_vehicleStateSpeed_rangeMinimum(-100.);
    valueConstellationsElementEgo_vehicleStateSpeed_range.minimum
      = valueConstellationsElementEgo_vehicleStateSpeed_rangeMinimum;
    ::ad::physics::Speed valueConstellationsElementEgo_vehicleStateSpeed_rangeMaximum(-100.);
    valueConstellationsElementEgo_vehicleStateSpeed_range.maximum
      = valueConstellationsElementEgo_vehicleStateSpeed_rangeMaximum;
    valueConstellationsElementEgo_vehicleStateSpeed_range.maximum
      = valueConstellationsElementEgo_vehicleStateSpeed_range.minimum;
    valueConstellationsElementEgo_vehicleStateSpeed_range.minimum
      = valueConstellationsElementEgo_vehicleStateSpeed_range.maximum;
    valueConstellationsElementEgo_vehicleState.speed_range = valueConstellationsElementEgo_vehicleStateSpeed_range;
    ::ad::physics::Angle valueConstellationsElementEgo_vehicleStateSteering_angle(-6.283185308);
    valueConstellationsElementEgo_vehicleState.steering_angle
      = valueConstellationsElementEgo_vehicleStateSteering_angle;
    valueConstellationsElementEgo_vehicle.state = valueConstellationsElementEgo_vehicleState;
    valueConstellationsElement.ego_vehicle = valueConstellationsElementEgo_vehicle;
    ::ad::rss::world::RssDynamics valueConstellationsElementEgo_vehicle_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueConstellationsElementEgo_vehicle_rss_dynamics.alpha_lon
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
    valueConstellationsElementEgo_vehicle_rss_dynamics.alpha_lat
      = valueConstellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueConstellationsElementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
      = valueConstellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueConstellationsElementEgo_vehicle_rss_dynamicsResponse_time(0.);
    valueConstellationsElementEgo_vehicle_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueConstellationsElementEgo_vehicle_rss_dynamics.response_time
      = valueConstellationsElementEgo_vehicle_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueConstellationsElementEgo_vehicle_rss_dynamics.max_speed_on_acceleration
      = valueConstellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(
      -1e9);
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_brake_intermediate_acceleration_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_brake_intermediate_acceleration_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueConstellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
      = valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
    valueConstellationsElementEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
      = valueConstellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
    valueConstellationsElement.ego_vehicle_rss_dynamics = valueConstellationsElementEgo_vehicle_rss_dynamics;
    ::ad::rss::world::Object valueConstellationsElementObject;
    ::ad::rss::world::ObjectId valueConstellationsElementObjectObject_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueConstellationsElementObject.object_id = valueConstellationsElementObjectObject_id;
    ::ad::rss::world::ObjectType valueConstellationsElementObjectObject_type(::ad::rss::world::ObjectType::Invalid);
    valueConstellationsElementObject.object_type = valueConstellationsElementObjectObject_type;
    ::ad::rss::world::OccupiedRegionVector valueConstellationsElementObjectOccupied_regions;
    ::ad::rss::world::OccupiedRegion valueConstellationsElementObjectOccupied_regionsElement;
    ::ad::rss::world::LaneSegmentId valueConstellationsElementObjectOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueConstellationsElementObjectOccupied_regionsElement.segment_id
      = valueConstellationsElementObjectOccupied_regionsElementSegment_id;
    ::ad::physics::ParametricRange valueConstellationsElementObjectOccupied_regionsElementLon_range;
    ::ad::physics::ParametricValue valueConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum(0.);
    valueConstellationsElementObjectOccupied_regionsElementLon_range.minimum
      = valueConstellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
    ::ad::physics::ParametricValue valueConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum(0.);
    valueConstellationsElementObjectOccupied_regionsElementLon_range.maximum
      = valueConstellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
    valueConstellationsElementObjectOccupied_regionsElementLon_range.maximum
      = valueConstellationsElementObjectOccupied_regionsElementLon_range.minimum;
    valueConstellationsElementObjectOccupied_regionsElementLon_range.minimum
      = valueConstellationsElementObjectOccupied_regionsElementLon_range.maximum;
    valueConstellationsElementObjectOccupied_regionsElement.lon_range
      = valueConstellationsElementObjectOccupied_regionsElementLon_range;
    ::ad::physics::ParametricRange valueConstellationsElementObjectOccupied_regionsElementLat_range;
    ::ad::physics::ParametricValue valueConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum(0.);
    valueConstellationsElementObjectOccupied_regionsElementLat_range.minimum
      = valueConstellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
    ::ad::physics::ParametricValue valueConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum(0.);
    valueConstellationsElementObjectOccupied_regionsElementLat_range.maximum
      = valueConstellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
    valueConstellationsElementObjectOccupied_regionsElementLat_range.maximum
      = valueConstellationsElementObjectOccupied_regionsElementLat_range.minimum;
    valueConstellationsElementObjectOccupied_regionsElementLat_range.minimum
      = valueConstellationsElementObjectOccupied_regionsElementLat_range.maximum;
    valueConstellationsElementObjectOccupied_regionsElement.lat_range
      = valueConstellationsElementObjectOccupied_regionsElementLat_range;
    valueConstellationsElementObjectOccupied_regions.resize(1, valueConstellationsElementObjectOccupied_regionsElement);
    valueConstellationsElementObject.occupied_regions = valueConstellationsElementObjectOccupied_regions;
    ::ad::rss::world::Velocity valueConstellationsElementObjectVelocity;
    ::ad::physics::Speed valueConstellationsElementObjectVelocitySpeed_lon_min(-100.);
    valueConstellationsElementObjectVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within
                                                                                      // struct
    valueConstellationsElementObjectVelocity.speed_lon_min = valueConstellationsElementObjectVelocitySpeed_lon_min;
    ::ad::physics::Speed valueConstellationsElementObjectVelocitySpeed_lon_max(-100.);
    valueConstellationsElementObjectVelocity.speed_lon_max = valueConstellationsElementObjectVelocitySpeed_lon_max;
    ::ad::physics::Speed valueConstellationsElementObjectVelocitySpeed_lat_min(-100.);
    valueConstellationsElementObjectVelocity.speed_lat_min = valueConstellationsElementObjectVelocitySpeed_lat_min;
    ::ad::physics::Speed valueConstellationsElementObjectVelocitySpeed_lat_max(-100.);
    valueConstellationsElementObjectVelocity.speed_lat_max = valueConstellationsElementObjectVelocitySpeed_lat_max;
    valueConstellationsElementObjectVelocity.speed_lon_max = valueConstellationsElementObjectVelocity.speed_lon_min;
    valueConstellationsElementObjectVelocity.speed_lat_max = valueConstellationsElementObjectVelocity.speed_lat_min;
    valueConstellationsElementObjectVelocity.speed_lon_min = valueConstellationsElementObjectVelocity.speed_lon_max;
    valueConstellationsElementObjectVelocity.speed_lat_min = valueConstellationsElementObjectVelocity.speed_lat_max;
    valueConstellationsElementObject.velocity = valueConstellationsElementObjectVelocity;
    ::ad::rss::world::ObjectState valueConstellationsElementObjectState;
    ::ad::physics::Angle valueConstellationsElementObjectStateYaw(-6.283185308);
    valueConstellationsElementObjectState.yaw = valueConstellationsElementObjectStateYaw;
    ::ad::physics::Dimension2D valueConstellationsElementObjectStateDimension;
    ::ad::physics::Distance valueConstellationsElementObjectStateDimensionLength(-1e9);
    valueConstellationsElementObjectStateDimension.length = valueConstellationsElementObjectStateDimensionLength;
    ::ad::physics::Distance valueConstellationsElementObjectStateDimensionWidth(-1e9);
    valueConstellationsElementObjectStateDimension.width = valueConstellationsElementObjectStateDimensionWidth;
    valueConstellationsElementObjectState.dimension = valueConstellationsElementObjectStateDimension;
    ::ad::physics::AngularVelocity valueConstellationsElementObjectStateYaw_rate(-100.);
    valueConstellationsElementObjectState.yaw_rate = valueConstellationsElementObjectStateYaw_rate;
    ::ad::physics::Distance2D valueConstellationsElementObjectStateCenter_point;
    ::ad::physics::Distance valueConstellationsElementObjectStateCenter_pointX(-1e9);
    valueConstellationsElementObjectStateCenter_point.x = valueConstellationsElementObjectStateCenter_pointX;
    ::ad::physics::Distance valueConstellationsElementObjectStateCenter_pointY(-1e9);
    valueConstellationsElementObjectStateCenter_point.y = valueConstellationsElementObjectStateCenter_pointY;
    valueConstellationsElementObjectState.center_point = valueConstellationsElementObjectStateCenter_point;
    ::ad::physics::SpeedRange valueConstellationsElementObjectStateSpeed_range;
    ::ad::physics::Speed valueConstellationsElementObjectStateSpeed_rangeMinimum(-100.);
    valueConstellationsElementObjectStateSpeed_range.minimum = valueConstellationsElementObjectStateSpeed_rangeMinimum;
    ::ad::physics::Speed valueConstellationsElementObjectStateSpeed_rangeMaximum(-100.);
    valueConstellationsElementObjectStateSpeed_range.maximum = valueConstellationsElementObjectStateSpeed_rangeMaximum;
    valueConstellationsElementObjectStateSpeed_range.maximum = valueConstellationsElementObjectStateSpeed_range.minimum;
    valueConstellationsElementObjectStateSpeed_range.minimum = valueConstellationsElementObjectStateSpeed_range.maximum;
    valueConstellationsElementObjectState.speed_range = valueConstellationsElementObjectStateSpeed_range;
    ::ad::physics::Angle valueConstellationsElementObjectStateSteering_angle(-6.283185308);
    valueConstellationsElementObjectState.steering_angle = valueConstellationsElementObjectStateSteering_angle;
    valueConstellationsElementObject.state = valueConstellationsElementObjectState;
    valueConstellationsElement.object = valueConstellationsElementObject;
    ::ad::rss::world::RssDynamics valueConstellationsElementObject_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueConstellationsElementObject_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueConstellationsElementObject_rss_dynamicsAlpha_lon.accel_max
      = valueConstellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
      = valueConstellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
      = valueConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
    valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
      = valueConstellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
    valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
      = valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
    valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
      = valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
    valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min
      = valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct;
    valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_max
      = valueConstellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
    valueConstellationsElementObject_rss_dynamics.alpha_lon = valueConstellationsElementObject_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueConstellationsElementObject_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueConstellationsElementObject_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueConstellationsElementObject_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueConstellationsElementObject_rss_dynamicsAlpha_lat.accel_max
      = valueConstellationsElementObject_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueConstellationsElementObject_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueConstellationsElementObject_rss_dynamicsAlpha_lat.brake_min
      = valueConstellationsElementObject_rss_dynamicsAlpha_latBrake_min;
    valueConstellationsElementObject_rss_dynamics.alpha_lat = valueConstellationsElementObject_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueConstellationsElementObject_rss_dynamics.lateral_fluctuation_margin
      = valueConstellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueConstellationsElementObject_rss_dynamicsResponse_time(0.);
    valueConstellationsElementObject_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueConstellationsElementObject_rss_dynamics.response_time
      = valueConstellationsElementObject_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueConstellationsElementObject_rss_dynamics.max_speed_on_acceleration
      = valueConstellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings valueConstellationsElementObject_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
      -1e9);
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle valueConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
      -6.283185308);
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_acceleration_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_front_intermediate_heading_change_ratio_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueConstellationsElementObject_rss_dynamicsUnstructured_settings
      .pedestrian_back_intermediate_heading_change_ratio_steps
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueConstellationsElementObject_rss_dynamics.unstructured_settings
      = valueConstellationsElementObject_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
    valueConstellationsElementObject_rss_dynamics.min_longitudinal_safety_distance
      = valueConstellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
    valueConstellationsElement.object_rss_dynamics = valueConstellationsElementObject_rss_dynamics;
    ::ad::rss::world::RoadArea valueConstellationsElementIntersecting_road;
    ::ad::rss::world::RoadSegment valueConstellationsElementIntersecting_roadElement;
    ::ad::rss::world::RoadSegmentType valueConstellationsElementIntersecting_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
    valueConstellationsElementIntersecting_roadElement.type = valueConstellationsElementIntersecting_roadElementType;
    ::ad::rss::world::LaneSegmentVector valueConstellationsElementIntersecting_roadElementLane_segments;
    ::ad::rss::world::LaneSegment valueConstellationsElementIntersecting_roadElementLane_segmentsElement;
    ::ad::rss::world::LaneSegmentId valueConstellationsElementIntersecting_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueConstellationsElementIntersecting_roadElementLane_segmentsElement.id
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementId;
    ::ad::rss::world::LaneDrivingDirection
      valueConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
        ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueConstellationsElementIntersecting_roadElementLane_segmentsElement.driving_direction
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
    ::ad::physics::MetricRange valueConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
    ::ad::physics::Distance valueConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(-1e9);
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
    ::ad::physics::Distance valueConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(-1e9);
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum;
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum;
    valueConstellationsElementIntersecting_roadElementLane_segmentsElement.length
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementLength;
    ::ad::physics::MetricRange valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
    ::ad::physics::Distance valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(-1e9);
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
    ::ad::physics::Distance valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(-1e9);
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum;
    valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum;
    valueConstellationsElementIntersecting_roadElementLane_segmentsElement.width
      = valueConstellationsElementIntersecting_roadElementLane_segmentsElementWidth;
    valueConstellationsElementIntersecting_roadElementLane_segments.resize(
      1, valueConstellationsElementIntersecting_roadElementLane_segmentsElement);
    valueConstellationsElementIntersecting_roadElement.lane_segments
      = valueConstellationsElementIntersecting_roadElementLane_segments;
    ::ad::physics::Distance valueConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(
      -1e9);
    valueConstellationsElementIntersecting_roadElement.minimum_length_after_intersecting_area
      = valueConstellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
    ::ad::physics::Distance valueConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(
      -1e9);
    valueConstellationsElementIntersecting_roadElement.minimum_length_before_intersecting_area
      = valueConstellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
    valueConstellationsElementIntersecting_road.resize(1, valueConstellationsElementIntersecting_roadElement);
    valueConstellationsElement.intersecting_road = valueConstellationsElementIntersecting_road;
    ::ad::rss::world::RoadArea valueConstellationsElementEgo_vehicle_road;
    ::ad::rss::world::RoadSegment valueConstellationsElementEgo_vehicle_roadElement;
    ::ad::rss::world::RoadSegmentType valueConstellationsElementEgo_vehicle_roadElementType(
      ::ad::rss::world::RoadSegmentType::Normal);
    valueConstellationsElementEgo_vehicle_roadElement.type = valueConstellationsElementEgo_vehicle_roadElementType;
    ::ad::rss::world::LaneSegmentVector valueConstellationsElementEgo_vehicle_roadElementLane_segments;
    ::ad::rss::world::LaneSegment valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElement;
    ::ad::rss::world::LaneSegmentId valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
    ::ad::rss::world::LaneDrivingDirection
      valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
        ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.driving_direction
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
    ::ad::physics::MetricRange valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(-1e9);
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(-1e9);
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.length
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
    ::ad::physics::MetricRange valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(-1e9);
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(-1e9);
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
    valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
      = valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
    valueConstellationsElementEgo_vehicle_roadElementLane_segments.resize(
      1, valueConstellationsElementEgo_vehicle_roadElementLane_segmentsElement);
    valueConstellationsElementEgo_vehicle_roadElement.lane_segments
      = valueConstellationsElementEgo_vehicle_roadElementLane_segments;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(
      -1e9);
    valueConstellationsElementEgo_vehicle_roadElement.minimum_length_after_intersecting_area
      = valueConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
    ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(
      -1e9);
    valueConstellationsElementEgo_vehicle_roadElement.minimum_length_before_intersecting_area
      = valueConstellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
    valueConstellationsElementEgo_vehicle_road.resize(1, valueConstellationsElementEgo_vehicle_roadElement);
    valueConstellationsElement.ego_vehicle_road = valueConstellationsElementEgo_vehicle_road;
    valueConstellations.resize(1, valueConstellationsElement);
    value.constellations = valueConstellations;
    mValue = value;
  }

  ::ad::rss::world::WorldModel mValue;
};

TEST_F(WorldModelTests, copyConstruction)
{
  ::ad::rss::world::WorldModel value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, moveConstruction)
{
  ::ad::rss::world::WorldModel tmpValue(mValue);
  ::ad::rss::world::WorldModel value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, copyAssignment)
{
  ::ad::rss::world::WorldModel value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, moveAssignment)
{
  ::ad::rss::world::WorldModel tmpValue(mValue);
  ::ad::rss::world::WorldModel value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, comparisonOperatorEqual)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(WorldModelTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(WorldModelTests, comparisonOperatorTime_indexDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::TimeIndex time_index(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.time_index = time_index;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorDefault_ego_vehicle_rss_dynamicsDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::RssDynamics default_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues default_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lon.accel_max = default_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_max = default_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = default_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_max = default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  default_ego_vehicle_rss_dynamics.alpha_lon = default_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues default_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_latAccel_max(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lat.accel_max = default_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_latBrake_min(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  default_ego_vehicle_rss_dynamicsAlpha_lat.brake_min = default_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  default_ego_vehicle_rss_dynamics.alpha_lat = default_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance default_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(1e9);
  default_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  default_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = default_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration default_ego_vehicle_rss_dynamicsResponse_time(1e6);
  default_ego_vehicle_rss_dynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  default_ego_vehicle_rss_dynamics.response_time = default_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed default_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(100.);
  default_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = default_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings default_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle default_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  default_ego_vehicle_rss_dynamics.unstructured_settings = default_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance default_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  default_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = default_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueA.default_ego_vehicle_rss_dynamics = default_ego_vehicle_rss_dynamics;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorConstellationsDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::ConstellationVector constellations;
  ::ad::rss::world::Constellation constellationsElement;
  ::ad::rss::world::ConstellationType constellationsElementConstellation_type(
    ::ad::rss::world::ConstellationType::Unstructured);
  constellationsElement.constellation_type = constellationsElementConstellation_type;
  ::ad::rss::world::Object constellationsElementEgo_vehicle;
  ::ad::rss::world::ObjectId constellationsElementEgo_vehicleObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  constellationsElementEgo_vehicle.object_id = constellationsElementEgo_vehicleObject_id;
  ::ad::rss::world::ObjectType constellationsElementEgo_vehicleObject_type(::ad::rss::world::ObjectType::OtherObject);
  constellationsElementEgo_vehicle.object_type = constellationsElementEgo_vehicleObject_type;
  ::ad::rss::world::OccupiedRegionVector constellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::OccupiedRegion constellationsElementEgo_vehicleOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId constellationsElementEgo_vehicleOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  constellationsElementEgo_vehicleOccupied_regionsElement.segment_id
    = constellationsElementEgo_vehicleOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange constellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue constellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum(1.);
  constellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = constellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue constellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum(1.);
  constellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = constellationsElementEgo_vehicleOccupied_regionsElementLon_rangeMaximum;
  constellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum
    = constellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum;
  constellationsElementEgo_vehicleOccupied_regionsElementLon_range.minimum
    = constellationsElementEgo_vehicleOccupied_regionsElementLon_range.maximum;
  constellationsElementEgo_vehicleOccupied_regionsElement.lon_range
    = constellationsElementEgo_vehicleOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange constellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue constellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum(1.);
  constellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = constellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue constellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum(1.);
  constellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = constellationsElementEgo_vehicleOccupied_regionsElementLat_rangeMaximum;
  constellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum
    = constellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum;
  constellationsElementEgo_vehicleOccupied_regionsElementLat_range.minimum
    = constellationsElementEgo_vehicleOccupied_regionsElementLat_range.maximum;
  constellationsElementEgo_vehicleOccupied_regionsElement.lat_range
    = constellationsElementEgo_vehicleOccupied_regionsElementLat_range;
  constellationsElementEgo_vehicleOccupied_regions.resize(0 + 1,
                                                          constellationsElementEgo_vehicleOccupied_regionsElement);
  constellationsElementEgo_vehicle.occupied_regions = constellationsElementEgo_vehicleOccupied_regions;
  ::ad::rss::world::Velocity constellationsElementEgo_vehicleVelocity;
  ::ad::physics::Speed constellationsElementEgo_vehicleVelocitySpeed_lon_min(100.);
  constellationsElementEgo_vehicleVelocity.speed_lon_min = constellationsElementEgo_vehicleVelocitySpeed_lon_min;
  ::ad::physics::Speed constellationsElementEgo_vehicleVelocitySpeed_lon_max(100.);
  constellationsElementEgo_vehicleVelocity.speed_lon_max = constellationsElementEgo_vehicleVelocitySpeed_lon_max;
  ::ad::physics::Speed constellationsElementEgo_vehicleVelocitySpeed_lat_min(100.);
  constellationsElementEgo_vehicleVelocity.speed_lat_min = constellationsElementEgo_vehicleVelocitySpeed_lat_min;
  ::ad::physics::Speed constellationsElementEgo_vehicleVelocitySpeed_lat_max(100.);
  constellationsElementEgo_vehicleVelocity.speed_lat_max = constellationsElementEgo_vehicleVelocitySpeed_lat_max;
  constellationsElementEgo_vehicleVelocity.speed_lat_max = constellationsElementEgo_vehicleVelocity.speed_lat_min;
  constellationsElementEgo_vehicleVelocity.speed_lon_max = constellationsElementEgo_vehicleVelocity.speed_lon_min;
  constellationsElementEgo_vehicleVelocity.speed_lat_min = constellationsElementEgo_vehicleVelocity.speed_lat_max;
  constellationsElementEgo_vehicleVelocity.speed_lon_min = constellationsElementEgo_vehicleVelocity.speed_lon_max;
  constellationsElementEgo_vehicle.velocity = constellationsElementEgo_vehicleVelocity;
  ::ad::rss::world::ObjectState constellationsElementEgo_vehicleState;
  ::ad::physics::Angle constellationsElementEgo_vehicleStateYaw(6.283185308);
  constellationsElementEgo_vehicleState.yaw = constellationsElementEgo_vehicleStateYaw;
  ::ad::physics::Dimension2D constellationsElementEgo_vehicleStateDimension;
  ::ad::physics::Distance constellationsElementEgo_vehicleStateDimensionLength(1e9);
  constellationsElementEgo_vehicleStateDimension.length = constellationsElementEgo_vehicleStateDimensionLength;
  ::ad::physics::Distance constellationsElementEgo_vehicleStateDimensionWidth(1e9);
  constellationsElementEgo_vehicleStateDimension.width = constellationsElementEgo_vehicleStateDimensionWidth;
  constellationsElementEgo_vehicleState.dimension = constellationsElementEgo_vehicleStateDimension;
  ::ad::physics::AngularVelocity constellationsElementEgo_vehicleStateYaw_rate(100.);
  constellationsElementEgo_vehicleState.yaw_rate = constellationsElementEgo_vehicleStateYaw_rate;
  ::ad::physics::Distance2D constellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::Distance constellationsElementEgo_vehicleStateCenter_pointX(1e9);
  constellationsElementEgo_vehicleStateCenter_point.x = constellationsElementEgo_vehicleStateCenter_pointX;
  ::ad::physics::Distance constellationsElementEgo_vehicleStateCenter_pointY(1e9);
  constellationsElementEgo_vehicleStateCenter_point.y = constellationsElementEgo_vehicleStateCenter_pointY;
  constellationsElementEgo_vehicleState.center_point = constellationsElementEgo_vehicleStateCenter_point;
  ::ad::physics::SpeedRange constellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Speed constellationsElementEgo_vehicleStateSpeed_rangeMinimum(100.);
  constellationsElementEgo_vehicleStateSpeed_range.minimum = constellationsElementEgo_vehicleStateSpeed_rangeMinimum;
  ::ad::physics::Speed constellationsElementEgo_vehicleStateSpeed_rangeMaximum(100.);
  constellationsElementEgo_vehicleStateSpeed_range.maximum = constellationsElementEgo_vehicleStateSpeed_rangeMaximum;
  constellationsElementEgo_vehicleStateSpeed_range.maximum = constellationsElementEgo_vehicleStateSpeed_range.minimum;
  constellationsElementEgo_vehicleStateSpeed_range.minimum = constellationsElementEgo_vehicleStateSpeed_range.maximum;
  constellationsElementEgo_vehicleState.speed_range = constellationsElementEgo_vehicleStateSpeed_range;
  ::ad::physics::Angle constellationsElementEgo_vehicleStateSteering_angle(6.283185308);
  constellationsElementEgo_vehicleState.steering_angle = constellationsElementEgo_vehicleStateSteering_angle;
  constellationsElementEgo_vehicle.state = constellationsElementEgo_vehicleState;
  constellationsElement.ego_vehicle = constellationsElementEgo_vehicle;
  ::ad::rss::world::RssDynamics constellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max(1e2);
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.accel_max
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max(1e2);
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min(1e2);
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max;
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_max
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min;
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  constellationsElementEgo_vehicle_rss_dynamics.alpha_lon = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues constellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration constellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max(1e2);
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.accel_max
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration constellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min(1e2);
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  constellationsElementEgo_vehicle_rss_dynamicsAlpha_lat.brake_min
    = constellationsElementEgo_vehicle_rss_dynamicsAlpha_latBrake_min;
  constellationsElementEgo_vehicle_rss_dynamics.alpha_lat = constellationsElementEgo_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance constellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin(1e9);
  constellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  constellationsElementEgo_vehicle_rss_dynamics.lateral_fluctuation_margin
    = constellationsElementEgo_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration constellationsElementEgo_vehicle_rss_dynamicsResponse_time(1e6);
  constellationsElementEgo_vehicle_rss_dynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  constellationsElementEgo_vehicle_rss_dynamics.response_time
    = constellationsElementEgo_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed constellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration(100.);
  constellationsElementEgo_vehicle_rss_dynamics.max_speed_on_acceleration
    = constellationsElementEgo_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(
    1e9);
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(
    6.283185308);
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  constellationsElementEgo_vehicle_rss_dynamics.unstructured_settings
    = constellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance constellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  constellationsElementEgo_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = constellationsElementEgo_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  constellationsElement.ego_vehicle_rss_dynamics = constellationsElementEgo_vehicle_rss_dynamics;
  ::ad::rss::world::Object constellationsElementObject;
  ::ad::rss::world::ObjectId constellationsElementObjectObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  constellationsElementObject.object_id = constellationsElementObjectObject_id;
  ::ad::rss::world::ObjectType constellationsElementObjectObject_type(::ad::rss::world::ObjectType::OtherObject);
  constellationsElementObject.object_type = constellationsElementObjectObject_type;
  ::ad::rss::world::OccupiedRegionVector constellationsElementObjectOccupied_regions;
  ::ad::rss::world::OccupiedRegion constellationsElementObjectOccupied_regionsElement;
  ::ad::rss::world::LaneSegmentId constellationsElementObjectOccupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  constellationsElementObjectOccupied_regionsElement.segment_id
    = constellationsElementObjectOccupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange constellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricValue constellationsElementObjectOccupied_regionsElementLon_rangeMinimum(1.);
  constellationsElementObjectOccupied_regionsElementLon_range.minimum
    = constellationsElementObjectOccupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue constellationsElementObjectOccupied_regionsElementLon_rangeMaximum(1.);
  constellationsElementObjectOccupied_regionsElementLon_range.maximum
    = constellationsElementObjectOccupied_regionsElementLon_rangeMaximum;
  constellationsElementObjectOccupied_regionsElementLon_range.maximum
    = constellationsElementObjectOccupied_regionsElementLon_range.minimum;
  constellationsElementObjectOccupied_regionsElementLon_range.minimum
    = constellationsElementObjectOccupied_regionsElementLon_range.maximum;
  constellationsElementObjectOccupied_regionsElement.lon_range
    = constellationsElementObjectOccupied_regionsElementLon_range;
  ::ad::physics::ParametricRange constellationsElementObjectOccupied_regionsElementLat_range;
  ::ad::physics::ParametricValue constellationsElementObjectOccupied_regionsElementLat_rangeMinimum(1.);
  constellationsElementObjectOccupied_regionsElementLat_range.minimum
    = constellationsElementObjectOccupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue constellationsElementObjectOccupied_regionsElementLat_rangeMaximum(1.);
  constellationsElementObjectOccupied_regionsElementLat_range.maximum
    = constellationsElementObjectOccupied_regionsElementLat_rangeMaximum;
  constellationsElementObjectOccupied_regionsElementLat_range.maximum
    = constellationsElementObjectOccupied_regionsElementLat_range.minimum;
  constellationsElementObjectOccupied_regionsElementLat_range.minimum
    = constellationsElementObjectOccupied_regionsElementLat_range.maximum;
  constellationsElementObjectOccupied_regionsElement.lat_range
    = constellationsElementObjectOccupied_regionsElementLat_range;
  constellationsElementObjectOccupied_regions.resize(0 + 1, constellationsElementObjectOccupied_regionsElement);
  constellationsElementObject.occupied_regions = constellationsElementObjectOccupied_regions;
  ::ad::rss::world::Velocity constellationsElementObjectVelocity;
  ::ad::physics::Speed constellationsElementObjectVelocitySpeed_lon_min(100.);
  constellationsElementObjectVelocity.speed_lon_min = constellationsElementObjectVelocitySpeed_lon_min;
  ::ad::physics::Speed constellationsElementObjectVelocitySpeed_lon_max(100.);
  constellationsElementObjectVelocity.speed_lon_max = constellationsElementObjectVelocitySpeed_lon_max;
  ::ad::physics::Speed constellationsElementObjectVelocitySpeed_lat_min(100.);
  constellationsElementObjectVelocity.speed_lat_min = constellationsElementObjectVelocitySpeed_lat_min;
  ::ad::physics::Speed constellationsElementObjectVelocitySpeed_lat_max(100.);
  constellationsElementObjectVelocity.speed_lat_max = constellationsElementObjectVelocitySpeed_lat_max;
  constellationsElementObjectVelocity.speed_lat_max = constellationsElementObjectVelocity.speed_lat_min;
  constellationsElementObjectVelocity.speed_lon_max = constellationsElementObjectVelocity.speed_lon_min;
  constellationsElementObjectVelocity.speed_lat_min = constellationsElementObjectVelocity.speed_lat_max;
  constellationsElementObjectVelocity.speed_lon_min = constellationsElementObjectVelocity.speed_lon_max;
  constellationsElementObject.velocity = constellationsElementObjectVelocity;
  ::ad::rss::world::ObjectState constellationsElementObjectState;
  ::ad::physics::Angle constellationsElementObjectStateYaw(6.283185308);
  constellationsElementObjectState.yaw = constellationsElementObjectStateYaw;
  ::ad::physics::Dimension2D constellationsElementObjectStateDimension;
  ::ad::physics::Distance constellationsElementObjectStateDimensionLength(1e9);
  constellationsElementObjectStateDimension.length = constellationsElementObjectStateDimensionLength;
  ::ad::physics::Distance constellationsElementObjectStateDimensionWidth(1e9);
  constellationsElementObjectStateDimension.width = constellationsElementObjectStateDimensionWidth;
  constellationsElementObjectState.dimension = constellationsElementObjectStateDimension;
  ::ad::physics::AngularVelocity constellationsElementObjectStateYaw_rate(100.);
  constellationsElementObjectState.yaw_rate = constellationsElementObjectStateYaw_rate;
  ::ad::physics::Distance2D constellationsElementObjectStateCenter_point;
  ::ad::physics::Distance constellationsElementObjectStateCenter_pointX(1e9);
  constellationsElementObjectStateCenter_point.x = constellationsElementObjectStateCenter_pointX;
  ::ad::physics::Distance constellationsElementObjectStateCenter_pointY(1e9);
  constellationsElementObjectStateCenter_point.y = constellationsElementObjectStateCenter_pointY;
  constellationsElementObjectState.center_point = constellationsElementObjectStateCenter_point;
  ::ad::physics::SpeedRange constellationsElementObjectStateSpeed_range;
  ::ad::physics::Speed constellationsElementObjectStateSpeed_rangeMinimum(100.);
  constellationsElementObjectStateSpeed_range.minimum = constellationsElementObjectStateSpeed_rangeMinimum;
  ::ad::physics::Speed constellationsElementObjectStateSpeed_rangeMaximum(100.);
  constellationsElementObjectStateSpeed_range.maximum = constellationsElementObjectStateSpeed_rangeMaximum;
  constellationsElementObjectStateSpeed_range.maximum = constellationsElementObjectStateSpeed_range.minimum;
  constellationsElementObjectStateSpeed_range.minimum = constellationsElementObjectStateSpeed_range.maximum;
  constellationsElementObjectState.speed_range = constellationsElementObjectStateSpeed_range;
  ::ad::physics::Angle constellationsElementObjectStateSteering_angle(6.283185308);
  constellationsElementObjectState.steering_angle = constellationsElementObjectStateSteering_angle;
  constellationsElementObject.state = constellationsElementObjectState;
  constellationsElement.object = constellationsElementObject;
  ::ad::rss::world::RssDynamics constellationsElementObject_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues constellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration constellationsElementObject_rss_dynamicsAlpha_lonAccel_max(1e2);
  constellationsElementObject_rss_dynamicsAlpha_lon.accel_max
    = constellationsElementObject_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration constellationsElementObject_rss_dynamicsAlpha_lonBrake_max(1e2);
  constellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = constellationsElementObject_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration constellationsElementObject_rss_dynamicsAlpha_lonBrake_min(1e2);
  constellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = constellationsElementObject_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration constellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  constellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  constellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = constellationsElementObject_rss_dynamicsAlpha_lonBrake_min_correct;
  constellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct
    = constellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  constellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = constellationsElementObject_rss_dynamicsAlpha_lon.brake_max;
  constellationsElementObject_rss_dynamicsAlpha_lon.brake_max
    = constellationsElementObject_rss_dynamicsAlpha_lon.brake_min;
  constellationsElementObject_rss_dynamicsAlpha_lon.brake_min
    = constellationsElementObject_rss_dynamicsAlpha_lon.brake_min_correct;
  constellationsElementObject_rss_dynamics.alpha_lon = constellationsElementObject_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues constellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration constellationsElementObject_rss_dynamicsAlpha_latAccel_max(1e2);
  constellationsElementObject_rss_dynamicsAlpha_lat.accel_max
    = constellationsElementObject_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration constellationsElementObject_rss_dynamicsAlpha_latBrake_min(1e2);
  constellationsElementObject_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  constellationsElementObject_rss_dynamicsAlpha_lat.brake_min
    = constellationsElementObject_rss_dynamicsAlpha_latBrake_min;
  constellationsElementObject_rss_dynamics.alpha_lat = constellationsElementObject_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance constellationsElementObject_rss_dynamicsLateral_fluctuation_margin(1e9);
  constellationsElementObject_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  constellationsElementObject_rss_dynamics.lateral_fluctuation_margin
    = constellationsElementObject_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration constellationsElementObject_rss_dynamicsResponse_time(1e6);
  constellationsElementObject_rss_dynamicsResponse_time
    = ::ad::physics::Duration(10.); // set to valid value within struct
  constellationsElementObject_rss_dynamics.response_time = constellationsElementObject_rss_dynamicsResponse_time;
  ::ad::physics::Speed constellationsElementObject_rss_dynamicsMax_speed_on_acceleration(100.);
  constellationsElementObject_rss_dynamics.max_speed_on_acceleration
    = constellationsElementObject_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings constellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  constellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle constellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  constellationsElementObject_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = constellationsElementObject_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  constellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  constellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  constellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  constellationsElementObject_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = constellationsElementObject_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  constellationsElementObject_rss_dynamics.unstructured_settings
    = constellationsElementObject_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance constellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  constellationsElementObject_rss_dynamics.min_longitudinal_safety_distance
    = constellationsElementObject_rss_dynamicsMin_longitudinal_safety_distance;
  constellationsElement.object_rss_dynamics = constellationsElementObject_rss_dynamics;
  ::ad::rss::world::RoadArea constellationsElementIntersecting_road;
  ::ad::rss::world::RoadSegment constellationsElementIntersecting_roadElement;
  ::ad::rss::world::RoadSegmentType constellationsElementIntersecting_roadElementType(
    ::ad::rss::world::RoadSegmentType::Intersection);
  constellationsElementIntersecting_roadElement.type = constellationsElementIntersecting_roadElementType;
  ::ad::rss::world::LaneSegmentVector constellationsElementIntersecting_roadElementLane_segments;
  ::ad::rss::world::LaneSegment constellationsElementIntersecting_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId constellationsElementIntersecting_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  constellationsElementIntersecting_roadElementLane_segmentsElement.id
    = constellationsElementIntersecting_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    constellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Negative);
  constellationsElementIntersecting_roadElementLane_segmentsElement.driving_direction
    = constellationsElementIntersecting_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange constellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance constellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum(1e9);
  constellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
    = constellationsElementIntersecting_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance constellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum(1e9);
  constellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  constellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
    = constellationsElementIntersecting_roadElementLane_segmentsElementLengthMaximum;
  constellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum
    = constellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum;
  constellationsElementIntersecting_roadElementLane_segmentsElementLength.minimum
    = constellationsElementIntersecting_roadElementLane_segmentsElementLength.maximum;
  constellationsElementIntersecting_roadElementLane_segmentsElement.length
    = constellationsElementIntersecting_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange constellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance constellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum(1e9);
  constellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = constellationsElementIntersecting_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance constellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum(1e9);
  constellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  constellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = constellationsElementIntersecting_roadElementLane_segmentsElementWidthMaximum;
  constellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum
    = constellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum;
  constellationsElementIntersecting_roadElementLane_segmentsElementWidth.minimum
    = constellationsElementIntersecting_roadElementLane_segmentsElementWidth.maximum;
  constellationsElementIntersecting_roadElementLane_segmentsElement.width
    = constellationsElementIntersecting_roadElementLane_segmentsElementWidth;
  constellationsElementIntersecting_roadElementLane_segments.resize(
    1 + 1, constellationsElementIntersecting_roadElementLane_segmentsElement);
  constellationsElementIntersecting_roadElement.lane_segments
    = constellationsElementIntersecting_roadElementLane_segments;
  ::ad::physics::Distance constellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area(1e9);
  constellationsElementIntersecting_roadElement.minimum_length_after_intersecting_area
    = constellationsElementIntersecting_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance constellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area(1e9);
  constellationsElementIntersecting_roadElement.minimum_length_before_intersecting_area
    = constellationsElementIntersecting_roadElementMinimum_length_before_intersecting_area;
  constellationsElementIntersecting_road.resize(0 + 1, constellationsElementIntersecting_roadElement);
  constellationsElement.intersecting_road = constellationsElementIntersecting_road;
  ::ad::rss::world::RoadArea constellationsElementEgo_vehicle_road;
  ::ad::rss::world::RoadSegment constellationsElementEgo_vehicle_roadElement;
  ::ad::rss::world::RoadSegmentType constellationsElementEgo_vehicle_roadElementType(
    ::ad::rss::world::RoadSegmentType::Intersection);
  constellationsElementEgo_vehicle_roadElement.type = constellationsElementEgo_vehicle_roadElementType;
  ::ad::rss::world::LaneSegmentVector constellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::rss::world::LaneSegment constellationsElementEgo_vehicle_roadElementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId constellationsElementEgo_vehicle_roadElementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  constellationsElementEgo_vehicle_roadElementLane_segmentsElement.id
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection
    constellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Negative);
  constellationsElementEgo_vehicle_roadElementLane_segmentsElement.driving_direction
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange constellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::Distance constellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum(1e9);
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance constellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum(1e9);
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementLengthMaximum;
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum;
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.minimum
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementLength.maximum;
  constellationsElementEgo_vehicle_roadElementLane_segmentsElement.length
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementLength;
  ::ad::physics::MetricRange constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  ::ad::physics::Distance constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum(1e9);
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum(1e9);
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidthMaximum;
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum;
  constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.minimum
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth.maximum;
  constellationsElementEgo_vehicle_roadElementLane_segmentsElement.width
    = constellationsElementEgo_vehicle_roadElementLane_segmentsElementWidth;
  constellationsElementEgo_vehicle_roadElementLane_segments.resize(
    1 + 1, constellationsElementEgo_vehicle_roadElementLane_segmentsElement);
  constellationsElementEgo_vehicle_roadElement.lane_segments
    = constellationsElementEgo_vehicle_roadElementLane_segments;
  ::ad::physics::Distance constellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(1e9);
  constellationsElementEgo_vehicle_roadElement.minimum_length_after_intersecting_area
    = constellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance constellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area(1e9);
  constellationsElementEgo_vehicle_roadElement.minimum_length_before_intersecting_area
    = constellationsElementEgo_vehicle_roadElementMinimum_length_before_intersecting_area;
  constellationsElementEgo_vehicle_road.resize(0 + 1, constellationsElementEgo_vehicle_roadElement);
  constellationsElement.ego_vehicle_road = constellationsElementEgo_vehicle_road;
  constellations.resize(0 + 1, constellationsElement);
  valueA.constellations = constellations;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
