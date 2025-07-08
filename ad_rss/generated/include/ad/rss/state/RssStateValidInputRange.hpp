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
#include "ad/rss/state/LateralRssStateValidInputRange.hpp"
#include "ad/rss/state/LongitudinalRssStateValidInputRange.hpp"
#include "ad/rss/state/RssState.hpp"
#include "ad/rss/state/UnstructuredConstellationRssStateValidInputRange.hpp"
#include "ad/rss/world/ConstellationTypeValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssState is within valid input range
 *
 * \param[in] input the RssState as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::state::RssState const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.longitudinal_state, logErrors)
    && withinValidInputRange(input.lateral_state_right, logErrors)
    && withinValidInputRange(input.lateral_state_left, logErrors)
    && withinValidInputRange(input.unstructured_constellation_state, logErrors)
    && withinValidInputRange(input.constellation_type, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::RssState)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
