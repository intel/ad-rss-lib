/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 * Generator Version : 11.0.0-1988
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/physics/AngleValidInputRange.hpp"
#include "ad/physics/AngularVelocityValidInputRange.hpp"
#include "ad/physics/Dimension2DValidInputRange.hpp"
#include "ad/physics/Distance2DValidInputRange.hpp"
#include "ad/physics/SpeedValidInputRange.hpp"
#include "ad/rss/world/ObjectState.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given ObjectState is within valid input range
 *
 * \param[in] input the ObjectState as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if ObjectState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::world::ObjectState const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.yaw, logErrors) && withinValidInputRange(input.dimension, logErrors)
    && withinValidInputRange(input.yawRate, logErrors) && withinValidInputRange(input.centerPoint, logErrors)
    && withinValidInputRange(input.speed, logErrors) && withinValidInputRange(input.steeringAngle, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::world::ObjectState)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
