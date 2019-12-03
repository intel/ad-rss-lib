/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 10.6.0-1882
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/physics/DistanceValidInputRange.hpp"
#include "ad/rss/situation/VehicleState.hpp"
#include "ad/rss/situation/VelocityRangeValidInputRange.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given VehicleState is within valid input range
 *
 * \param[in] input the VehicleState as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if VehicleState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Distance(0.) <= distanceToEnterIntersection <= distanceToLeaveIntersection
 *       distanceToEnterIntersection <= distanceToLeaveIntersection <= ::ad::physics::Distance(1e4)
 */
inline bool withinValidInputRange(::ad::rss::situation::VehicleState const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.velocity, logErrors)
    && withinValidInputRange(input.dynamics, logErrors)
    && withinValidInputRange(input.distanceToEnterIntersection, logErrors)
    && withinValidInputRange(input.distanceToLeaveIntersection, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::situation::VehicleState)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Distance(0.) <= input.distanceToEnterIntersection)
      && (input.distanceToEnterIntersection <= input.distanceToLeaveIntersection);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::situation::VehicleState)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.distanceToEnterIntersection,
        ::ad::physics::Distance(0.),
        input.distanceToLeaveIntersection); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.distanceToEnterIntersection <= input.distanceToLeaveIntersection)
      && (input.distanceToLeaveIntersection <= ::ad::physics::Distance(1e4));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::situation::VehicleState)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.distanceToLeaveIntersection,
        input.distanceToEnterIntersection,
        ::ad::physics::Distance(1e4)); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
