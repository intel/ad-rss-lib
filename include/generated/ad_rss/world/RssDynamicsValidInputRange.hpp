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
#include "ad_rss/physics/DistanceValidInputRange.hpp"
#include "ad_rss/physics/DurationValidInputRange.hpp"
#include "ad_rss/world/LateralRssAccelerationValuesValidInputRange.hpp"
#include "ad_rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"
#include "ad_rss/world/RssDynamics.hpp"

/*!
 * \brief check if the given RssDynamics is within valid input range
 *
 * \param[in] input the RssDynamics as an input value
 *
 * \returns \c true if RssDynamics is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Distance(0.) <= lateralFluctuationMargin <= ::ad_rss::physics::Distance(1.)
 *       ::ad_rss::physics::Duration(0.) < responseTime <= ::ad_rss::physics::Duration(10.)
 */
inline bool withinValidInputRange(::ad_rss::world::RssDynamics const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.alphaLon) && withinValidInputRange(input.alphaLat)
      && withinValidInputRange(input.lateralFluctuationMargin) && withinValidInputRange(input.responseTime);

    // check for individual input ranges
    bool const lateralFluctuationMarginInInputRange
      = (::ad_rss::physics::Distance(0.) <= input.lateralFluctuationMargin)
      && (input.lateralFluctuationMargin <= ::ad_rss::physics::Distance(1.));

    bool const responseTimeInInputRange = (::ad_rss::physics::Duration(0.) < input.responseTime)
      && (input.responseTime <= ::ad_rss::physics::Duration(10.));

    return membersInValidInputRange && lateralFluctuationMarginInInputRange && responseTimeInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
