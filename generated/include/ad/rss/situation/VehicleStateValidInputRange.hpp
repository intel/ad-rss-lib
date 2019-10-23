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
#include "ad/rss/situation/VehicleState.hpp"
#include "ad/rss/situation/VelocityRangeValidInputRange.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"

/*!
 * \brief check if the given VehicleState is within valid input range
 *
 * \param[in] input the VehicleState as an input value
 *
 * \returns \c true if VehicleState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Distance(0.) <= distanceToEnterIntersection <= distanceToLeaveIntersection
 *       distanceToEnterIntersection <= distanceToLeaveIntersection <= ::ad::physics::Distance(1e4)
 */
inline bool withinValidInputRange(::ad::rss::situation::VehicleState const &input)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.velocity) && withinValidInputRange(input.dynamics)
    && withinValidInputRange(input.distanceToEnterIntersection)
    && withinValidInputRange(input.distanceToLeaveIntersection);

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Distance(0.) <= input.distanceToEnterIntersection)
      && (input.distanceToEnterIntersection <= input.distanceToLeaveIntersection);
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.distanceToEnterIntersection <= input.distanceToLeaveIntersection)
      && (input.distanceToLeaveIntersection <= ::ad::physics::Distance(1e4));
  }

  return inValidInputRange;
}
