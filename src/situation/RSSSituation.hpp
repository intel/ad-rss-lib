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

#include "rss/situation/Situation.hpp"
#include "rss/state/LateralRssState.hpp"
#include "rss/state/LongitudinalRssState.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS situation datatypes and operations
 */
namespace situation {

/**
 * @brief Calculate safety checks and determine required rssState for longitudinal direction for non intersection
 * scenario
 *
 * @param[in]  situation situation to analyze
 * @param[out] rssState  rssState of the ego vehicle
 *
 * @returns false if a failure occurred during calculations, true otherwise
 *
 */
bool calculateLongitudinalRssStateNonIntersection(Situation const &situation,
                                                  state::LongitudinalRssState &rssState) noexcept;

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
                                                               state::LongitudinalRssState &rssState) noexcept;

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
                                                                   state::LongitudinalRssState &rssState) noexcept;

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
                              state::LateralRssState &rssStateRight) noexcept;

} // namespace situation
} // namespace rss
