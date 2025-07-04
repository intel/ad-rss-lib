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
#include "ad/physics/AccelerationValidInputRange.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValues.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LongitudinalRssAccelerationValues is within valid input range
 *
 * \param[in] input the LongitudinalRssAccelerationValues as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LongitudinalRssAccelerationValues is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Acceleration(0.) <= accel_max <= ::ad::physics::Acceleration(1e2)
 *       ::ad::physics::Acceleration(-1e2) <= brake_max <= brake_min
 *       brake_max <= brake_min <= brake_min_correct
 *       brake_min <= brake_min_correct < ::ad::physics::Acceleration(0.)
 */
inline bool withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues const &input,
                                  bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.accel_max, logErrors)
    && withinValidInputRange(input.brake_max, logErrors) && withinValidInputRange(input.brake_min, logErrors)
    && withinValidInputRange(input.brake_min_correct, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Acceleration(0.) <= input.accel_max) && (input.accel_max <= ::ad::physics::Acceleration(1e2));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.accel_max,
                    ::ad::physics::Acceleration(0.),
                    ::ad::physics::Acceleration(1e2)); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Acceleration(-1e2) <= input.brake_max) && (input.brake_max <= input.brake_min);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.brake_max,
                    ::ad::physics::Acceleration(-1e2),
                    input.brake_min); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.brake_max <= input.brake_min) && (input.brake_min <= input.brake_min_correct);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.brake_min,
                    input.brake_max,
                    input.brake_min_correct); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (input.brake_min <= input.brake_min_correct) && (input.brake_min_correct < ::ad::physics::Acceleration(0.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.brake_min_correct,
                    input.brake_min,
                    ::ad::physics::Acceleration(0.)); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
