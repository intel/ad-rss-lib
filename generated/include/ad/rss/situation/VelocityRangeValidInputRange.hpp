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
#include "ad/physics/SpeedRangeValidInputRange.hpp"
#include "ad/rss/situation/VelocityRange.hpp"

/*!
 * \brief check if the given VelocityRange is within valid input range
 *
 * \param[in] input the VelocityRange as an input value
 *
 * \returns \c true if VelocityRange is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::situation::VelocityRange const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.speedLon) && withinValidInputRange(input.speedLat);

  return inValidInputRange;
}
