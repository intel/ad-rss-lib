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
#include "ad/rss/core/RelativeObjectState.hpp"

class RelativeObjectStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    mValue = value;
  }

  ::ad::rss::core::RelativeObjectState mValue;
};

TEST_F(RelativeObjectStateTests, copyConstruction)
{
  ::ad::rss::core::RelativeObjectState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativeObjectStateTests, moveConstruction)
{
  ::ad::rss::core::RelativeObjectState tmpValue(mValue);
  ::ad::rss::core::RelativeObjectState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativeObjectStateTests, copyAssignment)
{
  ::ad::rss::core::RelativeObjectState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativeObjectStateTests, moveAssignment)
{
  ::ad::rss::core::RelativeObjectState tmpValue(mValue);
  ::ad::rss::core::RelativeObjectState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativeObjectStateTests, comparisonOperatorEqual)
{
  ::ad::rss::core::RelativeObjectState valueA = mValue;
  ::ad::rss::core::RelativeObjectState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RelativeObjectStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RelativeObjectStateTests, comparisonOperatorObject_typeDiffers)
{
  ::ad::rss::core::RelativeObjectState valueA = mValue;
  ::ad::rss::world::ObjectType object_type(::ad::rss::world::ObjectType::OtherObject);
  valueA.object_type = object_type;
  ::ad::rss::core::RelativeObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeObjectStateTests, comparisonOperatorDynamicsDiffers)
{
  ::ad::rss::core::RelativeObjectState valueA = mValue;
  ::ad::rss::world::RssDynamics dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues dynamicsAlpha_lon;
  ::ad::physics::Acceleration dynamicsAlpha_lonAccel_max(1e2);
  dynamicsAlpha_lon.accel_max = dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration dynamicsAlpha_lonBrake_max(1e2);
  dynamicsAlpha_lon.brake_max = dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration dynamicsAlpha_lonBrake_min(1e2);
  dynamicsAlpha_lon.brake_min = dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration dynamicsAlpha_lonBrake_min_correct(1e2);
  dynamicsAlpha_lonBrake_min_correct = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  dynamicsAlpha_lon.brake_min_correct = dynamicsAlpha_lonBrake_min_correct;
  dynamicsAlpha_lon.brake_min_correct = dynamicsAlpha_lon.brake_min;
  dynamicsAlpha_lon.brake_min = dynamicsAlpha_lon.brake_max;
  dynamicsAlpha_lon.brake_max = dynamicsAlpha_lon.brake_min;
  dynamicsAlpha_lon.brake_min = dynamicsAlpha_lon.brake_min_correct;
  dynamics.alpha_lon = dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues dynamicsAlpha_lat;
  ::ad::physics::Acceleration dynamicsAlpha_latAccel_max(1e2);
  dynamicsAlpha_lat.accel_max = dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration dynamicsAlpha_latBrake_min(1e2);
  dynamicsAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  dynamicsAlpha_lat.brake_min = dynamicsAlpha_latBrake_min;
  dynamics.alpha_lat = dynamicsAlpha_lat;
  ::ad::physics::Distance dynamicsLateral_fluctuation_margin(1e9);
  dynamicsLateral_fluctuation_margin = ::ad::physics::Distance(1.); // set to valid value within struct
  dynamics.lateral_fluctuation_margin = dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration dynamicsResponse_time(1e6);
  dynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  dynamics.response_time = dynamicsResponse_time;
  ::ad::physics::Speed dynamicsMax_speed_on_acceleration(100.);
  dynamics.max_speed_on_acceleration = dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings dynamicsUnstructured_settings;
  ::ad::physics::Distance dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  dynamicsUnstructured_settings.pedestrian_turning_radius = dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  dynamicsUnstructured_settings.drive_away_max_angle = dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  dynamicsUnstructured_settings.vehicle_yaw_rate_change = dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  dynamicsUnstructured_settings.vehicle_min_radius = dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  dynamics.unstructured_settings = dynamicsUnstructured_settings;
  ::ad::physics::Distance dynamicsMin_longitudinal_safety_distance(1e9);
  dynamics.min_longitudinal_safety_distance = dynamicsMin_longitudinal_safety_distance;
  valueA.dynamics = dynamics;
  ::ad::rss::core::RelativeObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeObjectStateTests, comparisonOperatorUnstructured_object_stateDiffers)
{
  ::ad::rss::core::RelativeObjectState valueA = mValue;
  ::ad::rss::world::ObjectState unstructured_object_state;
  ::ad::physics::Angle unstructured_object_stateYaw(6.283185308);
  unstructured_object_state.yaw = unstructured_object_stateYaw;
  ::ad::physics::Dimension2D unstructured_object_stateDimension;
  ::ad::physics::Distance unstructured_object_stateDimensionLength(1e9);
  unstructured_object_stateDimension.length = unstructured_object_stateDimensionLength;
  ::ad::physics::Distance unstructured_object_stateDimensionWidth(1e9);
  unstructured_object_stateDimension.width = unstructured_object_stateDimensionWidth;
  unstructured_object_state.dimension = unstructured_object_stateDimension;
  ::ad::physics::AngularVelocity unstructured_object_stateYaw_rate(100.);
  unstructured_object_state.yaw_rate = unstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D unstructured_object_stateCenter_point;
  ::ad::physics::Distance unstructured_object_stateCenter_pointX(1e9);
  unstructured_object_stateCenter_point.x = unstructured_object_stateCenter_pointX;
  ::ad::physics::Distance unstructured_object_stateCenter_pointY(1e9);
  unstructured_object_stateCenter_point.y = unstructured_object_stateCenter_pointY;
  unstructured_object_state.center_point = unstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange unstructured_object_stateSpeed_range;
  ::ad::physics::Speed unstructured_object_stateSpeed_rangeMinimum(100.);
  unstructured_object_stateSpeed_range.minimum = unstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed unstructured_object_stateSpeed_rangeMaximum(100.);
  unstructured_object_stateSpeed_range.maximum = unstructured_object_stateSpeed_rangeMaximum;
  unstructured_object_stateSpeed_range.maximum = unstructured_object_stateSpeed_range.minimum;
  unstructured_object_stateSpeed_range.minimum = unstructured_object_stateSpeed_range.maximum;
  unstructured_object_state.speed_range = unstructured_object_stateSpeed_range;
  ::ad::physics::Angle unstructured_object_stateSteering_angle(6.283185308);
  unstructured_object_state.steering_angle = unstructured_object_stateSteering_angle;
  valueA.unstructured_object_state = unstructured_object_state;
  ::ad::rss::core::RelativeObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeObjectStateTests, comparisonOperatorStructured_object_stateDiffers)
{
  ::ad::rss::core::RelativeObjectState valueA = mValue;
  ::ad::rss::core::StructuredObjectState structured_object_state;
  ::ad::rss::world::Velocity structured_object_stateVelocity;
  ::ad::physics::Speed structured_object_stateVelocitySpeed_lon_min(100.);
  structured_object_stateVelocity.speed_lon_min = structured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed structured_object_stateVelocitySpeed_lon_max(100.);
  structured_object_stateVelocity.speed_lon_max = structured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed structured_object_stateVelocitySpeed_lat_min(100.);
  structured_object_stateVelocity.speed_lat_min = structured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed structured_object_stateVelocitySpeed_lat_max(100.);
  structured_object_stateVelocity.speed_lat_max = structured_object_stateVelocitySpeed_lat_max;
  structured_object_stateVelocity.speed_lat_max = structured_object_stateVelocity.speed_lat_min;
  structured_object_stateVelocity.speed_lon_max = structured_object_stateVelocity.speed_lon_min;
  structured_object_stateVelocity.speed_lat_min = structured_object_stateVelocity.speed_lat_max;
  structured_object_stateVelocity.speed_lon_min = structured_object_stateVelocity.speed_lon_max;
  structured_object_state.velocity = structured_object_stateVelocity;
  bool structured_object_stateHas_priority{false};
  structured_object_state.has_priority = structured_object_stateHas_priority;
  bool structured_object_stateIs_in_correct_lane{false};
  structured_object_state.is_in_correct_lane = structured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance structured_object_stateDistance_to_enter_intersection(1e9);
  structured_object_state.distance_to_enter_intersection = structured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance structured_object_stateDistance_to_leave_intersection(1e9);
  structured_object_stateDistance_to_leave_intersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  structured_object_state.distance_to_leave_intersection = structured_object_stateDistance_to_leave_intersection;
  structured_object_state.distance_to_leave_intersection = structured_object_state.distance_to_enter_intersection;
  structured_object_state.distance_to_enter_intersection = structured_object_state.distance_to_leave_intersection;
  valueA.structured_object_state = structured_object_state;
  ::ad::rss::core::RelativeObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
