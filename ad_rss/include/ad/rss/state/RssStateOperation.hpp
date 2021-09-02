// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/state/RssState.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
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
 * @brief is rss unstructured scene state safe
 *
 * @param[in] rssState to check
 *
 * true if safe, false if not
 */
inline bool isUnstructuredSceneSafe(RssState const &rssState)
{
  return rssState.unstructuredSceneState.isSafe;
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
  if (rssState.situationType == ad::rss::situation::SituationType::Unstructured)
  {
    return !isUnstructuredSceneSafe(rssState);
  }
  else
  {
    return !isLongitudinalSafe(rssState) && !isLateralSafe(rssState);
  }
}

} // namespace state
} // namespace rss
} // namespace ad
