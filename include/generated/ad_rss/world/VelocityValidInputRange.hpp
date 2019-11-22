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
#include "ad_rss/physics/SpeedValidInputRange.hpp"
#include "ad_rss/world/Velocity.hpp"

/*!
 * \brief check if the given Velocity is within valid input range
 *
 * \param[in] input the Velocity as an input value
 *
 * \returns \c true if Velocity is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Speed(0.) <= speedLon <= ::ad_rss::physics::Speed(100.)
 *       ::ad_rss::physics::Speed(-10.) <= speedLat <= ::ad_rss::physics::Speed(10.)
 */
inline bool withinValidInputRange(::ad_rss::world::Velocity const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange
      = withinValidInputRange(input.speedLon) && withinValidInputRange(input.speedLat);

    // check for individual input ranges
    bool const speedLonInInputRange
      = (::ad_rss::physics::Speed(0.) <= input.speedLon) && (input.speedLon <= ::ad_rss::physics::Speed(100.));

    bool const speedLatInInputRange
      = (::ad_rss::physics::Speed(-10.) <= input.speedLat) && (input.speedLat <= ::ad_rss::physics::Speed(10.));

    return membersInValidInputRange && speedLonInInputRange && speedLatInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
