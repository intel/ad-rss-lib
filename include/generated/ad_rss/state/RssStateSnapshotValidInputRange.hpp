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
#include "ad_rss/state/RssStateSnapshot.hpp"
#include "ad_rss/state/RssStateVectorValidInputRange.hpp"

/*!
 * \brief check if the given RssStateSnapshot is within valid input range
 *
 * \param[in] input the RssStateSnapshot as an input value
 *
 * \returns \c true if RssStateSnapshot is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::TimeIndex(1) <= timeIndex
 */
inline bool withinValidInputRange(::ad_rss::state::RssStateSnapshot const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.individualResponses);

    // check for individual input ranges
    bool const timeIndexInInputRange = (::ad_rss::physics::TimeIndex(1) <= input.timeIndex);

    return membersInValidInputRange && timeIndexInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
