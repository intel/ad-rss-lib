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
#include "ad/rss/map/RssConstellationConfiguration.hpp"

class RssConstellationConfigurationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    valueEgo_vehicle_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
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
    uint32_t
      valueObject_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
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
    mValue = value;
  }

  ::ad::rss::map::RssConstellationConfiguration mValue;
};

TEST_F(RssConstellationConfigurationTests, copyConstruction)
{
  ::ad::rss::map::RssConstellationConfiguration value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssConstellationConfigurationTests, moveConstruction)
{
  ::ad::rss::map::RssConstellationConfiguration tmpValue(mValue);
  ::ad::rss::map::RssConstellationConfiguration value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssConstellationConfigurationTests, copyAssignment)
{
  ::ad::rss::map::RssConstellationConfiguration value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssConstellationConfigurationTests, moveAssignment)
{
  ::ad::rss::map::RssConstellationConfiguration tmpValue(mValue);
  ::ad::rss::map::RssConstellationConfiguration value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssConstellationConfigurationTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssConstellationConfiguration valueA = mValue;
  ::ad::rss::map::RssConstellationConfiguration valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssConstellationConfigurationTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssConstellationConfigurationTests, comparisonOperatorConstellation_creation_modeDiffers)
{
  ::ad::rss::map::RssConstellationConfiguration valueA = mValue;
  ::ad::rss::map::RssConstellationCreationMode constellation_creation_mode(
    ::ad::rss::map::RssConstellationCreationMode::Unstructured);
  valueA.constellation_creation_mode = constellation_creation_mode;
  ::ad::rss::map::RssConstellationConfiguration valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssConstellationConfigurationTests, comparisonOperatorRestrict_speed_limit_modeDiffers)
{
  ::ad::rss::map::RssConstellationConfiguration valueA = mValue;
  ::ad::rss::map::RssRestrictSpeedLimitMode restrict_speed_limit_mode(
    ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10);
  valueA.restrict_speed_limit_mode = restrict_speed_limit_mode;
  ::ad::rss::map::RssConstellationConfiguration valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssConstellationConfigurationTests, comparisonOperatorEgo_vehicle_dynamicsDiffers)
{
  ::ad::rss::map::RssConstellationConfiguration valueA = mValue;
  ::ad::rss::world::RssDynamics ego_vehicle_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues ego_vehicle_dynamicsAlpha_lon;
  ::ad::physics::Acceleration ego_vehicle_dynamicsAlpha_lonAccel_max(1e2);
  ego_vehicle_dynamicsAlpha_lon.accel_max = ego_vehicle_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration ego_vehicle_dynamicsAlpha_lonBrake_max(1e2);
  ego_vehicle_dynamicsAlpha_lon.brake_max = ego_vehicle_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration ego_vehicle_dynamicsAlpha_lonBrake_min(1e2);
  ego_vehicle_dynamicsAlpha_lon.brake_min = ego_vehicle_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration ego_vehicle_dynamicsAlpha_lonBrake_min_correct(1e2);
  ego_vehicle_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  ego_vehicle_dynamicsAlpha_lon.brake_min_correct = ego_vehicle_dynamicsAlpha_lonBrake_min_correct;
  ego_vehicle_dynamicsAlpha_lon.brake_min_correct = ego_vehicle_dynamicsAlpha_lon.brake_min;
  ego_vehicle_dynamicsAlpha_lon.brake_min = ego_vehicle_dynamicsAlpha_lon.brake_max;
  ego_vehicle_dynamicsAlpha_lon.brake_max = ego_vehicle_dynamicsAlpha_lon.brake_min;
  ego_vehicle_dynamicsAlpha_lon.brake_min = ego_vehicle_dynamicsAlpha_lon.brake_min_correct;
  ego_vehicle_dynamics.alpha_lon = ego_vehicle_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues ego_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Acceleration ego_vehicle_dynamicsAlpha_latAccel_max(1e2);
  ego_vehicle_dynamicsAlpha_lat.accel_max = ego_vehicle_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration ego_vehicle_dynamicsAlpha_latBrake_min(1e2);
  ego_vehicle_dynamicsAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  ego_vehicle_dynamicsAlpha_lat.brake_min = ego_vehicle_dynamicsAlpha_latBrake_min;
  ego_vehicle_dynamics.alpha_lat = ego_vehicle_dynamicsAlpha_lat;
  ::ad::physics::Distance ego_vehicle_dynamicsLateral_fluctuation_margin(1e9);
  ego_vehicle_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(1.); // set to valid value within struct
  ego_vehicle_dynamics.lateral_fluctuation_margin = ego_vehicle_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration ego_vehicle_dynamicsResponse_time(1e6);
  ego_vehicle_dynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  ego_vehicle_dynamics.response_time = ego_vehicle_dynamicsResponse_time;
  ::ad::physics::Speed ego_vehicle_dynamicsMax_speed_on_acceleration(100.);
  ego_vehicle_dynamics.max_speed_on_acceleration = ego_vehicle_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings ego_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance ego_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  ego_vehicle_dynamicsUnstructured_settings.pedestrian_turning_radius
    = ego_vehicle_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle ego_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  ego_vehicle_dynamicsUnstructured_settings.drive_away_max_angle
    = ego_vehicle_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration ego_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  ego_vehicle_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = ego_vehicle_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance ego_vehicle_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  ego_vehicle_dynamicsUnstructured_settings.vehicle_min_radius
    = ego_vehicle_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration ego_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  ego_vehicle_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = ego_vehicle_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = ego_vehicle_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = ego_vehicle_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = ego_vehicle_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = ego_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = ego_vehicle_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = ego_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = ego_vehicle_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = ego_vehicle_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = ego_vehicle_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t ego_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_vehicle_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = ego_vehicle_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  ego_vehicle_dynamics.unstructured_settings = ego_vehicle_dynamicsUnstructured_settings;
  ::ad::physics::Distance ego_vehicle_dynamicsMin_longitudinal_safety_distance(1e9);
  ego_vehicle_dynamics.min_longitudinal_safety_distance = ego_vehicle_dynamicsMin_longitudinal_safety_distance;
  valueA.ego_vehicle_dynamics = ego_vehicle_dynamics;
  ::ad::rss::map::RssConstellationConfiguration valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssConstellationConfigurationTests, comparisonOperatorObject_dynamicsDiffers)
{
  ::ad::rss::map::RssConstellationConfiguration valueA = mValue;
  ::ad::rss::world::RssDynamics object_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues object_dynamicsAlpha_lon;
  ::ad::physics::Acceleration object_dynamicsAlpha_lonAccel_max(1e2);
  object_dynamicsAlpha_lon.accel_max = object_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration object_dynamicsAlpha_lonBrake_max(1e2);
  object_dynamicsAlpha_lon.brake_max = object_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration object_dynamicsAlpha_lonBrake_min(1e2);
  object_dynamicsAlpha_lon.brake_min = object_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration object_dynamicsAlpha_lonBrake_min_correct(1e2);
  object_dynamicsAlpha_lonBrake_min_correct = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  object_dynamicsAlpha_lon.brake_min_correct = object_dynamicsAlpha_lonBrake_min_correct;
  object_dynamicsAlpha_lon.brake_min_correct = object_dynamicsAlpha_lon.brake_min;
  object_dynamicsAlpha_lon.brake_min = object_dynamicsAlpha_lon.brake_max;
  object_dynamicsAlpha_lon.brake_max = object_dynamicsAlpha_lon.brake_min;
  object_dynamicsAlpha_lon.brake_min = object_dynamicsAlpha_lon.brake_min_correct;
  object_dynamics.alpha_lon = object_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues object_dynamicsAlpha_lat;
  ::ad::physics::Acceleration object_dynamicsAlpha_latAccel_max(1e2);
  object_dynamicsAlpha_lat.accel_max = object_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration object_dynamicsAlpha_latBrake_min(1e2);
  object_dynamicsAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  object_dynamicsAlpha_lat.brake_min = object_dynamicsAlpha_latBrake_min;
  object_dynamics.alpha_lat = object_dynamicsAlpha_lat;
  ::ad::physics::Distance object_dynamicsLateral_fluctuation_margin(1e9);
  object_dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(1.); // set to valid value within struct
  object_dynamics.lateral_fluctuation_margin = object_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration object_dynamicsResponse_time(1e6);
  object_dynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  object_dynamics.response_time = object_dynamicsResponse_time;
  ::ad::physics::Speed object_dynamicsMax_speed_on_acceleration(100.);
  object_dynamics.max_speed_on_acceleration = object_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings object_dynamicsUnstructured_settings;
  ::ad::physics::Distance object_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  object_dynamicsUnstructured_settings.pedestrian_turning_radius
    = object_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle object_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  object_dynamicsUnstructured_settings.drive_away_max_angle = object_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration object_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  object_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = object_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance object_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  object_dynamicsUnstructured_settings.vehicle_min_radius = object_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration object_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  object_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = object_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t object_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = object_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t object_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = object_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t object_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = object_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t object_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = object_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t object_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = object_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t object_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = object_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t object_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = object_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t object_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = object_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t object_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = object_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t object_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  object_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = object_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  object_dynamics.unstructured_settings = object_dynamicsUnstructured_settings;
  ::ad::physics::Distance object_dynamicsMin_longitudinal_safety_distance(1e9);
  object_dynamics.min_longitudinal_safety_distance = object_dynamicsMin_longitudinal_safety_distance;
  valueA.object_dynamics = object_dynamics;
  ::ad::rss::map::RssConstellationConfiguration valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
