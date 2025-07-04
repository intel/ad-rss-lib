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

#include "ad/rss/core/RelativeConstellationValidInputRange.hpp"

TEST(RelativeConstellationValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativeConstellationValidInputRangeTests, testValidInputRangeConstellation_typeTooSmall)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;

  // override member with data type value below input range minimum
  ::ad::rss::world::ConstellationType invalidInitializedMember(static_cast<::ad::rss::world::ConstellationType>(-1));
  value.constellation_type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationValidInputRangeTests, testValidInputRangeConstellation_typeTooBig)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;

  // override member with data type value above input range maximum
  ::ad::rss::world::ConstellationType invalidInitializedMember(static_cast<::ad::rss::world::ConstellationType>(-1));
  value.constellation_type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationValidInputRangeTests, testValidInputRangeEgo_stateTooSmall)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;

  // override member with data type value below input range minimum
  ::ad::rss::core::RelativeObjectState invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObject_type(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.object_type = invalidInitializedMemberObject_type;
  value.ego_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationValidInputRangeTests, testValidInputRangeEgo_stateTooBig)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;

  // override member with data type value above input range maximum
  ::ad::rss::core::RelativeObjectState invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObject_type(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.object_type = invalidInitializedMemberObject_type;
  value.ego_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationValidInputRangeTests, testValidInputRangeOther_stateTooSmall)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;

  // override member with data type value below input range minimum
  ::ad::rss::core::RelativeObjectState invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObject_type(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.object_type = invalidInitializedMemberObject_type;
  value.other_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationValidInputRangeTests, testValidInputRangeOther_stateTooBig)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;

  // override member with data type value above input range maximum
  ::ad::rss::core::RelativeObjectState invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObject_type(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.object_type = invalidInitializedMemberObject_type;
  value.other_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationValidInputRangeTests, testValidInputRangeRelative_positionTooSmall)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;

  // override member with data type value below input range minimum
  ::ad::rss::core::RelativePosition invalidInitializedMember;
  ::ad::rss::core::LongitudinalRelativePosition invalidInitializedMemberLongitudinal_position(
    static_cast<::ad::rss::core::LongitudinalRelativePosition>(-1));
  invalidInitializedMember.longitudinal_position = invalidInitializedMemberLongitudinal_position;
  value.relative_position = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationValidInputRangeTests, testValidInputRangeRelative_positionTooBig)
{
  ::ad::rss::core::RelativeConstellation value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ::ad::rss::core::RelativeObjectState valueEgo_state;
  ::ad::rss::world::ObjectType valueEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueEgo_state.object_type = valueEgo_stateObject_type;
  ::ad::rss::world::RssDynamics valueEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lon.accel_max = valueEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lonBrake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_max;
  valueEgo_stateDynamicsAlpha_lon.brake_min_correct = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamicsAlpha_lon.brake_min = valueEgo_stateDynamicsAlpha_lon.brake_min_correct;
  valueEgo_stateDynamicsAlpha_lon.brake_max = valueEgo_stateDynamicsAlpha_lon.brake_min;
  valueEgo_stateDynamics.alpha_lon = valueEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  valueEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_stateDynamicsAlpha_lat.accel_max = valueEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  valueEgo_stateDynamicsAlpha_lat.brake_min = valueEgo_stateDynamicsAlpha_latBrake_min;
  valueEgo_stateDynamics.alpha_lat = valueEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateDynamics.lateral_fluctuation_margin = valueEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_stateDynamicsResponse_time(0.);
  valueEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_stateDynamics.response_time = valueEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed valueEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  valueEgo_stateDynamics.max_speed_on_acceleration = valueEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_stateDynamics.unstructured_settings = valueEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_stateDynamics.min_longitudinal_safety_distance = valueEgo_stateDynamicsMin_longitudinal_safety_distance;
  valueEgo_state.dynamics = valueEgo_stateDynamics;
  ::ad::rss::world::ObjectState valueEgo_stateUnstructured_object_state;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateYaw(-6.283185308);
  valueEgo_stateUnstructured_object_state.yaw = valueEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.length = valueEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueEgo_stateUnstructured_object_stateDimension.width = valueEgo_stateUnstructured_object_stateDimensionWidth;
  valueEgo_stateUnstructured_object_state.dimension = valueEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueEgo_stateUnstructured_object_stateYaw_rate(-100.);
  valueEgo_stateUnstructured_object_state.yaw_rate = valueEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.x = valueEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueEgo_stateUnstructured_object_stateCenter_point.y = valueEgo_stateUnstructured_object_stateCenter_pointY;
  valueEgo_stateUnstructured_object_state.center_point = valueEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueEgo_stateUnstructured_object_stateSpeed_range.maximum
    = valueEgo_stateUnstructured_object_stateSpeed_range.minimum;
  valueEgo_stateUnstructured_object_stateSpeed_range.minimum
    = valueEgo_stateUnstructured_object_stateSpeed_range.maximum;
  valueEgo_stateUnstructured_object_state.speed_range = valueEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueEgo_stateUnstructured_object_state.steering_angle = valueEgo_stateUnstructured_object_stateSteering_angle;
  valueEgo_state.unstructured_object_state = valueEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity valueEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_max
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_min;
  valueEgo_stateStructured_object_stateVelocity.speed_lon_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lon_max;
  valueEgo_stateStructured_object_stateVelocity.speed_lat_min
    = valueEgo_stateStructured_object_stateVelocity.speed_lat_max;
  valueEgo_stateStructured_object_state.velocity = valueEgo_stateStructured_object_stateVelocity;
  bool valueEgo_stateStructured_object_stateHas_priority{true};
  valueEgo_stateStructured_object_state.has_priority = valueEgo_stateStructured_object_stateHas_priority;
  bool valueEgo_stateStructured_object_stateIs_in_correct_lane{true};
  valueEgo_stateStructured_object_state.is_in_correct_lane = valueEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_stateDistance_to_leave_intersection;
  valueEgo_stateStructured_object_state.distance_to_leave_intersection
    = valueEgo_stateStructured_object_state.distance_to_enter_intersection;
  valueEgo_stateStructured_object_state.distance_to_enter_intersection
    = valueEgo_stateStructured_object_state.distance_to_leave_intersection;
  valueEgo_state.structured_object_state = valueEgo_stateStructured_object_state;
  value.ego_state = valueEgo_state;
  ::ad::rss::core::RelativeObjectState valueOther_state;
  ::ad::rss::world::ObjectType valueOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  valueOther_state.object_type = valueOther_stateObject_type;
  ::ad::rss::world::RssDynamics valueOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lon.accel_max = valueOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lonBrake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_max;
  valueOther_stateDynamicsAlpha_lon.brake_min_correct = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamicsAlpha_lon.brake_min = valueOther_stateDynamicsAlpha_lon.brake_min_correct;
  valueOther_stateDynamicsAlpha_lon.brake_max = valueOther_stateDynamicsAlpha_lon.brake_min;
  valueOther_stateDynamics.alpha_lon = valueOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latAccel_max(-1e2);
  valueOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueOther_stateDynamicsAlpha_lat.accel_max = valueOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueOther_stateDynamicsAlpha_latBrake_min(-1e2);
  valueOther_stateDynamicsAlpha_lat.brake_min = valueOther_stateDynamicsAlpha_latBrake_min;
  valueOther_stateDynamics.alpha_lat = valueOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance valueOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateDynamics.lateral_fluctuation_margin = valueOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueOther_stateDynamicsResponse_time(0.);
  valueOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueOther_stateDynamics.response_time = valueOther_stateDynamicsResponse_time;
  ::ad::physics::Speed valueOther_stateDynamicsMax_speed_on_acceleration(-100.);
  valueOther_stateDynamics.max_speed_on_acceleration = valueOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = valueOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = valueOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueOther_stateDynamics.unstructured_settings = valueOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance valueOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  valueOther_stateDynamics.min_longitudinal_safety_distance = valueOther_stateDynamicsMin_longitudinal_safety_distance;
  valueOther_state.dynamics = valueOther_stateDynamics;
  ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
  valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
  valueOther_stateUnstructured_object_stateDimension.length = valueOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  valueOther_stateUnstructured_object_stateDimension.width = valueOther_stateUnstructured_object_stateDimensionWidth;
  valueOther_stateUnstructured_object_state.dimension = valueOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueOther_stateUnstructured_object_stateYaw_rate(-100.);
  valueOther_stateUnstructured_object_state.yaw_rate = valueOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.x = valueOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  valueOther_stateUnstructured_object_stateCenter_point.y = valueOther_stateUnstructured_object_stateCenter_pointY;
  valueOther_stateUnstructured_object_state.center_point = valueOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  valueOther_stateUnstructured_object_stateSpeed_range.maximum
    = valueOther_stateUnstructured_object_stateSpeed_range.minimum;
  valueOther_stateUnstructured_object_stateSpeed_range.minimum
    = valueOther_stateUnstructured_object_stateSpeed_range.maximum;
  valueOther_stateUnstructured_object_state.speed_range = valueOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  valueOther_stateUnstructured_object_state.steering_angle = valueOther_stateUnstructured_object_stateSteering_angle;
  valueOther_state.unstructured_object_state = valueOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueOther_stateStructured_object_state;
  ::ad::rss::world::Velocity valueOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocitySpeed_lat_max;
  valueOther_stateStructured_object_stateVelocity.speed_lon_max
    = valueOther_stateStructured_object_stateVelocity.speed_lon_min;
  valueOther_stateStructured_object_stateVelocity.speed_lat_max
    = valueOther_stateStructured_object_stateVelocity.speed_lat_min;
  valueOther_stateStructured_object_stateVelocity.speed_lon_min
    = valueOther_stateStructured_object_stateVelocity.speed_lon_max;
  valueOther_stateStructured_object_stateVelocity.speed_lat_min
    = valueOther_stateStructured_object_stateVelocity.speed_lat_max;
  valueOther_stateStructured_object_state.velocity = valueOther_stateStructured_object_stateVelocity;
  bool valueOther_stateStructured_object_stateHas_priority{true};
  valueOther_stateStructured_object_state.has_priority = valueOther_stateStructured_object_stateHas_priority;
  bool valueOther_stateStructured_object_stateIs_in_correct_lane{true};
  valueOther_stateStructured_object_state.is_in_correct_lane
    = valueOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_stateDistance_to_leave_intersection;
  valueOther_stateStructured_object_state.distance_to_leave_intersection
    = valueOther_stateStructured_object_state.distance_to_enter_intersection;
  valueOther_stateStructured_object_state.distance_to_enter_intersection
    = valueOther_stateStructured_object_state.distance_to_leave_intersection;
  valueOther_state.structured_object_state = valueOther_stateStructured_object_state;
  value.other_state = valueOther_state;
  ::ad::rss::core::RelativePosition valueRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition valueRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  valueRelative_position.longitudinal_position = valueRelative_positionLongitudinal_position;
  ::ad::physics::Distance valueRelative_positionLongitudinal_distance(-1e9);
  valueRelative_position.longitudinal_distance = valueRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition valueRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  valueRelative_position.lateral_position = valueRelative_positionLateral_position;
  ::ad::physics::Distance valueRelative_positionLateral_distance(-1e9);
  valueRelative_position.lateral_distance = valueRelative_positionLateral_distance;
  value.relative_position = valueRelative_position;
  ::ad::rss::world::WorldModelIndexVector valueWorld_model_indices;
  ::ad::rss::world::WorldModelIndex valueWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  valueWorld_model_indices.resize(1, valueWorld_model_indicesElement);
  value.world_model_indices = valueWorld_model_indices;

  // override member with data type value above input range maximum
  ::ad::rss::core::RelativePosition invalidInitializedMember;
  ::ad::rss::core::LongitudinalRelativePosition invalidInitializedMemberLongitudinal_position(
    static_cast<::ad::rss::core::LongitudinalRelativePosition>(-1));
  invalidInitializedMember.longitudinal_position = invalidInitializedMemberLongitudinal_position;
  value.relative_position = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
