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
#include "ad/rss/state/LongitudinalResponse.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LongitudinalResponse is within valid input range
 *
 * \param[in] input the LongitudinalResponse as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LongitudinalResponse is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::state::LongitudinalResponse const &input, bool const logErrors = true)
{
  bool inValidInputRange = (input == ::ad::rss::state::LongitudinalResponse::None)
    || (input == ::ad::rss::state::LongitudinalResponse::BrakeMinCorrect)
    || (input == ::ad::rss::state::LongitudinalResponse::BrakeMin);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::state::LongitudinalResponse)>> {}, raw value: {} ",
                  input,
                  static_cast<int32_t>(input)); // LCOV_EXCL_BR_LINE
  }
  return inValidInputRange;
}
