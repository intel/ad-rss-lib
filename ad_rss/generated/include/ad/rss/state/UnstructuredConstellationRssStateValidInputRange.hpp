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
#include "ad/geometry/HeadingRangeValidInputRange.hpp"
#include "ad/rss/state/UnstructuredConstellationResponseValidInputRange.hpp"
#include "ad/rss/state/UnstructuredConstellationRssState.hpp"
#include "ad/rss/state/UnstructuredConstellationStateInformationValidInputRange.hpp"
#include "ad/rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given UnstructuredConstellationRssState is within valid input range
 *
 * \param[in] input the UnstructuredConstellationRssState as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if UnstructuredConstellationRssState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::state::UnstructuredConstellationRssState const &input,
                                  bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.response, logErrors)
    && withinValidInputRange(input.heading_range, logErrors)
    && withinValidInputRange(input.rss_state_information, logErrors)
    && withinValidInputRange(input.alpha_lon, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::UnstructuredConstellationRssState)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
