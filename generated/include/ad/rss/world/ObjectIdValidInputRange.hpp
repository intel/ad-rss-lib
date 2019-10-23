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
#include "ad/rss/world/ObjectId.hpp"

/*!
 * \brief check if the given ObjectId is within valid input range
 *
 * \param[in] input the ObjectId as an input value
 *
 * \returns \c true if ObjectId is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       std::numeric_limits<::ad::rss::world::ObjectId>::lowest() <= \c input <=
 * std::numeric_limits<::ad::rss::world::ObjectId>::max()
 */
inline bool withinValidInputRange(::ad::rss::world::ObjectId const &input)
{
  // check for generic numeric limits of the type
  bool isValidInputRange = input.isValid() && (std::numeric_limits<::ad::rss::world::ObjectId>::lowest() <= input)
    && (input <= std::numeric_limits<::ad::rss::world::ObjectId>::max());

  return isValidInputRange;
}
