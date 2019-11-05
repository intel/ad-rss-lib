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
#include "ad/rss/world/LaneSegmentValidInputRange.hpp"
#include "ad/rss/world/RoadSegment.hpp"

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
inline bool withinValidInputRange(::ad::rss::world::RoadSegment const &input)
{
  bool inValidInputRange = ((std::size_t(1)) <= input.size()) && (input.size() <= std::size_t(20));

  if (inValidInputRange)
  {
    for (auto const &member : input)
    {
      inValidInputRange = inValidInputRange && withinValidInputRange(member);
    }
  }
  return inValidInputRange;
}
