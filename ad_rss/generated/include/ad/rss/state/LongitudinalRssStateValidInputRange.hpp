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
#include "ad/rss/state/LongitudinalResponseValidInputRange.hpp"
#include "ad/rss/state/LongitudinalRssState.hpp"
#include "ad/rss/state/RssStateInformationValidInputRange.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LongitudinalRssState is within valid input range
 *
 * \param[in] input the LongitudinalRssState as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LongitudinalRssState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::state::LongitudinalRssState const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.response, logErrors)
    && withinValidInputRange(input.alphaLon, logErrors) && withinValidInputRange(input.rssStateInformation, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::LongitudinalRssState)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
