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
#include "ad/rss/world/TimeIndex.hpp"

/*!
 * \brief check if the given TimeIndex is within valid input range
 *
 * \param[in] input the TimeIndex as an input value
 *
 * \returns \c true if TimeIndex is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       std::numeric_limits<::ad::rss::world::TimeIndex>::lowest() <= \c input <=
 * std::numeric_limits<::ad::rss::world::TimeIndex>::max()
 */
inline bool withinValidInputRange(::ad::rss::world::TimeIndex const &input)
{
  // check for generic numeric limits of the type
  bool isValidInputRange = input.isValid() && (std::numeric_limits<::ad::rss::world::TimeIndex>::lowest() <= input)
    && (input <= std::numeric_limits<::ad::rss::world::TimeIndex>::max());

  return isValidInputRange;
}
