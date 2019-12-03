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
 * Generator Version : 10.6.0-1882
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/state/LateralResponseValidInputRange.hpp"
#include "ad/rss/state/LateralRssState.hpp"
#include "ad/rss/state/RssStateInformationValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LateralRssState is within valid input range
 *
 * \param[in] input the LateralRssState as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LateralRssState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::state::LateralRssState const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange
    = withinValidInputRange(input.response, logErrors) && withinValidInputRange(input.rssStateInformation, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::LateralRssState)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
