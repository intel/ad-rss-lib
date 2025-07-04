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
#include "ad/physics/AngleValidInputRange.hpp"
#include "ad/physics/AngularAccelerationValidInputRange.hpp"
#include "ad/physics/DistanceValidInputRange.hpp"
#include "ad/physics/DurationValidInputRange.hpp"
#include "ad/rss/world/UnstructuredSettings.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given UnstructuredSettings is within valid input range
 *
 * \param[in] input the UnstructuredSettings as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if UnstructuredSettings is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::UnstructuredSettings const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.pedestrian_turning_radius, logErrors)
    && withinValidInputRange(input.drive_away_max_angle, logErrors)
    && withinValidInputRange(input.vehicle_yaw_rate_change, logErrors)
    && withinValidInputRange(input.vehicle_min_radius, logErrors)
    && withinValidInputRange(input.vehicle_trajectory_calculation_step, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::UnstructuredSettings)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
