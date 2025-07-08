/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-2046
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/physics/DistanceValidInputRange.hpp"
#include "ad/rss/core/StructuredObjectState.hpp"
#include "ad/rss/world/VelocityValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given StructuredObjectState is within valid input range
 *
 * \param[in] input the StructuredObjectState as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if StructuredObjectState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Distance(0.) <= distance_to_enter_intersection <= distance_to_leave_intersection
 *       distance_to_enter_intersection <= distance_to_leave_intersection <= ::ad::physics::Distance(1e4)
 */
inline bool withinValidInputRange(::ad::rss::core::StructuredObjectState const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.velocity, logErrors)
    && withinValidInputRange(input.distance_to_enter_intersection, logErrors)
    && withinValidInputRange(input.distance_to_leave_intersection, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::core::StructuredObjectState)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Distance(0.) <= input.distance_to_enter_intersection)
      && (input.distance_to_enter_intersection <= input.distance_to_leave_intersection);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::core::StructuredObjectState)>> {} element {} out of valid input "
                    "range [{}, {}]",
                    input,
                    input.distance_to_enter_intersection,
                    ::ad::physics::Distance(0.),
                    input.distance_to_leave_intersection); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.distance_to_enter_intersection <= input.distance_to_leave_intersection)
      && (input.distance_to_leave_intersection <= ::ad::physics::Distance(1e4));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::core::StructuredObjectState)>> {} element {} out of valid input "
                    "range [{}, {}]",
                    input,
                    input.distance_to_leave_intersection,
                    input.distance_to_enter_intersection,
                    ::ad::physics::Distance(1e4)); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
