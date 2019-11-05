/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with invalid value
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with invalid value
  ::ad::rss::state::LateralResponse invalidInitializedMember(static_cast<::ad::rss::state::LateralResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooSmall)
{
  ::ad::rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad::rss::state::LateralResponse valueResponse(::ad::rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with invalid value
  ::ad::rss::state::RssStateInformation invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberSafeDistance(0. - ::ad::physics::Distance::cPrecisionValue);
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
  ::ad::rss::state::RssStateInformation valueRssStateInformation;
  ::ad::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad::rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with invalid value
  ::ad::rss::state::RssStateInformation invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberSafeDistance(1e9 * 1.1);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.rssStateInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
