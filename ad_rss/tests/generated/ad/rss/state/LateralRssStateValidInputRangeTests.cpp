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

#include "ad/rss/state/LateralRssStateValidInputRange.hpp"

TEST(LateralRssStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
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

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeAlpha_latTooSmall)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value below input range minimum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(-1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeAlpha_latTooBig)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
  ::ad::rss::state::RssStateInformation valueRss_state_information;
  ::ad::physics::Distance valueRss_state_informationSafe_distance(-1e9);
  valueRss_state_information.safe_distance = valueRss_state_informationSafe_distance;
  ::ad::physics::Distance valueRss_state_informationCurrent_distance(-1e9);
  valueRss_state_information.current_distance = valueRss_state_informationCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueRss_state_informationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRss_state_information.evaluator = valueRss_state_informationEvaluator;
  value.rss_state_information = valueRss_state_information;

  // override member with data type value above input range maximum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccel_max(1e2 * 1.1);
  invalidInitializedMember.accel_max = invalidInitializedMemberAccel_max;
  value.alpha_lat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeRss_state_informationTooSmall)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
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

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeRss_state_informationTooBig)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIs_safe{true};
  value.is_safe = valueIs_safe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlpha_lat;
  ::ad::physics::Acceleration valueAlpha_latAccel_max(-1e2);
  valueAlpha_latAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlpha_lat.accel_max = valueAlpha_latAccel_max;
  ::ad::physics::Acceleration valueAlpha_latBrake_min(-1e2);
  valueAlpha_lat.brake_min = valueAlpha_latBrake_min;
  value.alpha_lat = valueAlpha_lat;
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
