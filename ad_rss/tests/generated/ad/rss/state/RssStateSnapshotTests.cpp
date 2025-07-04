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
#include "ad/rss/state/RssStateSnapshot.hpp"

class RssStateSnapshotTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::state::RssStateSnapshot value;
    ::ad::rss::world::TimeIndex valueTime_index(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueTime_index = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    value.time_index = valueTime_index;
    ::ad::rss::world::RssDynamics valueDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.accel_max = valueDefault_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max = valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueDefault_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
      = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min
      = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_max = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
    valueDefault_ego_vehicle_rss_dynamics.alpha_lon = valueDefault_ego_vehicle_rss_dynamicsAlpha_lon;
    ::ad::rss::world::LateralRssAccelerationValues valueDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lat.accel_max = valueDefault_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
    ::ad::physics::Acceleration valueDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsAlpha_lat.brake_min = valueDefault_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
    valueDefault_ego_vehicle_rss_dynamics.alpha_lat = valueDefault_ego_vehicle_rss_dynamicsAlpha_lat;
    ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(-1e9);
    valueDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
      = ::ad::physics::Distance(0.); // set to valid value within struct
    valueDefault_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
      = valueDefault_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
    ::ad::physics::Duration valueDefault_ego_vehicle_rss_dynamicsResponse_time(0.);
    valueDefault_ego_vehicle_rss_dynamicsResponse_time
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueDefault_ego_vehicle_rss_dynamics.response_time = valueDefault_ego_vehicle_rss_dynamicsResponse_time;
    ::ad::physics::Speed valueDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(-100.);
    valueDefault_ego_vehicle_rss_dynamics.max_speed_on_acceleration
      = valueDefault_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
    ::ad::rss::world::UnstructuredSettings valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(-1e9);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
    ::ad::physics::Angle valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(-6.283185308);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
    ::ad::physics::AngularAcceleration
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(-1e2);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
    ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(-1e9);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
    ::ad::physics::Duration
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(0.);
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
    uint32_t valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings
      .pedestrian_continue_forward_intermediate_acceleration_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
    uint32_t valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
    uint32_t
      valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
        std::numeric_limits<uint32_t>::min()};
    valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
    valueDefault_ego_vehicle_rss_dynamics.unstructured_settings
      = valueDefault_ego_vehicle_rss_dynamicsUnstructured_settings;
    ::ad::physics::Distance valueDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(-1e9);
    valueDefault_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
      = valueDefault_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
    value.default_ego_vehicle_rss_dynamics = valueDefault_ego_vehicle_rss_dynamics;
    ::ad::rss::state::RssStateVector valueIndividual_responses;
    ::ad::rss::state::RssState valueIndividual_responsesElement;
    ::ad::rss::world::ObjectId valueIndividual_responsesElementEgo_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueIndividual_responsesElement.ego_id = valueIndividual_responsesElementEgo_id;
    ::ad::rss::world::ObjectId valueIndividual_responsesElementObject_id(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueIndividual_responsesElement.object_id = valueIndividual_responsesElementObject_id;
    ::ad::rss::core::RelativeConstellationId valueIndividual_responsesElementConstellation_id(
      std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
    valueIndividual_responsesElement.constellation_id = valueIndividual_responsesElementConstellation_id;
    ::ad::rss::state::LongitudinalRssState valueIndividual_responsesElementLongitudinal_state;
    bool valueIndividual_responsesElementLongitudinal_stateIs_safe{true};
    valueIndividual_responsesElementLongitudinal_state.is_safe
      = valueIndividual_responsesElementLongitudinal_stateIs_safe;
    ::ad::rss::state::LongitudinalResponse valueIndividual_responsesElementLongitudinal_stateResponse(
      ::ad::rss::state::LongitudinalResponse::None);
    valueIndividual_responsesElementLongitudinal_state.response
      = valueIndividual_responsesElementLongitudinal_stateResponse;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueIndividual_responsesElementLongitudinal_stateAlpha_lon;
    ::ad::physics::Acceleration valueIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max(-1e2);
    valueIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueIndividual_responsesElementLongitudinal_stateAlpha_lon.accel_max
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max(-1e2);
    valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min(-1e2);
    valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
    ::ad::physics::Acceleration valueIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
    valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
    valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max;
    valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
    valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct;
    valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_max
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
    valueIndividual_responsesElementLongitudinal_state.alpha_lon
      = valueIndividual_responsesElementLongitudinal_stateAlpha_lon;
    ::ad::rss::state::RssStateInformation valueIndividual_responsesElementLongitudinal_stateRss_state_information;
    ::ad::physics::Distance valueIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(-1e9);
    valueIndividual_responsesElementLongitudinal_stateRss_state_information.safe_distance
      = valueIndividual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
    ::ad::physics::Distance valueIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(
      -1e9);
    valueIndividual_responsesElementLongitudinal_stateRss_state_information.current_distance
      = valueIndividual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
    ::ad::rss::state::RssStateEvaluator
      valueIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
        ::ad::rss::state::RssStateEvaluator::None);
    valueIndividual_responsesElementLongitudinal_stateRss_state_information.evaluator
      = valueIndividual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
    valueIndividual_responsesElementLongitudinal_state.rss_state_information
      = valueIndividual_responsesElementLongitudinal_stateRss_state_information;
    valueIndividual_responsesElement.longitudinal_state = valueIndividual_responsesElementLongitudinal_state;
    ::ad::rss::state::LateralRssState valueIndividual_responsesElementLateral_state_right;
    bool valueIndividual_responsesElementLateral_state_rightIs_safe{true};
    valueIndividual_responsesElementLateral_state_right.is_safe
      = valueIndividual_responsesElementLateral_state_rightIs_safe;
    ::ad::rss::state::LateralResponse valueIndividual_responsesElementLateral_state_rightResponse(
      ::ad::rss::state::LateralResponse::None);
    valueIndividual_responsesElementLateral_state_right.response
      = valueIndividual_responsesElementLateral_state_rightResponse;
    ::ad::rss::world::LateralRssAccelerationValues valueIndividual_responsesElementLateral_state_rightAlpha_lat;
    ::ad::physics::Acceleration valueIndividual_responsesElementLateral_state_rightAlpha_latAccel_max(-1e2);
    valueIndividual_responsesElementLateral_state_rightAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueIndividual_responsesElementLateral_state_rightAlpha_lat.accel_max
      = valueIndividual_responsesElementLateral_state_rightAlpha_latAccel_max;
    ::ad::physics::Acceleration valueIndividual_responsesElementLateral_state_rightAlpha_latBrake_min(-1e2);
    valueIndividual_responsesElementLateral_state_rightAlpha_lat.brake_min
      = valueIndividual_responsesElementLateral_state_rightAlpha_latBrake_min;
    valueIndividual_responsesElementLateral_state_right.alpha_lat
      = valueIndividual_responsesElementLateral_state_rightAlpha_lat;
    ::ad::rss::state::RssStateInformation valueIndividual_responsesElementLateral_state_rightRss_state_information;
    ::ad::physics::Distance valueIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance(-1e9);
    valueIndividual_responsesElementLateral_state_rightRss_state_information.safe_distance
      = valueIndividual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
    ::ad::physics::Distance valueIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(
      -1e9);
    valueIndividual_responsesElementLateral_state_rightRss_state_information.current_distance
      = valueIndividual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
    ::ad::rss::state::RssStateEvaluator
      valueIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator(
        ::ad::rss::state::RssStateEvaluator::None);
    valueIndividual_responsesElementLateral_state_rightRss_state_information.evaluator
      = valueIndividual_responsesElementLateral_state_rightRss_state_informationEvaluator;
    valueIndividual_responsesElementLateral_state_right.rss_state_information
      = valueIndividual_responsesElementLateral_state_rightRss_state_information;
    valueIndividual_responsesElement.lateral_state_right = valueIndividual_responsesElementLateral_state_right;
    ::ad::rss::state::LateralRssState valueIndividual_responsesElementLateral_state_left;
    bool valueIndividual_responsesElementLateral_state_leftIs_safe{true};
    valueIndividual_responsesElementLateral_state_left.is_safe
      = valueIndividual_responsesElementLateral_state_leftIs_safe;
    ::ad::rss::state::LateralResponse valueIndividual_responsesElementLateral_state_leftResponse(
      ::ad::rss::state::LateralResponse::None);
    valueIndividual_responsesElementLateral_state_left.response
      = valueIndividual_responsesElementLateral_state_leftResponse;
    ::ad::rss::world::LateralRssAccelerationValues valueIndividual_responsesElementLateral_state_leftAlpha_lat;
    ::ad::physics::Acceleration valueIndividual_responsesElementLateral_state_leftAlpha_latAccel_max(-1e2);
    valueIndividual_responsesElementLateral_state_leftAlpha_latAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueIndividual_responsesElementLateral_state_leftAlpha_lat.accel_max
      = valueIndividual_responsesElementLateral_state_leftAlpha_latAccel_max;
    ::ad::physics::Acceleration valueIndividual_responsesElementLateral_state_leftAlpha_latBrake_min(-1e2);
    valueIndividual_responsesElementLateral_state_leftAlpha_lat.brake_min
      = valueIndividual_responsesElementLateral_state_leftAlpha_latBrake_min;
    valueIndividual_responsesElementLateral_state_left.alpha_lat
      = valueIndividual_responsesElementLateral_state_leftAlpha_lat;
    ::ad::rss::state::RssStateInformation valueIndividual_responsesElementLateral_state_leftRss_state_information;
    ::ad::physics::Distance valueIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance(-1e9);
    valueIndividual_responsesElementLateral_state_leftRss_state_information.safe_distance
      = valueIndividual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
    ::ad::physics::Distance valueIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(
      -1e9);
    valueIndividual_responsesElementLateral_state_leftRss_state_information.current_distance
      = valueIndividual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
    ::ad::rss::state::RssStateEvaluator
      valueIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator(
        ::ad::rss::state::RssStateEvaluator::None);
    valueIndividual_responsesElementLateral_state_leftRss_state_information.evaluator
      = valueIndividual_responsesElementLateral_state_leftRss_state_informationEvaluator;
    valueIndividual_responsesElementLateral_state_left.rss_state_information
      = valueIndividual_responsesElementLateral_state_leftRss_state_information;
    valueIndividual_responsesElement.lateral_state_left = valueIndividual_responsesElementLateral_state_left;
    ::ad::rss::state::UnstructuredConstellationRssState
      valueIndividual_responsesElementUnstructured_constellation_state;
    bool valueIndividual_responsesElementUnstructured_constellation_stateIs_safe{true};
    valueIndividual_responsesElementUnstructured_constellation_state.is_safe
      = valueIndividual_responsesElementUnstructured_constellation_stateIs_safe;
    ::ad::rss::state::UnstructuredConstellationResponse
      valueIndividual_responsesElementUnstructured_constellation_stateResponse(
        ::ad::rss::state::UnstructuredConstellationResponse::None);
    valueIndividual_responsesElementUnstructured_constellation_state.response
      = valueIndividual_responsesElementUnstructured_constellation_stateResponse;
    ::ad::geometry::HeadingRange valueIndividual_responsesElementUnstructured_constellation_stateHeading_range;
    ::ad::physics::Angle valueIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(
      -6.283185308);
    valueIndividual_responsesElementUnstructured_constellation_stateHeading_range.begin
      = valueIndividual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
    ::ad::physics::Angle valueIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
    valueIndividual_responsesElementUnstructured_constellation_stateHeading_range.end
      = valueIndividual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
    valueIndividual_responsesElementUnstructured_constellation_state.heading_range
      = valueIndividual_responsesElementUnstructured_constellation_stateHeading_range;
    ::ad::rss::state::UnstructuredConstellationStateInformation
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
    ::ad::physics::Distance2DList
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
    ::ad::physics::Distance2D
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
    ::ad::physics::Distance
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
        -1e9);
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
      = valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
    ::ad::physics::Distance
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
        -1e9);
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
      = valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
      1,
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_information.brake_trajectory_set
      = valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
    ::ad::physics::Distance2DList
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
    ::ad::physics::Distance2D
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
    ::ad::physics::Distance
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
        -1e9);
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
      .x
      = valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
    ::ad::physics::Distance
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
        -1e9);
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
      .y
      = valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set
      .resize(
        1,
        valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_information
      .continue_forward_trajectory_set
      = valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
    ::ad::physics::Angle
      valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
        -6.283185308);
    valueIndividual_responsesElementUnstructured_constellation_stateRss_state_information
      .considered_drive_away_steering_angle
      = valueIndividual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
    valueIndividual_responsesElementUnstructured_constellation_state.rss_state_information
      = valueIndividual_responsesElementUnstructured_constellation_stateRss_state_information;
    ::ad::rss::world::LongitudinalRssAccelerationValues
      valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
    ::ad::physics::Acceleration valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(
      -1e2);
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.accel_max
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
    ::ad::physics::Acceleration valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(
      -1e2);
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
    ::ad::physics::Acceleration valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(
      -1e2);
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
    ::ad::physics::Acceleration
      valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max;
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct;
    valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
    valueIndividual_responsesElementUnstructured_constellation_state.alpha_lon
      = valueIndividual_responsesElementUnstructured_constellation_stateAlpha_lon;
    valueIndividual_responsesElement.unstructured_constellation_state
      = valueIndividual_responsesElementUnstructured_constellation_state;
    ::ad::rss::world::ConstellationType valueIndividual_responsesElementConstellation_type(
      ::ad::rss::world::ConstellationType::NotRelevant);
    valueIndividual_responsesElement.constellation_type = valueIndividual_responsesElementConstellation_type;
    valueIndividual_responses.resize(1, valueIndividual_responsesElement);
    value.individual_responses = valueIndividual_responses;
    ::ad::rss::state::UnstructuredConstellationStateInformation valueUnstructured_constellation_ego_information;
    ::ad::physics::Distance2DList valueUnstructured_constellation_ego_informationBrake_trajectory_set;
    ::ad::physics::Distance2D valueUnstructured_constellation_ego_informationBrake_trajectory_setElement;
    ::ad::physics::Distance valueUnstructured_constellation_ego_informationBrake_trajectory_setElementX(-1e9);
    valueUnstructured_constellation_ego_informationBrake_trajectory_setElement.x
      = valueUnstructured_constellation_ego_informationBrake_trajectory_setElementX;
    ::ad::physics::Distance valueUnstructured_constellation_ego_informationBrake_trajectory_setElementY(-1e9);
    valueUnstructured_constellation_ego_informationBrake_trajectory_setElement.y
      = valueUnstructured_constellation_ego_informationBrake_trajectory_setElementY;
    valueUnstructured_constellation_ego_informationBrake_trajectory_set.resize(
      1, valueUnstructured_constellation_ego_informationBrake_trajectory_setElement);
    valueUnstructured_constellation_ego_information.brake_trajectory_set
      = valueUnstructured_constellation_ego_informationBrake_trajectory_set;
    ::ad::physics::Distance2DList valueUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
    ::ad::physics::Distance2D valueUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
    ::ad::physics::Distance valueUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(
      -1e9);
    valueUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement.x
      = valueUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
    ::ad::physics::Distance valueUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(
      -1e9);
    valueUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement.y
      = valueUnstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
    valueUnstructured_constellation_ego_informationContinue_forward_trajectory_set.resize(
      1, valueUnstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
    valueUnstructured_constellation_ego_information.continue_forward_trajectory_set
      = valueUnstructured_constellation_ego_informationContinue_forward_trajectory_set;
    ::ad::physics::Angle valueUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle(
      -6.283185308);
    valueUnstructured_constellation_ego_information.considered_drive_away_steering_angle
      = valueUnstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
    value.unstructured_constellation_ego_information = valueUnstructured_constellation_ego_information;
    mValue = value;
  }

  ::ad::rss::state::RssStateSnapshot mValue;
};

