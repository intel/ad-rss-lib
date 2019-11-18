/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
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

#include "ad_rss/state/LateralRssStateValidInputRange.hpp"

TEST(LateralRssStateValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LateralResponse valueResponse(::ad_rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::RssStateInformation valueRssStateInformation;
  ::ad_rss::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad_rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad_rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LateralResponse valueResponse(::ad_rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::RssStateInformation valueRssStateInformation;
  ::ad_rss::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad_rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with invalid value
  ::ad_rss::state::LateralResponse invalidInitializedMember(static_cast<::ad_rss::state::LateralResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad_rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LateralResponse valueResponse(::ad_rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::RssStateInformation valueRssStateInformation;
  ::ad_rss::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad_rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with invalid value
  ::ad_rss::state::LateralResponse invalidInitializedMember(static_cast<::ad_rss::state::LateralResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooSmall)
{
  ::ad_rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LateralResponse valueResponse(::ad_rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::RssStateInformation valueRssStateInformation;
  ::ad_rss::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad_rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with invalid value
  ::ad_rss::state::RssStateInformation invalidInitializedMember;
  ::ad_rss::physics::Distance invalidInitializedMemberSafeDistance(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.rssStateInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooBig)
{
  ::ad_rss::state::LateralRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LateralResponse valueResponse(::ad_rss::state::LateralResponse::None);
  value.response = valueResponse;
  ::ad_rss::state::RssStateInformation valueRssStateInformation;
  ::ad_rss::physics::Distance valueRssStateInformationSafeDistance(0.);
  valueRssStateInformation.safeDistance = valueRssStateInformationSafeDistance;
  ::ad_rss::physics::Distance valueRssStateInformationCurrentDistance(0.);
  valueRssStateInformation.currentDistance = valueRssStateInformationCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueRssStateInformationEvaluator(::ad_rss::state::RssStateEvaluator::None);
  valueRssStateInformation.evaluator = valueRssStateInformationEvaluator;
  value.rssStateInformation = valueRssStateInformation;

  // override member with invalid value
  ::ad_rss::state::RssStateInformation invalidInitializedMember;
  ::ad_rss::physics::Distance invalidInitializedMemberSafeDistance(1e6 * 1.1);
  invalidInitializedMember.safeDistance = invalidInitializedMemberSafeDistance;
  value.rssStateInformation = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
