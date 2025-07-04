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
#include "ad/physics/AccelerationValidInputRange.hpp"
#include "ad/rss/map/RssEgoVehicleDynamicsOnRoute.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssEgoVehicleDynamicsOnRoute is within valid input range
 *
 * \param[in] input the RssEgoVehicleDynamicsOnRoute as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssEgoVehicleDynamicsOnRoute is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::map::RssEgoVehicleDynamicsOnRoute const &input,
                                  bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.route_accel_lon, logErrors)
    && withinValidInputRange(input.route_accel_lat, logErrors)
    && withinValidInputRange(input.avg_route_accel_lon, logErrors)
    && withinValidInputRange(input.avg_route_accel_lat, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::map::RssEgoVehicleDynamicsOnRoute)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
