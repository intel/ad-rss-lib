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

#include "ad/rss/state/RssStateEvaluatorValidInputRange.hpp"

TEST(RssStateEvaluatorValidInputRangeTests, testValidInputRangeValid)
{
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::None));
  ASSERT_TRUE(
    withinValidInputRange(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront));
  ASSERT_TRUE(
    withinValidInputRange(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::LateralDistance));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront));
  ASSERT_TRUE(withinValidInputRange(::ad::rss::state::RssStateEvaluator::IntersectionOverlap));
}

TEST(RssStateEvaluatorValidInputRangeTests, testValidInputRangeInvalid)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();

  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::None));
  minValue = std::min(
    minValue,
    static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane));
  minValue = std::min(minValue,
                      static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection));
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront));
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LateralDistance));
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop));
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront));
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOverlap));

  ASSERT_FALSE(withinValidInputRange(static_cast<::ad::rss::state::RssStateEvaluator>(minValue - 1)));
}
