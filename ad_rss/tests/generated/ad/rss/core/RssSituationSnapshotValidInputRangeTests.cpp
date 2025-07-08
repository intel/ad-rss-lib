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

#include "ad/rss/core/RssSituationSnapshotValidInputRange.hpp"

TEST(RssSituationSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::core::RssSituationSnapshot value;
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
  ::ad::rss::core::RelativeConstellationVector valueConstellations;
  ::ad::rss::core::RelativeConstellation valueConstellationsElement;
  ::ad::rss::world::ObjectId valueConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueConstellationsElement.ego_id = valueConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId valueConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueConstellationsElement.object_id = valueConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellationsElementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueConstellationsElement.constellation_id = valueConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellationsElementConstellation_type(
    ::ad::rss::world::ConstellationType::NotRelevant);
  valueConstellationsElement.constellation_type = valueConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState valueConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType valueConstellationsElementEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueConstellationsElementEgo_state.object_type = valueConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementEgo_stateDynamics.alpha_lon = valueConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  valueConstellationsElementEgo_stateDynamics.alpha_lat = valueConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamics.lateral_fluctuation_margin
    = valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueConstellationsElementEgo_stateDynamicsResponse_time(0.);
  valueConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamics.response_time = valueConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueConstellationsElementEgo_stateDynamics.max_speed_on_acceleration
    = valueConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
    -1e9);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
    -6.283185308);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueConstellationsElementEgo_stateDynamics.unstructured_settings
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueConstellationsElementEgo_stateDynamics.min_longitudinal_safety_distance
    = valueConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueConstellationsElementEgo_state.dynamics = valueConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueConstellationsElementEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueConstellationsElementEgo_stateUnstructured_object_state.yaw
    = valueConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateDimension.length
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateDimension.width
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  valueConstellationsElementEgo_stateUnstructured_object_state.dimension
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_state.yaw_rate
    = valueConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point.x
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point.y
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  valueConstellationsElementEgo_stateUnstructured_object_state.center_point
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueConstellationsElementEgo_stateUnstructured_object_state.speed_range
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueConstellationsElementEgo_stateUnstructured_object_state.steering_angle
    = valueConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  valueConstellationsElementEgo_state.unstructured_object_state
    = valueConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueConstellationsElementEgo_stateStructured_object_state.velocity
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool valueConstellationsElementEgo_stateStructured_object_stateHas_priority{true};
  valueConstellationsElementEgo_stateStructured_object_state.has_priority
    = valueConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool valueConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueConstellationsElementEgo_stateStructured_object_state.is_in_correct_lane
    = valueConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
    -1e9);
  valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
    -1e9);
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueConstellationsElementEgo_state.structured_object_state
    = valueConstellationsElementEgo_stateStructured_object_state;
  valueConstellationsElement.ego_state = valueConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState valueConstellationsElementOther_state;
  ::ad::rss::world::ObjectType valueConstellationsElementOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueConstellationsElementOther_state.object_type = valueConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementOther_stateDynamics.alpha_lon = valueConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  valueConstellationsElementOther_stateDynamics.alpha_lat = valueConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamics.lateral_fluctuation_margin
    = valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueConstellationsElementOther_stateDynamicsResponse_time(0.);
  valueConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueConstellationsElementOther_stateDynamics.response_time
    = valueConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueConstellationsElementOther_stateDynamics.max_speed_on_acceleration
    = valueConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
    -1e9);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
    -6.283185308);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueConstellationsElementOther_stateDynamics.unstructured_settings
    = valueConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueConstellationsElementOther_stateDynamics.min_longitudinal_safety_distance
    = valueConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  valueConstellationsElementOther_state.dynamics = valueConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState valueConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueConstellationsElementOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueConstellationsElementOther_stateUnstructured_object_state.yaw
    = valueConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateDimension.length
    = valueConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateDimension.width
    = valueConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  valueConstellationsElementOther_stateUnstructured_object_state.dimension
    = valueConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueConstellationsElementOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueConstellationsElementOther_stateUnstructured_object_state.yaw_rate
    = valueConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateCenter_point.x
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateCenter_point.y
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  valueConstellationsElementOther_stateUnstructured_object_state.center_point
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueConstellationsElementOther_stateUnstructured_object_state.speed_range
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueConstellationsElementOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueConstellationsElementOther_stateUnstructured_object_state.steering_angle
    = valueConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  valueConstellationsElementOther_state.unstructured_object_state
    = valueConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueConstellationsElementOther_stateStructured_object_state.velocity
    = valueConstellationsElementOther_stateStructured_object_stateVelocity;
  bool valueConstellationsElementOther_stateStructured_object_stateHas_priority{true};
  valueConstellationsElementOther_stateStructured_object_state.has_priority
    = valueConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool valueConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueConstellationsElementOther_stateStructured_object_state.is_in_correct_lane
    = valueConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
    -1e9);
  valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
    -1e9);
  valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection;
  valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection;
  valueConstellationsElementOther_state.structured_object_state
    = valueConstellationsElementOther_stateStructured_object_state;
  valueConstellationsElement.other_state = valueConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition valueConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueConstellationsElementRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueConstellationsElementRelative_position.longitudinal_position
    = valueConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueConstellationsElementRelative_positionLongitudinal_distance(-1e9);
  valueConstellationsElementRelative_position.longitudinal_distance
    = valueConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueConstellationsElementRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueConstellationsElementRelative_position.lateral_position
    = valueConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance valueConstellationsElementRelative_positionLateral_distance(-1e9);
  valueConstellationsElementRelative_position.lateral_distance
    = valueConstellationsElementRelative_positionLateral_distance;
  valueConstellationsElement.relative_position = valueConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueConstellationsElementWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueConstellationsElementWorld_model_indices.resize(1, valueConstellationsElementWorld_model_indicesElement);
  valueConstellationsElement.world_model_indices = valueConstellationsElementWorld_model_indices;
  valueConstellations.resize(1, valueConstellationsElement);
  value.constellations = valueConstellations;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssSituationSnapshotValidInputRangeTests, testValidInputRangeDefault_ego_vehicle_rss_dynamicsTooSmall)
{
  ::ad::rss::core::RssSituationSnapshot value;
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
  ::ad::rss::core::RelativeConstellationVector valueConstellations;
  ::ad::rss::core::RelativeConstellation valueConstellationsElement;
  ::ad::rss::world::ObjectId valueConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueConstellationsElement.ego_id = valueConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId valueConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueConstellationsElement.object_id = valueConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellationsElementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueConstellationsElement.constellation_id = valueConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellationsElementConstellation_type(
    ::ad::rss::world::ConstellationType::NotRelevant);
  valueConstellationsElement.constellation_type = valueConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState valueConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType valueConstellationsElementEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueConstellationsElementEgo_state.object_type = valueConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementEgo_stateDynamics.alpha_lon = valueConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  valueConstellationsElementEgo_stateDynamics.alpha_lat = valueConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamics.lateral_fluctuation_margin
    = valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueConstellationsElementEgo_stateDynamicsResponse_time(0.);
  valueConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamics.response_time = valueConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueConstellationsElementEgo_stateDynamics.max_speed_on_acceleration
    = valueConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
    -1e9);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
    -6.283185308);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueConstellationsElementEgo_stateDynamics.unstructured_settings
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueConstellationsElementEgo_stateDynamics.min_longitudinal_safety_distance
    = valueConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueConstellationsElementEgo_state.dynamics = valueConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueConstellationsElementEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueConstellationsElementEgo_stateUnstructured_object_state.yaw
    = valueConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateDimension.length
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateDimension.width
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  valueConstellationsElementEgo_stateUnstructured_object_state.dimension
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_state.yaw_rate
    = valueConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point.x
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point.y
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  valueConstellationsElementEgo_stateUnstructured_object_state.center_point
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueConstellationsElementEgo_stateUnstructured_object_state.speed_range
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueConstellationsElementEgo_stateUnstructured_object_state.steering_angle
    = valueConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  valueConstellationsElementEgo_state.unstructured_object_state
    = valueConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueConstellationsElementEgo_stateStructured_object_state.velocity
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool valueConstellationsElementEgo_stateStructured_object_stateHas_priority{true};
  valueConstellationsElementEgo_stateStructured_object_state.has_priority
    = valueConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool valueConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueConstellationsElementEgo_stateStructured_object_state.is_in_correct_lane
    = valueConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
    -1e9);
  valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
    -1e9);
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueConstellationsElementEgo_state.structured_object_state
    = valueConstellationsElementEgo_stateStructured_object_state;
  valueConstellationsElement.ego_state = valueConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState valueConstellationsElementOther_state;
  ::ad::rss::world::ObjectType valueConstellationsElementOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueConstellationsElementOther_state.object_type = valueConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementOther_stateDynamics.alpha_lon = valueConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  valueConstellationsElementOther_stateDynamics.alpha_lat = valueConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamics.lateral_fluctuation_margin
    = valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueConstellationsElementOther_stateDynamicsResponse_time(0.);
  valueConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueConstellationsElementOther_stateDynamics.response_time
    = valueConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueConstellationsElementOther_stateDynamics.max_speed_on_acceleration
    = valueConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
    -1e9);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
    -6.283185308);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueConstellationsElementOther_stateDynamics.unstructured_settings
    = valueConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueConstellationsElementOther_stateDynamics.min_longitudinal_safety_distance
    = valueConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  valueConstellationsElementOther_state.dynamics = valueConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState valueConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueConstellationsElementOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueConstellationsElementOther_stateUnstructured_object_state.yaw
    = valueConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateDimension.length
    = valueConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateDimension.width
    = valueConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  valueConstellationsElementOther_stateUnstructured_object_state.dimension
    = valueConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueConstellationsElementOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueConstellationsElementOther_stateUnstructured_object_state.yaw_rate
    = valueConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateCenter_point.x
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateCenter_point.y
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  valueConstellationsElementOther_stateUnstructured_object_state.center_point
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueConstellationsElementOther_stateUnstructured_object_state.speed_range
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueConstellationsElementOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueConstellationsElementOther_stateUnstructured_object_state.steering_angle
    = valueConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  valueConstellationsElementOther_state.unstructured_object_state
    = valueConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueConstellationsElementOther_stateStructured_object_state.velocity
    = valueConstellationsElementOther_stateStructured_object_stateVelocity;
  bool valueConstellationsElementOther_stateStructured_object_stateHas_priority{true};
  valueConstellationsElementOther_stateStructured_object_state.has_priority
    = valueConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool valueConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueConstellationsElementOther_stateStructured_object_state.is_in_correct_lane
    = valueConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
    -1e9);
  valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
    -1e9);
  valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection;
  valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection;
  valueConstellationsElementOther_state.structured_object_state
    = valueConstellationsElementOther_stateStructured_object_state;
  valueConstellationsElement.other_state = valueConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition valueConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueConstellationsElementRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueConstellationsElementRelative_position.longitudinal_position
    = valueConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueConstellationsElementRelative_positionLongitudinal_distance(-1e9);
  valueConstellationsElementRelative_position.longitudinal_distance
    = valueConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueConstellationsElementRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueConstellationsElementRelative_position.lateral_position
    = valueConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance valueConstellationsElementRelative_positionLateral_distance(-1e9);
  valueConstellationsElementRelative_position.lateral_distance
    = valueConstellationsElementRelative_positionLateral_distance;
  valueConstellationsElement.relative_position = valueConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueConstellationsElementWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueConstellationsElementWorld_model_indices.resize(1, valueConstellationsElementWorld_model_indicesElement);
  valueConstellationsElement.world_model_indices = valueConstellationsElementWorld_model_indices;
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

