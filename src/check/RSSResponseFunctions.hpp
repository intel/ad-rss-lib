// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "rss/check/ResponseState.hpp"
#include "rss/lane/Situation.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS check datatypes and operations
 */
namespace check {

/**
 * @brief is response state longitudinal safe
 *
 * @param[in] responseState to check
 *
 * true if safe, false if not
 */
inline bool isLongitudinalSafe(ResponseState const &responseState) noexcept
{
  return responseState.longitudinalState.isSafe;
}

/**
 * @brief is response state lateral safe to the left
 *
 * @param[in] responseState to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafeLeft(ResponseState const &responseState) noexcept
{
  return responseState.lateralStateLeft.isSafe;
}

/**
 * @brief is response state lateral safe to the right
 *
 * @param[in] responseState to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafeRight(ResponseState const &responseState) noexcept
{
  return responseState.lateralStateRight.isSafe;
}

/**
 * @brief is response state lateral safe
 *
 * @param[in] responseState to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafe(ResponseState const &responseState) noexcept
{
  return isLateralSafeRight(responseState) && isLateralSafeLeft(responseState);
}

/**
 * @brief is response state dangerous
 *
 * @param[in] responseState to check
 *
 * true if dangerous, false if not
 */
inline bool isDangerous(ResponseState const &responseState) noexcept
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
template <typename RssState>
RssState combineRssState(RssState const &previousRssState, RssState const &newRssState) noexcept
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

} // namespace check
} // namespace rss
