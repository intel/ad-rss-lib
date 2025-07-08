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
 *       ::ad::physics::Speed(0.) <= speed_lon_min <= speed_lon_max
 *       speed_lon_min <= speed_lon_max <= ::ad::physics::Speed(100.)
 *       ::ad::physics::Speed(-100.) <= speed_lat_min <= speed_lat_max
 *       speed_lat_min <= speed_lat_max <= ::ad::physics::Speed(100.)
 */
inline bool withinValidInputRange(::ad::rss::world::Velocity const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.speed_lon_min, logErrors)
    && withinValidInputRange(input.speed_lon_max, logErrors) && withinValidInputRange(input.speed_lat_min, logErrors)
    && withinValidInputRange(input.speed_lat_max, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::Velocity)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Speed(0.) <= input.speed_lon_min) && (input.speed_lon_min <= input.speed_lon_max);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speed_lon_min,
        ::ad::physics::Speed(0.),
        input.speed_lon_max); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (input.speed_lon_min <= input.speed_lon_max) && (input.speed_lon_max <= ::ad::physics::Speed(100.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speed_lon_max,
        input.speed_lon_min,
        ::ad::physics::Speed(100.)); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Speed(-100.) <= input.speed_lat_min) && (input.speed_lat_min <= input.speed_lat_max);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speed_lat_min,
        ::ad::physics::Speed(-100.),
        input.speed_lat_max); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (input.speed_lat_min <= input.speed_lat_max) && (input.speed_lat_max <= ::ad::physics::Speed(100.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speed_lat_max,
        input.speed_lat_min,
        ::ad::physics::Speed(100.)); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
