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
#include "ad/rss/world/UnstructuredSettings.hpp"

class UnstructuredSettingsTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::UnstructuredSettings value;
    ::ad::physics::Distance valuePedestrian_turning_radius(-1e9);
    value.pedestrian_turning_radius = valuePedestrian_turning_radius;
    ::ad::physics::Angle valueDrive_away_max_angle(-6.283185308);
    value.drive_away_max_angle = valueDrive_away_max_angle;
    ::ad::physics::AngularAcceleration valueVehicle_yaw_rate_change(-1e2);
    value.vehicle_yaw_rate_change = valueVehicle_yaw_rate_change;
    ::ad::physics::Distance valueVehicle_min_radius(-1e9);
    value.vehicle_min_radius = valueVehicle_min_radius;
    ::ad::physics::Duration valueVehicle_trajectory_calculation_step(0.);
    value.vehicle_trajectory_calculation_step = valueVehicle_trajectory_calculation_step;
    uint32_t valueVehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
    value.vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valueVehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
    value.vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valueVehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
    value.vehicle_brake_intermediate_acceleration_steps = valueVehicle_brake_intermediate_acceleration_steps;
    uint32_t valueVehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
    value.vehicle_continue_forward_intermediate_acceleration_steps
      = valueVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    value.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
    value.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valuePedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t valuePedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
    value.pedestrian_continue_forward_intermediate_acceleration_steps
      = valuePedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t valuePedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::min()};
    value.pedestrian_brake_intermediate_acceleration_steps = valuePedestrian_brake_intermediate_acceleration_steps;
    uint32_t valuePedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
    value.pedestrian_front_intermediate_heading_change_ratio_steps
      = valuePedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t valuePedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::min()};
    value.pedestrian_back_intermediate_heading_change_ratio_steps
      = valuePedestrian_back_intermediate_heading_change_ratio_steps;
    mValue = value;
  }

  ::ad::rss::world::UnstructuredSettings mValue;
};

TEST_F(UnstructuredSettingsTests, copyConstruction)
{
  ::ad::rss::world::UnstructuredSettings value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSettingsTests, moveConstruction)
{
  ::ad::rss::world::UnstructuredSettings tmpValue(mValue);
  ::ad::rss::world::UnstructuredSettings value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSettingsTests, copyAssignment)
{
  ::ad::rss::world::UnstructuredSettings value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSettingsTests, moveAssignment)
{
  ::ad::rss::world::UnstructuredSettings tmpValue(mValue);
  ::ad::rss::world::UnstructuredSettings value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorEqual)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrian_turning_radiusDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::Distance pedestrian_turning_radius(1e9);
  valueA.pedestrian_turning_radius = pedestrian_turning_radius;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorDrive_away_max_angleDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::Angle drive_away_max_angle(6.283185308);
  valueA.drive_away_max_angle = drive_away_max_angle;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicle_yaw_rate_changeDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::AngularAcceleration vehicle_yaw_rate_change(1e2);
  valueA.vehicle_yaw_rate_change = vehicle_yaw_rate_change;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicle_min_radiusDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::Distance vehicle_min_radius(1e9);
  valueA.vehicle_min_radius = vehicle_min_radius;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicle_trajectory_calculation_stepDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  ::ad::physics::Duration vehicle_trajectory_calculation_step(1e6);
  valueA.vehicle_trajectory_calculation_step = vehicle_trajectory_calculation_step;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicle_front_intermediate_yaw_rate_change_ratio_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicle_front_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = vehicle_front_intermediate_yaw_rate_change_ratio_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicle_back_intermediate_yaw_rate_change_ratio_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicle_back_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicle_back_intermediate_yaw_rate_change_ratio_steps = vehicle_back_intermediate_yaw_rate_change_ratio_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicle_brake_intermediate_acceleration_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicle_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicle_brake_intermediate_acceleration_steps = vehicle_brake_intermediate_acceleration_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorVehicle_continue_forward_intermediate_acceleration_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicle_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicle_continue_forward_intermediate_acceleration_steps
    = vehicle_continue_forward_intermediate_acceleration_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests,
       comparisonOperatorVehicle_continue_forward_intermediate_yaw_rate_change_ratio_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{std::numeric_limits<uint32_t>::max()};
  valueA.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests,
       comparisonOperatorPedestrian_continue_forward_intermediate_heading_change_ratio_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrian_continue_forward_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = pedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrian_continue_forward_intermediate_acceleration_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrian_continue_forward_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrian_continue_forward_intermediate_acceleration_steps
    = pedestrian_continue_forward_intermediate_acceleration_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrian_brake_intermediate_acceleration_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrian_brake_intermediate_acceleration_steps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrian_brake_intermediate_acceleration_steps = pedestrian_brake_intermediate_acceleration_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrian_front_intermediate_heading_change_ratio_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrian_front_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrian_front_intermediate_heading_change_ratio_steps
    = pedestrian_front_intermediate_heading_change_ratio_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(UnstructuredSettingsTests, comparisonOperatorPedestrian_back_intermediate_heading_change_ratio_stepsDiffers)
{
  ::ad::rss::world::UnstructuredSettings valueA = mValue;
  uint32_t pedestrian_back_intermediate_heading_change_ratio_steps{std::numeric_limits<uint32_t>::max()};
  valueA.pedestrian_back_intermediate_heading_change_ratio_steps
    = pedestrian_back_intermediate_heading_change_ratio_steps;
  ::ad::rss::world::UnstructuredSettings valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
