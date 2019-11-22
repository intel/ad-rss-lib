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

#include "ad_rss/state/RssStateInformationValidInputRange.hpp"

TEST(RssStateInformationValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeSafeDistanceTooSmall)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.safeDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeSafeDistanceTooBig)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.safeDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangesafeDistanceDefault)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueDefault;
  value.safeDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeCurrentDistanceTooSmall)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.currentDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeCurrentDistanceTooBig)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.currentDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangecurrentDistanceDefault)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueDefault;
  value.currentDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeEvaluatorTooSmall)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with invalid value
  ::ad_rss::state::RssStateEvaluator invalidInitializedMember(static_cast<::ad_rss::state::RssStateEvaluator>(-1));
  value.evaluator = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeEvaluatorTooBig)
{
  ::ad_rss::state::RssStateInformation value;
  ::ad_rss::physics::Distance valueSafeDistance(0.);
  value.safeDistance = valueSafeDistance;
  ::ad_rss::physics::Distance valueCurrentDistance(0.);
  value.currentDistance = valueCurrentDistance;
  ::ad_rss::state::RssStateEvaluator valueEvaluator(::ad_rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with invalid value
  ::ad_rss::state::RssStateEvaluator invalidInitializedMember(static_cast<::ad_rss::state::RssStateEvaluator>(-1));
  value.evaluator = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
