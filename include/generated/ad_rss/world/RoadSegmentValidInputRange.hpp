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
#include "ad_rss/world/LaneSegmentValidInputRange.hpp"
#include "ad_rss/world/RoadSegment.hpp"

/*!
 * \brief check if the given RoadSegment is within valid input range
 *
 * \param[in] input the RoadSegment as an input value
 *
 * \returns \c true if RoadSegment is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       1 <= \c input.size() <= 20
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad_rss::world::RoadSegment const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    bool inValidInputRange = ((std::size_t(1)) <= input.size()) && (input.size() <= std::size_t(20));

    if (inValidInputRange)
    {
      for (auto const &member : input)
      {
        inValidInputRange = inValidInputRange && withinValidInputRange(member);
      }
    }
    return inValidInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
