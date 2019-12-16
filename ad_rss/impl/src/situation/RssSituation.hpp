// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/situation/Situation.hpp"
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
 * @brief namespace situation
 */
namespace situation {

/**
 * @brief Calculate safety checks and determine required rssState for non intersection same direction scenario
 *
 * @param[in]  situation situation to analyze
 * @param[out] rssState  response state of the ego vehicle
 *
 * @returns false if a failure occurred during calculations, true otherwise
 */
bool calculateRssStateNonIntersectionSameDirection(Situation const &situation, state::RssState &rssState);

/**
 * @brief Calculate safety checks and determine required rssState for non intersection opposite direction scenario
 *
 * @param[in]  situation situation to analyze
 * @param[out] rssState  response state of the ego vehicle
 *
 * @returns false if a failure occurred during calculations, true otherwise
 */
bool calculateRssStateNonIntersectionOppositeDirection(Situation const &situation, state::RssState &rssState);

/**
 * @brief Calculate safety checks and determine required rssState for longitudinal direction for
 * non intersection scenario when both vehicles are driving in same direction
 *
 * @param[in]  situation situation to analyze
 * @param[out] rssState  rssState of the ego vehicle
 *
 * @returns false if a failure occurred during calculations, true otherwise
 *
 */
bool calculateLongitudinalRssStateNonIntersectionSameDirection(Situation const &situation,
                                                               state::LongitudinalRssState &rssState);

/**
 * @brief Calculate safety checks and determine required rssState for longitudinal direction for
 * non intersection scenario when vehicles are driving in opposite direction
 *
 * @param[in]  situation situation to analyze
 * @param[out] rssState  rssState of the ego vehicle
 *
 * @returns false if a failure occurred during calculations, true otherwise
 *
 */
bool calculateLongitudinalRssStateNonIntersectionOppositeDirection(Situation const &situation,
                                                                   state::LongitudinalRssState &rssState);

/**
 * @brief Calculate safety checks and determine required rssState for lateral direction
 *
 * @param[in] situation      situation to analyze
 * @param[out] rssStateLeft  rssState of the ego vehicle at its left side
 * @param[out] rssStateRight rssState of the ego vehicle at its right side
 *
 * @returns false if a failure occurred during calculations, true otherwise
 *
 */
bool calculateLateralRssState(Situation const &situation,
                              state::LateralRssState &rssStateLeft,
                              state::LateralRssState &rssStateRight);

} // namespace situation
} // namespace rss
} // namespace ad
