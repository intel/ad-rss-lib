/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/state/RssStateEvaluator.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssStateEvaluator is within valid input range
 *
 * \param[in] input the RssStateEvaluator as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssStateEvaluator is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::state::RssStateEvaluator const &input, bool const logErrors = true)
{
  bool inValidInputRange = (input == ::ad::rss::state::RssStateEvaluator::None)
    || (input == ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirectionEgoCorrectLane)
    || (input == ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceOppositeDirection)
    || (input == ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionEgoFront)
    || (input == ::ad::rss::state::RssStateEvaluator::LongitudinalDistanceSameDirectionOtherInFront)
    || (input == ::ad::rss::state::RssStateEvaluator::LateralDistance)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionOtherPriorityEgoAbleToStop)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionEgoPriorityOtherAbleToStop)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionEgoInFront)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionOtherInFront)
    || (input == ::ad::rss::state::RssStateEvaluator::IntersectionOverlap);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::RssStateEvaluator)>> {}, raw value: {} ",
                  input,
                  static_cast<int32_t>(input)); // LCOV_EXCL_BR_LINE
  }
  return inValidInputRange;
}
