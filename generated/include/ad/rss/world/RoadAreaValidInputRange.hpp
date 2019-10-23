/*
 *  @COPYRIGHT_TAG@
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : 10.5.6-1843
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/world/RoadArea.hpp"
#include "ad/rss/world/RoadSegmentValidInputRange.hpp"

/*!
 * \brief check if the given RoadArea is within valid input range
 *
 * \param[in] input the RoadArea as an input value
 *
 * \returns \c true if RoadArea is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       0 <= \c input.size() <= 50
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad::rss::world::RoadArea const &input)
{
  bool inValidInputRange = (input.size() <= std::size_t(50));

  if (inValidInputRange)
  {
    for (auto const &member : input)
    {
      inValidInputRange = inValidInputRange && withinValidInputRange(member);
    }
  }
  return inValidInputRange;
}
