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

#include <ad_rss/world/LoggingDefinitions.hpp>
#include <cmath>
#include <limits>
#include "ad_rss/physics/AccelerationValidInputRange.hpp"
#include "ad_rss/world/LongitudinalRssAccelerationValuesDlt.hpp"

/*!
 * \brief check if the given LongitudinalRssAccelerationValues is within valid input range
 *
 * \param[in] input the LongitudinalRssAccelerationValues as an input value
 *
 * \returns \c true if LongitudinalRssAccelerationValues is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Acceleration(0.) <= accelMax <= ::ad_rss::physics::Acceleration(1e2)
 *       brakeMin <= brakeMax <= ::ad_rss::physics::Acceleration(1e2)
 *       brakeMinCorrect <= brakeMin <= brakeMax
 *       ::ad_rss::physics::Acceleration(0.) < brakeMinCorrect <= brakeMin
 */
inline bool withinValidInputRange(::ad_rss::world::LongitudinalRssAccelerationValues const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange = withinValidInputRange(input.accelMax) && withinValidInputRange(input.brakeMax)
      && withinValidInputRange(input.brakeMin) && withinValidInputRange(input.brakeMinCorrect);
    if (!membersInValidInputRange)
    {
      DLT_LOG_CXX(
        ::ad_rss::world::getLoggingContext(),
        DLT_LOG_ERROR,
        "withinValidInputRange(::ad_rss::world::LongitudinalRssAccelerationValues)>> members out of valid range",
        input);
    }

    // check for individual input ranges
    bool const accelMaxInInputRange = (::ad_rss::physics::Acceleration(0.) <= input.accelMax)
      && (input.accelMax <= ::ad_rss::physics::Acceleration(1e2));
    if (!accelMaxInInputRange)
    {
      DLT_LOG_CXX(::ad_rss::world::getLoggingContext(),
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::world::LongitudinalRssAccelerationValues)>> accelMax:",
                  input.accelMax,
                  "out of valid range [",
                  ::ad_rss::physics::Acceleration(0.),
                  ",",
                  ::ad_rss::physics::Acceleration(1e2),
                  "]");
    }

    bool const brakeMaxInInputRange
      = (input.brakeMin <= input.brakeMax) && (input.brakeMax <= ::ad_rss::physics::Acceleration(1e2));
    if (!brakeMaxInInputRange)
    {
      DLT_LOG_CXX(::ad_rss::world::getLoggingContext(),
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::world::LongitudinalRssAccelerationValues)>> brakeMax:",
                  input.brakeMax,
                  "out of valid range [",
                  input.brakeMin,
                  ",",
                  ::ad_rss::physics::Acceleration(1e2),
                  "]");
    }

    bool const brakeMinInInputRange = (input.brakeMinCorrect <= input.brakeMin) && (input.brakeMin <= input.brakeMax);
    if (!brakeMinInInputRange)
    {
      DLT_LOG_CXX(::ad_rss::world::getLoggingContext(),
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::world::LongitudinalRssAccelerationValues)>> brakeMin:",
                  input.brakeMin,
                  "out of valid range [",
                  input.brakeMinCorrect,
                  ",",
                  input.brakeMax,
                  "]");
    }

    bool const brakeMinCorrectInInputRange
      = (::ad_rss::physics::Acceleration(0.) < input.brakeMinCorrect) && (input.brakeMinCorrect <= input.brakeMin);
    if (!brakeMinCorrectInInputRange)
    {
      DLT_LOG_CXX(::ad_rss::world::getLoggingContext(),
                  DLT_LOG_ERROR,
                  "withinValidInputRange(::ad_rss::world::LongitudinalRssAccelerationValues)>> brakeMinCorrect:",
                  input.brakeMinCorrect,
                  "out of valid range (",
                  ::ad_rss::physics::Acceleration(0.),
                  ",",
                  input.brakeMin,
                  "]");
    }

    return membersInValidInputRange && accelMaxInInputRange && brakeMaxInInputRange && brakeMinInInputRange
      && brakeMinCorrectInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
    DLT_LOG_CXX(::ad_rss::world::getLoggingContext(),
                DLT_LOG_ERROR,
                "withinValidInputRange(::ad_rss::world::LongitudinalRssAccelerationValues)>> out of range exception");
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
