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

#include "ad/rss/state/RssStateEvaluator.hpp"
#include <stdexcept>

std::string toString(::ad::rss::state::RssStateEvaluator const e)
{
  switch (e)
  {
    case ::ad::rss::state::RssStateEvaluator::None:
      return std::string("::ad::rss::state::RssStateEvaluator::None"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane:
      return std::string(
        "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection:
      return std::string(
        "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront:
      return std::string(
        "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront:
      return std::string(
        "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::LateralDistance:
      return std::string("::ad::rss::state::RssStateEvaluator::LateralDistance"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop:
      return std::string(
        "::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop:
      return std::string(
        "::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront:
      return std::string("::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront:
      return std::string("::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront"); // LCOV_EXCL_BR_LINE
    case ::ad::rss::state::RssStateEvaluator::IntersectionOverlap:
      return std::string("::ad::rss::state::RssStateEvaluator::IntersectionOverlap"); // LCOV_EXCL_BR_LINE
    default:
      return std::string("UNKNOWN ENUM VALUE"); // LCOV_EXCL_BR_LINE
  }
}

template <>::ad::rss::state::RssStateEvaluator fromString(std::string const &str)
{
  if (str == std::string("::ad::rss::state::RssStateEvaluator::None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::None;
  }
  if (str == std::string("None")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::None;
  }
  if (
    str
    == std::string(
         "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
  }
  if (str == std::string("LongitudinalDistanceOppositeDirectionEgoCorrectLane")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane;
  }
  if (str
      == std::string("::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection;
  }
  if (str == std::string("LongitudinalDistanceOppositeDirection")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection;
  }
  if (str == std::string(
               "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront;
  }
  if (str == std::string("LongitudinalDistanceSameDirectionEgoFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront;
  }
  if (str
      == std::string(
           "::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
  }
  if (str == std::string("LongitudinalDistanceSameDirectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront;
  }
  if (str == std::string("::ad::rss::state::RssStateEvaluator::LateralDistance")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LateralDistance;
  }
  if (str == std::string("LateralDistance")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::LateralDistance;
  }
  if (str == std::string(
               "::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop;
  }
  if (str == std::string("IntersectionOtherPriorityEgoAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop;
  }
  if (str == std::string(
               "::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop;
  }
  if (str == std::string("IntersectionEgoPriorityOtherAbleToStop")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop;
  }
  if (str == std::string("::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront;
  }
  if (str == std::string("IntersectionEgoInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront;
  }
  if (str == std::string("::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront;
  }
  if (str == std::string("IntersectionOtherInFront")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront;
  }
  if (str == std::string("::ad::rss::state::RssStateEvaluator::IntersectionOverlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionOverlap;
  }
  if (str == std::string("IntersectionOverlap")) // LCOV_EXCL_BR_LINE
  {
    return ::ad::rss::state::RssStateEvaluator::IntersectionOverlap;
  }
  throw std::out_of_range("Invalid enum literal"); // LCOV_EXCL_BR_LINE
}
