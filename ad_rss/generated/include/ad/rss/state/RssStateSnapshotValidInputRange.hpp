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
 * Generator Version : 11.0.0-1917
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/state/RssStateSnapshot.hpp"
#include "ad/rss/state/RssStateVectorValidInputRange.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssStateSnapshot is within valid input range
 *
 * \param[in] input the RssStateSnapshot as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssStateSnapshot is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::rss::world::TimeIndex(1) <= timeIndex
 */
inline bool withinValidInputRange(::ad::rss::state::RssStateSnapshot const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.defaultEgoVehicleRssDynamics, logErrors)
    && withinValidInputRange(input.individualResponses, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::RssStateSnapshot)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::rss::world::TimeIndex(1) <= input.timeIndex);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::state::RssStateSnapshot)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.timeIndex,
        ::ad::rss::world::TimeIndex(1),
        "Undefined"); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
