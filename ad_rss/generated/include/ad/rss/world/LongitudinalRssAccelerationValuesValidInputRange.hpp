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
 * Generator Version : 10.6.1-1904
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
 *       ::ad::physics::Acceleration(0.) <= accelMax <= ::ad::physics::Acceleration(1e2)
 *       brakeMin <= brakeMax <= ::ad::physics::Acceleration(1e2)
 *       brakeMinCorrect <= brakeMin <= brakeMax
 *       ::ad::physics::Acceleration(0.) < brakeMinCorrect <= brakeMin
 */
inline bool withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues const &input,
                                  bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.accelMax, logErrors)
    && withinValidInputRange(input.brakeMax, logErrors) && withinValidInputRange(input.brakeMin, logErrors)
    && withinValidInputRange(input.brakeMinCorrect, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Acceleration(0.) <= input.accelMax) && (input.accelMax <= ::ad::physics::Acceleration(1e2));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.accelMax,
                    ::ad::physics::Acceleration(0.),
                    ::ad::physics::Acceleration(1e2)); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.brakeMin <= input.brakeMax) && (input.brakeMax <= ::ad::physics::Acceleration(1e2));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.brakeMax,
                    input.brakeMin,
                    ::ad::physics::Acceleration(1e2)); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.brakeMinCorrect <= input.brakeMin) && (input.brakeMin <= input.brakeMax);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.brakeMin,
                    input.brakeMinCorrect,
                    input.brakeMax); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Acceleration(0.) < input.brakeMinCorrect) && (input.brakeMinCorrect <= input.brakeMin);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LongitudinalRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.brakeMinCorrect,
                    ::ad::physics::Acceleration(0.),
                    input.brakeMin); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
