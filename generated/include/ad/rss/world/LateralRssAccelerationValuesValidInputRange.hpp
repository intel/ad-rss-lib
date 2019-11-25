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
#include "ad/physics/AccelerationValidInputRange.hpp"
#include "ad/rss/world/LateralRssAccelerationValues.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LateralRssAccelerationValues is within valid input range
 *
 * \param[in] input the LateralRssAccelerationValues as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LateralRssAccelerationValues is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Acceleration(0.) <= accelMax <= ::ad::physics::Acceleration(1e2)
 *       ::ad::physics::Acceleration(0.) < brakeMin <= ::ad::physics::Acceleration(1e2)
 */
inline bool withinValidInputRange(::ad::rss::world::LateralRssAccelerationValues const &input,
                                  bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange
    = withinValidInputRange(input.accelMax, logErrors) && withinValidInputRange(input.brakeMin, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::LateralRssAccelerationValues)>> {} has invalid member",
                  input);
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Acceleration(0.) <= input.accelMax) && (input.accelMax <= ::ad::physics::Acceleration(1e2));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LateralRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.accelMax,
                    ::ad::physics::Acceleration(0.),
                    ::ad::physics::Acceleration(1e2));
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Acceleration(0.) < input.brakeMin) && (input.brakeMin <= ::ad::physics::Acceleration(1e2));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::world::LateralRssAccelerationValues)>> {} element {} out of "
                    "valid input range [{}, {}]",
                    input,
                    input.brakeMin,
                    ::ad::physics::Acceleration(0.),
                    ::ad::physics::Acceleration(1e2));
    }
  }

  return inValidInputRange;
}
