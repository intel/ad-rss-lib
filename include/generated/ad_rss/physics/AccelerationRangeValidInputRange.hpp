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

#include <cmath>
#include <limits>
#include "ad_rss/physics/AccelerationRangeDlt.hpp"
#include "ad_rss/physics/AccelerationValidInputRange.hpp"
#include "ad_rss/physics/DltDefinitions.hpp"

/*!
 * \brief check if the given AccelerationRange is within valid input range
 *
 * \param[in] input the AccelerationRange as an input value
 * \param[in] dltContext the logging context for error logging
 *
 * \returns \c true if AccelerationRange is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Acceleration(-1e2) <= minimum <= maximum
 *       minimum <= maximum <= ::ad_rss::physics::Acceleration(1e2)
 */
inline bool withinValidInputRange(::ad_rss::physics::AccelerationRange const &input, DltContext &dltContext)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange
      = withinValidInputRange(input.minimum, dltContext) && withinValidInputRange(input.maximum, dltContext);
    if (!membersInValidInputRange)
    {
      DLT_LOG_CXX(dltContext,
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::world::AccelerationRange)>> members out of valid range",
                  input);
    }

    // check for individual input ranges
    bool const minimumInInputRange
      = (::ad_rss::physics::Acceleration(-1e2) <= input.minimum) && (input.minimum <= input.maximum);
    if (!minimumInInputRange)
    {
      DLT_LOG_CXX(dltContext,
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::world::AccelerationRange)>> minimum:",
                  input.minimum,
                  "out of valid range [",
                  ::ad_rss::physics::Acceleration(-1e2),
                  ",",
                  input.maximum,
                  "]");
    }

    bool const maximumInInputRange
      = (input.minimum <= input.maximum) && (input.maximum <= ::ad_rss::physics::Acceleration(1e2));
    if (!maximumInInputRange)
    {
      DLT_LOG_CXX(dltContext,
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::world::AccelerationRange)>> maximum:",
                  input.maximum,
                  "out of valid range [",
                  input.minimum,
                  ",",
                  ::ad_rss::physics::Acceleration(1e2),
                  "]");
    }

    return membersInValidInputRange && minimumInInputRange && maximumInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
    DLT_LOG_CXX(
      dltContext, DLT_LOG_ERROR, "withinValidInputRange(::ad_rss::world::AccelerationRange)>> out of range exception");
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
