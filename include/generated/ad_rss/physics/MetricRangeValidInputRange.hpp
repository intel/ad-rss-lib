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
#include "ad_rss/physics/MetricRange.hpp"

/*!
 * \brief check if the given MetricRange is within valid input range
 *
 * \param[in] input the MetricRange as an input value
 *
 * \returns \c true if MetricRange is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Distance(0.) <= minimum <= maximum
 *       minimum <= maximum <= ::ad_rss::physics::Distance(1e6)
 */
inline bool withinValidInputRange(::ad_rss::physics::MetricRange const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.minimum) && withinValidInputRange(input.maximum);

    // check for individual input ranges
    bool const minimumInInputRange
      = (::ad_rss::physics::Distance(0.) <= input.minimum) && (input.minimum <= input.maximum);

    bool const maximumInInputRange
      = (input.minimum <= input.maximum) && (input.maximum <= ::ad_rss::physics::Distance(1e6));

    return membersInValidInputRange && minimumInInputRange && maximumInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
