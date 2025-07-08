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
#include "ad/rss/world/RssDynamics.hpp"

class RssDynamicsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    mValue = value;
  }

  ::ad::rss::world::RssDynamics mValue;
};

TEST_F(RssDynamicsTests, copyConstruction)
{
  ::ad::rss::world::RssDynamics value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, moveConstruction)
{
  ::ad::rss::world::RssDynamics tmpValue(mValue);
  ::ad::rss::world::RssDynamics value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, copyAssignment)
{
  ::ad::rss::world::RssDynamics value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, moveAssignment)
{
  ::ad::rss::world::RssDynamics tmpValue(mValue);
  ::ad::rss::world::RssDynamics value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssDynamicsTests, comparisonOperatorEqual)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssDynamicsTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssDynamicsTests, comparisonOperatorAlpha_lonDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::LongitudinalRssAccelerationValues alpha_lon;
  ::ad::physics::Acceleration alpha_lonAccel_max(1e2);
  alpha_lon.accel_max = alpha_lonAccel_max;
  ::ad::physics::Acceleration alpha_lonBrake_max(1e2);
  alpha_lon.brake_max = alpha_lonBrake_max;
  ::ad::physics::Acceleration alpha_lonBrake_min(1e2);
  alpha_lon.brake_min = alpha_lonBrake_min;
  ::ad::physics::Acceleration alpha_lonBrake_min_correct(1e2);
  alpha_lonBrake_min_correct = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  alpha_lon.brake_min_correct = alpha_lonBrake_min_correct;
  alpha_lon.brake_min_correct = alpha_lon.brake_min;
  alpha_lon.brake_min = alpha_lon.brake_max;
  alpha_lon.brake_max = alpha_lon.brake_min;
  alpha_lon.brake_min = alpha_lon.brake_min_correct;
  valueA.alpha_lon = alpha_lon;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorAlpha_latDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::LateralRssAccelerationValues alpha_lat;
  ::ad::physics::Acceleration alpha_latAccel_max(1e2);
  alpha_lat.accel_max = alpha_latAccel_max;
  ::ad::physics::Acceleration alpha_latBrake_min(1e2);
  alpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  alpha_lat.brake_min = alpha_latBrake_min;
  valueA.alpha_lat = alpha_lat;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorLateral_fluctuation_marginDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Distance lateral_fluctuation_margin(1e9);
  valueA.lateral_fluctuation_margin = lateral_fluctuation_margin;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorResponse_timeDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Duration response_time(1e6);
  valueA.response_time = response_time;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorMax_speed_on_accelerationDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Speed max_speed_on_acceleration(100.);
  valueA.max_speed_on_acceleration = max_speed_on_acceleration;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorUnstructured_settingsDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::rss::world::UnstructuredSettings unstructured_settings;
  ::ad::physics::Distance unstructured_settingsPedestrian_turning_radius(1e9);
  unstructured_settings.pedestrian_turning_radius = unstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle unstructured_settingsDrive_away_max_angle(6.283185308);
  unstructured_settings.drive_away_max_angle = unstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration unstructured_settingsVehicle_yaw_rate_change(1e2);
  unstructured_settings.vehicle_yaw_rate_change = unstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance unstructured_settingsVehicle_min_radius(1e9);
  unstructured_settings.vehicle_min_radius = unstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration unstructured_settingsVehicle_trajectory_calculation_step(1e6);
  unstructured_settings.vehicle_trajectory_calculation_step = unstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t unstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  unstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = unstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t unstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  unstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = unstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t unstructured_settingsVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::max()};
  unstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = unstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t unstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  unstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = unstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t unstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  unstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = unstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t unstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  unstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = unstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t unstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  unstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = unstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t unstructured_settingsPedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::max()};
  unstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = unstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t unstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  unstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = unstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t unstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  unstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = unstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  valueA.unstructured_settings = unstructured_settings;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssDynamicsTests, comparisonOperatorMin_longitudinal_safety_distanceDiffers)
{
  ::ad::rss::world::RssDynamics valueA = mValue;
  ::ad::physics::Distance min_longitudinal_safety_distance(1e9);
  valueA.min_longitudinal_safety_distance = min_longitudinal_safety_distance;
  ::ad::rss::world::RssDynamics valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
