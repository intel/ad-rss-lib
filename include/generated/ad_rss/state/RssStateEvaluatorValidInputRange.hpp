/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad_rss/state/RssStateEvaluator.hpp"

/*!
 * \brief check if the given RssStateEvaluator is within valid input range
 *
 * \param[in] input the RssStateEvaluator as an input value
 *
 * \returns \c true if RssStateEvaluator is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad_rss::state::RssStateEvaluator const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    return (input == ::ad_rss::state::RssStateEvaluator::None)
      || (input == ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane)
      || (input == ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection)
      || (input == ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront)
      || (input == ::ad_rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront)
      || (input == ::ad_rss::state::RssStateEvaluator::LateralDistance)
      || (input == ::ad_rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop)
      || (input == ::ad_rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop)
      || (input == ::ad_rss::state::RssStateEvaluator::IntersectionEgoInFront)
      || (input == ::ad_rss::state::RssStateEvaluator::IntersectionOtherInFront)
      || (input == ::ad_rss::state::RssStateEvaluator::IntersectionOverlap);
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
