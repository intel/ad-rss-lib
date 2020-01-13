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
 * Generator Version : 11.0.0-1911
 */

#pragma once

#include <cmath>
#include <limits>
#include "ad/rss/situation/RelativePositionValidInputRange.hpp"
#include "ad/rss/situation/Situation.hpp"
#include "ad/rss/situation/SituationTypeValidInputRange.hpp"
#include "ad/rss/situation/VehicleStateValidInputRange.hpp"
#include "spdlog/fmt/ostr.h"
#include "spdlog/spdlog.h"

/*!
 * \brief check if the given Situation is within valid input range
 *
 * \param[in] input the Situation as an input value
 * \param[in] logErrors enables error logging
 *
 * \returns \c true if Situation is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members
 */
inline bool withinValidInputRange(::ad::rss::situation::Situation const &input, bool const logErrors = true)
{
  // check for generic member input ranges
  bool inValidInputRange = true;
  inValidInputRange = withinValidInputRange(input.situationType, logErrors)
    && withinValidInputRange(input.egoVehicleState, logErrors)
    && withinValidInputRange(input.otherVehicleState, logErrors)
    && withinValidInputRange(input.relativePosition, logErrors);
  if (!inValidInputRange && logErrors)
  {
    spdlog::error("withinValidInputRange(::ad::rss::situation::Situation)>> {} has invalid member",
                  input); // LCOV_EXCL_BR_LINE
  }

  return inValidInputRange;
}
