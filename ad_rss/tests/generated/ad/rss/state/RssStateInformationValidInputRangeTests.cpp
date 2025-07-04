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

#include "ad/rss/state/RssStateInformationValidInputRange.hpp"

TEST(RssStateInformationValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafe_distance(-1e9);
  value.safe_distance = valueSafe_distance;
  ::ad::physics::Distance valueCurrent_distance(-1e9);
  value.current_distance = valueCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeSafe_distanceTooSmall)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafe_distance(-1e9);
  value.safe_distance = valueSafe_distance;
  ::ad::physics::Distance valueCurrent_distance(-1e9);
  value.current_distance = valueCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.safe_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeSafe_distanceTooBig)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafe_distance(-1e9);
  value.safe_distance = valueSafe_distance;
  ::ad::physics::Distance valueCurrent_distance(-1e9);
  value.current_distance = valueCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.safe_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangesafe_distanceDefault)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueDefault;
  value.safe_distance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeCurrent_distanceTooSmall)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafe_distance(-1e9);
  value.safe_distance = valueSafe_distance;
  ::ad::physics::Distance valueCurrent_distance(-1e9);
  value.current_distance = valueCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.current_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeCurrent_distanceTooBig)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafe_distance(-1e9);
  value.safe_distance = valueSafe_distance;
  ::ad::physics::Distance valueCurrent_distance(-1e9);
  value.current_distance = valueCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.current_distance = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangecurrent_distanceDefault)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueDefault;
  value.current_distance = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssStateInformationValidInputRangeTests, testValidInputRangeEvaluatorTooSmall)
{
  ::ad::rss::state::RssStateInformation value;
  ::ad::physics::Distance valueSafe_distance(-1e9);
  value.safe_distance = valueSafe_distance;
  ::ad::physics::Distance valueCurrent_distance(-1e9);
  value.current_distance = valueCurrent_distance;
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
  ::ad::physics::Distance valueSafe_distance(-1e9);
  value.safe_distance = valueSafe_distance;
  ::ad::physics::Distance valueCurrent_distance(-1e9);
  value.current_distance = valueCurrent_distance;
  ::ad::rss::state::RssStateEvaluator valueEvaluator(::ad::rss::state::RssStateEvaluator::None);
  value.evaluator = valueEvaluator;

  // override member with data type value above input range maximum
  ::ad::rss::state::RssStateEvaluator invalidInitializedMember(static_cast<::ad::rss::state::RssStateEvaluator>(-1));
  value.evaluator = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
