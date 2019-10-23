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
#include "ad/rss/world/ObjectIdVector.hpp"

/*!
 * \brief check if the given ObjectIdVector is within valid input range
 *
 * \param[in] input the ObjectIdVector as an input value
 *
 * \returns \c true if ObjectIdVector is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       0 <= \c input.size() <= 1000
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad::rss::world::ObjectIdVector const &input)
{
  bool inValidInputRange = (input.size() <= std::size_t(1000));

  return inValidInputRange;
}
