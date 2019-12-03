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
#include "ad/rss/situation/SituationTypeValidInputRange.hpp"
#include "ad/rss/world/ObjectValidInputRange.hpp"
#include "ad/rss/world/RoadAreaValidInputRange.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"
#include "ad/rss/world/Scene.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given Scene is within valid input range
 *
 * \param[in] input the Scene as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if Scene is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::Scene const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.situationType, logErrors)
    && withinValidInputRange(input.egoVehicle, logErrors) && withinValidInputRange(input.object, logErrors)
    && withinValidInputRange(input.objectRssDynamics, logErrors)
    && withinValidInputRange(input.intersectingRoad, logErrors)
    && withinValidInputRange(input.egoVehicleRoad, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::Scene)>> {} has invalid member", input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
