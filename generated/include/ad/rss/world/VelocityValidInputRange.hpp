/*
 * Copyright (C) 2019 Intel Corporation
 */

/**
 * Generated file
 * @file
 *
 * Model Library     : RSS.ad_rss_data_type_lib
 * Model Version     : 0.0.0
 * Generator         : mo2ive_generator_mockup
 * Generator Version : @GENERATOR_VERSION@
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
 *       ::ad::physics::Speed(0.) <= speedLon <= ::ad::physics::Speed(100.)
 *       ::ad::physics::Speed(-10.) <= speedLat <= ::ad::physics::Speed(10.)
 */
inline bool withinValidInputRange(::ad::rss::world::Velocity const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange
    = withinValidInputRange(input.speedLon, logErrors) && withinValidInputRange(input.speedLat, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::Velocity)>> {} has invalid member", input);
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Speed(0.) <= input.speedLon) && (input.speedLon <= ::ad::physics::Speed(100.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speedLon,
        ::ad::physics::Speed(0.),
        ::ad::physics::Speed(100.));
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Speed(-10.) <= input.speedLat) && (input.speedLat <= ::ad::physics::Speed(10.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::Velocity)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.speedLat,
        ::ad::physics::Speed(-10.),
        ::ad::physics::Speed(10.));
    }
  }

  return inValidInputRange;
}
