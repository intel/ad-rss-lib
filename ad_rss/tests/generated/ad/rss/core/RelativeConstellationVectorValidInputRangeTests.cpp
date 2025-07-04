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

#include "ad/rss/core/RelativeConstellationVectorValidInputRange.hpp"

TEST(RelativeConstellationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::core::RelativeConstellationVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativeConstellationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::core::RelativeConstellationVector value;
  ::ad::rss::core::RelativeConstellation element;
  ::ad::rss::world::ObjectId elementEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.ego_id = elementEgo_id;
  ::ad::rss::world::ObjectId elementObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.object_id = elementObject_id;
  ::ad::rss::core::RelativeConstellationId elementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  element.constellation_id = elementConstellation_id;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  ::ad::rss::core::RelativeObjectState elementEgo_state;
  ::ad::rss::world::ObjectType elementEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  elementEgo_state.object_type = elementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics elementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  elementEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_stateDynamicsAlpha_lon.accel_max = elementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_max = elementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_min_correct = elementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lon.brake_max;
  elementEgo_stateDynamicsAlpha_lon.brake_min_correct = elementEgo_stateDynamicsAlpha_lon.brake_min;
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lon.brake_min_correct;
  elementEgo_stateDynamicsAlpha_lon.brake_max = elementEgo_stateDynamicsAlpha_lon.brake_min;
  elementEgo_stateDynamics.alpha_lon = elementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  elementEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_stateDynamicsAlpha_lat.accel_max = elementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  elementEgo_stateDynamicsAlpha_lat.brake_min = elementEgo_stateDynamicsAlpha_latBrake_min;
  elementEgo_stateDynamics.alpha_lat = elementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance elementEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  elementEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_stateDynamics.lateral_fluctuation_margin = elementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementEgo_stateDynamicsResponse_time(0.);
  elementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgo_stateDynamics.response_time = elementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed elementEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  elementEgo_stateDynamics.max_speed_on_acceleration = elementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = elementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementEgo_stateDynamics.unstructured_settings = elementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  elementEgo_stateDynamics.min_longitudinal_safety_distance = elementEgo_stateDynamicsMin_longitudinal_safety_distance;
  elementEgo_state.dynamics = elementEgo_stateDynamics;
  ::ad::rss::world::ObjectState elementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle elementEgo_stateUnstructured_object_stateYaw(-6.283185308);
  elementEgo_stateUnstructured_object_state.yaw = elementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D elementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  elementEgo_stateUnstructured_object_stateDimension.length = elementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  elementEgo_stateUnstructured_object_stateDimension.width = elementEgo_stateUnstructured_object_stateDimensionWidth;
  elementEgo_stateUnstructured_object_state.dimension = elementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity elementEgo_stateUnstructured_object_stateYaw_rate(-100.);
  elementEgo_stateUnstructured_object_state.yaw_rate = elementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D elementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  elementEgo_stateUnstructured_object_stateCenter_point.x = elementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  elementEgo_stateUnstructured_object_stateCenter_point.y = elementEgo_stateUnstructured_object_stateCenter_pointY;
  elementEgo_stateUnstructured_object_state.center_point = elementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange elementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed elementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  elementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = elementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed elementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  elementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = elementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = elementEgo_stateUnstructured_object_stateSpeed_range.minimum;
  elementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = elementEgo_stateUnstructured_object_stateSpeed_range.maximum;
  elementEgo_stateUnstructured_object_state.speed_range = elementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle elementEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  elementEgo_stateUnstructured_object_state.steering_angle = elementEgo_stateUnstructured_object_stateSteering_angle;
  elementEgo_state.unstructured_object_state = elementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState elementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity elementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  elementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = elementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = elementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = elementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = elementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  elementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = elementEgo_stateStructured_object_stateVelocity.speed_lon_min;
  elementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = elementEgo_stateStructured_object_stateVelocity.speed_lat_min;
  elementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = elementEgo_stateStructured_object_stateVelocity.speed_lon_max;
  elementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = elementEgo_stateStructured_object_stateVelocity.speed_lat_max;
  elementEgo_stateStructured_object_state.velocity = elementEgo_stateStructured_object_stateVelocity;
  bool elementEgo_stateStructured_object_stateHas_priority{true};
  elementEgo_stateStructured_object_state.has_priority = elementEgo_stateStructured_object_stateHas_priority;
  bool elementEgo_stateStructured_object_stateIs_in_correct_lane{true};
  elementEgo_stateStructured_object_state.is_in_correct_lane
    = elementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance elementEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  elementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_stateStructured_object_state.distance_to_enter_intersection
    = elementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance elementEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  elementEgo_stateStructured_object_state.distance_to_leave_intersection
    = elementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  elementEgo_stateStructured_object_state.distance_to_leave_intersection
    = elementEgo_stateStructured_object_state.distance_to_enter_intersection;
  elementEgo_stateStructured_object_state.distance_to_enter_intersection
    = elementEgo_stateStructured_object_state.distance_to_leave_intersection;
  elementEgo_state.structured_object_state = elementEgo_stateStructured_object_state;
  element.ego_state = elementEgo_state;
  ::ad::rss::core::RelativeObjectState elementOther_state;
  ::ad::rss::world::ObjectType elementOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  elementOther_state.object_type = elementOther_stateObject_type;
  ::ad::rss::world::RssDynamics elementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  elementOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementOther_stateDynamicsAlpha_lon.accel_max = elementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_max = elementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_min_correct = elementOther_stateDynamicsAlpha_lonBrake_min_correct;
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lon.brake_max;
  elementOther_stateDynamicsAlpha_lon.brake_min_correct = elementOther_stateDynamicsAlpha_lon.brake_min;
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lon.brake_min_correct;
  elementOther_stateDynamicsAlpha_lon.brake_max = elementOther_stateDynamicsAlpha_lon.brake_min;
  elementOther_stateDynamics.alpha_lon = elementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_latAccel_max(-1e2);
  elementOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementOther_stateDynamicsAlpha_lat.accel_max = elementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_latBrake_min(-1e2);
  elementOther_stateDynamicsAlpha_lat.brake_min = elementOther_stateDynamicsAlpha_latBrake_min;
  elementOther_stateDynamics.alpha_lat = elementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance elementOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  elementOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementOther_stateDynamics.lateral_fluctuation_margin = elementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementOther_stateDynamicsResponse_time(0.);
  elementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOther_stateDynamics.response_time = elementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed elementOther_stateDynamicsMax_speed_on_acceleration(-100.);
  elementOther_stateDynamics.max_speed_on_acceleration = elementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = elementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = elementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementOther_stateDynamics.unstructured_settings = elementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  elementOther_stateDynamics.min_longitudinal_safety_distance
    = elementOther_stateDynamicsMin_longitudinal_safety_distance;
  elementOther_state.dynamics = elementOther_stateDynamics;
  ::ad::rss::world::ObjectState elementOther_stateUnstructured_object_state;
  ::ad::physics::Angle elementOther_stateUnstructured_object_stateYaw(-6.283185308);
  elementOther_stateUnstructured_object_state.yaw = elementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D elementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateDimensionLength(-1e9);
  elementOther_stateUnstructured_object_stateDimension.length
    = elementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  elementOther_stateUnstructured_object_stateDimension.width
    = elementOther_stateUnstructured_object_stateDimensionWidth;
  elementOther_stateUnstructured_object_state.dimension = elementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity elementOther_stateUnstructured_object_stateYaw_rate(-100.);
  elementOther_stateUnstructured_object_state.yaw_rate = elementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D elementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  elementOther_stateUnstructured_object_stateCenter_point.x = elementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  elementOther_stateUnstructured_object_stateCenter_point.y = elementOther_stateUnstructured_object_stateCenter_pointY;
  elementOther_stateUnstructured_object_state.center_point = elementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange elementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed elementOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  elementOther_stateUnstructured_object_stateSpeed_range.minimum
    = elementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed elementOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  elementOther_stateUnstructured_object_stateSpeed_range.maximum
    = elementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementOther_stateUnstructured_object_stateSpeed_range.maximum
    = elementOther_stateUnstructured_object_stateSpeed_range.minimum;
  elementOther_stateUnstructured_object_stateSpeed_range.minimum
    = elementOther_stateUnstructured_object_stateSpeed_range.maximum;
  elementOther_stateUnstructured_object_state.speed_range = elementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle elementOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  elementOther_stateUnstructured_object_state.steering_angle
    = elementOther_stateUnstructured_object_stateSteering_angle;
  elementOther_state.unstructured_object_state = elementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState elementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity elementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  elementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementOther_stateStructured_object_stateVelocity.speed_lon_min
    = elementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lon_max
    = elementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lat_min
    = elementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lat_max
    = elementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  elementOther_stateStructured_object_stateVelocity.speed_lon_max
    = elementOther_stateStructured_object_stateVelocity.speed_lon_min;
  elementOther_stateStructured_object_stateVelocity.speed_lat_max
    = elementOther_stateStructured_object_stateVelocity.speed_lat_min;
  elementOther_stateStructured_object_stateVelocity.speed_lon_min
    = elementOther_stateStructured_object_stateVelocity.speed_lon_max;
  elementOther_stateStructured_object_stateVelocity.speed_lat_min
    = elementOther_stateStructured_object_stateVelocity.speed_lat_max;
  elementOther_stateStructured_object_state.velocity = elementOther_stateStructured_object_stateVelocity;
  bool elementOther_stateStructured_object_stateHas_priority{true};
  elementOther_stateStructured_object_state.has_priority = elementOther_stateStructured_object_stateHas_priority;
  bool elementOther_stateStructured_object_stateIs_in_correct_lane{true};
  elementOther_stateStructured_object_state.is_in_correct_lane
    = elementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance elementOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  elementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOther_stateStructured_object_state.distance_to_enter_intersection
    = elementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance elementOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  elementOther_stateStructured_object_state.distance_to_leave_intersection
    = elementOther_stateStructured_object_stateDistance_to_leave_intersection;
  elementOther_stateStructured_object_state.distance_to_leave_intersection
    = elementOther_stateStructured_object_state.distance_to_enter_intersection;
  elementOther_stateStructured_object_state.distance_to_enter_intersection
    = elementOther_stateStructured_object_state.distance_to_leave_intersection;
  elementOther_state.structured_object_state = elementOther_stateStructured_object_state;
  element.other_state = elementOther_state;
  ::ad::rss::core::RelativePosition elementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition elementRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  elementRelative_position.longitudinal_position = elementRelative_positionLongitudinal_position;
  ::ad::physics::Distance elementRelative_positionLongitudinal_distance(-1e9);
  elementRelative_position.longitudinal_distance = elementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition elementRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  elementRelative_position.lateral_position = elementRelative_positionLateral_position;
  ::ad::physics::Distance elementRelative_positionLateral_distance(-1e9);
  elementRelative_position.lateral_distance = elementRelative_positionLateral_distance;
  element.relative_position = elementRelative_position;
  ::ad::rss::world::WorldModelIndexVector elementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex elementWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  elementWorld_model_indices.resize(1, elementWorld_model_indicesElement);
  element.world_model_indices = elementWorld_model_indices;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativeConstellationVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::core::RelativeConstellationVector value;
  ::ad::rss::core::RelativeConstellation element;
  ::ad::rss::world::ObjectId elementEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.ego_id = elementEgo_id;
  ::ad::rss::world::ObjectId elementObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.object_id = elementObject_id;
  ::ad::rss::core::RelativeConstellationId elementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  element.constellation_id = elementConstellation_id;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  ::ad::rss::core::RelativeObjectState elementEgo_state;
  ::ad::rss::world::ObjectType elementEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  elementEgo_state.object_type = elementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics elementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  elementEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_stateDynamicsAlpha_lon.accel_max = elementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_max = elementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_min_correct = elementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lon.brake_max;
  elementEgo_stateDynamicsAlpha_lon.brake_min_correct = elementEgo_stateDynamicsAlpha_lon.brake_min;
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lon.brake_min_correct;
  elementEgo_stateDynamicsAlpha_lon.brake_max = elementEgo_stateDynamicsAlpha_lon.brake_min;
  elementEgo_stateDynamics.alpha_lon = elementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  elementEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_stateDynamicsAlpha_lat.accel_max = elementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  elementEgo_stateDynamicsAlpha_lat.brake_min = elementEgo_stateDynamicsAlpha_latBrake_min;
  elementEgo_stateDynamics.alpha_lat = elementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance elementEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  elementEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_stateDynamics.lateral_fluctuation_margin = elementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementEgo_stateDynamicsResponse_time(0.);
  elementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgo_stateDynamics.response_time = elementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed elementEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  elementEgo_stateDynamics.max_speed_on_acceleration = elementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = elementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementEgo_stateDynamics.unstructured_settings = elementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  elementEgo_stateDynamics.min_longitudinal_safety_distance = elementEgo_stateDynamicsMin_longitudinal_safety_distance;
  elementEgo_state.dynamics = elementEgo_stateDynamics;
  ::ad::rss::world::ObjectState elementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle elementEgo_stateUnstructured_object_stateYaw(-6.283185308);
  elementEgo_stateUnstructured_object_state.yaw = elementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D elementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  elementEgo_stateUnstructured_object_stateDimension.length = elementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  elementEgo_stateUnstructured_object_stateDimension.width = elementEgo_stateUnstructured_object_stateDimensionWidth;
  elementEgo_stateUnstructured_object_state.dimension = elementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity elementEgo_stateUnstructured_object_stateYaw_rate(-100.);
  elementEgo_stateUnstructured_object_state.yaw_rate = elementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D elementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  elementEgo_stateUnstructured_object_stateCenter_point.x = elementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  elementEgo_stateUnstructured_object_stateCenter_point.y = elementEgo_stateUnstructured_object_stateCenter_pointY;
  elementEgo_stateUnstructured_object_state.center_point = elementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange elementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed elementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  elementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = elementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed elementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  elementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = elementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = elementEgo_stateUnstructured_object_stateSpeed_range.minimum;
  elementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = elementEgo_stateUnstructured_object_stateSpeed_range.maximum;
  elementEgo_stateUnstructured_object_state.speed_range = elementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle elementEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  elementEgo_stateUnstructured_object_state.steering_angle = elementEgo_stateUnstructured_object_stateSteering_angle;
  elementEgo_state.unstructured_object_state = elementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState elementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity elementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  elementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = elementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = elementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = elementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = elementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  elementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = elementEgo_stateStructured_object_stateVelocity.speed_lon_min;
  elementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = elementEgo_stateStructured_object_stateVelocity.speed_lat_min;
  elementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = elementEgo_stateStructured_object_stateVelocity.speed_lon_max;
  elementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = elementEgo_stateStructured_object_stateVelocity.speed_lat_max;
  elementEgo_stateStructured_object_state.velocity = elementEgo_stateStructured_object_stateVelocity;
  bool elementEgo_stateStructured_object_stateHas_priority{true};
  elementEgo_stateStructured_object_state.has_priority = elementEgo_stateStructured_object_stateHas_priority;
  bool elementEgo_stateStructured_object_stateIs_in_correct_lane{true};
  elementEgo_stateStructured_object_state.is_in_correct_lane
    = elementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance elementEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  elementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_stateStructured_object_state.distance_to_enter_intersection
    = elementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance elementEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  elementEgo_stateStructured_object_state.distance_to_leave_intersection
    = elementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  elementEgo_stateStructured_object_state.distance_to_leave_intersection
    = elementEgo_stateStructured_object_state.distance_to_enter_intersection;
  elementEgo_stateStructured_object_state.distance_to_enter_intersection
    = elementEgo_stateStructured_object_state.distance_to_leave_intersection;
  elementEgo_state.structured_object_state = elementEgo_stateStructured_object_state;
  element.ego_state = elementEgo_state;
  ::ad::rss::core::RelativeObjectState elementOther_state;
  ::ad::rss::world::ObjectType elementOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  elementOther_state.object_type = elementOther_stateObject_type;
  ::ad::rss::world::RssDynamics elementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  elementOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementOther_stateDynamicsAlpha_lon.accel_max = elementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_max = elementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_min_correct = elementOther_stateDynamicsAlpha_lonBrake_min_correct;
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lon.brake_max;
  elementOther_stateDynamicsAlpha_lon.brake_min_correct = elementOther_stateDynamicsAlpha_lon.brake_min;
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lon.brake_min_correct;
  elementOther_stateDynamicsAlpha_lon.brake_max = elementOther_stateDynamicsAlpha_lon.brake_min;
  elementOther_stateDynamics.alpha_lon = elementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_latAccel_max(-1e2);
  elementOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementOther_stateDynamicsAlpha_lat.accel_max = elementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_latBrake_min(-1e2);
  elementOther_stateDynamicsAlpha_lat.brake_min = elementOther_stateDynamicsAlpha_latBrake_min;
  elementOther_stateDynamics.alpha_lat = elementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance elementOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  elementOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementOther_stateDynamics.lateral_fluctuation_margin = elementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementOther_stateDynamicsResponse_time(0.);
  elementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOther_stateDynamics.response_time = elementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed elementOther_stateDynamicsMax_speed_on_acceleration(-100.);
  elementOther_stateDynamics.max_speed_on_acceleration = elementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = elementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = elementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementOther_stateDynamics.unstructured_settings = elementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  elementOther_stateDynamics.min_longitudinal_safety_distance
    = elementOther_stateDynamicsMin_longitudinal_safety_distance;
  elementOther_state.dynamics = elementOther_stateDynamics;
  ::ad::rss::world::ObjectState elementOther_stateUnstructured_object_state;
  ::ad::physics::Angle elementOther_stateUnstructured_object_stateYaw(-6.283185308);
  elementOther_stateUnstructured_object_state.yaw = elementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D elementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateDimensionLength(-1e9);
  elementOther_stateUnstructured_object_stateDimension.length
    = elementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  elementOther_stateUnstructured_object_stateDimension.width
    = elementOther_stateUnstructured_object_stateDimensionWidth;
  elementOther_stateUnstructured_object_state.dimension = elementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity elementOther_stateUnstructured_object_stateYaw_rate(-100.);
  elementOther_stateUnstructured_object_state.yaw_rate = elementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D elementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  elementOther_stateUnstructured_object_stateCenter_point.x = elementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  elementOther_stateUnstructured_object_stateCenter_point.y = elementOther_stateUnstructured_object_stateCenter_pointY;
  elementOther_stateUnstructured_object_state.center_point = elementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange elementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed elementOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  elementOther_stateUnstructured_object_stateSpeed_range.minimum
    = elementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed elementOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  elementOther_stateUnstructured_object_stateSpeed_range.maximum
    = elementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementOther_stateUnstructured_object_stateSpeed_range.maximum
    = elementOther_stateUnstructured_object_stateSpeed_range.minimum;
  elementOther_stateUnstructured_object_stateSpeed_range.minimum
    = elementOther_stateUnstructured_object_stateSpeed_range.maximum;
  elementOther_stateUnstructured_object_state.speed_range = elementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle elementOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  elementOther_stateUnstructured_object_state.steering_angle
    = elementOther_stateUnstructured_object_stateSteering_angle;
  elementOther_state.unstructured_object_state = elementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState elementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity elementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  elementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementOther_stateStructured_object_stateVelocity.speed_lon_min
    = elementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lon_max
    = elementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lat_min
    = elementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lat_max
    = elementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  elementOther_stateStructured_object_stateVelocity.speed_lon_max
    = elementOther_stateStructured_object_stateVelocity.speed_lon_min;
  elementOther_stateStructured_object_stateVelocity.speed_lat_max
    = elementOther_stateStructured_object_stateVelocity.speed_lat_min;
  elementOther_stateStructured_object_stateVelocity.speed_lon_min
    = elementOther_stateStructured_object_stateVelocity.speed_lon_max;
  elementOther_stateStructured_object_stateVelocity.speed_lat_min
    = elementOther_stateStructured_object_stateVelocity.speed_lat_max;
  elementOther_stateStructured_object_state.velocity = elementOther_stateStructured_object_stateVelocity;
  bool elementOther_stateStructured_object_stateHas_priority{true};
  elementOther_stateStructured_object_state.has_priority = elementOther_stateStructured_object_stateHas_priority;
  bool elementOther_stateStructured_object_stateIs_in_correct_lane{true};
  elementOther_stateStructured_object_state.is_in_correct_lane
    = elementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance elementOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  elementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOther_stateStructured_object_state.distance_to_enter_intersection
    = elementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance elementOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  elementOther_stateStructured_object_state.distance_to_leave_intersection
    = elementOther_stateStructured_object_stateDistance_to_leave_intersection;
  elementOther_stateStructured_object_state.distance_to_leave_intersection
    = elementOther_stateStructured_object_state.distance_to_enter_intersection;
  elementOther_stateStructured_object_state.distance_to_enter_intersection
    = elementOther_stateStructured_object_state.distance_to_leave_intersection;
  elementOther_state.structured_object_state = elementOther_stateStructured_object_state;
  element.other_state = elementOther_state;
  ::ad::rss::core::RelativePosition elementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition elementRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  elementRelative_position.longitudinal_position = elementRelative_positionLongitudinal_position;
  ::ad::physics::Distance elementRelative_positionLongitudinal_distance(-1e9);
  elementRelative_position.longitudinal_distance = elementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition elementRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  elementRelative_position.lateral_position = elementRelative_positionLateral_position;
  ::ad::physics::Distance elementRelative_positionLateral_distance(-1e9);
  elementRelative_position.lateral_distance = elementRelative_positionLateral_distance;
  element.relative_position = elementRelative_position;
  ::ad::rss::world::WorldModelIndexVector elementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex elementWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  elementWorld_model_indices.resize(1, elementWorld_model_indicesElement);
  element.world_model_indices = elementWorld_model_indices;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::core::RelativeConstellationVector value;
  ::ad::rss::core::RelativeConstellation element;
  ::ad::rss::world::ConstellationType elementConstellation_type(static_cast<::ad::rss::world::ConstellationType>(-1));
  element.constellation_type = elementConstellation_type;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RelativeConstellationVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::core::RelativeConstellationVector value;
  ::ad::rss::core::RelativeConstellation element;
  ::ad::rss::world::ObjectId elementEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.ego_id = elementEgo_id;
  ::ad::rss::world::ObjectId elementObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.object_id = elementObject_id;
  ::ad::rss::core::RelativeConstellationId elementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  element.constellation_id = elementConstellation_id;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  ::ad::rss::core::RelativeObjectState elementEgo_state;
  ::ad::rss::world::ObjectType elementEgo_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  elementEgo_state.object_type = elementEgo_stateObject_type;
  ::ad::rss::world::RssDynamics elementEgo_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementEgo_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonAccel_max(-1e2);
  elementEgo_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_stateDynamicsAlpha_lon.accel_max = elementEgo_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_max(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_max = elementEgo_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_min(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  elementEgo_stateDynamicsAlpha_lon.brake_min_correct = elementEgo_stateDynamicsAlpha_lonBrake_min_correct;
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lon.brake_max;
  elementEgo_stateDynamicsAlpha_lon.brake_min_correct = elementEgo_stateDynamicsAlpha_lon.brake_min;
  elementEgo_stateDynamicsAlpha_lon.brake_min = elementEgo_stateDynamicsAlpha_lon.brake_min_correct;
  elementEgo_stateDynamicsAlpha_lon.brake_max = elementEgo_stateDynamicsAlpha_lon.brake_min;
  elementEgo_stateDynamics.alpha_lon = elementEgo_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_latAccel_max(-1e2);
  elementEgo_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementEgo_stateDynamicsAlpha_lat.accel_max = elementEgo_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementEgo_stateDynamicsAlpha_latBrake_min(-1e2);
  elementEgo_stateDynamicsAlpha_lat.brake_min = elementEgo_stateDynamicsAlpha_latBrake_min;
  elementEgo_stateDynamics.alpha_lat = elementEgo_stateDynamicsAlpha_lat;
  ::ad::physics::Distance elementEgo_stateDynamicsLateral_fluctuation_margin(-1e9);
  elementEgo_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_stateDynamics.lateral_fluctuation_margin = elementEgo_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementEgo_stateDynamicsResponse_time(0.);
  elementEgo_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgo_stateDynamics.response_time = elementEgo_stateDynamicsResponse_time;
  ::ad::physics::Speed elementEgo_stateDynamicsMax_speed_on_acceleration(-100.);
  elementEgo_stateDynamics.max_speed_on_acceleration = elementEgo_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementEgo_stateDynamicsUnstructured_settings.drive_away_max_angle
    = elementEgo_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_min_radius
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementEgo_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementEgo_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementEgo_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementEgo_stateDynamics.unstructured_settings = elementEgo_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementEgo_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  elementEgo_stateDynamics.min_longitudinal_safety_distance = elementEgo_stateDynamicsMin_longitudinal_safety_distance;
  elementEgo_state.dynamics = elementEgo_stateDynamics;
  ::ad::rss::world::ObjectState elementEgo_stateUnstructured_object_state;
  ::ad::physics::Angle elementEgo_stateUnstructured_object_stateYaw(-6.283185308);
  elementEgo_stateUnstructured_object_state.yaw = elementEgo_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D elementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateDimensionLength(-1e9);
  elementEgo_stateUnstructured_object_stateDimension.length = elementEgo_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateDimensionWidth(-1e9);
  elementEgo_stateUnstructured_object_stateDimension.width = elementEgo_stateUnstructured_object_stateDimensionWidth;
  elementEgo_stateUnstructured_object_state.dimension = elementEgo_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity elementEgo_stateUnstructured_object_stateYaw_rate(-100.);
  elementEgo_stateUnstructured_object_state.yaw_rate = elementEgo_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D elementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateCenter_pointX(-1e9);
  elementEgo_stateUnstructured_object_stateCenter_point.x = elementEgo_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance elementEgo_stateUnstructured_object_stateCenter_pointY(-1e9);
  elementEgo_stateUnstructured_object_stateCenter_point.y = elementEgo_stateUnstructured_object_stateCenter_pointY;
  elementEgo_stateUnstructured_object_state.center_point = elementEgo_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange elementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed elementEgo_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  elementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = elementEgo_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed elementEgo_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  elementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = elementEgo_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementEgo_stateUnstructured_object_stateSpeed_range.maximum
    = elementEgo_stateUnstructured_object_stateSpeed_range.minimum;
  elementEgo_stateUnstructured_object_stateSpeed_range.minimum
    = elementEgo_stateUnstructured_object_stateSpeed_range.maximum;
  elementEgo_stateUnstructured_object_state.speed_range = elementEgo_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle elementEgo_stateUnstructured_object_stateSteering_angle(-6.283185308);
  elementEgo_stateUnstructured_object_state.steering_angle = elementEgo_stateUnstructured_object_stateSteering_angle;
  elementEgo_state.unstructured_object_state = elementEgo_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState elementEgo_stateStructured_object_state;
  ::ad::rss::world::Velocity elementEgo_stateStructured_object_stateVelocity;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  elementEgo_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = elementEgo_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = elementEgo_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = elementEgo_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed elementEgo_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  elementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = elementEgo_stateStructured_object_stateVelocitySpeed_lat_max;
  elementEgo_stateStructured_object_stateVelocity.speed_lon_max
    = elementEgo_stateStructured_object_stateVelocity.speed_lon_min;
  elementEgo_stateStructured_object_stateVelocity.speed_lat_max
    = elementEgo_stateStructured_object_stateVelocity.speed_lat_min;
  elementEgo_stateStructured_object_stateVelocity.speed_lon_min
    = elementEgo_stateStructured_object_stateVelocity.speed_lon_max;
  elementEgo_stateStructured_object_stateVelocity.speed_lat_min
    = elementEgo_stateStructured_object_stateVelocity.speed_lat_max;
  elementEgo_stateStructured_object_state.velocity = elementEgo_stateStructured_object_stateVelocity;
  bool elementEgo_stateStructured_object_stateHas_priority{true};
  elementEgo_stateStructured_object_state.has_priority = elementEgo_stateStructured_object_stateHas_priority;
  bool elementEgo_stateStructured_object_stateIs_in_correct_lane{true};
  elementEgo_stateStructured_object_state.is_in_correct_lane
    = elementEgo_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance elementEgo_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  elementEgo_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementEgo_stateStructured_object_state.distance_to_enter_intersection
    = elementEgo_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance elementEgo_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  elementEgo_stateStructured_object_state.distance_to_leave_intersection
    = elementEgo_stateStructured_object_stateDistance_to_leave_intersection;
  elementEgo_stateStructured_object_state.distance_to_leave_intersection
    = elementEgo_stateStructured_object_state.distance_to_enter_intersection;
  elementEgo_stateStructured_object_state.distance_to_enter_intersection
    = elementEgo_stateStructured_object_state.distance_to_leave_intersection;
  elementEgo_state.structured_object_state = elementEgo_stateStructured_object_state;
  element.ego_state = elementEgo_state;
  ::ad::rss::core::RelativeObjectState elementOther_state;
  ::ad::rss::world::ObjectType elementOther_stateObject_type(::ad::rss::world::ObjectType::Invalid);
  elementOther_state.object_type = elementOther_stateObject_type;
  ::ad::rss::world::RssDynamics elementOther_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementOther_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonAccel_max(-1e2);
  elementOther_stateDynamicsAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementOther_stateDynamicsAlpha_lon.accel_max = elementOther_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_max(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_max = elementOther_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_min(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_lonBrake_min_correct(-1e2);
  elementOther_stateDynamicsAlpha_lon.brake_min_correct = elementOther_stateDynamicsAlpha_lonBrake_min_correct;
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lon.brake_max;
  elementOther_stateDynamicsAlpha_lon.brake_min_correct = elementOther_stateDynamicsAlpha_lon.brake_min;
  elementOther_stateDynamicsAlpha_lon.brake_min = elementOther_stateDynamicsAlpha_lon.brake_min_correct;
  elementOther_stateDynamicsAlpha_lon.brake_max = elementOther_stateDynamicsAlpha_lon.brake_min;
  elementOther_stateDynamics.alpha_lon = elementOther_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues elementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_latAccel_max(-1e2);
  elementOther_stateDynamicsAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementOther_stateDynamicsAlpha_lat.accel_max = elementOther_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration elementOther_stateDynamicsAlpha_latBrake_min(-1e2);
  elementOther_stateDynamicsAlpha_lat.brake_min = elementOther_stateDynamicsAlpha_latBrake_min;
  elementOther_stateDynamics.alpha_lat = elementOther_stateDynamicsAlpha_lat;
  ::ad::physics::Distance elementOther_stateDynamicsLateral_fluctuation_margin(-1e9);
  elementOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
  elementOther_stateDynamics.lateral_fluctuation_margin = elementOther_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration elementOther_stateDynamicsResponse_time(0.);
  elementOther_stateDynamicsResponse_time
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOther_stateDynamics.response_time = elementOther_stateDynamicsResponse_time;
  ::ad::physics::Speed elementOther_stateDynamicsMax_speed_on_acceleration(-100.);
  elementOther_stateDynamics.max_speed_on_acceleration = elementOther_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings elementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
  elementOther_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle elementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
  elementOther_stateDynamicsUnstructured_settings.drive_away_max_angle
    = elementOther_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration elementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
  elementOther_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = elementOther_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance elementOther_stateDynamicsUnstructured_settingsVehicle_min_radius(-1e9);
  elementOther_stateDynamicsUnstructured_settings.vehicle_min_radius
    = elementOther_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration elementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
  elementOther_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = elementOther_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t elementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::min()};
  elementOther_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = elementOther_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  elementOther_stateDynamics.unstructured_settings = elementOther_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance elementOther_stateDynamicsMin_longitudinal_safety_distance(-1e9);
  elementOther_stateDynamics.min_longitudinal_safety_distance
    = elementOther_stateDynamicsMin_longitudinal_safety_distance;
  elementOther_state.dynamics = elementOther_stateDynamics;
  ::ad::rss::world::ObjectState elementOther_stateUnstructured_object_state;
  ::ad::physics::Angle elementOther_stateUnstructured_object_stateYaw(-6.283185308);
  elementOther_stateUnstructured_object_state.yaw = elementOther_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D elementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateDimensionLength(-1e9);
  elementOther_stateUnstructured_object_stateDimension.length
    = elementOther_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateDimensionWidth(-1e9);
  elementOther_stateUnstructured_object_stateDimension.width
    = elementOther_stateUnstructured_object_stateDimensionWidth;
  elementOther_stateUnstructured_object_state.dimension = elementOther_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity elementOther_stateUnstructured_object_stateYaw_rate(-100.);
  elementOther_stateUnstructured_object_state.yaw_rate = elementOther_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D elementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateCenter_pointX(-1e9);
  elementOther_stateUnstructured_object_stateCenter_point.x = elementOther_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance elementOther_stateUnstructured_object_stateCenter_pointY(-1e9);
  elementOther_stateUnstructured_object_stateCenter_point.y = elementOther_stateUnstructured_object_stateCenter_pointY;
  elementOther_stateUnstructured_object_state.center_point = elementOther_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange elementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed elementOther_stateUnstructured_object_stateSpeed_rangeMinimum(-100.);
  elementOther_stateUnstructured_object_stateSpeed_range.minimum
    = elementOther_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed elementOther_stateUnstructured_object_stateSpeed_rangeMaximum(-100.);
  elementOther_stateUnstructured_object_stateSpeed_range.maximum
    = elementOther_stateUnstructured_object_stateSpeed_rangeMaximum;
  elementOther_stateUnstructured_object_stateSpeed_range.maximum
    = elementOther_stateUnstructured_object_stateSpeed_range.minimum;
  elementOther_stateUnstructured_object_stateSpeed_range.minimum
    = elementOther_stateUnstructured_object_stateSpeed_range.maximum;
  elementOther_stateUnstructured_object_state.speed_range = elementOther_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle elementOther_stateUnstructured_object_stateSteering_angle(-6.283185308);
  elementOther_stateUnstructured_object_state.steering_angle
    = elementOther_stateUnstructured_object_stateSteering_angle;
  elementOther_state.unstructured_object_state = elementOther_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState elementOther_stateStructured_object_state;
  ::ad::rss::world::Velocity elementOther_stateStructured_object_stateVelocity;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lon_min(-100.);
  elementOther_stateStructured_object_stateVelocitySpeed_lon_min
    = ::ad::physics::Speed(0.); // set to valid value within struct
  elementOther_stateStructured_object_stateVelocity.speed_lon_min
    = elementOther_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lon_max(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lon_max
    = elementOther_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lat_min(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lat_min
    = elementOther_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed elementOther_stateStructured_object_stateVelocitySpeed_lat_max(-100.);
  elementOther_stateStructured_object_stateVelocity.speed_lat_max
    = elementOther_stateStructured_object_stateVelocitySpeed_lat_max;
  elementOther_stateStructured_object_stateVelocity.speed_lon_max
    = elementOther_stateStructured_object_stateVelocity.speed_lon_min;
  elementOther_stateStructured_object_stateVelocity.speed_lat_max
    = elementOther_stateStructured_object_stateVelocity.speed_lat_min;
  elementOther_stateStructured_object_stateVelocity.speed_lon_min
    = elementOther_stateStructured_object_stateVelocity.speed_lon_max;
  elementOther_stateStructured_object_stateVelocity.speed_lat_min
    = elementOther_stateStructured_object_stateVelocity.speed_lat_max;
  elementOther_stateStructured_object_state.velocity = elementOther_stateStructured_object_stateVelocity;
  bool elementOther_stateStructured_object_stateHas_priority{true};
  elementOther_stateStructured_object_state.has_priority = elementOther_stateStructured_object_stateHas_priority;
  bool elementOther_stateStructured_object_stateIs_in_correct_lane{true};
  elementOther_stateStructured_object_state.is_in_correct_lane
    = elementOther_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance elementOther_stateStructured_object_stateDistance_to_enter_intersection(-1e9);
  elementOther_stateStructured_object_stateDistance_to_enter_intersection
    = ::ad::physics::Distance(0.); // set to valid value within struct
  elementOther_stateStructured_object_state.distance_to_enter_intersection
    = elementOther_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance elementOther_stateStructured_object_stateDistance_to_leave_intersection(-1e9);
  elementOther_stateStructured_object_state.distance_to_leave_intersection
    = elementOther_stateStructured_object_stateDistance_to_leave_intersection;
  elementOther_stateStructured_object_state.distance_to_leave_intersection
    = elementOther_stateStructured_object_state.distance_to_enter_intersection;
  elementOther_stateStructured_object_state.distance_to_enter_intersection
    = elementOther_stateStructured_object_state.distance_to_leave_intersection;
  elementOther_state.structured_object_state = elementOther_stateStructured_object_state;
  element.other_state = elementOther_state;
  ::ad::rss::core::RelativePosition elementRelative_position;
  ::ad::rss::core::LongitudinalRelativePosition elementRelative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::InFront);
  elementRelative_position.longitudinal_position = elementRelative_positionLongitudinal_position;
  ::ad::physics::Distance elementRelative_positionLongitudinal_distance(-1e9);
  elementRelative_position.longitudinal_distance = elementRelative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition elementRelative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtLeft);
  elementRelative_position.lateral_position = elementRelative_positionLateral_position;
  ::ad::physics::Distance elementRelative_positionLateral_distance(-1e9);
  elementRelative_position.lateral_distance = elementRelative_positionLateral_distance;
  element.relative_position = elementRelative_position;
  ::ad::rss::world::WorldModelIndexVector elementWorld_model_indices;
  ::ad::rss::world::WorldModelIndex elementWorld_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::lowest());
  elementWorld_model_indices.resize(1, elementWorld_model_indicesElement);
  element.world_model_indices = elementWorld_model_indices;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RelativeConstellationVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::core::RelativeConstellationVector value;
  ::ad::rss::core::RelativeConstellation element;
  ::ad::rss::world::ConstellationType elementConstellation_type(static_cast<::ad::rss::world::ConstellationType>(-1));
  element.constellation_type = elementConstellation_type;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
