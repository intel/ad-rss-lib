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
 * Generator Version : 11.0.0-1997
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/physics/DistanceValidInputRange.hpp"
#include "ad/physics/DurationValidInputRange.hpp"
#include "ad/physics/SpeedValidInputRange.hpp"
#include "ad/rss/world/LateralRssAccelerationValuesValidInputRange.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"
#include "ad/rss/world/RssDynamics.hpp"
#include "ad/rss/world/UnstructuredSettingsValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssDynamics is within valid input range
 *
 * \param[in] input the RssDynamics as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssDynamics is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::physics::Distance(0.) <= lateralFluctuationMargin <= ::ad::physics::Distance(1.)
 *       ::ad::physics::Duration(0.) < responseTime <= ::ad::physics::Duration(10.)
 */
inline bool withinValidInputRange(::ad::rss::world::RssDynamics const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.alphaLon, logErrors)
    && withinValidInputRange(input.alphaLat, logErrors)
    && withinValidInputRange(input.lateralFluctuationMargin, logErrors)
    && withinValidInputRange(input.responseTime, logErrors)
    && withinValidInputRange(input.maxSpeedOnAcceleration, logErrors)
    && withinValidInputRange(input.unstructuredSettings, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::RssDynamics)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::physics::Distance(0.) <= input.lateralFluctuationMargin)
      && (input.lateralFluctuationMargin <= ::ad::physics::Distance(1.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::RssDynamics)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.lateralFluctuationMargin,
        ::ad::physics::Distance(0.),
        ::ad::physics::Distance(1.)); // LCOV_EXCL_BR_LINE
    }
  }

  if (inValidInputRange)
  {
    inValidInputRange
      = (::ad::physics::Duration(0.) < input.responseTime) && (input.responseTime <= ::ad::physics::Duration(10.));
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::world::RssDynamics)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.responseTime,
        ::ad::physics::Duration(0.),
        ::ad::physics::Duration(10.)); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
