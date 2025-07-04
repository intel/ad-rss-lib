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
#include "ad/rss/core/RelativeConstellation.hpp"
#include "ad/rss/core/RelativeObjectStateValidInputRange.hpp"
#include "ad/rss/core/RelativePositionValidInputRange.hpp"
#include "ad/rss/world/ConstellationTypeValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RelativeConstellation is within valid input range
 *
 * \param[in] input the RelativeConstellation as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RelativeConstellation is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::core::RelativeConstellation const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.constellation_type, logErrors)
    && withinValidInputRange(input.ego_state, logErrors) && withinValidInputRange(input.other_state, logErrors)
    && withinValidInputRange(input.relative_position, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::core::RelativeConstellation)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
