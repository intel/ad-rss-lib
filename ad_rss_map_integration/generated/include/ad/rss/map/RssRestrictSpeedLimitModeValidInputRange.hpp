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
#include "ad/rss/map/RssRestrictSpeedLimitMode.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssRestrictSpeedLimitMode is within valid input range
 *
 * \param[in] input the RssRestrictSpeedLimitMode as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssRestrictSpeedLimitMode is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::map::RssRestrictSpeedLimitMode const &input, bool const logErrors = true)
{
  bool inValidInputRange = (input == ::ad::rss::map::RssRestrictSpeedLimitMode::None)
    || (input == ::ad::rss::map::RssRestrictSpeedLimitMode::ExactSpeedLimit)
    || (input == ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit5)
    || (input == ::ad::rss::map::RssRestrictSpeedLimitMode::IncreasedSpeedLimit10);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::map::RssRestrictSpeedLimitMode)>> {}, raw value: {} ",
                  input,
                  static_cast<int32_t>(input)); // LCOV_EXCL_BR_LINE
  }
  return inValidInputRange;
}
