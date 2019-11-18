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

#include "ad_rss/state/LongitudinalRssStateValidInputRange.hpp"

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
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

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseTooSmall)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
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
  ::ad_rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeResponseTooBig)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
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
  ::ad_rss::state::LongitudinalResponse invalidInitializedMember(
    static_cast<::ad_rss::state::LongitudinalResponse>(-1));
  value.response = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooSmall)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
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

TEST(LongitudinalRssStateValidInputRangeTests, testValidInputRangeRssStateInformationTooBig)
{
  ::ad_rss::state::LongitudinalRssState value;
  bool valueIsSafe{true};
  value.isSafe = valueIsSafe;
  ::ad_rss::state::LongitudinalResponse valueResponse(::ad_rss::state::LongitudinalResponse::None);
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
