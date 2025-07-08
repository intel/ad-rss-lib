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
#include "ad/map/point/ENUHeadingValidInputRange.hpp"
#include "ad/map/point/ENUPointValidInputRange.hpp"
#include "ad/physics/AngleValidInputRange.hpp"
#include "ad/physics/DistanceValidInputRange.hpp"
#include "ad/physics/SpeedValidInputRange.hpp"
#include "ad/rss/map/RssObjectDataOnRoute.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssObjectDataOnRoute is within valid input range
 *
 * \param[in] input the RssObjectDataOnRoute as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssObjectDataOnRoute is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::map::RssObjectDataOnRoute const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.route_heading, logErrors)
    && withinValidInputRange(input.route_radius, logErrors)
    && withinValidInputRange(input.route_heading_delta, logErrors)
    && withinValidInputRange(input.route_speed_lat, logErrors)
    && withinValidInputRange(input.route_speed_lon, logErrors)
    && withinValidInputRange(input.object_center_position_projected_on_route, logErrors)
    && withinValidInputRange(input.object_center_distance_to_route, logErrors)
    && withinValidInputRange(input.object_center_position_projected_on_lane_in_nominal_route_direction, logErrors)
    && withinValidInputRange(input.object_center_distance_along_route, logErrors)
    && withinValidInputRange(input.nominal_center_position_of_lane_in_nominal_route_direction, logErrors)
    && withinValidInputRange(input.object_route_section_front_left, logErrors)
    && withinValidInputRange(input.object_route_section_front_right, logErrors)
    && withinValidInputRange(input.object_route_section_back_left, logErrors)
    && withinValidInputRange(input.object_route_section_back_right, logErrors)
    && withinValidInputRange(input.object_turning_center, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::map::RssObjectDataOnRoute)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
