/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
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
