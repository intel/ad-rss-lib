// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "rss/situation/Situation.hpp"
#include "rss/state/ResponseState.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS state datatypes and operations
 */
namespace state {

/**
 * @brief is response state longitudinal safe
 *
 * @param[in] responseState to check
 *
 * true if safe, false if not
 */
inline bool isLongitudinalSafe(ResponseState const &responseState)
{
  return responseState.longitudinalState.isSafe;
}

/**
 * @brief is response state lateral safe
 *
 * @param[in] responseState to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafe(ResponseState const &responseState)
{
  return responseState.lateralStateRight.isSafe && responseState.lateralStateLeft.isSafe;
}

/**
 * @brief is response state dangerous
 *
 * @param[in] responseState to check
 *
 * true if dangerous, false if not
 */
inline bool isDangerous(ResponseState const &responseState)
{
  return !isLongitudinalSafe(responseState) && !isLateralSafe(responseState);
}

/**
 * @brief determine the resulting RSS state
 *
 * @param[in] previousRssState the previous RSS state
 * @param[in] newRssState      the RSS state to be considered in addition
 *
 * The RSS states are combined in a form that the most severe state of both becomes the result state.
 * Therefore, if one is safe and the other not, the non-safe state is returned.
 * If both states are either declared as safe or as non-safe, the responses are compared with each other.
 * That comparison is performed on the enumeration values of the responses.
 * Therefore, these values need have to be ordered strictly ascending in respect to their severity.
 *
 * @returns the resulting RSS state
 */
template <typename RssState> RssState combineRssState(RssState const &previousRssState, RssState const &newRssState)
{
  if (previousRssState.isSafe == newRssState.isSafe)
  {
    if (previousRssState.response > newRssState.response)
    {
      return previousRssState;
    }
  }
  else if (!previousRssState.isSafe)
  {
    return previousRssState;
  }
  return newRssState;
}

} // namespace state
} // namespace rss
