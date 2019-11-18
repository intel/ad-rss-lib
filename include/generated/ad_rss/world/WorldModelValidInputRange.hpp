/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad_rss/world/RssDynamicsValidInputRange.hpp"
#include "ad_rss/world/SceneVectorValidInputRange.hpp"
#include "ad_rss/world/WorldModel.hpp"

/*!
 * \brief check if the given WorldModel is within valid input range
 *
 * \param[in] input the WorldModel as an input value
 *
 * \returns \c true if WorldModel is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::TimeIndex(1) <= timeIndex
 */
inline bool withinValidInputRange(::ad_rss::world::WorldModel const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange
      = withinValidInputRange(input.egoVehicleRssDynamics) && withinValidInputRange(input.scenes);

    // check for individual input ranges
    bool const timeIndexInInputRange = (::ad_rss::physics::TimeIndex(1) <= input.timeIndex);

    return membersInValidInputRange && timeIndexInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
