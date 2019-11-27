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
 * Generator Version : 10.6.0-1878
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/state/LateralRssStateValidInputRange.hpp"
#include "ad/rss/state/LongitudinalRssStateValidInputRange.hpp"
#include "ad/rss/state/RssState.hpp"
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
  inValidInputRange = withinValidInputRange(input.longitudinalState, logErrors)
    && withinValidInputRange(input.lateralStateRight, logErrors)
    && withinValidInputRange(input.lateralStateLeft, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::RssState)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
