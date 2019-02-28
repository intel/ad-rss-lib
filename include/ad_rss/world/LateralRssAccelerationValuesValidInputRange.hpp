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
#include "ad_rss/physics/AccelerationValidInputRange.hpp"
#include "ad_rss/world/LateralRssAccelerationValues.hpp"

/*!
 * \brief check if the given LateralRssAccelerationValues is within valid input range
 *
 * \param[in] input the LateralRssAccelerationValues as an input value
 *
 * \returns \true if LateralRssAccelerationValues is considered to be within the specified input range
 *
 * \note the specified input range is defined by the ranges of all members, plus:
 *       ::ad_rss::physics::Acceleration(0.) <= accelMax <= ::ad_rss::physics::Acceleration(10.)
 *       ::ad_rss::physics::Acceleration(0.) < brakeMin <= ::ad_rss::physics::Acceleration(10.)
 */
inline bool withinValidInputRange(::ad_rss::world::LateralRssAccelerationValues const &input)
{
  try
  {
    // check for generic member input ranges
    bool const membersInValidInputRange
      = withinValidInputRange(input.accelMax) && withinValidInputRange(input.brakeMin);

    // check for individual input ranges
    bool const accelMaxInInputRange = (::ad_rss::physics::Acceleration(0.) <= input.accelMax)
      && (input.accelMax <= ::ad_rss::physics::Acceleration(10.));

    bool const brakeMinInInputRange = (::ad_rss::physics::Acceleration(0.) < input.brakeMin)
      && (input.brakeMin <= ::ad_rss::physics::Acceleration(10.));

    return membersInValidInputRange && accelMaxInInputRange && brakeMinInInputRange;
  }
  catch (std::out_of_range &)
  {
  }
  return false;
}
