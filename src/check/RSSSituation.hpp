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

#include "rss/check/LateralRssState.hpp"
#include "rss/check/LongitudinalRssState.hpp"
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
 * @brief Calculate safety checks and determine required rssState for longitudinal direction for non intersection
 * scenario
 *
 * @param[in]  situation situation to analyze
 * @param[out] rssState  rssState of the ego vehicle
 *
 * @returns false if a failure occurred during calculations, true otherwise
 *
 */
bool calculateLongitudinalRssStateNonIntersection(lane::Situation const &situation,
                                                  LongitudinalRssState &rssState) noexcept;

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
bool calculateLongitudinalRssStateNonIntersectionSameDirection(lane::Situation const &situation,
                                                               LongitudinalRssState &rssState) noexcept;

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
bool calculateLongitudinalRssStateNonIntersectionOppositeDirection(lane::Situation const &situation,
                                                                   LongitudinalRssState &rssState) noexcept;

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
bool calculateLateralRssState(lane::Situation const &situation,
                              LateralRssState &rssStateLeft,
                              LateralRssState &rssStateRight) noexcept;

} // namespace check
} // namespace rss
