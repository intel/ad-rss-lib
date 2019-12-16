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
 * Generator Version : 10.6.1-1894
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/world/LaneDrivingDirection.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LaneDrivingDirection is within valid input range
 *
 * \param[in] input the LaneDrivingDirection as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LaneDrivingDirection is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::world::LaneDrivingDirection const &input, bool const logErrors = true)
{
  bool inValidInputRange = (input == ::ad::rss::world::LaneDrivingDirection::Bidirectional)
    || (input == ::ad::rss::world::LaneDrivingDirection::Positive)
    || (input == ::ad::rss::world::LaneDrivingDirection::Negative);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::LaneDrivingDirection)>> {}, raw value: {} ",
                  input,
                  static_cast<int32_t>(input)); // LCOV_EXCL_BR_LINE
  }
  return inValidInputRange;
}
