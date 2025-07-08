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
#include "ad/rss/map/RssConstellationConfiguration.hpp"
#include "ad/rss/map/RssConstellationCreationModeValidInputRange.hpp"
#include "ad/rss/map/RssRestrictSpeedLimitModeValidInputRange.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssConstellationConfiguration is within valid input range
 *
 * \param[in] input the RssConstellationConfiguration as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssConstellationConfiguration is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::map::RssConstellationConfiguration const &input,
                                  bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.constellation_creation_mode, logErrors)
    && withinValidInputRange(input.restrict_speed_limit_mode, logErrors)
    && withinValidInputRange(input.ego_vehicle_dynamics, logErrors)
    && withinValidInputRange(input.object_dynamics, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::map::RssConstellationConfiguration)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
