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
#include "ad/rss/situation/SituationSnapshot.hpp"
#include "ad/rss/situation/SituationVectorValidInputRange.hpp"

/*!
 * \brief check if the given SituationSnapshot is within valid input range
 *
 * \param[in] input the SituationSnapshot as an input value
 *
 * \returns \c true if SituationSnapshot is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::rss::world::TimeIndex(1) <= timeIndex
 */
inline bool withinValidInputRange(::ad::rss::situation::SituationSnapshot const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.situations);

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::rss::world::TimeIndex(1) <= input.timeIndex);
  }

  return inValidInputRange;
}
