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
 * Generator Version : 11.0.0-1911
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/situation/CoordinateSystemAxis.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given CoordinateSystemAxis is within valid input range
 *
 * \param[in] input the CoordinateSystemAxis as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if CoordinateSystemAxis is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad::rss::situation::CoordinateSystemAxis const &input, bool const logErrors = true)
{
  bool inValidInputRange = (input == ::ad::rss::situation::CoordinateSystemAxis::Longitudinal)
    || (input == ::ad::rss::situation::CoordinateSystemAxis::Lateral);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::situation::CoordinateSystemAxis)>> {}, raw value: {} ",
                  input,
                  static_cast<int32_t>(input)); // LCOV_EXCL_BR_LINE
  }
  return inValidInputRange;
}