TEST_F(RssStateSnapshotTests, copyConstruction)
{
  ::ad::rss::state::RssStateSnapshot value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, moveConstruction)
{
  ::ad::rss::state::RssStateSnapshot tmpValue(mValue);
  ::ad::rss::state::RssStateSnapshot value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, copyAssignment)
{
  ::ad::rss::state::RssStateSnapshot value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, moveAssignment)
{
  ::ad::rss::state::RssStateSnapshot tmpValue(mValue);
  ::ad::rss::state::RssStateSnapshot value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorEqual)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorTime_indexDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::world::TimeIndex time_index(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.time_index = time_index;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorDefault_ego_vehicle_rss_dynamicsDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::world::RssDynamics default_ego_vehicle_rss_dynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues default_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_lonAccel_max(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lon.accel_max = default_ego_vehicle_rss_dynamicsAlpha_lonAccel_max;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_lonBrake_max(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_max = default_ego_vehicle_rss_dynamicsAlpha_lonBrake_max;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct
    = default_ego_vehicle_rss_dynamicsAlpha_lonBrake_min_correct;
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct = default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = default_ego_vehicle_rss_dynamicsAlpha_lon.brake_max;
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_max = default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min;
  default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min = default_ego_vehicle_rss_dynamicsAlpha_lon.brake_min_correct;
  default_ego_vehicle_rss_dynamics.alpha_lon = default_ego_vehicle_rss_dynamicsAlpha_lon;
  ::ad::rss::world::LateralRssAccelerationValues default_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_latAccel_max(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_lat.accel_max = default_ego_vehicle_rss_dynamicsAlpha_latAccel_max;
  ::ad::physics::Acceleration default_ego_vehicle_rss_dynamicsAlpha_latBrake_min(1e2);
  default_ego_vehicle_rss_dynamicsAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  default_ego_vehicle_rss_dynamicsAlpha_lat.brake_min = default_ego_vehicle_rss_dynamicsAlpha_latBrake_min;
  default_ego_vehicle_rss_dynamics.alpha_lat = default_ego_vehicle_rss_dynamicsAlpha_lat;
  ::ad::physics::Distance default_ego_vehicle_rss_dynamicsLateral_fluctuation_margin(1e9);
  default_ego_vehicle_rss_dynamicsLateral_fluctuation_margin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  default_ego_vehicle_rss_dynamics.lateral_fluctuation_margin
    = default_ego_vehicle_rss_dynamicsLateral_fluctuation_margin;
  ::ad::physics::Duration default_ego_vehicle_rss_dynamicsResponse_time(1e6);
  default_ego_vehicle_rss_dynamicsResponse_time = ::ad::physics::Duration(10.); // set to valid value within struct
  default_ego_vehicle_rss_dynamics.response_time = default_ego_vehicle_rss_dynamicsResponse_time;
  ::ad::physics::Speed default_ego_vehicle_rss_dynamicsMax_speed_on_acceleration(100.);
  default_ego_vehicle_rss_dynamics.max_speed_on_acceleration
    = default_ego_vehicle_rss_dynamicsMax_speed_on_acceleration;
  ::ad::rss::world::UnstructuredSettings default_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius(1e9);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_turning_radius
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_turning_radius;
  ::ad::physics::Angle default_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle(6.283185308);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.drive_away_max_angle
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsDrive_away_max_angle;
  ::ad::physics::AngularAcceleration default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change(1e2);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_yaw_rate_change
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_yaw_rate_change;
  ::ad::physics::Distance default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius(1e9);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_min_radius
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_min_radius;
  ::ad::physics::Duration default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step(1e6);
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_trajectory_calculation_step
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_trajectory_calculation_step;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_front_intermediate_yaw_rate_change_ratio_steps;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_back_intermediate_yaw_rate_change_ratio_steps;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_brake_intermediate_acceleration_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_brake_intermediate_acceleration_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_acceleration_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings
    .vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsVehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings
    .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_heading_change_ratio_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_continue_forward_intermediate_acceleration_steps;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_brake_intermediate_acceleration_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_brake_intermediate_acceleration_steps;
  uint32_t
    default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps{
      std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_front_intermediate_heading_change_ratio_steps;
  uint32_t default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps{
    std::numeric_limits<uint32_t>::max()};
  default_ego_vehicle_rss_dynamicsUnstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
    = default_ego_vehicle_rss_dynamicsUnstructured_settingsPedestrian_back_intermediate_heading_change_ratio_steps;
  default_ego_vehicle_rss_dynamics.unstructured_settings = default_ego_vehicle_rss_dynamicsUnstructured_settings;
  ::ad::physics::Distance default_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance(1e9);
  default_ego_vehicle_rss_dynamics.min_longitudinal_safety_distance
    = default_ego_vehicle_rss_dynamicsMin_longitudinal_safety_distance;
  valueA.default_ego_vehicle_rss_dynamics = default_ego_vehicle_rss_dynamics;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorIndividual_responsesDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::state::RssStateVector individual_responses;
  ::ad::rss::state::RssState individual_responsesElement;
  ::ad::rss::world::ObjectId individual_responsesElementEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  individual_responsesElement.ego_id = individual_responsesElementEgo_id;
  ::ad::rss::world::ObjectId individual_responsesElementObject_id(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  individual_responsesElement.object_id = individual_responsesElementObject_id;
  ::ad::rss::core::RelativeConstellationId individual_responsesElementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::max());
  individual_responsesElement.constellation_id = individual_responsesElementConstellation_id;
  ::ad::rss::state::LongitudinalRssState individual_responsesElementLongitudinal_state;
  bool individual_responsesElementLongitudinal_stateIs_safe{false};
  individual_responsesElementLongitudinal_state.is_safe = individual_responsesElementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse individual_responsesElementLongitudinal_stateResponse(
    ::ad::rss::state::LongitudinalResponse::BrakeMin);
  individual_responsesElementLongitudinal_state.response = individual_responsesElementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues individual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration individual_responsesElementLongitudinal_stateAlpha_lonAccel_max(1e2);
  individual_responsesElementLongitudinal_stateAlpha_lon.accel_max
    = individual_responsesElementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration individual_responsesElementLongitudinal_stateAlpha_lonBrake_max(1e2);
  individual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = individual_responsesElementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration individual_responsesElementLongitudinal_stateAlpha_lonBrake_min(1e2);
  individual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = individual_responsesElementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration individual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct(1e2);
  individual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  individual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
    = individual_responsesElementLongitudinal_stateAlpha_lonBrake_min_correct;
  individual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct
    = individual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
  individual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = individual_responsesElementLongitudinal_stateAlpha_lon.brake_max;
  individual_responsesElementLongitudinal_stateAlpha_lon.brake_max
    = individual_responsesElementLongitudinal_stateAlpha_lon.brake_min;
  individual_responsesElementLongitudinal_stateAlpha_lon.brake_min
    = individual_responsesElementLongitudinal_stateAlpha_lon.brake_min_correct;
  individual_responsesElementLongitudinal_state.alpha_lon = individual_responsesElementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation individual_responsesElementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance individual_responsesElementLongitudinal_stateRss_state_informationSafe_distance(1e9);
  individual_responsesElementLongitudinal_stateRss_state_information.safe_distance
    = individual_responsesElementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance individual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance(1e9);
  individual_responsesElementLongitudinal_stateRss_state_information.current_distance
    = individual_responsesElementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator individual_responsesElementLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individual_responsesElementLongitudinal_stateRss_state_information.evaluator
    = individual_responsesElementLongitudinal_stateRss_state_informationEvaluator;
  individual_responsesElementLongitudinal_state.rss_state_information
    = individual_responsesElementLongitudinal_stateRss_state_information;
  individual_responsesElement.longitudinal_state = individual_responsesElementLongitudinal_state;
  ::ad::rss::state::LateralRssState individual_responsesElementLateral_state_right;
  bool individual_responsesElementLateral_state_rightIs_safe{false};
  individual_responsesElementLateral_state_right.is_safe = individual_responsesElementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse individual_responsesElementLateral_state_rightResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  individual_responsesElementLateral_state_right.response = individual_responsesElementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues individual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration individual_responsesElementLateral_state_rightAlpha_latAccel_max(1e2);
  individual_responsesElementLateral_state_rightAlpha_lat.accel_max
    = individual_responsesElementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration individual_responsesElementLateral_state_rightAlpha_latBrake_min(1e2);
  individual_responsesElementLateral_state_rightAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  individual_responsesElementLateral_state_rightAlpha_lat.brake_min
    = individual_responsesElementLateral_state_rightAlpha_latBrake_min;
  individual_responsesElementLateral_state_right.alpha_lat = individual_responsesElementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation individual_responsesElementLateral_state_rightRss_state_information;
  ::ad::physics::Distance individual_responsesElementLateral_state_rightRss_state_informationSafe_distance(1e9);
  individual_responsesElementLateral_state_rightRss_state_information.safe_distance
    = individual_responsesElementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance individual_responsesElementLateral_state_rightRss_state_informationCurrent_distance(1e9);
  individual_responsesElementLateral_state_rightRss_state_information.current_distance
    = individual_responsesElementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator individual_responsesElementLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individual_responsesElementLateral_state_rightRss_state_information.evaluator
    = individual_responsesElementLateral_state_rightRss_state_informationEvaluator;
  individual_responsesElementLateral_state_right.rss_state_information
    = individual_responsesElementLateral_state_rightRss_state_information;
  individual_responsesElement.lateral_state_right = individual_responsesElementLateral_state_right;
  ::ad::rss::state::LateralRssState individual_responsesElementLateral_state_left;
  bool individual_responsesElementLateral_state_leftIs_safe{false};
  individual_responsesElementLateral_state_left.is_safe = individual_responsesElementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse individual_responsesElementLateral_state_leftResponse(
    ::ad::rss::state::LateralResponse::BrakeMin);
  individual_responsesElementLateral_state_left.response = individual_responsesElementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues individual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration individual_responsesElementLateral_state_leftAlpha_latAccel_max(1e2);
  individual_responsesElementLateral_state_leftAlpha_lat.accel_max
    = individual_responsesElementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration individual_responsesElementLateral_state_leftAlpha_latBrake_min(1e2);
  individual_responsesElementLateral_state_leftAlpha_latBrake_min
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  individual_responsesElementLateral_state_leftAlpha_lat.brake_min
    = individual_responsesElementLateral_state_leftAlpha_latBrake_min;
  individual_responsesElementLateral_state_left.alpha_lat = individual_responsesElementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation individual_responsesElementLateral_state_leftRss_state_information;
  ::ad::physics::Distance individual_responsesElementLateral_state_leftRss_state_informationSafe_distance(1e9);
  individual_responsesElementLateral_state_leftRss_state_information.safe_distance
    = individual_responsesElementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance individual_responsesElementLateral_state_leftRss_state_informationCurrent_distance(1e9);
  individual_responsesElementLateral_state_leftRss_state_information.current_distance
    = individual_responsesElementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator individual_responsesElementLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  individual_responsesElementLateral_state_leftRss_state_information.evaluator
    = individual_responsesElementLateral_state_leftRss_state_informationEvaluator;
  individual_responsesElementLateral_state_left.rss_state_information
    = individual_responsesElementLateral_state_leftRss_state_information;
  individual_responsesElement.lateral_state_left = individual_responsesElementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState individual_responsesElementUnstructured_constellation_state;
  bool individual_responsesElementUnstructured_constellation_stateIs_safe{false};
  individual_responsesElementUnstructured_constellation_state.is_safe
    = individual_responsesElementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse
    individual_responsesElementUnstructured_constellation_stateResponse(
      ::ad::rss::state::UnstructuredConstellationResponse::Brake);
  individual_responsesElementUnstructured_constellation_state.response
    = individual_responsesElementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange individual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle individual_responsesElementUnstructured_constellation_stateHeading_rangeBegin(6.283185308);
  individual_responsesElementUnstructured_constellation_stateHeading_range.begin
    = individual_responsesElementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle individual_responsesElementUnstructured_constellation_stateHeading_rangeEnd(6.283185308);
  individual_responsesElementUnstructured_constellation_stateHeading_range.end
    = individual_responsesElementUnstructured_constellation_stateHeading_rangeEnd;
  individual_responsesElementUnstructured_constellation_state.heading_range
    = individual_responsesElementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    individual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList
    individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D
    individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance
    individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(1e9);
  individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance
    individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(1e9);
  individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    2, individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  individual_responsesElementUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = individual_responsesElementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
      1e9);
  individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .x
    = individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
      1e9);
  individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement
    .y
    = individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    2,
    individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  individual_responsesElementUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = individual_responsesElementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle
    individual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
      6.283185308);
  individual_responsesElementUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = individual_responsesElementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  individual_responsesElementUnstructured_constellation_state.rss_state_information
    = individual_responsesElementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    individual_responsesElementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration individual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max(1e2);
  individual_responsesElementUnstructured_constellation_stateAlpha_lon.accel_max
    = individual_responsesElementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration individual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max(1e2);
  individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
    = individual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration individual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min(1e2);
  individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = individual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration individual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct(
    1e2);
  individual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = individual_responsesElementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
  individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max;
  individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_max
    = individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min;
  individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min
    = individual_responsesElementUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  individual_responsesElementUnstructured_constellation_state.alpha_lon
    = individual_responsesElementUnstructured_constellation_stateAlpha_lon;
  individual_responsesElement.unstructured_constellation_state
    = individual_responsesElementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType individual_responsesElementConstellation_type(
    ::ad::rss::world::ConstellationType::Unstructured);
  individual_responsesElement.constellation_type = individual_responsesElementConstellation_type;
  individual_responses.resize(0 + 1, individual_responsesElement);
  valueA.individual_responses = individual_responses;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateSnapshotTests, comparisonOperatorUnstructured_constellation_ego_informationDiffers)
{
  ::ad::rss::state::RssStateSnapshot valueA = mValue;
  ::ad::rss::state::UnstructuredConstellationStateInformation unstructured_constellation_ego_information;
  ::ad::physics::Distance2DList unstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2D unstructured_constellation_ego_informationBrake_trajectory_setElement;
  ::ad::physics::Distance unstructured_constellation_ego_informationBrake_trajectory_setElementX(1e9);
  unstructured_constellation_ego_informationBrake_trajectory_setElement.x
    = unstructured_constellation_ego_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance unstructured_constellation_ego_informationBrake_trajectory_setElementY(1e9);
  unstructured_constellation_ego_informationBrake_trajectory_setElement.y
    = unstructured_constellation_ego_informationBrake_trajectory_setElementY;
  unstructured_constellation_ego_informationBrake_trajectory_set.resize(
    2, unstructured_constellation_ego_informationBrake_trajectory_setElement);
  unstructured_constellation_ego_information.brake_trajectory_set
    = unstructured_constellation_ego_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList unstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D unstructured_constellation_ego_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance unstructured_constellation_ego_informationContinue_forward_trajectory_setElementX(1e9);
  unstructured_constellation_ego_informationContinue_forward_trajectory_setElement.x
    = unstructured_constellation_ego_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance unstructured_constellation_ego_informationContinue_forward_trajectory_setElementY(1e9);
  unstructured_constellation_ego_informationContinue_forward_trajectory_setElement.y
    = unstructured_constellation_ego_informationContinue_forward_trajectory_setElementY;
  unstructured_constellation_ego_informationContinue_forward_trajectory_set.resize(
    2, unstructured_constellation_ego_informationContinue_forward_trajectory_setElement);
  unstructured_constellation_ego_information.continue_forward_trajectory_set
    = unstructured_constellation_ego_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle unstructured_constellation_ego_informationConsidered_drive_away_steering_angle(6.283185308);
  unstructured_constellation_ego_information.considered_drive_away_steering_angle
    = unstructured_constellation_ego_informationConsidered_drive_away_steering_angle;
  valueA.unstructured_constellation_ego_information = unstructured_constellation_ego_information;
  ::ad::rss::state::RssStateSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
