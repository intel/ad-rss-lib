/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/physics/MetricRangeValidInputRange.hpp"
#include "ad/rss/world/LaneDrivingDirectionValidInputRange.hpp"
#include "ad/rss/world/LaneSegment.hpp"
#include "ad/rss/world/LaneSegmentTypeValidInputRange.hpp"

/*!
 * \brief check if the given LaneSegment is within valid input range
 *
 * \param[in] input the LaneSegment as an input value
 *
 * \returns \c true if LaneSegment is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::LaneSegment const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.type) && withinValidInputRange(input.drivingDirection)
    && withinValidInputRange(input.length) && withinValidInputRange(input.width);

  return inValidInputRange;
}
