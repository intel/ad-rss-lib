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
#include "ad/rss/core/RelativeConstellation.hpp"

class RelativeConstellationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    uint32_t
      valueEgo_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
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
    valueOther_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(0.); // set to valid value within
                                                                                      // struct
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
    valueOther_stateDynamics.min_longitudinal_safety_distance
      = valueOther_stateDynamicsMin_longitudinal_safety_distance;
    valueOther_state.dynamics = valueOther_stateDynamics;
    ::ad::rss::world::ObjectState valueOther_stateUnstructured_object_state;
    ::ad::physics::Angle valueOther_stateUnstructured_object_stateYaw(-6.283185308);
    valueOther_stateUnstructured_object_state.yaw = valueOther_stateUnstructured_object_stateYaw;
    ::ad::physics::Dimension2D valueOther_stateUnstructured_object_stateDimension;
    ::ad::physics::Distance valueOther_stateUnstructured_object_stateDimensionLength(-1e9);
    valueOther_stateUnstructured_object_stateDimension.length
      = valueOther_stateUnstructured_object_stateDimensionLength;
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
    mValue = value;
  }

  ::ad::rss::core::RelativeConstellation mValue;
};

TEST_F(RelativeConstellationTests, copyConstruction)
{
  ::ad::rss::core::RelativeConstellation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativeConstellationTests, moveConstruction)
{
  ::ad::rss::core::RelativeConstellation tmpValue(mValue);
  ::ad::rss::core::RelativeConstellation value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativeConstellationTests, copyAssignment)
{
  ::ad::rss::core::RelativeConstellation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativeConstellationTests, moveAssignment)
{
  ::ad::rss::core::RelativeConstellation tmpValue(mValue);
  ::ad::rss::core::RelativeConstellation value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RelativeConstellationTests, comparisonOperatorEqual)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RelativeConstellationTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RelativeConstellationTests, comparisonOperatorEgo_idDiffers)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::world::ObjectId ego_id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.ego_id = ego_id;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeConstellationTests, comparisonOperatorObject_idDiffers)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::world::ObjectId object_id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.object_id = object_id;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeConstellationTests, comparisonOperatorConstellation_idDiffers)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::core::RelativeConstellationId constellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::max());
  valueA.constellation_id = constellation_id;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeConstellationTests, comparisonOperatorConstellation_typeDiffers)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::world::ConstellationType constellation_type(::ad::rss::world::ConstellationType::Unstructured);
  valueA.constellation_type = constellation_type;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeConstellationTests, comparisonOperatorEgo_stateDiffers)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::core::RelativeObjectState ego_state;
  ::ad::rss::world::ObjectType ego_stateObject_type(::ad::rss::world::ObjectType::OtherObject);
  ego_state.object_type = ego_stateObject_type;
  ::ad::rss::world::RssDynamics ego_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues ego_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration ego_stateDynamicsAlpha_lonAccel_max(1e2);
  ego_stateDynamicsAlpha_lon.accel_max = ego_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration ego_stateDynamicsAlpha_lonBrake_max(1e2);
  ego_stateDynamicsAlpha_lon.brake_max = ego_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration ego_stateDynamicsAlpha_lonBrake_min(1e2);
  ego_stateDynamicsAlpha_lon.brake_min = ego_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration ego_stateDynamicsAlpha_lonBrake_min_correct(1e2);
  ego_stateDynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  ego_stateDynamicsAlpha_lon.brake_min_correct = ego_stateDynamicsAlpha_lonBrake_min_correct;
  ego_stateDynamicsAlpha_lon.brake_min_correct = ego_stateDynamicsAlpha_lon.brake_min;
  ego_stateDynamicsAlpha_lon.brake_min = ego_stateDynamicsAlpha_lon.brake_max;
  ego_stateDynamicsAlpha_lon.brake_max = ego_stateDynamicsAlpha_lon.brake_min;
  ego_stateDynamicsAlpha_lon.brake_min = ego_stateDynamicsAlpha_lon.brake_min_correct;
  ego_stateDynamics.alpha_lon = ego_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues ego_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration ego_stateDynamicsAlpha_latAccel_max(1e2);
  ego_stateDynamicsAlpha_lat.accel_max = ego_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration ego_stateDynamicsAlpha_latBrake_min(1e2);
  ego_stateDynamicsAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  ego_stateDynamicsAlpha_lat.brake_min = ego_stateDynamicsAlpha_latBrake_min;
  ego_stateDynamics.alpha_lat = ego_stateDynamicsAlpha_lat;
  ::ad::physics::Distance ego_stateDynamicsLateral_fluctuation_margin(1e9);
  ego_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(1.); // set to valid value within struct
  ego_stateDynamics.lateral_fluctuation_margin = ego_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration ego_stateDynamicsResponse_time(1e6);
  ego_stateDynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  ego_stateDynamics.response_time = ego_stateDynamicsResponse_time;
  ::ad::physics::Speed ego_stateDynamicsMax_speed_on_acceleration(100.);
  ego_stateDynamics.max_speed_on_acceleration = ego_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings ego_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance ego_stateDynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  ego_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = ego_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle ego_stateDynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  ego_stateDynamicsUnstructured_settings.drive_away_max_angle
    = ego_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration ego_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  ego_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = ego_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance ego_stateDynamicsUnstructured_settingsVehicle_min_radius(1e9);
  ego_stateDynamicsUnstructured_settings.vehicle_min_radius = ego_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration ego_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  ego_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = ego_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t ego_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = ego_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = ego_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = ego_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = ego_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = ego_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = ego_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = ego_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = ego_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = ego_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t ego_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  ego_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = ego_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  ego_stateDynamics.unstructured_settings = ego_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance ego_stateDynamicsMin_longitudinal_safety_distance(1e9);
  ego_stateDynamics.min_longitudinal_safety_distance = ego_stateDynamicsMin_longitudinal_safety_distance;
  ego_state.dynamics = ego_stateDynamics;
  ::ad::rss::world::ObjectState ego_stateUnstructured_object_state;
  ::ad::physics::Angle ego_stateUnstructured_object_stateYaw(6.283185308);
  ego_stateUnstructured_object_state.yaw = ego_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D ego_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance ego_stateUnstructured_object_stateDimensionLength(1e9);
  ego_stateUnstructured_object_stateDimension.length = ego_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance ego_stateUnstructured_object_stateDimensionWidth(1e9);
  ego_stateUnstructured_object_stateDimension.width = ego_stateUnstructured_object_stateDimensionWidth;
  ego_stateUnstructured_object_state.dimension = ego_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity ego_stateUnstructured_object_stateYaw_rate(100.);
  ego_stateUnstructured_object_state.yaw_rate = ego_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D ego_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance ego_stateUnstructured_object_stateCenter_pointX(1e9);
  ego_stateUnstructured_object_stateCenter_point.x = ego_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance ego_stateUnstructured_object_stateCenter_pointY(1e9);
  ego_stateUnstructured_object_stateCenter_point.y = ego_stateUnstructured_object_stateCenter_pointY;
  ego_stateUnstructured_object_state.center_point = ego_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange ego_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed ego_stateUnstructured_object_stateSpeed_rangeMinimum(100.);
  ego_stateUnstructured_object_stateSpeed_range.minimum = ego_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed ego_stateUnstructured_object_stateSpeed_rangeMaximum(100.);
  ego_stateUnstructured_object_stateSpeed_range.maximum = ego_stateUnstructured_object_stateSpeed_rangeMaximum;
  ego_stateUnstructured_object_stateSpeed_range.maximum = ego_stateUnstructured_object_stateSpeed_range.minimum;
  ego_stateUnstructured_object_stateSpeed_range.minimum = ego_stateUnstructured_object_stateSpeed_range.maximum;
  ego_stateUnstructured_object_state.speed_range = ego_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle ego_stateUnstructured_object_stateSteering_angle(6.283185308);
  ego_stateUnstructured_object_state.steering_angle = ego_stateUnstructured_object_stateSteering_angle;
  ego_state.unstructured_object_state = ego_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState ego_stateStructured_object_state;
  ::ad::rss::world::Velocity ego_stateStructured_object_stateVelocity;
  ::ad::physics::Speed ego_stateStructured_object_stateVelocitySpeed_lon_min(100.);
  ego_stateStructured_object_stateVelocity.speed_lon_min = ego_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed ego_stateStructured_object_stateVelocitySpeed_lon_max(100.);
  ego_stateStructured_object_stateVelocity.speed_lon_max = ego_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed ego_stateStructured_object_stateVelocitySpeed_lat_min(100.);
  ego_stateStructured_object_stateVelocity.speed_lat_min = ego_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed ego_stateStructured_object_stateVelocitySpeed_lat_max(100.);
  ego_stateStructured_object_stateVelocity.speed_lat_max = ego_stateStructured_object_stateVelocitySpeed_lat_max;
  ego_stateStructured_object_stateVelocity.speed_lat_max = ego_stateStructured_object_stateVelocity.speed_lat_min;
  ego_stateStructured_object_stateVelocity.speed_lon_max = ego_stateStructured_object_stateVelocity.speed_lon_min;
  ego_stateStructured_object_stateVelocity.speed_lat_min = ego_stateStructured_object_stateVelocity.speed_lat_max;
  ego_stateStructured_object_stateVelocity.speed_lon_min = ego_stateStructured_object_stateVelocity.speed_lon_max;
  ego_stateStructured_object_state.velocity = ego_stateStructured_object_stateVelocity;
  bool ego_stateStructured_object_stateHas_priority{false};
  ego_stateStructured_object_state.has_priority = ego_stateStructured_object_stateHas_priority;
  bool ego_stateStructured_object_stateIs_in_correct_lane{false};
  ego_stateStructured_object_state.is_in_correct_lane = ego_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance ego_stateStructured_object_stateDistance_to_enter_intersection(1e9);
  ego_stateStructured_object_state.distance_to_enter_intersection
    = ego_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance ego_stateStructured_object_stateDistance_to_leave_intersection(1e9);
  ego_stateStructured_object_stateDistance_to_leave_intersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  ego_stateStructured_object_state.distance_to_leave_intersection
    = ego_stateStructured_object_stateDistance_to_leave_intersection;
  ego_stateStructured_object_state.distance_to_leave_intersection
    = ego_stateStructured_object_state.distance_to_enter_intersection;
  ego_stateStructured_object_state.distance_to_enter_intersection
    = ego_stateStructured_object_state.distance_to_leave_intersection;
  ego_state.structured_object_state = ego_stateStructured_object_state;
  valueA.ego_state = ego_state;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeConstellationTests, comparisonOperatorOther_stateDiffers)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::core::RelativeObjectState other_state;
  ::ad::rss::world::ObjectType other_stateObject_type(::ad::rss::world::ObjectType::OtherObject);
  other_state.object_type = other_stateObject_type;
  ::ad::rss::world::RssDynamics other_stateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues other_stateDynamicsAlpha_lon;
  ::ad::physics::Acceleration other_stateDynamicsAlpha_lonAccel_max(1e2);
  other_stateDynamicsAlpha_lon.accel_max = other_stateDynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration other_stateDynamicsAlpha_lonBrake_max(1e2);
  other_stateDynamicsAlpha_lon.brake_max = other_stateDynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration other_stateDynamicsAlpha_lonBrake_min(1e2);
  other_stateDynamicsAlpha_lon.brake_min = other_stateDynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration other_stateDynamicsAlpha_lonBrake_min_correct(1e2);
  other_stateDynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  other_stateDynamicsAlpha_lon.brake_min_correct = other_stateDynamicsAlpha_lonBrake_min_correct;
  other_stateDynamicsAlpha_lon.brake_min_correct = other_stateDynamicsAlpha_lon.brake_min;
  other_stateDynamicsAlpha_lon.brake_min = other_stateDynamicsAlpha_lon.brake_max;
  other_stateDynamicsAlpha_lon.brake_max = other_stateDynamicsAlpha_lon.brake_min;
  other_stateDynamicsAlpha_lon.brake_min = other_stateDynamicsAlpha_lon.brake_min_correct;
  other_stateDynamics.alpha_lon = other_stateDynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues other_stateDynamicsAlpha_lat;
  ::ad::physics::Acceleration other_stateDynamicsAlpha_latAccel_max(1e2);
  other_stateDynamicsAlpha_lat.accel_max = other_stateDynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration other_stateDynamicsAlpha_latBrake_min(1e2);
  other_stateDynamicsAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  other_stateDynamicsAlpha_lat.brake_min = other_stateDynamicsAlpha_latBrake_min;
  other_stateDynamics.alpha_lat = other_stateDynamicsAlpha_lat;
  ::ad::physics::Distance other_stateDynamicsLateral_fluctuation_margin(1e9);
  other_stateDynamicsLateral_fluctuation_margin = ::ad::physics::Distance(1.); // set to valid value within struct
  other_stateDynamics.lateral_fluctuation_margin = other_stateDynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration other_stateDynamicsResponse_time(1e6);
  other_stateDynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  other_stateDynamics.response_time = other_stateDynamicsResponse_time;
  ::ad::physics::Speed other_stateDynamicsMax_speed_on_acceleration(100.);
  other_stateDynamics.max_speed_on_acceleration = other_stateDynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings other_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance other_stateDynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  other_stateDynamicsUnstructured_settings.pedestrian_turning_radius
    = other_stateDynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle other_stateDynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  other_stateDynamicsUnstructured_settings.drive_away_max_angle
    = other_stateDynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration other_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  other_stateDynamicsUnstructured_settings.vehicle_yaw_rate_change
    = other_stateDynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance other_stateDynamicsUnstructured_settingsVehicle_min_radius(1e9);
  other_stateDynamicsUnstructured_settings.vehicle_min_radius
    = other_stateDynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration other_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  other_stateDynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = other_stateDynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t other_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = other_stateDynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t other_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = other_stateDynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t other_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = other_stateDynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t other_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = other_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t other_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = other_stateDynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t other_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = other_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t other_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = other_stateDynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t other_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = other_stateDynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t other_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = other_stateDynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t other_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  other_stateDynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = other_stateDynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  other_stateDynamics.unstructured_settings = other_stateDynamicsUnstructured_settings;
  ::ad::physics::Distance other_stateDynamicsMin_longitudinal_safety_distance(1e9);
  other_stateDynamics.min_longitudinal_safety_distance = other_stateDynamicsMin_longitudinal_safety_distance;
  other_state.dynamics = other_stateDynamics;
  ::ad::rss::world::ObjectState other_stateUnstructured_object_state;
  ::ad::physics::Angle other_stateUnstructured_object_stateYaw(6.283185308);
  other_stateUnstructured_object_state.yaw = other_stateUnstructured_object_stateYaw;
  ::ad::physics::Dimension2D other_stateUnstructured_object_stateDimension;
  ::ad::physics::Distance other_stateUnstructured_object_stateDimensionLength(1e9);
  other_stateUnstructured_object_stateDimension.length = other_stateUnstructured_object_stateDimensionLength;
  ::ad::physics::Distance other_stateUnstructured_object_stateDimensionWidth(1e9);
  other_stateUnstructured_object_stateDimension.width = other_stateUnstructured_object_stateDimensionWidth;
  other_stateUnstructured_object_state.dimension = other_stateUnstructured_object_stateDimension;
  ::ad::physics::AngularVelocity other_stateUnstructured_object_stateYaw_rate(100.);
  other_stateUnstructured_object_state.yaw_rate = other_stateUnstructured_object_stateYaw_rate;
  ::ad::physics::Distance2D other_stateUnstructured_object_stateCenter_point;
  ::ad::physics::Distance other_stateUnstructured_object_stateCenter_pointX(1e9);
  other_stateUnstructured_object_stateCenter_point.x = other_stateUnstructured_object_stateCenter_pointX;
  ::ad::physics::Distance other_stateUnstructured_object_stateCenter_pointY(1e9);
  other_stateUnstructured_object_stateCenter_point.y = other_stateUnstructured_object_stateCenter_pointY;
  other_stateUnstructured_object_state.center_point = other_stateUnstructured_object_stateCenter_point;
  ::ad::physics::SpeedRange other_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Speed other_stateUnstructured_object_stateSpeed_rangeMinimum(100.);
  other_stateUnstructured_object_stateSpeed_range.minimum = other_stateUnstructured_object_stateSpeed_rangeMinimum;
  ::ad::physics::Speed other_stateUnstructured_object_stateSpeed_rangeMaximum(100.);
  other_stateUnstructured_object_stateSpeed_range.maximum = other_stateUnstructured_object_stateSpeed_rangeMaximum;
  other_stateUnstructured_object_stateSpeed_range.maximum = other_stateUnstructured_object_stateSpeed_range.minimum;
  other_stateUnstructured_object_stateSpeed_range.minimum = other_stateUnstructured_object_stateSpeed_range.maximum;
  other_stateUnstructured_object_state.speed_range = other_stateUnstructured_object_stateSpeed_range;
  ::ad::physics::Angle other_stateUnstructured_object_stateSteering_angle(6.283185308);
  other_stateUnstructured_object_state.steering_angle = other_stateUnstructured_object_stateSteering_angle;
  other_state.unstructured_object_state = other_stateUnstructured_object_state;
  ::ad::rss::core::StructuredObjectState other_stateStructured_object_state;
  ::ad::rss::world::Velocity other_stateStructured_object_stateVelocity;
  ::ad::physics::Speed other_stateStructured_object_stateVelocitySpeed_lon_min(100.);
  other_stateStructured_object_stateVelocity.speed_lon_min = other_stateStructured_object_stateVelocitySpeed_lon_min;
  ::ad::physics::Speed other_stateStructured_object_stateVelocitySpeed_lon_max(100.);
  other_stateStructured_object_stateVelocity.speed_lon_max = other_stateStructured_object_stateVelocitySpeed_lon_max;
  ::ad::physics::Speed other_stateStructured_object_stateVelocitySpeed_lat_min(100.);
  other_stateStructured_object_stateVelocity.speed_lat_min = other_stateStructured_object_stateVelocitySpeed_lat_min;
  ::ad::physics::Speed other_stateStructured_object_stateVelocitySpeed_lat_max(100.);
  other_stateStructured_object_stateVelocity.speed_lat_max = other_stateStructured_object_stateVelocitySpeed_lat_max;
  other_stateStructured_object_stateVelocity.speed_lat_max = other_stateStructured_object_stateVelocity.speed_lat_min;
  other_stateStructured_object_stateVelocity.speed_lon_max = other_stateStructured_object_stateVelocity.speed_lon_min;
  other_stateStructured_object_stateVelocity.speed_lat_min = other_stateStructured_object_stateVelocity.speed_lat_max;
  other_stateStructured_object_stateVelocity.speed_lon_min = other_stateStructured_object_stateVelocity.speed_lon_max;
  other_stateStructured_object_state.velocity = other_stateStructured_object_stateVelocity;
  bool other_stateStructured_object_stateHas_priority{false};
  other_stateStructured_object_state.has_priority = other_stateStructured_object_stateHas_priority;
  bool other_stateStructured_object_stateIs_in_correct_lane{false};
  other_stateStructured_object_state.is_in_correct_lane = other_stateStructured_object_stateIs_in_correct_lane;
  ::ad::physics::Distance other_stateStructured_object_stateDistance_to_enter_intersection(1e9);
  other_stateStructured_object_state.distance_to_enter_intersection
    = other_stateStructured_object_stateDistance_to_enter_intersection;
  ::ad::physics::Distance other_stateStructured_object_stateDistance_to_leave_intersection(1e9);
  other_stateStructured_object_stateDistance_to_leave_intersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  other_stateStructured_object_state.distance_to_leave_intersection
    = other_stateStructured_object_stateDistance_to_leave_intersection;
  other_stateStructured_object_state.distance_to_leave_intersection
    = other_stateStructured_object_state.distance_to_enter_intersection;
  other_stateStructured_object_state.distance_to_enter_intersection
    = other_stateStructured_object_state.distance_to_leave_intersection;
  other_state.structured_object_state = other_stateStructured_object_state;
  valueA.other_state = other_state;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeConstellationTests, comparisonOperatorRelative_positionDiffers)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::core::RelativePosition relative_position;
  ::ad::rss::core::LongitudinalRelativePosition relative_positionLongitudinal_position(
    ::ad::rss::core::LongitudinalRelativePosition::AtBack);
  relative_position.longitudinal_position = relative_positionLongitudinal_position;
  ::ad::physics::Distance relative_positionLongitudinal_distance(1e9);
  relative_position.longitudinal_distance = relative_positionLongitudinal_distance;
  ::ad::rss::core::LateralRelativePosition relative_positionLateral_position(
    ::ad::rss::core::LateralRelativePosition::AtRight);
  relative_position.lateral_position = relative_positionLateral_position;
  ::ad::physics::Distance relative_positionLateral_distance(1e9);
  relative_position.lateral_distance = relative_positionLateral_distance;
  valueA.relative_position = relative_position;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RelativeConstellationTests, comparisonOperatorWorld_model_indicesDiffers)
{
  ::ad::rss::core::RelativeConstellation valueA = mValue;
  ::ad::rss::world::WorldModelIndexVector world_model_indices;
  ::ad::rss::world::WorldModelIndex world_model_indicesElement(
    std::numeric_limits<::ad::rss::world::WorldModelIndex>::max());
  world_model_indices.resize(2, world_model_indicesElement);
  valueA.world_model_indices = world_model_indices;
  ::ad::rss::core::RelativeConstellation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
