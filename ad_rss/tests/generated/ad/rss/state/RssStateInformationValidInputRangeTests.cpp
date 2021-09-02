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

#include "ad/rss/state/RssStateInformationValidInputRange.hpp"

TEST(RssStateInformationValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafeDistance(-1e9);
  value.safeDistance = valueSafeDistance;
  ::ad::physics::Distance valueCurrentDistance(-1e9);
  value.currentDistance = valueCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeSafeDistanceTooSmall)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafeDistance(-1e9);
  value.safeDistance = valueSafeDistance;
  ::ad::physics::Distance valueCurrentDistance(-1e9);
  value.currentDistance = valueCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.safeDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeSafeDistanceTooBig)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafeDistance(-1e9);
  value.safeDistance = valueSafeDistance;
  ::ad::physics::Distance valueCurrentDistance(-1e9);
  value.currentDistance = valueCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.safeDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangesafeDistanceDefault)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueDefault;
  value.safeDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeCurrentDistanceTooSmall)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafeDistance(-1e9);
  value.safeDistance = valueSafeDistance;
  ::ad::physics::Distance valueCurrentDistance(-1e9);
  value.currentDistance = valueCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.currentDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeCurrentDistanceTooBig)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafeDistance(-1e9);
  value.safeDistance = valueSafeDistance;
  ::ad::physics::Distance valueCurrentDistance(-1e9);
  value.currentDistance = valueCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.currentDistance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangecurrentDistanceDefault)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueDefault;
  value.currentDistance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeEvaluatorTooSmall)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafeDistance(-1e9);
  value.safeDistance = valueSafeDistance;
  ::ad::physics::Distance valueCurrentDistance(-1e9);
  value.currentDistance = valueCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value below input range minimum
  ::ad::rss::state::RssStateEvaluator invalidInitializedMember(static_cast<::ad::rss::state::RssStateEvaluator>(-1));
  value.evaluator = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeEvaluatorTooBig)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafeDistance(-1e9);
  value.safeDistance = valueSafeDistance;
  ::ad::physics::Distance valueCurrentDistance(-1e9);
  value.currentDistance = valueCurrentDistance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value above input range maximum
  ::ad::rss::state::RssStateEvaluator invalidInitializedMember(static_cast<::ad::rss::state::RssStateEvaluator>(-1));
  value.evaluator = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
