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
#include "ad_rss/physics/MetricRangeValidInputRange.hpp"
#include "ad_rss/world/LaneDrivingDirectionValidInputRange.hpp"
#include "ad_rss/world/LaneSegment.hpp"
#include "ad_rss/world/LaneSegmentTypeValidInputRange.hpp"

/*!
 * \brief check if the given LaneSegment is within valid input range
 *
 * \param[in] input the LaneSegment as an input value
 *
 * \returns \c true if LaneSegment is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad_rss::world::LaneSegment const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.type)
      && withinValidInputRange(input.drivingDirection) && withinValidInputRange(input.length)
      && withinValidInputRange(input.width);

    return membersInValidInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
