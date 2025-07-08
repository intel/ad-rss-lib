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

#include "ad/rss/state/RssStateVectorValidInputRange.hpp"

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::state::RssStateVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.ego_id = elementEgo_id;
  ::ad::rss::world::ObjectId elementObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.object_id = elementObject_id;
  ::ad::rss::core::RelativeConstellationId elementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  element.constellation_id = elementConstellation_id;
  ::ad::rss::state::LongitudinalRssState elementLongitudinal_state;
  bool elementLongitudinal_stateIs_safe{true};
  elementLongitudinal_state.is_safe = elementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinal_stateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinal_state.response = elementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonAccel_max(-1e2);
  elementLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLongitudinal_stateAlpha_lon.accel_max = elementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_max(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_max = elementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_min(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_min_correct = elementLongitudinal_stateAlpha_lonBrake_min_correct;
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lon.brake_max;
  elementLongitudinal_stateAlpha_lon.brake_min_correct = elementLongitudinal_stateAlpha_lon.brake_min;
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lon.brake_min_correct;
  elementLongitudinal_stateAlpha_lon.brake_max = elementLongitudinal_stateAlpha_lon.brake_min;
  elementLongitudinal_state.alpha_lon = elementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation elementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance elementLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  elementLongitudinal_stateRss_state_information.safe_distance
    = elementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  elementLongitudinal_stateRss_state_information.current_distance
    = elementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinal_stateRss_state_information.evaluator = elementLongitudinal_stateRss_state_informationEvaluator;
  elementLongitudinal_state.rss_state_information = elementLongitudinal_stateRss_state_information;
  element.longitudinal_state = elementLongitudinal_state;
  ::ad::rss::state::LateralRssState elementLateral_state_right;
  bool elementLateral_state_rightIs_safe{true};
  elementLateral_state_right.is_safe = elementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse elementLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  elementLateral_state_right.response = elementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration elementLateral_state_rightAlpha_latAccel_max(-1e2);
  elementLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateral_state_rightAlpha_lat.accel_max = elementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration elementLateral_state_rightAlpha_latBrake_min(-1e2);
  elementLateral_state_rightAlpha_lat.brake_min = elementLateral_state_rightAlpha_latBrake_min;
  elementLateral_state_right.alpha_lat = elementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation elementLateral_state_rightRss_state_information;
  ::ad::physics::Distance elementLateral_state_rightRss_state_informationSafe_distance(-1e9);
  elementLateral_state_rightRss_state_information.safe_distance
    = elementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  elementLateral_state_rightRss_state_information.current_distance
    = elementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateral_state_rightRss_state_information.evaluator = elementLateral_state_rightRss_state_informationEvaluator;
  elementLateral_state_right.rss_state_information = elementLateral_state_rightRss_state_information;
  element.lateral_state_right = elementLateral_state_right;
  ::ad::rss::state::LateralRssState elementLateral_state_left;
  bool elementLateral_state_leftIs_safe{true};
  elementLateral_state_left.is_safe = elementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse elementLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  elementLateral_state_left.response = elementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration elementLateral_state_leftAlpha_latAccel_max(-1e2);
  elementLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateral_state_leftAlpha_lat.accel_max = elementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration elementLateral_state_leftAlpha_latBrake_min(-1e2);
  elementLateral_state_leftAlpha_lat.brake_min = elementLateral_state_leftAlpha_latBrake_min;
  elementLateral_state_left.alpha_lat = elementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation elementLateral_state_leftRss_state_information;
  ::ad::physics::Distance elementLateral_state_leftRss_state_informationSafe_distance(-1e9);
  elementLateral_state_leftRss_state_information.safe_distance
    = elementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  elementLateral_state_leftRss_state_information.current_distance
    = elementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateral_state_leftRss_state_information.evaluator = elementLateral_state_leftRss_state_informationEvaluator;
  elementLateral_state_left.rss_state_information = elementLateral_state_leftRss_state_information;
  element.lateral_state_left = elementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState elementUnstructured_constellation_state;
  bool elementUnstructured_constellation_stateIs_safe{true};
  elementUnstructured_constellation_state.is_safe = elementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse elementUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  elementUnstructured_constellation_state.response = elementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange elementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle elementUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  elementUnstructured_constellation_stateHeading_range.begin
    = elementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle elementUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  elementUnstructured_constellation_stateHeading_range.end = elementUnstructured_constellation_stateHeading_rangeEnd;
  elementUnstructured_constellation_state.heading_range = elementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    elementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
    -1e9);
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
    -1e9);
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  elementUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  elementUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle elementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  elementUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = elementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  elementUnstructured_constellation_state.rss_state_information
    = elementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  elementUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementUnstructured_constellation_stateAlpha_lon.accel_max
    = elementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_max
    = elementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = elementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lon.brake_max;
  elementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = elementUnstructured_constellation_stateAlpha_lon.brake_min;
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  elementUnstructured_constellation_stateAlpha_lon.brake_max
    = elementUnstructured_constellation_stateAlpha_lon.brake_min;
  elementUnstructured_constellation_state.alpha_lon = elementUnstructured_constellation_stateAlpha_lon;
  element.unstructured_constellation_state = elementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.ego_id = elementEgo_id;
  ::ad::rss::world::ObjectId elementObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.object_id = elementObject_id;
  ::ad::rss::core::RelativeConstellationId elementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  element.constellation_id = elementConstellation_id;
  ::ad::rss::state::LongitudinalRssState elementLongitudinal_state;
  bool elementLongitudinal_stateIs_safe{true};
  elementLongitudinal_state.is_safe = elementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinal_stateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinal_state.response = elementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonAccel_max(-1e2);
  elementLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLongitudinal_stateAlpha_lon.accel_max = elementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_max(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_max = elementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_min(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_min_correct = elementLongitudinal_stateAlpha_lonBrake_min_correct;
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lon.brake_max;
  elementLongitudinal_stateAlpha_lon.brake_min_correct = elementLongitudinal_stateAlpha_lon.brake_min;
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lon.brake_min_correct;
  elementLongitudinal_stateAlpha_lon.brake_max = elementLongitudinal_stateAlpha_lon.brake_min;
  elementLongitudinal_state.alpha_lon = elementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation elementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance elementLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  elementLongitudinal_stateRss_state_information.safe_distance
    = elementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  elementLongitudinal_stateRss_state_information.current_distance
    = elementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinal_stateRss_state_information.evaluator = elementLongitudinal_stateRss_state_informationEvaluator;
  elementLongitudinal_state.rss_state_information = elementLongitudinal_stateRss_state_information;
  element.longitudinal_state = elementLongitudinal_state;
  ::ad::rss::state::LateralRssState elementLateral_state_right;
  bool elementLateral_state_rightIs_safe{true};
  elementLateral_state_right.is_safe = elementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse elementLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  elementLateral_state_right.response = elementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration elementLateral_state_rightAlpha_latAccel_max(-1e2);
  elementLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateral_state_rightAlpha_lat.accel_max = elementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration elementLateral_state_rightAlpha_latBrake_min(-1e2);
  elementLateral_state_rightAlpha_lat.brake_min = elementLateral_state_rightAlpha_latBrake_min;
  elementLateral_state_right.alpha_lat = elementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation elementLateral_state_rightRss_state_information;
  ::ad::physics::Distance elementLateral_state_rightRss_state_informationSafe_distance(-1e9);
  elementLateral_state_rightRss_state_information.safe_distance
    = elementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  elementLateral_state_rightRss_state_information.current_distance
    = elementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateral_state_rightRss_state_information.evaluator = elementLateral_state_rightRss_state_informationEvaluator;
  elementLateral_state_right.rss_state_information = elementLateral_state_rightRss_state_information;
  element.lateral_state_right = elementLateral_state_right;
  ::ad::rss::state::LateralRssState elementLateral_state_left;
  bool elementLateral_state_leftIs_safe{true};
  elementLateral_state_left.is_safe = elementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse elementLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  elementLateral_state_left.response = elementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration elementLateral_state_leftAlpha_latAccel_max(-1e2);
  elementLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateral_state_leftAlpha_lat.accel_max = elementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration elementLateral_state_leftAlpha_latBrake_min(-1e2);
  elementLateral_state_leftAlpha_lat.brake_min = elementLateral_state_leftAlpha_latBrake_min;
  elementLateral_state_left.alpha_lat = elementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation elementLateral_state_leftRss_state_information;
  ::ad::physics::Distance elementLateral_state_leftRss_state_informationSafe_distance(-1e9);
  elementLateral_state_leftRss_state_information.safe_distance
    = elementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  elementLateral_state_leftRss_state_information.current_distance
    = elementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateral_state_leftRss_state_information.evaluator = elementLateral_state_leftRss_state_informationEvaluator;
  elementLateral_state_left.rss_state_information = elementLateral_state_leftRss_state_information;
  element.lateral_state_left = elementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState elementUnstructured_constellation_state;
  bool elementUnstructured_constellation_stateIs_safe{true};
  elementUnstructured_constellation_state.is_safe = elementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse elementUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  elementUnstructured_constellation_state.response = elementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange elementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle elementUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  elementUnstructured_constellation_stateHeading_range.begin
    = elementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle elementUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  elementUnstructured_constellation_stateHeading_range.end = elementUnstructured_constellation_stateHeading_rangeEnd;
  elementUnstructured_constellation_state.heading_range = elementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    elementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
    -1e9);
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
    -1e9);
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  elementUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  elementUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle elementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  elementUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = elementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  elementUnstructured_constellation_state.rss_state_information
    = elementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  elementUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementUnstructured_constellation_stateAlpha_lon.accel_max
    = elementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_max
    = elementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = elementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lon.brake_max;
  elementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = elementUnstructured_constellation_stateAlpha_lon.brake_min;
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  elementUnstructured_constellation_stateAlpha_lon.brake_max
    = elementUnstructured_constellation_stateAlpha_lon.brake_min;
  elementUnstructured_constellation_state.alpha_lon = elementUnstructured_constellation_stateAlpha_lon;
  element.unstructured_constellation_state = elementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::state::LongitudinalRssState elementLongitudinal_state;
  ::ad::rss::state::LongitudinalResponse elementLongitudinal_stateResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  elementLongitudinal_state.response = elementLongitudinal_stateResponse;
  element.longitudinal_state = elementLongitudinal_state;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::world::ObjectId elementEgo_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.ego_id = elementEgo_id;
  ::ad::rss::world::ObjectId elementObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  element.object_id = elementObject_id;
  ::ad::rss::core::RelativeConstellationId elementConstellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::lowest());
  element.constellation_id = elementConstellation_id;
  ::ad::rss::state::LongitudinalRssState elementLongitudinal_state;
  bool elementLongitudinal_stateIs_safe{true};
  elementLongitudinal_state.is_safe = elementLongitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse elementLongitudinal_stateResponse(
    ::ad::rss::state::LongitudinalResponse::None);
  elementLongitudinal_state.response = elementLongitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementLongitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonAccel_max(-1e2);
  elementLongitudinal_stateAlpha_lonAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLongitudinal_stateAlpha_lon.accel_max = elementLongitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_max(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_max = elementLongitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_min(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementLongitudinal_stateAlpha_lonBrake_min_correct(-1e2);
  elementLongitudinal_stateAlpha_lon.brake_min_correct = elementLongitudinal_stateAlpha_lonBrake_min_correct;
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lon.brake_max;
  elementLongitudinal_stateAlpha_lon.brake_min_correct = elementLongitudinal_stateAlpha_lon.brake_min;
  elementLongitudinal_stateAlpha_lon.brake_min = elementLongitudinal_stateAlpha_lon.brake_min_correct;
  elementLongitudinal_stateAlpha_lon.brake_max = elementLongitudinal_stateAlpha_lon.brake_min;
  elementLongitudinal_state.alpha_lon = elementLongitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation elementLongitudinal_stateRss_state_information;
  ::ad::physics::Distance elementLongitudinal_stateRss_state_informationSafe_distance(-1e9);
  elementLongitudinal_stateRss_state_information.safe_distance
    = elementLongitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLongitudinal_stateRss_state_informationCurrent_distance(-1e9);
  elementLongitudinal_stateRss_state_information.current_distance
    = elementLongitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLongitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLongitudinal_stateRss_state_information.evaluator = elementLongitudinal_stateRss_state_informationEvaluator;
  elementLongitudinal_state.rss_state_information = elementLongitudinal_stateRss_state_information;
  element.longitudinal_state = elementLongitudinal_state;
  ::ad::rss::state::LateralRssState elementLateral_state_right;
  bool elementLateral_state_rightIs_safe{true};
  elementLateral_state_right.is_safe = elementLateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse elementLateral_state_rightResponse(::ad::rss::state::LateralResponse::None);
  elementLateral_state_right.response = elementLateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration elementLateral_state_rightAlpha_latAccel_max(-1e2);
  elementLateral_state_rightAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateral_state_rightAlpha_lat.accel_max = elementLateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration elementLateral_state_rightAlpha_latBrake_min(-1e2);
  elementLateral_state_rightAlpha_lat.brake_min = elementLateral_state_rightAlpha_latBrake_min;
  elementLateral_state_right.alpha_lat = elementLateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation elementLateral_state_rightRss_state_information;
  ::ad::physics::Distance elementLateral_state_rightRss_state_informationSafe_distance(-1e9);
  elementLateral_state_rightRss_state_information.safe_distance
    = elementLateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLateral_state_rightRss_state_informationCurrent_distance(-1e9);
  elementLateral_state_rightRss_state_information.current_distance
    = elementLateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateral_state_rightRss_state_information.evaluator = elementLateral_state_rightRss_state_informationEvaluator;
  elementLateral_state_right.rss_state_information = elementLateral_state_rightRss_state_information;
  element.lateral_state_right = elementLateral_state_right;
  ::ad::rss::state::LateralRssState elementLateral_state_left;
  bool elementLateral_state_leftIs_safe{true};
  elementLateral_state_left.is_safe = elementLateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse elementLateral_state_leftResponse(::ad::rss::state::LateralResponse::None);
  elementLateral_state_left.response = elementLateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues elementLateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration elementLateral_state_leftAlpha_latAccel_max(-1e2);
  elementLateral_state_leftAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementLateral_state_leftAlpha_lat.accel_max = elementLateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration elementLateral_state_leftAlpha_latBrake_min(-1e2);
  elementLateral_state_leftAlpha_lat.brake_min = elementLateral_state_leftAlpha_latBrake_min;
  elementLateral_state_left.alpha_lat = elementLateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation elementLateral_state_leftRss_state_information;
  ::ad::physics::Distance elementLateral_state_leftRss_state_informationSafe_distance(-1e9);
  elementLateral_state_leftRss_state_information.safe_distance
    = elementLateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance elementLateral_state_leftRss_state_informationCurrent_distance(-1e9);
  elementLateral_state_leftRss_state_information.current_distance
    = elementLateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator elementLateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::None);
  elementLateral_state_leftRss_state_information.evaluator = elementLateral_state_leftRss_state_informationEvaluator;
  elementLateral_state_left.rss_state_information = elementLateral_state_leftRss_state_information;
  element.lateral_state_left = elementLateral_state_left;
  ::ad::rss::state::UnstructuredConstellationRssState elementUnstructured_constellation_state;
  bool elementUnstructured_constellation_stateIs_safe{true};
  elementUnstructured_constellation_state.is_safe = elementUnstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse elementUnstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  elementUnstructured_constellation_state.response = elementUnstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange elementUnstructured_constellation_stateHeading_range;
  ::ad::physics::Angle elementUnstructured_constellation_stateHeading_rangeBegin(-6.283185308);
  elementUnstructured_constellation_stateHeading_range.begin
    = elementUnstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle elementUnstructured_constellation_stateHeading_rangeEnd(-6.283185308);
  elementUnstructured_constellation_stateHeading_range.end = elementUnstructured_constellation_stateHeading_rangeEnd;
  elementUnstructured_constellation_state.heading_range = elementUnstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation
    elementUnstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
    -1e9);
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
    -1e9);
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    1, elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  elementUnstructured_constellation_stateRss_state_information.brake_trajectory_set
    = elementUnstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance
    elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    1, elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  elementUnstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = elementUnstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle elementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    -6.283185308);
  elementUnstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = elementUnstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  elementUnstructured_constellation_state.rss_state_information
    = elementUnstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementUnstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonAccel_max(-1e2);
  elementUnstructured_constellation_stateAlpha_lonAccel_max
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementUnstructured_constellation_stateAlpha_lon.accel_max
    = elementUnstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_max(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_max
    = elementUnstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_min(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration elementUnstructured_constellation_stateAlpha_lonBrake_min_correct(-1e2);
  elementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = elementUnstructured_constellation_stateAlpha_lonBrake_min_correct;
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lon.brake_max;
  elementUnstructured_constellation_stateAlpha_lon.brake_min_correct
    = elementUnstructured_constellation_stateAlpha_lon.brake_min;
  elementUnstructured_constellation_stateAlpha_lon.brake_min
    = elementUnstructured_constellation_stateAlpha_lon.brake_min_correct;
  elementUnstructured_constellation_stateAlpha_lon.brake_max
    = elementUnstructured_constellation_stateAlpha_lon.brake_min;
  elementUnstructured_constellation_state.alpha_lon = elementUnstructured_constellation_stateAlpha_lon;
  element.unstructured_constellation_state = elementUnstructured_constellation_state;
  ::ad::rss::world::ConstellationType elementConstellation_type(::ad::rss::world::ConstellationType::NotRelevant);
  element.constellation_type = elementConstellation_type;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::state::RssStateVector value;
  ::ad::rss::state::RssState element;
  ::ad::rss::state::LongitudinalRssState elementLongitudinal_state;
  ::ad::rss::state::LongitudinalResponse elementLongitudinal_stateResponse(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  elementLongitudinal_state.response = elementLongitudinal_stateResponse;
  element.longitudinal_state = elementLongitudinal_state;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