TEST(RssSituationSnapshotValidInputRangeTests, testValidInputRangeDefault_ego_vehicle_rss_dynamicsTooBig)
{
  ::ad::rss::core::RssSituationSnapshot value;
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
  ::ad::rss::core::RelativeConstellationVector valueConstellations;
  ::ad::rss::core::RelativeConstellation valueConstellationsElement;
  ::ad::rss::world::ObjectId valueConstellationsElementEgo_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueConstellationsElement.ego_id = valueConstellationsElementEgo_id;
  ::ad::rss::world::ObjectId valueConstellationsElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueConstellationsElement.object_id = valueConstellationsElementObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellationsElementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  valueConstellationsElement.constellation_id = valueConstellationsElementConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellationsElementConstellation_type(
    ::ad::rss::world::ConstellationType::NotRelevant);
  valueConstellationsElement.constellation_type = valueConstellationsElementConstellation_type;
  ::ad::rss::core::RelativeObjectState valueConstellationsElementEgo_state;
  ::ad::rss::world::ObjectType valueConstellationsElementEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueConstellationsElementEgo_state.object_type = valueConstellationsElementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.accel_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementEgo_stateDynamics.alpha_lon = valueConstellationsElementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamicsAlpha_lat.accel_max
    = valueConstellationsElementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueConstellationsElementEgo_stateDynamicsAlpha_lat.brake_min
    = valueConstellationsElementEgo_stateDynamicsAlpha_latBrake_min;
  valueConstellationsElementEgo_stateDynamics.alpha_lat = valueConstellationsElementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamics.lateral_fluctuation_margin
    = valueConstellationsElementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueConstellationsElementEgo_stateDynamicsResponse_time(0.);
  valueConstellationsElementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueConstellationsElementEgo_stateDynamics.response_time = valueConstellationsElementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueConstellationsElementEgo_stateDynamics.max_speed_on_acceleration
    = valueConstellationsElementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
    -1e9);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(
    -6.283185308);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementEgo_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueConstellationsElementEgo_stateDynamics.unstructured_settings
    = valueConstellationsElementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueConstellationsElementEgo_stateDynamics.min_longitudinal_safety_distance
    = valueConstellationsElementEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueConstellationsElementEgo_state.dynamics = valueConstellationsElementEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueConstellationsElementEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueConstellationsElementEgo_stateUnstructured_object_state.yaw
    = valueConstellationsElementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateDimension.length
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateDimension.width
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimensionWidth;
  valueConstellationsElementEgo_stateUnstructured_object_state.dimension
    = valueConstellationsElementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueConstellationsElementEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_state.yaw_rate
    = valueConstellationsElementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point.x
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point.y
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_pointY;
  valueConstellationsElementEgo_stateUnstructured_object_state.center_point
    = valueConstellationsElementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueConstellationsElementEgo_stateUnstructured_object_state.speed_range
    = valueConstellationsElementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueConstellationsElementEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueConstellationsElementEgo_stateUnstructured_object_state.steering_angle
    = valueConstellationsElementEgo_stateUnstructured_object_stateSteering_angle;
  valueConstellationsElementEgo_state.unstructured_object_state
    = valueConstellationsElementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueConstellationsElementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueConstellationsElementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueConstellationsElementEgo_stateStructured_object_state.velocity
    = valueConstellationsElementEgo_stateStructured_object_stateVelocity;
  bool valueConstellationsElementEgo_stateStructured_object_stateHas_priority{true};
  valueConstellationsElementEgo_stateStructured_object_state.has_priority
    = valueConstellationsElementEgo_stateStructured_object_stateHas_priority;
  bool valueConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueConstellationsElementEgo_stateStructured_object_state.is_in_correct_lane
    = valueConstellationsElementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection(
    -1e9);
  valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection(
    -1e9);
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueConstellationsElementEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueConstellationsElementEgo_state.structured_object_state
    = valueConstellationsElementEgo_stateStructured_object_state;
  valueConstellationsElement.ego_state = valueConstellationsElementEgo_state;
  ::ad::rss::core::RelativeObjectState valueConstellationsElementOther_state;
  ::ad::rss::world::ObjectType valueConstellationsElementOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueConstellationsElementOther_state.object_type = valueConstellationsElementOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueConstellationsElementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamicsAlpha_lon.accel_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_max
    = valueConstellationsElementOther_stateDynamicsAlpha_lon.brake_min;
  valueConstellationsElementOther_stateDynamics.alpha_lon = valueConstellationsElementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamicsAlpha_lat.accel_max
    = valueConstellationsElementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueConstellationsElementOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueConstellationsElementOther_stateDynamicsAlpha_lat.brake_min
    = valueConstellationsElementOther_stateDynamicsAlpha_latBrake_min;
  valueConstellationsElementOther_stateDynamics.alpha_lat = valueConstellationsElementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementOther_stateDynamics.lateral_fluctuation_margin
    = valueConstellationsElementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueConstellationsElementOther_stateDynamicsResponse_time(0.);
  valueConstellationsElementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueConstellationsElementOther_stateDynamics.response_time
    = valueConstellationsElementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueConstellationsElementOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueConstellationsElementOther_stateDynamics.max_speed_on_acceleration
    = valueConstellationsElementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(
    -1e9);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(
    -6.283185308);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_front_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t
    valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueConstellationsElementOther_stateDynamicsUnstructured_settings
    .pedestrian_back_intermediate_heading_change_ratio_steps
    = valueConstellationsElementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueConstellationsElementOther_stateDynamics.unstructured_settings
    = valueConstellationsElementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueConstellationsElementOther_stateDynamics.min_longitudinal_safety_distance
    = valueConstellationsElementOther_stateDynamicsMin_longitudinal_safety_distance;
  valueConstellationsElementOther_state.dynamics = valueConstellationsElementOther_stateDynamics;
  ::ad::rss::world::ObjectState valueConstellationsElementOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueConstellationsElementOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueConstellationsElementOther_stateUnstructured_object_state.yaw
    = valueConstellationsElementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateDimension.length
    = valueConstellationsElementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateDimension.width
    = valueConstellationsElementOther_stateUnstructured_object_stateDimensionWidth;
  valueConstellationsElementOther_stateUnstructured_object_state.dimension
    = valueConstellationsElementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueConstellationsElementOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueConstellationsElementOther_stateUnstructured_object_state.yaw_rate
    = valueConstellationsElementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateCenter_point.x
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueConstellationsElementOther_stateUnstructured_object_stateCenter_point.y
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_pointY;
  valueConstellationsElementOther_stateUnstructured_object_state.center_point
    = valueConstellationsElementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueConstellationsElementOther_stateUnstructured_object_state.speed_range
    = valueConstellationsElementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueConstellationsElementOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueConstellationsElementOther_stateUnstructured_object_state.steering_angle
    = valueConstellationsElementOther_stateUnstructured_object_stateSteering_angle;
  valueConstellationsElementOther_state.unstructured_object_state
    = valueConstellationsElementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueConstellationsElementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueConstellationsElementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueConstellationsElementOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueConstellationsElementOther_stateStructured_object_state.velocity
    = valueConstellationsElementOther_stateStructured_object_stateVelocity;
  bool valueConstellationsElementOther_stateStructured_object_stateHas_priority{true};
  valueConstellationsElementOther_stateStructured_object_state.has_priority
    = valueConstellationsElementOther_stateStructured_object_stateHas_priority;
  bool valueConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueConstellationsElementOther_stateStructured_object_state.is_in_correct_lane
    = valueConstellationsElementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection(
    -1e9);
  valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection(
    -1e9);
  valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection
    = valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection;
  valueConstellationsElementOther_stateStructured_object_state.distance_to_enter_intersection
    = valueConstellationsElementOther_stateStructured_object_state.distance_to_leave_intersection;
  valueConstellationsElementOther_state.structured_object_state
    = valueConstellationsElementOther_stateStructured_object_state;
  valueConstellationsElement.other_state = valueConstellationsElementOther_state;
  ::ad::rss::core::RelativePosition valueConstellationsElementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueConstellationsElementRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueConstellationsElementRelative_position.longitudinal_position
    = valueConstellationsElementRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueConstellationsElementRelative_positionLongitudinal_distance(-1e9);
  valueConstellationsElementRelative_position.longitudinal_distance
    = valueConstellationsElementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueConstellationsElementRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueConstellationsElementRelative_position.lateral_position
    = valueConstellationsElementRelative_positionLateral_position;
  ::ad::physics::Distance valueConstellationsElementRelative_positionLateral_distance(-1e9);
  valueConstellationsElementRelative_position.lateral_distance
    = valueConstellationsElementRelative_positionLateral_distance;
  valueConstellationsElement.relative_position = valueConstellationsElementRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueConstellationsElementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueConstellationsElementWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueConstellationsElementWorld_model_indices.resize(1, valueConstellationsElementWorld_model_indicesElement);
  valueConstellationsElement.world_model_indices = valueConstellationsElementWorld_model_indices;
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
