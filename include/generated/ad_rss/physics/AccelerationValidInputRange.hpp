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
#include "ad_rss/physics/Acceleration.hpp"

/*!
 * \brief check if the given Acceleration is within valid input range
 *
 * \param[in] input the Acceleration as an input value
 *
 * \returns \c true if Acceleration is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       std::numeric_limits<::ad_rss::physics::Acceleration>::lowest() <= \c input <=
 * std::numeric_limits<::ad_rss::physics::Acceleration>::max()
 *       -1e2 <= \c input <= 1e2
 */
inline bool withinValidInputRange(::ad_rss::physics::Acceleration const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic numeric limits of the type
    bool const withinNumericLimits = (std::numeric_limits<::ad_rss::physics::Acceleration>::lowest() <= input)
      && (input <= std::numeric_limits<::ad_rss::physics::Acceleration>::max());

    // check for individual input range
    bool const inInputRange
      = (::ad_rss::physics::Acceleration(-1e2) <= input) && (input <= ::ad_rss::physics::Acceleration(1e2));

    return (withinNumericLimits && inInputRange);
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
