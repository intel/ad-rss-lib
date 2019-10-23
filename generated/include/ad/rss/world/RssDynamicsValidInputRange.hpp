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
#include "ad/physics/DistanceValidInputRange.hpp"
#include "ad/physics/DurationValidInputRange.hpp"
#include "ad/rss/world/LateralRssAccelerationValuesValidInputRange.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"
#include "ad/rss/world/RssDynamics.hpp"

/*!
 * \brief check if the given RssDynamics is within valid input range
 *
 * \param[in] input the RssDynamics as an input value
 *
 * \returns \c true if RssDynamics is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Distance(0.) <= lateralFluctuationMargin <= ::ad::physics::Distance(1.)
 *       ::ad::physics::Duration(0.) < responseTime <= ::ad::physics::Duration(10.)
 */
inline bool withinValidInputRange(::ad::rss::world::RssDynamics const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.alphaLon) && withinValidInputRange(input.alphaLat)
    && withinValidInputRange(input.lateralFluctuationMargin) && withinValidInputRange(input.responseTime);

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Distance(0.) <= input.lateralFluctuationMargin)
      && (input.lateralFluctuationMargin <= ::ad::physics::Distance(1.));
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Duration(0.) < input.responseTime) && (input.responseTime <= ::ad::physics::Duration(10.));
  }

  return inValidInputRange;
}
