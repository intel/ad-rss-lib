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
#include "ad/rss/state/HeadingRangeValidInputRange.hpp"
#include "ad/rss/state/LateralResponseValidInputRange.hpp"
#include "ad/rss/state/LongitudinalResponseValidInputRange.hpp"
#include "ad/rss/state/ProperResponse.hpp"
#include "ad/rss/world/AccelerationRestrictionValidInputRange.hpp"
#include "ad/rss/world/ObjectIdVectorValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given ProperResponse is within valid input range
 *
 * \param[in] input the ProperResponse as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if ProperResponse is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::rss::world::TimeIndex(1) <= timeIndex
 */
inline bool withinValidInputRange(::ad::rss::state::ProperResponse const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.dangerousObjects, logErrors)
    && withinValidInputRange(input.longitudinalResponse, logErrors)
    && withinValidInputRange(input.lateralResponseRight, logErrors)
    && withinValidInputRange(input.lateralResponseLeft, logErrors)
    && withinValidInputRange(input.headingRange, logErrors)
    && withinValidInputRange(input.accelerationRestrictions, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::ProperResponse)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::rss::world::TimeIndex(1) <= input.timeIndex);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error(
        "withinValidInputRange(::ad::rss::state::ProperResponse)>> {} element {} out of valid input range [{}, {}]",
        input,
        input.timeIndex,
        ::ad::rss::world::TimeIndex(1),
        "Undefined"); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
