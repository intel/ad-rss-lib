/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/**
 * Generated file
 * @file
 *
 */

#pragma once

#include <ad_rss/situation/LoggingDefinitions.hpp>
#include <cmath>
#include <limits>
#include "ad_rss/physics/DistanceValidInputRange.hpp"
#include "ad_rss/physics/DurationValidInputRange.hpp"
#include "ad_rss/situation/VehicleStateDlt.hpp"
#include "ad_rss/world/DynamicsValidInputRange.hpp"
#include "ad_rss/world/VelocityValidInputRange.hpp"

/*!
 * \brief check if the given VehicleState is within valid input range
 *
 * \param[in] input the VehicleState as an input value
 *
 * \returns \c true if VehicleState is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Duration(0.) < responseTime <= ::ad_rss::physics::Duration(10.)
 *       ::ad_rss::physics::Distance(0.) <= distanceToEnterIntersection <= distanceToLeaveIntersection
 *       distanceToEnterIntersection <= distanceToLeaveIntersection <= ::ad_rss::physics::Distance(1e4)
 */
inline bool withinValidInputRange(::ad_rss::situation::VehicleState const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.velocity) && withinValidInputRange(input.dynamics)
      && withinValidInputRange(input.responseTime) && withinValidInputRange(input.distanceToEnterIntersection)
      && withinValidInputRange(input.distanceToLeaveIntersection);
    if (!membersInValidInputRange)
    {
      DLT_LOG_CXX(::ad_rss::situation::getLoggingContext(),
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::situation::VehicleState)>> members out of valid range",
                  input);
    }

    // check for individual input ranges
    bool const responseTimeInInputRange = (::ad_rss::physics::Duration(0.) < input.responseTime)
      && (input.responseTime <= ::ad_rss::physics::Duration(10.));
    if (!responseTimeInInputRange)
    {
      DLT_LOG_CXX(::ad_rss::situation::getLoggingContext(),
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::situation::VehicleState)>> responseTime:",
                  input.responseTime,
                  "out of valid range (",
                  ::ad_rss::physics::Duration(0.),
                  ",",
                  ::ad_rss::physics::Duration(10.),
                  "]");
    }

    bool const distanceToEnterIntersectionInInputRange
      = (::ad_rss::physics::Distance(0.) <= input.distanceToEnterIntersection)
      && (input.distanceToEnterIntersection <= input.distanceToLeaveIntersection);
    if (!distanceToEnterIntersectionInInputRange)
    {
      DLT_LOG_CXX(::ad_rss::situation::getLoggingContext(),
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::situation::VehicleState)>> distanceToEnterIntersection:",
                  input.distanceToEnterIntersection,
                  "out of valid range [",
                  ::ad_rss::physics::Distance(0.),
                  ",",
                  input.distanceToLeaveIntersection,
                  "]");
    }

    bool const distanceToLeaveIntersectionInInputRange
      = (input.distanceToEnterIntersection <= input.distanceToLeaveIntersection)
      && (input.distanceToLeaveIntersection <= ::ad_rss::physics::Distance(1e4));
    if (!distanceToLeaveIntersectionInInputRange)
    {
      DLT_LOG_CXX(::ad_rss::situation::getLoggingContext(),
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::situation::VehicleState)>> distanceToLeaveIntersection:",
                  input.distanceToLeaveIntersection,
                  "out of valid range [",
                  input.distanceToEnterIntersection,
                  ",",
                  ::ad_rss::physics::Distance(1e4),
                  "]");
    }

    return membersInValidInputRange && responseTimeInInputRange && distanceToEnterIntersectionInInputRange
      && distanceToLeaveIntersectionInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
    DLT_LOG_CXX(::ad_rss::situation::getLoggingContext(),
                DLT_LOG_ERROR,
                "withinValidInputRange(::ad_rss::situation::VehicleState)>> out of range exception");
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
