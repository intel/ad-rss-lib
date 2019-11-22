/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad_rss/physics/DistanceValidInputRange.hpp"
#include "ad_rss/situation/VehicleState.hpp"
#include "ad_rss/situation/VelocityRangeValidInputRange.hpp"
#include "ad_rss/world/RssDynamicsValidInputRange.hpp"

/*!
 * \brief check if the given VehicleState is within valid input range
 *
 * \param[in] input the VehicleState as an input value
 *
 * \returns \c true if VehicleState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Distance(0.) <= distanceToEnterIntersection <= distanceToLeaveIntersection
 *       distanceToEnterIntersection <= distanceToLeaveIntersection <= ::ad_rss::physics::Distance(1e4)
 */
inline bool withinValidInputRange(::ad_rss::situation::VehicleState const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.velocity) && withinValidInputRange(input.dynamics)
      && withinValidInputRange(input.distanceToEnterIntersection)
      && withinValidInputRange(input.distanceToLeaveIntersection);

    // check for individual input ranges
    bool const distanceToEnterIntersectionInInputRange
      = (::ad_rss::physics::Distance(0.) <= input.distanceToEnterIntersection)
      && (input.distanceToEnterIntersection <= input.distanceToLeaveIntersection);

    bool const distanceToLeaveIntersectionInInputRange
      = (input.distanceToEnterIntersection <= input.distanceToLeaveIntersection)
      && (input.distanceToLeaveIntersection <= ::ad_rss::physics::Distance(1e4));

    return membersInValidInputRange && distanceToEnterIntersectionInInputRange
      && distanceToLeaveIntersectionInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
