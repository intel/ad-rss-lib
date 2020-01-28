/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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
#include "ad/rss/state/RssStateEvaluator.hpp"

TEST(RssStateEvaluatorTests, testFromString)
{
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("None"), ::ad::rss::state::RssStateEvaluator::None);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("::ad::rss::state::RssStateEvaluator::None"),
            ::ad::rss::state::RssStateEvaluator::None);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("LongitudinalDistanceOppositeDirectionEgoCorrectLane"),
            ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>(
              "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane"),
            ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("LongitudinalDistanceOppositeDirection"),
            ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>(
              "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection"),
            ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("LongitudinalDistanceSameDirectionEgoFront"),
            ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>(
              "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront"),
            ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("LongitudinalDistanceSameDirectionOtherInFront"),
            ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>(
              "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront"),
            ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("LateralDistance"),
            ::ad::rss::state::RssStateEvaluator::LateralDistance);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("::ad::rss::state::RssStateEvaluator::LateralDistance"),
            ::ad::rss::state::RssStateEvaluator::LateralDistance);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("IntersectionOtherPriorityEgoAbleToStop"),
            ::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>(
              "::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop"),
            ::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("IntersectionEgoPriorityOtherAbleToStop"),
            ::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>(
              "::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop"),
            ::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("IntersectionEgoInFront"),
            ::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront);
  ASSERT_EQ(
    fromString<::ad::rss::state::RssStateEvaluator>("::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront"),
    ::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("IntersectionOtherInFront"),
            ::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront);
  ASSERT_EQ(
    fromString<::ad::rss::state::RssStateEvaluator>("::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront"),
    ::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront);

  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("IntersectionOverlap"),
            ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  ASSERT_EQ(fromString<::ad::rss::state::RssStateEvaluator>("::ad::rss::state::RssStateEvaluator::IntersectionOverlap"),
            ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);

  EXPECT_ANY_THROW({ fromString<::ad::rss::state::RssStateEvaluator>("NOT A VALID ENUM LITERAL"); });
}

TEST(RssStateEvaluatorTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::None), "::ad::rss::state::RssStateEvaluator::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::None));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane),
            "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane");
  minValue = std::min(
    minValue,
    static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane));
  maxValue = std::max(
    maxValue,
    static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection),
            "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection");
  minValue = std::min(minValue,
                      static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection));
  maxValue = std::max(maxValue,
                      static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront),
            "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront");
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront));
  maxValue = std::max(
    maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront),
            "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront");
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront));
  maxValue = std::max(
    maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::LateralDistance),
            "::ad::rss::state::RssStateEvaluator::LateralDistance");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LateralDistance));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::LateralDistance));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop),
            "::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop");
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop));
  maxValue = std::max(
    maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop),
            "::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop");
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop));
  maxValue = std::max(
    maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront),
            "::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront),
            "::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront));

  ASSERT_EQ(toString(::ad::rss::state::RssStateEvaluator::IntersectionOverlap),
            "::ad::rss::state::RssStateEvaluator::IntersectionOverlap");
  minValue = std::min(minValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOverlap));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad::rss::state::RssStateEvaluator::IntersectionOverlap));

  ASSERT_EQ(toString(static_cast<::ad::rss::state::RssStateEvaluator>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad::rss::state::RssStateEvaluator>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}

TEST(RssStateEvaluatorTests, ostreamOperatorTest)
{
  std::stringstream stream;
  ::ad::rss::state::RssStateEvaluator value(::ad::rss::state::RssStateEvaluator::None);
  stream << value;
  ASSERT_GT(stream.str().size(), 0u);
}
