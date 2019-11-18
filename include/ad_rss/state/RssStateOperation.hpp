// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad_rss/state/RssState.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace for RSS state datatypes and operations
 */
namespace state {

/**
 * @brief is rss state longitudinal safe
 *
 * @param[in] rssState to check
 *
 * true if safe, false if not
 */
inline bool isLongitudinalSafe(RssState const &rssState)
{
  return rssState.longitudinalState.isSafe;
}

/**
 * @brief is rss state lateral safe
 *
 * @param[in] rssState to check
 *
 * true if safe, false if not
 */
inline bool isLateralSafe(RssState const &rssState)
{
  return rssState.lateralStateRight.isSafe && rssState.lateralStateLeft.isSafe;
}

/**
 * @brief is rss state dangerous
 *
 * @param[in] rssState to check
 *
 * true if dangerous, false if not
 */
inline bool isDangerous(RssState const &rssState)
{
  return !isLongitudinalSafe(rssState) && !isLateralSafe(rssState);
}

} // namespace state
} // namespace ad_rss
