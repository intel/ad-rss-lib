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

/**
 * Generated file
 * @file
 *
 */

#include "ad_rss/state/ResponseEvaluator.hpp"
#include <stdexcept>

std::string toString(::ad_rss::state::ResponseEvaluator const e)
{
  switch (e)
  {
    case ::ad_rss::state::ResponseEvaluator::None:
      return std::string("::ad_rss::state::ResponseEvaluator::None"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane:
      return std::string(
        "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection:
      return std::string(
        "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront:
      return std::string(
        "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront:
      return std::string(
        "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::LateralDistance:
      return std::string("::ad_rss::state::ResponseEvaluator::LateralDistance"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop:
      return std::string(
        "::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop:
      return std::string(
        "::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront:
      return std::string("::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront:
      return std::string("::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront"); // LCOV_EXCL_BR_LINE
    case ::ad_rss::state::ResponseEvaluator::IntersectionOverlap:
      return std::string("::ad_rss::state::ResponseEvaluator::IntersectionOverlap"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad_rss::state::ResponseEvaluator fromString(std::string const &str)
{
  if (str == std::string("::ad_rss::state::ResponseEvaluator::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::None;
  }
  if (
    str
    == std::string(
         "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
  }
  if (str == std::string("LongitudinalDistanceOppositeDirectionEgoCorrectLane")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
  }
  if (str
      == std::string("::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection;
  }
  if (str == std::string("LongitudinalDistanceOppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceOppositeDirection;
  }
  if (str == std::string(
               "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront;
  }
  if (str == std::string("LongitudinalDistanceSameDirectionEgoFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionEgoFront;
  }
  if (str
      == std::string(
           "::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
  }
  if (str == std::string("LongitudinalDistanceSameDirectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
  }
  if (str == std::string("::ad_rss::state::ResponseEvaluator::LateralDistance")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LateralDistance;
  }
  if (str == std::string("LateralDistance")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::LateralDistance;
  }
  if (str
      == std::string("::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop;
  }
  if (str == std::string("IntersectionOtherPriorityEgoAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionOtherPriorityEgoAbleToStop;
  }
  if (str
      == std::string("::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop;
  }
  if (str == std::string("IntersectionEgoPriorityOtherAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionEgoPriorityOtherAbleToStop;
  }
  if (str == std::string("::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront;
  }
  if (str == std::string("IntersectionEgoInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionEgoInFront;
  }
  if (str == std::string("::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront;
  }
  if (str == std::string("IntersectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionOtherInFront;
  }
  if (str == std::string("::ad_rss::state::ResponseEvaluator::IntersectionOverlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionOverlap;
  }
  if (str == std::string("IntersectionOverlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad_rss::state::ResponseEvaluator::IntersectionOverlap;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
