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
#include "ad/rss/world/LaneSegmentId.hpp"

/*!
 * \brief check if the given LaneSegmentId is within valid input range
 *
 * \param[in] input the LaneSegmentId as an input value
 *
 * \returns \c true if LaneSegmentId is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest() <= \c input <=
 * std::numeric_limits<::ad::rss::world::LaneSegmentId>::max()
 */
inline bool withinValidInputRange(::ad::rss::world::LaneSegmentId const &input)
{
  // check for generic numeric limits of the type
  bool isValidInputRange = input.isValid() && (std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest() <= input)
    && (input <= std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());

  return isValidInputRange;
}
