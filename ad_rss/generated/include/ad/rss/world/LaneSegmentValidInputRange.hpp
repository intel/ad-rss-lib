/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1997
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/physics/MetricRangeValidInputRange.hpp"
#include "ad/rss/world/LaneDrivingDirectionValidInputRange.hpp"
#include "ad/rss/world/LaneSegment.hpp"
#include "ad/rss/world/LaneSegmentTypeValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LaneSegment is within valid input range
 *
 * \param[in] input the LaneSegment as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LaneSegment is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::LaneSegment const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.type, logErrors)
    && withinValidInputRange(input.drivingDirection, logErrors) && withinValidInputRange(input.length, logErrors)
    && withinValidInputRange(input.width, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::LaneSegment)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
