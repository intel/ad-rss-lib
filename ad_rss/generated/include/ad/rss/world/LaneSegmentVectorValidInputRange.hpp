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
#include "ad/rss/world/LaneSegmentValidInputRange.hpp"
#include "ad/rss/world/LaneSegmentVector.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given LaneSegmentVector is within valid input range
 *
 * \param[in] input the LaneSegmentVector as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if LaneSegmentVector is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       1 <= \c input.size() <= 20
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad::rss::world::LaneSegmentVector const &input, bool const logErrors = true)
{
  bool inValidInputRange = ((std::size_t(1)) <= input.size()) && (input.size() <= std::size_t(20));
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::LaneSegmentVector)>> {}, invalid input range",
                  input); // LCOV_EXCL_BR_LINE
  }

  if (inValidInputRange)
  {
    for (auto const &member : input)
    {
      bool memberInValidInputRange = withinValidInputRange(member, logErrors);
      inValidInputRange = inValidInputRange && memberInValidInputRange;
      if (!memberInValidInputRange && logErrors)
      {
        spdlog::error("withinValidInputRange(::ad::rss::world::LaneSegmentVector)>> {}, invalid member {}",
                      input,
                      member); // LCOV_EXCL_BR_LINE
      }
    }
  }
  return inValidInputRange;
}
