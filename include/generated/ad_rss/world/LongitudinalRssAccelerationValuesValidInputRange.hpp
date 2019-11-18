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
#include "ad_rss/physics/AccelerationValidInputRange.hpp"
#include "ad_rss/world/LongitudinalRssAccelerationValues.hpp"

/*!
 * \brief check if the given LongitudinalRssAccelerationValues is within valid input range
 *
 * \param[in] input the LongitudinalRssAccelerationValues as an input value
 *
 * \returns \c true if LongitudinalRssAccelerationValues is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Acceleration(0.) <= accelMax <= ::ad_rss::physics::Acceleration(1e2)
 *       brakeMin <= brakeMax <= ::ad_rss::physics::Acceleration(1e2)
 *       brakeMinCorrect <= brakeMin <= brakeMax
 *       ::ad_rss::physics::Acceleration(0.) < brakeMinCorrect <= brakeMin
 */
inline bool withinValidInputRange(::ad_rss::world::LongitudinalRssAccelerationValues const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.accelMax) && withinValidInputRange(input.brakeMax)
      && withinValidInputRange(input.brakeMin) && withinValidInputRange(input.brakeMinCorrect);

    // check for individual input ranges
    bool const accelMaxInInputRange = (::ad_rss::physics::Acceleration(0.) <= input.accelMax)
      && (input.accelMax <= ::ad_rss::physics::Acceleration(1e2));

    bool const brakeMaxInInputRange
      = (input.brakeMin <= input.brakeMax) && (input.brakeMax <= ::ad_rss::physics::Acceleration(1e2));

    bool const brakeMinInInputRange = (input.brakeMinCorrect <= input.brakeMin) && (input.brakeMin <= input.brakeMax);

    bool const brakeMinCorrectInInputRange
      = (::ad_rss::physics::Acceleration(0.) < input.brakeMinCorrect) && (input.brakeMinCorrect <= input.brakeMin);

    return membersInValidInputRange && accelMaxInInputRange && brakeMaxInInputRange && brakeMinInInputRange
      && brakeMinCorrectInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
