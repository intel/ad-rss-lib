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
#include "ad/physics/AccelerationValidInputRange.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValues.hpp"

/*!
 * \brief check if the given LongitudinalRssAccelerationValues is within valid input range
 *
 * \param[in] input the LongitudinalRssAccelerationValues as an input value
 *
 * \returns \c true if LongitudinalRssAccelerationValues is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Acceleration(0.) <= accelMax <= ::ad::physics::Acceleration(1e2)
 *       brakeMin <= brakeMax <= ::ad::physics::Acceleration(1e2)
 *       brakeMinCorrect <= brakeMin <= brakeMax
 *       ::ad::physics::Acceleration(0.) < brakeMinCorrect <= brakeMin
 */
inline bool withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.accelMax) && withinValidInputRange(input.brakeMax)
    && withinValidInputRange(input.brakeMin) && withinValidInputRange(input.brakeMinCorrect);

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Acceleration(0.) <= input.accelMax) && (input.accelMax <= ::ad::physics::Acceleration(1e2));
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.brakeMin <= input.brakeMax) && (input.brakeMax <= ::ad::physics::Acceleration(1e2));
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.brakeMinCorrect <= input.brakeMin) && (input.brakeMin <= input.brakeMax);
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Acceleration(0.) < input.brakeMinCorrect) && (input.brakeMinCorrect <= input.brakeMin);
  }

  return inValidInputRange;
}
