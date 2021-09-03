/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(-1e9);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(-1e9);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(-1e9);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(-1e9);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value below input range minimum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(-1e9);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(-1e9);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value above input range maximum
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeAlphaLatTooSmall)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(-1e9);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(-1e9);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value below input range minimum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeAlphaLatTooBig)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(-1e9);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(-1e9);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value above input range maximum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooSmall)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(-1e9);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(-1e9);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value below input range minimum
  ::ad::rss::state::RssStateInformation invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberSafeDistance(-1e9 * 1.1);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.rssStateInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooBig)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(-1e9);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(-1e9);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with data type value above input range maximum
  ::ad::rss::state::RssStateInformation invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberSafeDistance(1e9 * 1.1);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.rssStateInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
