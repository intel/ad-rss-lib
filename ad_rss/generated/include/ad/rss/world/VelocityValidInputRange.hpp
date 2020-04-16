/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/physics/SpeedValidInputRange.hpp"
#include "ad/rss/world/Velocity.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given Velocity is within valid input range
 *
 * \param[in] input the Velocity as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if Velocity is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Speed(0.) <= speedLonMin <= speedLonMax
 *       speedLonMin <= speedLonMax <= ::ad::physics::Speed(100.)
 *       ::ad::physics::Speed(-100.) <= speedLatMin <= speedLatMax
 *       speedLatMin <= speedLatMax <= ::ad::physics::Speed(100.)
 */
inline bool withinValidInputRange(::ad::rss::world::Velocity const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.speedLonMin, logErrors)
    && withinValidInputRange(input.speedLonMax, logErrors) && withinValidInputRange(input.speedLatMin, logErrors)
    && withinValidInputRange(input.speedLatMax, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::Velocity)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Speed(0.) <= input.speedLonMin) && (input.speedLonMin <= input.speedLonMax);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speedLonMin,
        ::ad::physics::Speed(0.),
        input.speedLonMax); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.speedLonMin <= input.speedLonMax) && (input.speedLonMax <= ::ad::physics::Speed(100.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speedLonMax,
        input.speedLonMin,
        ::ad::physics::Speed(100.)); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Speed(-100.) <= input.speedLatMin) && (input.speedLatMin <= input.speedLatMax);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speedLatMin,
        ::ad::physics::Speed(-100.),
        input.speedLatMax); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (input.speedLatMin <= input.speedLatMax) && (input.speedLatMax <= ::ad::physics::Speed(100.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speedLatMax,
        input.speedLatMin,
        ::ad::physics::Speed(100.)); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
