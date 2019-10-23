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
#include "ad/rss/world/OccupiedRegionValidInputRange.hpp"
#include "ad/rss/world/OccupiedRegionVector.hpp"

/*!
 * \brief check if the given OccupiedRegionVector is within valid input range
 *
 * \param[in] input the OccupiedRegionVector as an input value
 *
 * \returns \c true if OccupiedRegionVector is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       0 <= \c input.size() <= 1000
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad::rss::world::OccupiedRegionVector const &input)
{
  bool inValidInputRange = (input.size() <= std::size_t(1000));

  if (inValidInputRange)
  {
    for (auto const &member : input)
    {
      inValidInputRange = inValidInputRange && withinValidInputRange(member);
    }
  }
  return inValidInputRange;
}
