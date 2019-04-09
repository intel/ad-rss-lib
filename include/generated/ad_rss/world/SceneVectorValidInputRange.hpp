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
#include "ad_rss/world/SceneValidInputRange.hpp"
#include "ad_rss/world/SceneVector.hpp"

/*!
 * \brief check if the given SceneVector is within valid input range
 *
 * \param[in] input the SceneVector as an input value
 *
 * \returns \c true if SceneVector is considered to be within the specified input range
 *
 * \note the specified input range is defined by
 *       0 <= \c input.size() <= 1000
 *       and the ranges of all vector elements
 */
inline bool withinValidInputRange(::ad_rss::world::SceneVector const &input)
{
  try
  {
    // LCOV_EXCL_BR_START: not always possible to cover especially all exception branches
    bool inValidInputRange = (input.size() <= std::size_t(1000));

    if (inValidInputRange)
    {
      for (auto const &member : input)
      {
        bool const memberInValidInputRange = withinValidInputRange(member);
        if (!memberInValidInputRange)
        {
          DLT_LOG_CXX(::ad_rss::world::getLoggingContext(),
                      DLT_LOG_ERROR,
                      "withinValidInputRange(::ad_rss::world::SceneVector)>> member out of valid range",
                      member);
        }
        inValidInputRange = inValidInputRange && memberInValidInputRange;
      }
    }
    return inValidInputRange;
    // LCOV_EXCL_BR_STOP: not always possible to cover especially all exception branches
  }
  // LCOV_EXCL_START: not possible to cover these lines for all generated datatypes
  catch (std::out_of_range &)
  {
    DLT_LOG_CXX(::ad_rss::world::getLoggingContext(),
                DLT_LOG_ERROR,
                "withinValidInputRange(::ad_rss::world::SceneVector)>> out of range exception");
  }
  return false;
  // LCOV_EXCL_STOP: not possible to cover these lines for all generated datatypes
}
