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

#include "ad/rss/map/RssConstellationConfigurationValidInputRange.hpp"

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRangeConstellation_creation_modeTooSmall)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;

  // override member with data type value below input range minimum
  ::ad::rss::map::RssConstellationCreationMode invalidInitializedMember(
    static_cast<::ad::rss::map::RssConstellationCreationMode>(-1));
  value.constellation_creation_mode = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRangeConstellation_creation_modeTooBig)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;

  // override member with data type value above input range maximum
  ::ad::rss::map::RssConstellationCreationMode invalidInitializedMember(
    static_cast<::ad::rss::map::RssConstellationCreationMode>(-1));
  value.constellation_creation_mode = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRangeRestrict_speed_limit_modeTooSmall)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;

  // override member with data type value below input range minimum
  ::ad::rss::map::RssRestrictSpeedLimitMode invalidInitializedMember(
    static_cast<::ad::rss::map::RssRestrictSpeedLimitMode>(-1));
  value.restrict_speed_limit_mode = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRangeRestrict_speed_limit_modeTooBig)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;

  // override member with data type value above input range maximum
  ::ad::rss::map::RssRestrictSpeedLimitMode invalidInitializedMember(
    static_cast<::ad::rss::map::RssRestrictSpeedLimitMode>(-1));
  value.restrict_speed_limit_mode = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRangeEgo_vehicle_dynamicsTooSmall)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(-1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.ego_vehicle_dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRangeEgo_vehicle_dynamicsTooBig)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.ego_vehicle_dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRangeObject_dynamicsTooSmall)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(-1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.object_dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssConstellationConfigurationValidInputRangeTests, testValidInputRangeObject_dynamicsTooBig)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  ::ad::rss::map::RssConstellationCreationMode valueConstellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Ignore);
  value.constellation_creation_mode = valueConstellation_creation_mode;
  ::ad::rss::map::RssRestrictSpeedLimitMode valueRestrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::None);
  value.restrict_speed_limit_mode = valueRestrict_speed_limit_mode;
  ::ad::rss::world::RssDynamics valueEgo_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lon.accel_max = valueEgo_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lonBrake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_max;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_min = valueEgo_vehicle_dynamicsAlpha_lon.brake_min_correct;
  valueEgo_vehicle_dynamicsAlpha_lon.brake_max = valueEgo_vehicle_dynamicsAlpha_lon.brake_min;
  valueEgo_vehicle_dynamics.alpha_lon = valueEgo_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latAccel_max(-1e2);
  valueEgo_vehicle_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueEgo_vehicle_dynamicsAlpha_lat.accel_max = valueEgo_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueEgo_vehicle_dynamicsAlpha_latBrake_min(-1e2);
  valueEgo_vehicle_dynamicsAlpha_lat.brake_min = valueEgo_vehicle_dynamicsAlpha_latBrake_min;
  valueEgo_vehicle_dynamics.alpha_lat = valueEgo_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsLateral_fluctuation_margin(-1e9);
  valueEgo_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueEgo_vehicle_dynamics.lateral_fluctuation_margin = valueEgo_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsResponse_time(0.);
  valueEgo_vehicle_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgo_vehicle_dynamics.response_time = valueEgo_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed valueEgo_vehicle_dynamicsMax_speed_on_acceleration(-100.);
  valueEgo_vehicle_dynamics.max_speed_on_acceleration = valueEgo_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueEgo_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = valueEgo_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueEgo_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueEgo_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueEgo_vehicle_dynamics.unstructured_settings = valueEgo_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueEgo_vehicle_dynamics.min_longitudinal_safety_distance
    = valueEgo_vehicle_dynamicsMin_longitudinal_safety_distance;
  value.ego_vehicle_dynamics = valueEgo_vehicle_dynamics;
  ::ad::rss::world::RssDynamics valueObject_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueObject_dynamicsAlpha_lon;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonAccel_max(-1e2);
  valueObject_dynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lon.accel_max = valueObject_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_max(-1e2);
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_lonBrake_min_correct(-1e2);
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lonBrake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_max;
  valueObject_dynamicsAlpha_lon.brake_min_correct = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamicsAlpha_lon.brake_min = valueObject_dynamicsAlpha_lon.brake_min_correct;
  valueObject_dynamicsAlpha_lon.brake_max = valueObject_dynamicsAlpha_lon.brake_min;
  valueObject_dynamics.alpha_lon = valueObject_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues valueObject_dynamicsAlpha_lat;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latAccel_max(-1e2);
  valueObject_dynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueObject_dynamicsAlpha_lat.accel_max = valueObject_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration valueObject_dynamicsAlpha_latBrake_min(-1e2);
  valueObject_dynamicsAlpha_lat.brake_min = valueObject_dynamicsAlpha_latBrake_min;
  valueObject_dynamics.alpha_lat = valueObject_dynamicsAlpha_lat;
  ::ad::physics::Distance valueObject_dynamicsLateral_fluctuation_margin(-1e9);
  valueObject_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  valueObject_dynamics.lateral_fluctuation_margin = valueObject_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration valueObject_dynamicsResponse_time(0.);
  valueObject_dynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObject_dynamics.response_time = valueObject_dynamicsResponse_time;
  ::ad::physics::Speed valueObject_dynamicsMax_speed_on_acceleration(-100.);
  valueObject_dynamics.max_speed_on_acceleration = valueObject_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.pedestrian_turning_radius
    = valueObject_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle valueObject_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  valueObject_dynamicsUnstructured_settings.drive_away_max_angle
    = valueObject_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  valueObject_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = valueObject_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance valueObject_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  valueObject_dynamicsUnstructured_settings.vehicle_min_radius
    = valueObject_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  valueObject_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = valueObject_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  valueObject_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = valueObject_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueObject_dynamics.unstructured_settings = valueObject_dynamicsUnstructured_settings;
  ::ad::physics::Distance valueObject_dynamicsMin_longitudinal_safety_distance(-1e9);
  valueObject_dynamics.min_longitudinal_safety_distance = valueObject_dynamicsMin_longitudinal_safety_distance;
  value.object_dynamics = valueObject_dynamics;

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlpha_lon;
  ::ad::physics::Acceleration invalidInitializedMemberAlpha_lonAccel_max(1e2 * 1.1);
  invalidInitializedMemberAlpha_lon.accel_max = invalidInitializedMemberAlpha_lonAccel_max;
  invalidInitializedMember.alpha_lon = invalidInitializedMemberAlpha_lon;
  value.object_dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
