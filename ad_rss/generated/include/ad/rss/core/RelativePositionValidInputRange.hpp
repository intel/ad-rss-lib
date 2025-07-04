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
#include "ad/physics/DistanceValidInputRange.hpp"
#include "ad/rss/core/LateralRelativePositionValidInputRange.hpp"
#include "ad/rss/core/LongitudinalRelativePositionValidInputRange.hpp"
#include "ad/rss/core/RelativePosition.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RelativePosition is within valid input range
 *
 * \param[in] input the RelativePosition as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RelativePosition is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::core::RelativePosition const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.longitudinal_position, logErrors)
    && withinValidInputRange(input.longitudinal_distance, logErrors)
    && withinValidInputRange(input.lateral_position, logErrors)
    && withinValidInputRange(input.lateral_distance, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::core::RelativePosition)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
