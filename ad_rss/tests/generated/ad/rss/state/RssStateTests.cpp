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
#include "ad/rss/state/RssState.hpp"

class RssStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    ::ad::rss::state::LongitudinalResponse valueLongitudinal_stateResponse(
      ::ad::rss::state::LongitudinalResponse::None);
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
    ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(
      -1e9);
    valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
      = valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
    ::ad::physics::Distance valueUnstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(
      -1e9);
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
    mValue = value;
  }

  ::ad::rss::state::RssState mValue;
};

TEST_F(RssStateTests, copyConstruction)
{
  ::ad::rss::state::RssState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, moveConstruction)
{
  ::ad::rss::state::RssState tmpValue(mValue);
  ::ad::rss::state::RssState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, copyAssignment)
{
  ::ad::rss::state::RssState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, moveAssignment)
{
  ::ad::rss::state::RssState tmpValue(mValue);
  ::ad::rss::state::RssState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssStateTests, comparisonOperatorEqual)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssStateTests, comparisonOperatorEgo_idDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::world::ObjectId ego_id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.ego_id = ego_id;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorObject_idDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::world::ObjectId object_id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.object_id = object_id;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorConstellation_idDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::core::RelativeConstellationId constellation_id(
    std::numeric_limits<::ad::rss::core::RelativeConstellationId>::max());
  valueA.constellation_id = constellation_id;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLongitudinal_stateDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LongitudinalRssState longitudinal_state;
  bool longitudinal_stateIs_safe{false};
  longitudinal_state.is_safe = longitudinal_stateIs_safe;
  ::ad::rss::state::LongitudinalResponse longitudinal_stateResponse(::ad::rss::state::LongitudinalResponse::BrakeMin);
  longitudinal_state.response = longitudinal_stateResponse;
  ::ad::rss::world::LongitudinalRssAccelerationValues longitudinal_stateAlpha_lon;
  ::ad::physics::Acceleration longitudinal_stateAlpha_lonAccel_max(1e2);
  longitudinal_stateAlpha_lon.accel_max = longitudinal_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration longitudinal_stateAlpha_lonBrake_max(1e2);
  longitudinal_stateAlpha_lon.brake_max = longitudinal_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration longitudinal_stateAlpha_lonBrake_min(1e2);
  longitudinal_stateAlpha_lon.brake_min = longitudinal_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration longitudinal_stateAlpha_lonBrake_min_correct(1e2);
  longitudinal_stateAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  longitudinal_stateAlpha_lon.brake_min_correct = longitudinal_stateAlpha_lonBrake_min_correct;
  longitudinal_stateAlpha_lon.brake_min_correct = longitudinal_stateAlpha_lon.brake_min;
  longitudinal_stateAlpha_lon.brake_min = longitudinal_stateAlpha_lon.brake_max;
  longitudinal_stateAlpha_lon.brake_max = longitudinal_stateAlpha_lon.brake_min;
  longitudinal_stateAlpha_lon.brake_min = longitudinal_stateAlpha_lon.brake_min_correct;
  longitudinal_state.alpha_lon = longitudinal_stateAlpha_lon;
  ::ad::rss::state::RssStateInformation longitudinal_stateRss_state_information;
  ::ad::physics::Distance longitudinal_stateRss_state_informationSafe_distance(1e9);
  longitudinal_stateRss_state_information.safe_distance = longitudinal_stateRss_state_informationSafe_distance;
  ::ad::physics::Distance longitudinal_stateRss_state_informationCurrent_distance(1e9);
  longitudinal_stateRss_state_information.current_distance = longitudinal_stateRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator longitudinal_stateRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  longitudinal_stateRss_state_information.evaluator = longitudinal_stateRss_state_informationEvaluator;
  longitudinal_state.rss_state_information = longitudinal_stateRss_state_information;
  valueA.longitudinal_state = longitudinal_state;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLateral_state_rightDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LateralRssState lateral_state_right;
  bool lateral_state_rightIs_safe{false};
  lateral_state_right.is_safe = lateral_state_rightIs_safe;
  ::ad::rss::state::LateralResponse lateral_state_rightResponse(::ad::rss::state::LateralResponse::BrakeMin);
  lateral_state_right.response = lateral_state_rightResponse;
  ::ad::rss::world::LateralRssAccelerationValues lateral_state_rightAlpha_lat;
  ::ad::physics::Acceleration lateral_state_rightAlpha_latAccel_max(1e2);
  lateral_state_rightAlpha_lat.accel_max = lateral_state_rightAlpha_latAccel_max;
  ::ad::physics::Acceleration lateral_state_rightAlpha_latBrake_min(1e2);
  lateral_state_rightAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  lateral_state_rightAlpha_lat.brake_min = lateral_state_rightAlpha_latBrake_min;
  lateral_state_right.alpha_lat = lateral_state_rightAlpha_lat;
  ::ad::rss::state::RssStateInformation lateral_state_rightRss_state_information;
  ::ad::physics::Distance lateral_state_rightRss_state_informationSafe_distance(1e9);
  lateral_state_rightRss_state_information.safe_distance = lateral_state_rightRss_state_informationSafe_distance;
  ::ad::physics::Distance lateral_state_rightRss_state_informationCurrent_distance(1e9);
  lateral_state_rightRss_state_information.current_distance = lateral_state_rightRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator lateral_state_rightRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  lateral_state_rightRss_state_information.evaluator = lateral_state_rightRss_state_informationEvaluator;
  lateral_state_right.rss_state_information = lateral_state_rightRss_state_information;
  valueA.lateral_state_right = lateral_state_right;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorLateral_state_leftDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::LateralRssState lateral_state_left;
  bool lateral_state_leftIs_safe{false};
  lateral_state_left.is_safe = lateral_state_leftIs_safe;
  ::ad::rss::state::LateralResponse lateral_state_leftResponse(::ad::rss::state::LateralResponse::BrakeMin);
  lateral_state_left.response = lateral_state_leftResponse;
  ::ad::rss::world::LateralRssAccelerationValues lateral_state_leftAlpha_lat;
  ::ad::physics::Acceleration lateral_state_leftAlpha_latAccel_max(1e2);
  lateral_state_leftAlpha_lat.accel_max = lateral_state_leftAlpha_latAccel_max;
  ::ad::physics::Acceleration lateral_state_leftAlpha_latBrake_min(1e2);
  lateral_state_leftAlpha_latBrake_min = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  lateral_state_leftAlpha_lat.brake_min = lateral_state_leftAlpha_latBrake_min;
  lateral_state_left.alpha_lat = lateral_state_leftAlpha_lat;
  ::ad::rss::state::RssStateInformation lateral_state_leftRss_state_information;
  ::ad::physics::Distance lateral_state_leftRss_state_informationSafe_distance(1e9);
  lateral_state_leftRss_state_information.safe_distance = lateral_state_leftRss_state_informationSafe_distance;
  ::ad::physics::Distance lateral_state_leftRss_state_informationCurrent_distance(1e9);
  lateral_state_leftRss_state_information.current_distance = lateral_state_leftRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator lateral_state_leftRss_state_informationEvaluator(
    ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  lateral_state_leftRss_state_information.evaluator = lateral_state_leftRss_state_informationEvaluator;
  lateral_state_left.rss_state_information = lateral_state_leftRss_state_information;
  valueA.lateral_state_left = lateral_state_left;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorUnstructured_constellation_stateDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::state::UnstructuredConstellationRssState unstructured_constellation_state;
  bool unstructured_constellation_stateIs_safe{false};
  unstructured_constellation_state.is_safe = unstructured_constellation_stateIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse unstructured_constellation_stateResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::Brake);
  unstructured_constellation_state.response = unstructured_constellation_stateResponse;
  ::ad::geometry::HeadingRange unstructured_constellation_stateHeading_range;
  ::ad::physics::Angle unstructured_constellation_stateHeading_rangeBegin(6.283185308);
  unstructured_constellation_stateHeading_range.begin = unstructured_constellation_stateHeading_rangeBegin;
  ::ad::physics::Angle unstructured_constellation_stateHeading_rangeEnd(6.283185308);
  unstructured_constellation_stateHeading_range.end = unstructured_constellation_stateHeading_rangeEnd;
  unstructured_constellation_state.heading_range = unstructured_constellation_stateHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation unstructured_constellation_stateRss_state_information;
  ::ad::physics::Distance2DList unstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D unstructured_constellation_stateRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance unstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX(1e9);
  unstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.x
    = unstructured_constellation_stateRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance unstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY(1e9);
  unstructured_constellation_stateRss_state_informationBrake_trajectory_setElement.y
    = unstructured_constellation_stateRss_state_informationBrake_trajectory_setElementY;
  unstructured_constellation_stateRss_state_informationBrake_trajectory_set.resize(
    2, unstructured_constellation_stateRss_state_informationBrake_trajectory_setElement);
  unstructured_constellation_stateRss_state_information.brake_trajectory_set
    = unstructured_constellation_stateRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX(
    1e9);
  unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.x
    = unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY(
    1e9);
  unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement.y
    = unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElementY;
  unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set.resize(
    2, unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_setElement);
  unstructured_constellation_stateRss_state_information.continue_forward_trajectory_set
    = unstructured_constellation_stateRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle unstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle(
    6.283185308);
  unstructured_constellation_stateRss_state_information.considered_drive_away_steering_angle
    = unstructured_constellation_stateRss_state_informationConsidered_drive_away_steering_angle;
  unstructured_constellation_state.rss_state_information = unstructured_constellation_stateRss_state_information;
  ::ad::rss::world::LongitudinalRssAccelerationValues unstructured_constellation_stateAlpha_lon;
  ::ad::physics::Acceleration unstructured_constellation_stateAlpha_lonAccel_max(1e2);
  unstructured_constellation_stateAlpha_lon.accel_max = unstructured_constellation_stateAlpha_lonAccel_max;
  ::ad::physics::Acceleration unstructured_constellation_stateAlpha_lonBrake_max(1e2);
  unstructured_constellation_stateAlpha_lon.brake_max = unstructured_constellation_stateAlpha_lonBrake_max;
  ::ad::physics::Acceleration unstructured_constellation_stateAlpha_lonBrake_min(1e2);
  unstructured_constellation_stateAlpha_lon.brake_min = unstructured_constellation_stateAlpha_lonBrake_min;
  ::ad::physics::Acceleration unstructured_constellation_stateAlpha_lonBrake_min_correct(1e2);
  unstructured_constellation_stateAlpha_lonBrake_min_correct
    = ::ad::physics::Acceleration(0. * 0.9); // set to valid value within struct
  unstructured_constellation_stateAlpha_lon.brake_min_correct
    = unstructured_constellation_stateAlpha_lonBrake_min_correct;
  unstructured_constellation_stateAlpha_lon.brake_min_correct = unstructured_constellation_stateAlpha_lon.brake_min;
  unstructured_constellation_stateAlpha_lon.brake_min = unstructured_constellation_stateAlpha_lon.brake_max;
  unstructured_constellation_stateAlpha_lon.brake_max = unstructured_constellation_stateAlpha_lon.brake_min;
  unstructured_constellation_stateAlpha_lon.brake_min = unstructured_constellation_stateAlpha_lon.brake_min_correct;
  unstructured_constellation_state.alpha_lon = unstructured_constellation_stateAlpha_lon;
  valueA.unstructured_constellation_state = unstructured_constellation_state;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssStateTests, comparisonOperatorConstellation_typeDiffers)
{
  ::ad::rss::state::RssState valueA = mValue;
  ::ad::rss::world::ConstellationType constellation_type(::ad::rss::world::ConstellationType::Unstructured);
  valueA.constellation_type = constellation_type;
  ::ad::rss::state::RssState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
