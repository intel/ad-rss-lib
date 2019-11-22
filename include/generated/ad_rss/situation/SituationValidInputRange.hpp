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
#include "ad_rss/situation/RelativePositionValidInputRange.hpp"
#include "ad_rss/situation/Situation.hpp"
#include "ad_rss/situation/SituationTypeValidInputRange.hpp"
#include "ad_rss/situation/VehicleStateValidInputRange.hpp"

/*!
 * \brief check if the given Situation is within valid input range
 *
 * \param[in] input the Situation as an input value
 *
 * \returns \c true if Situation is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad_rss::situation::Situation const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.situationType)
      && withinValidInputRange(input.egoVehicleState) && withinValidInputRange(input.otherVehicleState)
      && withinValidInputRange(input.relativePosition);

    return membersInValidInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
