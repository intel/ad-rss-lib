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
#include "ad_rss/world/LaneDrivingDirection.hpp"

/*!
 * \brief check if the given LaneDrivingDirection is within valid input range
 *
 * \param[in] input the LaneDrivingDirection as an input value
 *
 * \returns \c true if LaneDrivingDirection is considered to be within the specified input range
 *
 * \note the specified input range is defined by the valid enum literals.
 */
inline bool withinValidInputRange(::ad_rss::world::LaneDrivingDirection const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    return (input == ::ad_rss::world::LaneDrivingDirection::Bidirectional)
      || (input == ::ad_rss::world::LaneDrivingDirection::Positive)
      || (input == ::ad_rss::world::LaneDrivingDirection::Negative);
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
