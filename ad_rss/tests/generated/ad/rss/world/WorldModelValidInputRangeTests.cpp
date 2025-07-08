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

#include "ad/rss/world/WorldModelValidInputRange.hpp"

TEST(WorldModelValidInputRangeTests, testValidInputRange)
{
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
  ::ad::physics::AngularAcceleration valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
    -1e2);
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
    0.);
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
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
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
  ::ad::rss::world::ObjectType valueConstellationsElementEgo_vehicleObject_type(::ad::rss::world::ObjectType::Invalid);
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
  valueConstellationsElementEgo_vehicleStateDimension.width = valueConstellationsElementEgo_vehicleStateDimensionWidth;
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
  valueConstellationsElementEgo_vehicleState.steering_angle = valueConstellationsElementEgo_vehicleStateSteering_angle;
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
  valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
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
  valueConstellationsElementObjectVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
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
  ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeDefault_ego_vehicle_rss_dynamicsTooSmall)
{
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
  ::ad::physics::AngularAcceleration valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
    -1e2);
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
    0.);
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
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
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
  ::ad::rss::world::ObjectType valueConstellationsElementEgo_vehicleObject_type(::ad::rss::world::ObjectType::Invalid);
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
  valueConstellationsElementEgo_vehicleStateDimension.width = valueConstellationsElementEgo_vehicleStateDimensionWidth;
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
  valueConstellationsElementEgo_vehicleState.steering_angle = valueConstellationsElementEgo_vehicleStateSteering_angle;
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
  valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
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
  valueConstellationsElementObjectVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
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
  ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(-1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.default_ego_vehicle_rss_dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeDefault_ego_vehicle_rss_dynamicsTooBig)
{
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
  ::ad::physics::AngularAcceleration valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(
    -1e2);
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(
    0.);
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
  valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
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
  ::ad::rss::world::ObjectType valueConstellationsElementEgo_vehicleObject_type(::ad::rss::world::ObjectType::Invalid);
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
  valueConstellationsElementEgo_vehicleStateDimension.width = valueConstellationsElementEgo_vehicleStateDimensionWidth;
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
  valueConstellationsElementEgo_vehicleState.steering_angle = valueConstellationsElementEgo_vehicleStateSteering_angle;
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
  valueConstellationsElementEgo_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
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
  valueConstellationsElementObjectVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
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
  ::ad::physics::Distance valueConstellationsElementEgo_vehicle_roadElementMinimum_length_after_intersecting_area(-1e9);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.default_ego_vehicle_rss_dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
