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

#include "ad/rss/core/RelativeObjectStateValidInputRange.hpp"

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRangeObject_typeTooSmall)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;

  // override member with data type value below input range minimum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.object_type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRangeObject_typeTooBig)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.object_type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRangeDynamicsTooSmall)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(-1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRangeDynamicsTooBig)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRangeUnstructured_object_stateTooSmall)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;

  // override member with data type value below input range minimum
  ::ad::rss::world::ObjectState invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberYaw(-6.283185308 * 1.1);
  invalidInitializedMember.yaw = invalidInitializedMemberYaw;
  value.unstructured_object_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRangeUnstructured_object_stateTooBig)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectState invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberYaw(6.283185308 * 1.1);
  invalidInitializedMember.yaw = invalidInitializedMemberYaw;
  value.unstructured_object_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRangeStructured_object_stateTooSmall)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;

  // override member with data type value below input range minimum
  ::ad::rss::core::StructuredObjectState invalidInitializedMember;
  ::ad::rss::world::Velocity invalidInitializedMemberVelocity;
  ::ad::physics::Speed invalidInitializedMemberVelocitySpeed_lon_min(-100. * 1.1);
  invalidInitializedMemberVelocity.speed_lon_min = invalidInitializedMemberVelocitySpeed_lon_min;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.structured_object_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeObjectStateValidInputRangeTests, testValidInputRangeStructured_object_stateTooBig)
{
  ::ad::rss::core::RelativeObjectState value;
  ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
  value.object_type = valueObject_type;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlpha_lon;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonAccel_max(-1e2);
  valueDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lon.accel_max = valueDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_max(-1e2);
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min(-1e2);
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueDynamicsAlpha_lonBrake_min_correct(-1e2);
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lonBrake_min_correct;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_max;
  valueDynamicsAlpha_lon.brake_min_correct = valueDynamicsAlpha_lon.brake_min;
  valueDynamicsAlpha_lon.brake_min = valueDynamicsAlpha_lon.brake_min_correct;
  valueDynamicsAlpha_lon.brake_max = valueDynamicsAlpha_lon.brake_min;
  valueDynamics.alpha_lon = valueDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlpha_lat;
  ::ad::physics::Acceleration valueDynamicsAlpha_latAccel_max(-1e2);
  valueDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlpha_lat.accel_max = valueDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueDynamicsAlpha_latBrake_min(-1e2);
  valueDynamicsAlpha_lat.brake_min = valueDynamicsAlpha_latBrake_min;
  valueDynamics.alpha_lat = valueDynamicsAlpha_lat;
  ::ad::physics::Distance valueDynamicsLateral_fluctuation_margin(-1e9);
  valueDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueDynamics.lateral_fluctuation_margin = valueDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueDynamicsResponse_time(0.);
  valueDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.response_time = valueDynamicsResponse_time;
  ::ad::physics::Speed valueDynamicsMax_speed_on_acceleration(-100.);
  valueDynamics.max_speed_on_acceleration = valueDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueDynamicsUnstructured_settings.pedestrian_turning_radius
    = valueDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueDynamicsUnstructured_settings.drive_away_max_angle = valueDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueDynamicsUnstructured_settings.vehicle_min_radius = valueDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueDynamics.unstructured_settings = valueDynamicsUnstructured_settings;
  ::ad::physics::Distance valueDynamicsMin_longitudinal_safety_distance(-1e9);
  valueDynamics.min_longitudinal_safety_distance = valueDynamicsMin_longitudinal_safety_distance;
  value.dynamics = valueDynamics;
  ::ad::rss::world::ObjectState valueUnstructured_object_state;
  ::ad::physics::Angle valueUnstructured_object_stateYaw(-6.283185308);
  valueUnstructured_object_state.yaw = valueUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D valueUnstructured_object_stateDimension;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionLength(-1e9);
  valueUnstructured_object_stateDimension.length = valueUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance valueUnstructured_object_stateDimensionWidth(-1e9);
  valueUnstructured_object_stateDimension.width = valueUnstructured_object_stateDimensionWidth;
  valueUnstructured_object_state.dimension = valueUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity valueUnstructured_object_stateYaw_rate(-100.);
  valueUnstructured_object_state.yaw_rate = valueUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D valueUnstructured_object_stateCenter_point;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointX(-1e9);
  valueUnstructured_object_stateCenter_point.x = valueUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance valueUnstructured_object_stateCenter_pointY(-1e9);
  valueUnstructured_object_stateCenter_point.y = valueUnstructured_object_stateCenter_pointY;
  valueUnstructured_object_state.center_point = valueUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMinimum(-100.);
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed valueUnstructured_object_stateSpeed_rangeMaximum(-100.);
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_rangeMaximum;
  valueUnstructured_object_stateSpeed_range.maximum = valueUnstructured_object_stateSpeed_range.minimum;
  valueUnstructured_object_stateSpeed_range.minimum = valueUnstructured_object_stateSpeed_range.maximum;
  valueUnstructured_object_state.speed_range = valueUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle valueUnstructured_object_stateSteering_angle(-6.283185308);
  valueUnstructured_object_state.steering_angle = valueUnstructured_object_stateSteering_angle;
  value.unstructured_object_state = valueUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState valueStructured_object_state;
  ::ad::rss::world::Velocity valueStructured_object_stateVelocity;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_min(-100.);
  valueStructured_object_stateVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lon_max(-100.);
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_min(-100.);
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed valueStructured_object_stateVelocitySpeed_lat_max(-100.);
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocitySpeed_lat_max;
  valueStructured_object_stateVelocity.speed_lon_max = valueStructured_object_stateVelocity.speed_lon_min;
  valueStructured_object_stateVelocity.speed_lat_max = valueStructured_object_stateVelocity.speed_lat_min;
  valueStructured_object_stateVelocity.speed_lon_min = valueStructured_object_stateVelocity.speed_lon_max;
  valueStructured_object_stateVelocity.speed_lat_min = valueStructured_object_stateVelocity.speed_lat_max;
  valueStructured_object_state.velocity = valueStructured_object_stateVelocity;
  bool valueStructured_object_stateHas_priority{true};
  valueStructured_object_state.has_priority = valueStructured_object_stateHas_priority;
  bool valueStructured_object_stateIs_in_correct_lane{true};
  valueStructured_object_state.is_in_correct_lane = valueStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_enter_intersection(-1e9);
  valueStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance valueStructured_object_stateDistance_to_leave_intersection(-1e9);
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_stateDistance_to_leave_intersection;
  valueStructured_object_state.distance_to_leave_intersection
    = valueStructured_object_state.distance_to_enter_intersection;
  valueStructured_object_state.distance_to_enter_intersection
    = valueStructured_object_state.distance_to_leave_intersection;
  value.structured_object_state = valueStructured_object_state;

  // override member with data type value above input range maximum
  ::ad::rss::core::StructuredObjectState invalidInitializedMember;
  ::ad::rss::world::Velocity invalidInitializedMemberVelocity;
  ::ad::physics::Speed invalidInitializedMemberVelocitySpeed_lon_min(100. * 1.1);
  invalidInitializedMemberVelocity.speed_lon_min = invalidInitializedMemberVelocitySpeed_lon_min;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.structured_object_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
