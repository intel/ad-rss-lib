/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad_rss/state/ResponseEvaluator.hpp"

TEST(ResponseEvaluatorTests, testFromString)
{
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("None"), ::ad_rss::state::ResponseEvaluator::None);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("::ad_rss::state::ResponseEvaluator::None"),
            ::ad_rss::state::ResponseEvaluator::None);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("LongitudinalDistanceOppositeDirectionEgoCorrectLane"),
            ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>(
              "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane"),
            ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("LongitudinalDistanceOppositeDirection"),
            ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>(
              "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection"),
            ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("LongitudinalDistanceSameDirectionEgoFront"),
            ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>(
              "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront"),
            ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("LongitudinalDistanceSameDirectionOtherInFront"),
            ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>(
              "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront"),
            ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("LateralDistance"),
            ::ad_rss::state::ResponseEvaluator::LateralDistance);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("::ad_rss::state::ResponseEvaluator::LateralDistance"),
            ::ad_rss::state::ResponseEvaluator::LateralDistance);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("IntersectionOtherPriorityEgoAbleToStop"),
            ::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>(
              "::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop"),
            ::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("IntersectionEgoPriorityOtherAbleToStop"),
            ::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>(
              "::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop"),
            ::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("IntersectionEgoInFront"),
            ::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront);
  ASSERT_EQ(
    fromString<::ad_rss::state::ResponseEvaluator>("::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront"),
    ::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("IntersectionOtherInFront"),
            ::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront);
  ASSERT_EQ(
    fromString<::ad_rss::state::ResponseEvaluator>("::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront"),
    ::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront);

  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("IntersectionOverlap"),
            ::ad_rss::state::ResponseEvaluator::IntersectionOverlap);
  ASSERT_EQ(fromString<::ad_rss::state::ResponseEvaluator>("::ad_rss::state::ResponseEvaluator::IntersectionOverlap"),
            ::ad_rss::state::ResponseEvaluator::IntersectionOverlap);

  EXPECT_ANY_THROW({ fromString<::ad_rss::state::ResponseEvaluator>("NOT A VALID ENUM LITERAL"); });
}

TEST(ResponseEvaluatorTests, testToString)
{
  int32_t minValue = std::numeric_limits<int32_t>::max();
  int32_t maxValue = std::numeric_limits<int32_t>::min();

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::None), "::ad_rss::state::ResponseEvaluator::None");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::None));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::None));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane),
            "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane");
  minValue = std::min(
    minValue,
    static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane));
  maxValue = std::max(
    maxValue,
    static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection),
            "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection");
  minValue = std::min(minValue,
                      static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection));
  maxValue = std::max(maxValue,
                      static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront),
            "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront");
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront));
  maxValue = std::max(
    maxValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront),
            "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront");
  minValue = std::min(
    minValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront));
  maxValue = std::max(
    maxValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::LateralDistance),
            "::ad_rss::state::ResponseEvaluator::LateralDistance");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LateralDistance));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::LateralDistance));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop),
            "::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop");
  minValue = std::min(minValue,
                      static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop));
  maxValue = std::max(maxValue,
                      static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop),
            "::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop");
  minValue = std::min(minValue,
                      static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop));
  maxValue = std::max(maxValue,
                      static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront),
            "::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront),
            "::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront));

  ASSERT_EQ(toString(::ad_rss::state::ResponseEvaluator::IntersectionOverlap),
            "::ad_rss::state::ResponseEvaluator::IntersectionOverlap");
  minValue = std::min(minValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionOverlap));
  maxValue = std::max(maxValue, static_cast<int32_t>(::ad_rss::state::ResponseEvaluator::IntersectionOverlap));

  ASSERT_EQ(toString(static_cast<::ad_rss::state::ResponseEvaluator>(minValue - 1)), "UNKNOWN ENUM VALUE");
  ASSERT_EQ(toString(static_cast<::ad_rss::state::ResponseEvaluator>(maxValue + 1)), "UNKNOWN ENUM VALUE");
}
