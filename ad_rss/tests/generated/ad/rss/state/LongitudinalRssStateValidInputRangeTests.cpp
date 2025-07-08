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

#include "ad/rss/state/LongitudinalRssStateValidInputRange.hpp"

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value below input range minimum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value above input range maximum
  ::ad::rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad::rss::state::LongitudinalResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeAlpha_lonTooSmall)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value below input range minimum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(-1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeAlpha_lonTooBig)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value above input range maximum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeRss_state_informationTooSmall)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value below input range minimum
  ::ad::rss::state::RssStateInformation invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberSafe_distance(-1e9 * 1.1);
  invalidInitializedMember.safe_distance = invalidInitializedMemberSafe_distance;
  value.rss_state_information = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeRss_state_informationTooBig)
{
  ::ad::rss::state::LongitudinalRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LongitudinalResponse valueResponse(::ad::rss::state::LongitudinalResponse::None);
  value.response = valueResponse;
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
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value above input range maximum
  ::ad::rss::state::RssStateInformation invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberSafe_distance(1e9 * 1.1);
  invalidInitializedMember.safe_distance = invalidInitializedMemberSafe_distance;
  value.rss_state_information = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
