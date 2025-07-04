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
#include "ad/map/match/ObjectValidInputRange.hpp"
#include "ad/physics/AngleValidInputRange.hpp"
#include "ad/physics/AngularVelocityValidInputRange.hpp"
#include "ad/physics/SpeedRangeValidInputRange.hpp"
#include "ad/rss/map/RssObjectData.hpp"
#include "ad/rss/world/ObjectTypeValidInputRange.hpp"
#include "ad/rss/world/RssDynamicsValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given RssObjectData is within valid input range
 *
 * \param[in] input the RssObjectData as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if RssObjectData is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::map::RssObjectData const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.type, logErrors)
    && withinValidInputRange(input.match_object, logErrors) && withinValidInputRange(input.speed_range, logErrors)
    && withinValidInputRange(input.yaw_rate, logErrors) && withinValidInputRange(input.steering_angle, logErrors)
    && withinValidInputRange(input.rss_dynamics, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::map::RssObjectData)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
