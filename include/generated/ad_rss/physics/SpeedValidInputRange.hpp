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

#include <ad_rss/physics/LoggingDefinitions.hpp>
#include <cmath>
#include <limits>
#include "ad_rss/physics/Speed.hpp"

/*!
 * \brief check if the given Speed is within valid input range
 *
 * \param[in] input the Speed as an input value
 *
 * \returns \c true if Speed is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       std::numeric_limits<::ad_rss::physics::Speed>::lowest() <= \c input <=
 * std::numeric_limits<::ad_rss::physics::Speed>::max()
 *       -100. <= \c input <= 100.
 */
inline bool withinValidInputRange(::ad_rss::physics::Speed const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    // check for generic numeric limits of the type
    bool const withinNumericLimits = (std::numeric_limits<::ad_rss::physics::Speed>::lowest() <= input)
      && (input <= std::numeric_limits<::ad_rss::physics::Speed>::max());

    // check for individual input range
    bool const inInputRange = (::ad_rss::physics::Speed(-100.) <= input) && (input <= ::ad_rss::physics::Speed(100.));

    return (withinNumericLimits && inInputRange);
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
