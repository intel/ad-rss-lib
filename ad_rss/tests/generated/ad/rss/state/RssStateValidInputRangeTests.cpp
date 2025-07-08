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

#include "ad/rss/state/RssStateValidInputRange.hpp"

TEST(RssStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLongitudinal_stateTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value below input range minimum
  ::ad::rss::state::LongitudinalRssState invalidInitializedMember;
  ::ad::rss::state::LongitudinalResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.longitudinal_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLongitudinal_stateTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value above input range maximum
  ::ad::rss::state::LongitudinalRssState invalidInitializedMember;
  ::ad::rss::state::LongitudinalResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.longitudinal_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateral_state_rightTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateral_state_right = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateral_state_rightTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateral_state_right = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateral_state_leftTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateral_state_left = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeLateral_state_leftTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralRssState invalidInitializedMember;
  ::ad::rss::state::LateralResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::LateralResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.lateral_state_left = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeUnstructured_constellation_stateTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value below input range minimum
  ::ad::rss::state::UnstructuredConstellationRssState invalidInitializedMember;
  ::ad::rss::state::UnstructuredConstellationResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::UnstructuredConstellationResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.unstructured_constellation_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeUnstructured_constellation_stateTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value above input range maximum
  ::ad::rss::state::UnstructuredConstellationRssState invalidInitializedMember;
  ::ad::rss::state::UnstructuredConstellationResponse invalidInitializedMemberResponse(
    static_cast<::ad::rss::state::UnstructuredConstellationResponse>(-1));
  invalidInitializedMember.response = invalidInitializedMemberResponse;
  value.unstructured_constellation_state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeConstellation_typeTooSmall)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value below input range minimum
  ::ad::rss::world::ConstellationType invalidInitializedMember(static_cast<::ad::rss::world::ConstellationType>(-1));
  value.constellation_type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateValidInputRangeTests, testValidInputRangeConstellation_typeTooBig)
{
  ::ad::rss::state::RssState value;
  ::ad::rss::world::ObjectId valueEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.ego_id = valueEgo_id;
  ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  value.object_id = valueObject_id;
  ::ad::rss::core::RelativeConstellationId valueConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  value.constellation_id = valueConstellation_id;
  ::ad::rss::state::LongitudinalRssState valueLongitudinal_state;
  bool valueLongitudinal_stateIs_safe{true};
  valueLongitudinal_state.is_safe = valueLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::None);
  valueLongitudinal_state.response = valueLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonAccel_max(-1e2);
  valueLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLongitudinal_stateAlpha_lon.accel_max = valueLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_max(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lonBrake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_max;
  valueLongitudinal_stateAlpha_lon.brake_min_correct = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_stateAlpha_lon.brake_min = valueLongitudinal_stateAlpha_lon.brake_min_correct;
  valueLongitudinal_stateAlpha_lon.brake_max = valueLongitudinal_stateAlpha_lon.brake_min;
  valueLongitudinal_state.alpha_lon = valueLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation valueLongitudinal_stateRss_state_information;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  valueLongitudinal_stateRss_state_information.safe_distance
    = valueLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  valueLongitudinal_stateRss_state_information.current_distance
    = valueLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLongitudinal_stateRss_state_information.evaluator = valueLongitudinal_stateRss_state_informationEvaluator;
  valueLongitudinal_state.rss_state_information = valueLongitudinal_stateRss_state_information;
  value.longitudinal_state = valueLongitudinal_state;
  ::ad::rss::state::LateralRssState valueLateral_state_right;
  bool valueLateral_state_rightIs_safe{true};
  valueLateral_state_right.is_safe = valueLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_right.response = valueLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latAccel_max(-1e2);
  valueLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_rightAlpha_lat.accel_max = valueLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_rightAlpha_latBrake_min(-1e2);
  valueLateral_state_rightAlpha_lat.brake_min = valueLateral_state_rightAlpha_latBrake_min;
  valueLateral_state_right.alpha_lat = valueLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_rightRss_state_information;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationSafe_distance(-1e9);
  valueLateral_state_rightRss_state_information.safe_distance
    = valueLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_rightRss_state_information.current_distance
    = valueLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_rightRss_state_information.evaluator = valueLateral_state_rightRss_state_informationEvaluator;
  valueLateral_state_right.rss_state_information = valueLateral_state_rightRss_state_information;
  value.lateral_state_right = valueLateral_state_right;
  ::ad::rss::state::LateralRssState valueLateral_state_left;
  bool valueLateral_state_leftIs_safe{true};
  valueLateral_state_left.is_safe = valueLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse valueLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  valueLateral_state_left.response = valueLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latAccel_max(-1e2);
  valueLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueLateral_state_leftAlpha_lat.accel_max = valueLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration valueLateral_state_leftAlpha_latBrake_min(-1e2);
  valueLateral_state_leftAlpha_lat.brake_min = valueLateral_state_leftAlpha_latBrake_min;
  valueLateral_state_left.alpha_lat = valueLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation valueLateral_state_leftRss_state_information;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationSafe_distance(-1e9);
  valueLateral_state_leftRss_state_information.safe_distance
    = valueLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance valueLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  valueLateral_state_leftRss_state_information.current_distance
    = valueLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  valueLateral_state_leftRss_state_information.evaluator = valueLateral_state_leftRss_state_informationEvaluator;
  valueLateral_state_left.rss_state_information = valueLateral_state_leftRss_state_information;
  value.lateral_state_left = valueLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState valueUnstructured_constellation_state;
  bool valueUnstructured_constellation_stateIs_safe{true};
  valueUnstructured_constellation_state.is_safe = valueUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  valueUnstructured_constellation_state.response = valueUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange valueUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.begin = valueUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle valueUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  valueUnstructured_constellation_stateHeading_range.end = valueUnstructured_constellation_stateHeading_rangeEnd;
  valueUnstructured_constellation_state.heading_range = valueUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    valueUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  valueUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = valueUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  valueUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = valueUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  valueUnstructured_constellation_state.rss_state_information
    = valueUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueUnstructured_constellation_stateAlpha_lon.accel_max = valueUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration valueUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_min = valueUnstructured_constellation_stateAlpha_lon.brake_max;
  valueUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_stateAlpha_lon.brake_min
    = valueUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  valueUnstructured_constellation_stateAlpha_lon.brake_max = valueUnstructured_constellation_stateAlpha_lon.brake_min;
  valueUnstructured_constellation_state.alpha_lon = valueUnstructured_constellation_stateAlpha_lon;
  value.unstructured_constellation_state = valueUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType valueConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  value.constellation_type = valueConstellation_type;

  // override member with data type value above input range maximum
  ::ad::rss::world::ConstellationType invalidInitializedMember(static_cast<::ad::rss::world::ConstellationType>(-1));
  value.constellation_type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
