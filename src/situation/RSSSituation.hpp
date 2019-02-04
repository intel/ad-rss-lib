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
 * @brief namespace for RSS situation datatypes and operations
 */
namespace situation {

/**
 * @brief Calculate safety checks and determine required responseState for non intersection same direction scenario
 *
 * @param[in]  situation situation to analyze
 * @param[out] responseState  response state of the ego vehicle
 *
 * @returns false if a failure occurred during calculations, true otherwise
 */
bool calculateRssStateNonIntersectionSameDirection(Situation const &situation, state::ResponseState &responseState);

/**
 * @brief Calculate safety checks and determine required responseState for non intersection opposite direction scenario
 *
 * @param[in]  situation situation to analyze
 * @param[out] responseState  response state of the ego vehicle
 *
 * @returns false if a failure occurred during calculations, true otherwise
 */
bool calculateRssStateNonIntersectionOppositeDirection(Situation const &situation, state::ResponseState &responseState);

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
