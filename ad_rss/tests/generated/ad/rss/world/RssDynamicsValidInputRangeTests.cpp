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

#include "ad/rss/world/RssDynamicsValidInputRange.hpp"

TEST(RssDynamicsValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlpha_lonTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value below input range minimum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(-1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlpha_lonTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value above input range maximum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlpha_latTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value below input range minimum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(-1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlpha_latTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value above input range maximum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeLateral_fluctuation_marginTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.lateral_fluctuation_margin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember
    = ::ad::physics::Distance(0. - ::ad::physics::Distance::cPrecisionValue); // set to invalid value within struct
  value.lateral_fluctuation_margin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeLateral_fluctuation_marginTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.lateral_fluctuation_margin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Distance(1. * 1.1); // set to invalid value within struct
  value.lateral_fluctuation_margin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangelateral_fluctuation_marginDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Distance valueDefault;
  value.lateral_fluctuation_margin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeResponse_timeTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value below input range minimum
  ::ad::physics::Duration invalidInitializedMember(0. - ::ad::physics::Duration::cPrecisionValue);
  value.response_time = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember = ::ad::physics::Duration(0.); // set to valid value within struct
  value.response_time = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeResponse_timeTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value above input range maximum
  ::ad::physics::Duration invalidInitializedMember(1e6 * 1.1);
  value.response_time = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Duration(10. * 1.1); // set to invalid value within struct
  value.response_time = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeresponse_timeDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Duration valueDefault;
  value.response_time = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeMax_speed_on_accelerationTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.max_speed_on_acceleration = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeMax_speed_on_accelerationTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.max_speed_on_acceleration = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangemax_speed_on_accelerationDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Speed valueDefault;
  value.max_speed_on_acceleration = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeUnstructured_settingsTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value below input range minimum
  ::ad::rss::world::UnstructuredSettings invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberPedestrian_turning_radius(-1e9 * 1.1);
  invalidInitializedMember.pedestrian_turning_radius = invalidInitializedMemberPedestrian_turning_radius;
  value.unstructured_settings = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeUnstructured_settingsTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value above input range maximum
  ::ad::rss::world::UnstructuredSettings invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberPedestrian_turning_radius(1e9 * 1.1);
  invalidInitializedMember.pedestrian_turning_radius = invalidInitializedMemberPedestrian_turning_radius;
  value.unstructured_settings = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeMin_longitudinal_safety_distanceTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.min_longitudinal_safety_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeMin_longitudinal_safety_distanceTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlpha_lon;
  ::ad::physics::Acceleration valueAlpha_lonAccel_max(-1e2);
  valueAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lon.accel_max = valueAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_max(-1e2);
  valueAlpha_lon.brake_max = valueAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min(-1e2);
  valueAlpha_lon.brake_min = valueAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueAlpha_lonBrake_min_correct(-1e2);
  valueAlpha_lon.brake_min_correct = valueAlpha_lonBrake_min_correct;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_max;
  valueAlpha_lon.brake_min_correct = valueAlpha_lon.brake_min;
  valueAlpha_lon.brake_min = valueAlpha_lon.brake_min_correct;
  valueAlpha_lon.brake_max = valueAlpha_lon.brake_min;
  value.alpha_lon = valueAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::physics::Distance valueLateral_fluctuation_margin(-1e9);
  valueLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  value.lateral_fluctuation_margin = valueLateral_fluctuation_margin;
  ::ad::physics::Duration valueResponse_time(0.);
  valueResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.response_time = valueResponse_time;
  ::ad::physics::Speed valueMax_speed_on_acceleration(-100.);
  value.max_speed_on_acceleration = valueMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueUnstructured_settings;
  ::ad::physics::Distance valueUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueUnstructured_settings.pedestrian_turning_radius = valueUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueUnstructured_settings.drive_away_max_angle = valueUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueUnstructured_settings.vehicle_yaw_rate_change = valueUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueUnstructured_settingsVehicle_min_radius(-1e9);
  valueUnstructured_settings.vehicle_min_radius = valueUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueUnstructured_settings.vehicle_trajectory_calculation_step
    = valueUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  value.unstructured_settings = valueUnstructured_settings;
  ::ad::physics::Distance valueMin_longitudinal_safety_distance(-1e9);
  value.min_longitudinal_safety_distance = valueMin_longitudinal_safety_distance;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.min_longitudinal_safety_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangemin_longitudinal_safety_distanceDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Distance valueDefault;
  value.min_longitudinal_safety_distance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
