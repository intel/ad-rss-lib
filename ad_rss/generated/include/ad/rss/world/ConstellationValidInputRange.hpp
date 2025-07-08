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
#include "ad/rss/world/Constellation.hpp"
#include "ad/rss/world/ConstellationTypeValidInputRange.hpp"
#include "ad/rss/world/ObjectValidInputRange.hpp"
#include "ad/rss/world/RoadAreaValidInputRange.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given Constellation is within valid input range
 *
 * \param[in] input the Constellation as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if Constellation is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::Constellation const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.constellation_type, logErrors)
    && withinValidInputRange(input.ego_vehicle, logErrors)
    && withinValidInputRange(input.ego_vehicle_rss_dynamics, logErrors)
    && withinValidInputRange(input.object, logErrors) && withinValidInputRange(input.object_rss_dynamics, logErrors)
    && withinValidInputRange(input.intersecting_road, logErrors)
    && withinValidInputRange(input.ego_vehicle_road, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::Constellation)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
