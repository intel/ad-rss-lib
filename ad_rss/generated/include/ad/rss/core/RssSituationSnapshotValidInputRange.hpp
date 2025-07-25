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
#include "ad/rss/core/RelativeConstellationVectorValidInputRange.hpp"
#include "ad/rss/core/RssSituationSnapshot.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssSituationSnapshot is within valid input range
 *
 * \param[in] input the RssSituationSnapshot as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssSituationSnapshot is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad::rss::world::TimeIndex(1) <= time_index
 */
inline bool withinValidInputRange(::ad::rss::core::RssSituationSnapshot const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.default_ego_vehicle_rss_dynamics, logErrors)
    && withinValidInputRange(input.constellations, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::core::RssSituationSnapshot)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  // check for individual input ranges
  if (inValidInputRange)
  {
    inValidInputRange = (::ad::rss::world::TimeIndex(1) <= input.time_index);
    if (!inValidInputRange && logErrors)
    {
      spdlog::error("withinValidInputRange(::ad::rss::core::RssSituationSnapshot)>> {} element {} out of valid input "
                    "range [{}, {}]",
                    input,
                    input.time_index,
                    ::ad::rss::world::TimeIndex(1),
                    "Undefined"); // LCOV_EXCL_BR_LINE
    }
  }

  return inValidInputRange;
}
