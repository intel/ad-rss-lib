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
#include "ad_rss/physics/SpeedValidInputRange.hpp"
#include "ad_rss/world/DltDefinitions.hpp"
#include "ad_rss/world/Velocity.hpp"

/*!
 * \brief check if the given Velocity is within valid input range
 *
 * \param[in] input the Velocity as an input value
 *
 * \returns \c true if Velocity is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Speed(0.) <= speedLon <= ::ad_rss::physics::Speed(100.)
 *       ::ad_rss::physics::Speed(-10.) <= speedLat <= ::ad_rss::physics::Speed(10.)
 */
inline bool withinValidInputRange(::ad_rss::world::Velocity const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic member input ranges
    bool const membersInValidInputRange
      = withinValidInputRange(input.speedLon) && withinValidInputRange(input.speedLat);

    // check for individual input ranges
    bool const speedLonInInputRange
      = (::ad_rss::physics::Speed(0.) <= input.speedLon) && (input.speedLon <= ::ad_rss::physics::Speed(100.));

    bool const speedLatInInputRange
      = (::ad_rss::physics::Speed(-10.) <= input.speedLat) && (input.speedLat <= ::ad_rss::physics::Speed(10.));

    return membersInValidInputRange && speedLonInInputRange && speedLatInInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
