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

#include "ad/rss/state/UnstructuredConstellationRssStateValidInputRange.hpp"

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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

  // override member with data type value below input range minimum
  ::ad::rss::state::UnstructuredConstellationResponse invalidInitializedMember(
    static_cast<::ad::rss::state::UnstructuredConstellationResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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

  // override member with data type value above input range maximum
  ::ad::rss::state::UnstructuredConstellationResponse invalidInitializedMember(
    static_cast<::ad::rss::state::UnstructuredConstellationResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRangeHeading_rangeTooSmall)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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

  // override member with data type value below input range minimum
  ::ad::geometry::HeadingRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberBegin(-6.283185308 * 1.1);
  invalidInitializedMember.begin = invalidInitializedMemberBegin;
  value.heading_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRangeHeading_rangeTooBig)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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

  // override member with data type value above input range maximum
  ::ad::geometry::HeadingRange invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberBegin(6.283185308 * 1.1);
  invalidInitializedMember.begin = invalidInitializedMemberBegin;
  value.heading_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRangeRss_state_informationTooSmall)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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

  // override member with data type value below input range minimum
  ::ad::rss::state::UnstructuredConstellationStateInformation invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberConsidered_drive_away_steering_angle(-6.283185308 * 1.1);
  invalidInitializedMember.considered_drive_away_steering_angle
    = invalidInitializedMemberConsidered_drive_away_steering_angle;
  value.rss_state_information = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRangeRss_state_informationTooBig)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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

  // override member with data type value above input range maximum
  ::ad::rss::state::UnstructuredConstellationStateInformation invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberConsidered_drive_away_steering_angle(6.283185308 * 1.1);
  invalidInitializedMember.considered_drive_away_steering_angle
    = invalidInitializedMemberConsidered_drive_away_steering_angle;
  value.rss_state_information = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRangeAlpha_lonTooSmall)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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

  // override member with data type value below input range minimum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(-1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(UnstructuredConstellationRssStateValidInputRangeTests, testValidInputRangeAlpha_lonTooBig)
{
  ::ad::rss::state::UnstructuredConstellationRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::UnstructuredConstellationResponse valueResponse(
    ::ad::rss::state::UnstructuredConstellationResponse::None);
  value.response = valueResponse;
  ::ad::geometry::HeadingRange valueHeading_range;
  ::ad::physics::Angle valueHeading_rangeBegin(-6.283185308);
  valueHeading_range.begin = valueHeading_rangeBegin;
  ::ad::physics::Angle valueHeading_rangeEnd(-6.283185308);
  valueHeading_range.end = valueHeading_rangeEnd;
  value.heading_range = valueHeading_range;
  ::ad::rss::state::UnstructuredConstellationStateInformation valueRss_state_information;
  ::ad::physics::Distance2DList valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationBrake_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementX(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.x = valueRss_state_informationBrake_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationBrake_trajectory_setElementY(-1e9);
  valueRss_state_informationBrake_trajectory_setElement.y = valueRss_state_informationBrake_trajectory_setElementY;
  valueRss_state_informationBrake_trajectory_set.resize(1, valueRss_state_informationBrake_trajectory_setElement);
  valueRss_state_information.brake_trajectory_set = valueRss_state_informationBrake_trajectory_set;
  ::ad::physics::Distance2DList valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Distance2D valueRss_state_informationContinue_forward_trajectory_setElement;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementX(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.x
    = valueRss_state_informationContinue_forward_trajectory_setElementX;
  ::ad::physics::Distance valueRss_state_informationContinue_forward_trajectory_setElementY(-1e9);
  valueRss_state_informationContinue_forward_trajectory_setElement.y
    = valueRss_state_informationContinue_forward_trajectory_setElementY;
  valueRss_state_informationContinue_forward_trajectory_set.resize(
    1, valueRss_state_informationContinue_forward_trajectory_setElement);
  valueRss_state_information.continue_forward_trajectory_set
    = valueRss_state_informationContinue_forward_trajectory_set;
  ::ad::physics::Angle valueRss_state_informationConsidered_drive_away_steering_angle(-6.283185308);
  valueRss_state_information.considered_drive_away_steering_angle
    = valueRss_state_informationConsidered_drive_away_steering_angle;
  value.rss_state_information = valueRss_state_information;
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

  // override member with data type value above input range maximum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
