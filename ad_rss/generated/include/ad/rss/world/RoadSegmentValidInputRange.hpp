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
#include "ad/physics/DistanceValidInputRange.hpp"
#include "ad/rss/world/LaneSegmentVectorValidInputRange.hpp"
#include "ad/rss/world/RoadSegment.hpp"
#include "ad/rss/world/RoadSegmentTypeValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RoadSegment is within valid input range
 *
 * \param[in] input the RoadSegment as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RoadSegment is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::RoadSegment const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.type, logErrors)
    && withinValidInputRange(input.lane_segments, logErrors)
    && withinValidInputRange(input.minimum_length_after_intersecting_area, logErrors)
    && withinValidInputRange(input.minimum_length_before_intersecting_area, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::RoadSegment)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
