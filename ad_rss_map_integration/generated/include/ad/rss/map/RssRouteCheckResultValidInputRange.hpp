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
#include "ad/rss/core/RssSituationSnapshotValidInputRange.hpp"
#include "ad/rss/map/RssRouteCheckResult.hpp"
#include "ad/rss/map/RssRouteValidInputRange.hpp"
#include "ad/rss/state/ProperResponseValidInputRange.hpp"
#include "ad/rss/state/RssStateSnapshotValidInputRange.hpp"
#include "ad/rss/world/WorldModelValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssRouteCheckResult is within valid input range
 *
 * \param[in] input the RssRouteCheckResult as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssRouteCheckResult is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::map::RssRouteCheckResult const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.rss_route, logErrors)
    && withinValidInputRange(input.world_model, logErrors)
    && withinValidInputRange(input.rss_situation_snapshot, logErrors)
    && withinValidInputRange(input.rss_state_snapshot, logErrors)
    && withinValidInputRange(input.proper_response, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::map::RssRouteCheckResult)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
