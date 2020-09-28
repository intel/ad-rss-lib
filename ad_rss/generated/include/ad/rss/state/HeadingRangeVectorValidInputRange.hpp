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
#include "ad/rss/state/HeadingRangeValidInputRange.hpp"
#include "ad/rss/state/HeadingRangeVector.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given HeadingRangeVector is within valid input range
 *
 * \param[in] input the HeadingRangeVector as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if HeadingRangeVector is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       0 <= \c input.size() <= 0
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad::rss::state::HeadingRangeVector const &input, bool const logErrors = true)
{
  bool inValidInputRange = true;

  if (inValidInputRange)
  {
    for (auto const &member : input)
    {
      bool memberInValidInputRange = withinValidInputRange(member, logErrors);
      inValidInputRange = inValidInputRange && memberInValidInputRange;
      if (!memberInValidInputRange && logErrors)
      {
        spdlog::error("withinValidInputRange(::ad::rss::state::HeadingRangeVector)>> {}, invalid member {}",
                      input,
                      member); // LCOV_EXCL_BR_LINE
      }
    }
  }
  return inValidInputRange;
}
