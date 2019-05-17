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

#include <cstdint>
#include <map>
#include "ad_rss/physics/TimeIndex.hpp"
#include "ad_rss/situation/Situation.hpp"
#include "ad_rss/state/RssState.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/*!
 * \brief Enum LongitudinalResponse
 *
 * Enumeration defining the possible longitudinal responses
 *
 * Be aware: there has to be a strict order of the enumeration values according to
 * the strictness of the response
 */
enum class IntersectionState : std::uint32_t
{
  NonPrioAbleToBreak = 0u,       /*!< NonPrio-Vehicle can stop in front intersection */
  SafeLongitudinalDistance = 1u, /*!< There is a safe longitudinal distance  between the vehicles*/
  NoTimeOverlap = 2u             /*!< There is no time overlap between the paths of the two vehicles */
};

/**
 * @brief Class to check whether an intersection is safe and to determine the proper response for the situation
 *
 * Class performs required check to if situation is safe
 * Class will maintain the previous state of the situation in order to provide the proper response.
 */
class RssIntersectionChecker
{
public:
  /**
   * @brief Constructor
   */
  RssIntersectionChecker();

  /**
   * @brief Destructor
   */
  ~RssIntersectionChecker();

  /**
   * @brief Calculate safety checks and determine required rssState for intersection situations
   *
   * @param[in]  timeIndex the time index of the situation
   * @param[in]  situation situation to analyze
   * @param[out] rssState  rssState of the ego vehicle
   *
   * @returns false if a failure occurred during calculations, true otherwise
   *
   */
  bool calculateRssStateIntersection(physics::TimeIndex const &timeIndex,
                                     Situation const &situation,
                                     state::RssState &rssState);

private:
  typedef std::map<SituationId, IntersectionState> RssIntersectionStateMap;
  /**
   * @brief last safe IntersectionState of each situation of previous time step
   */
  RssIntersectionStateMap mLastSafeStateMap;

  /**
   * @brief last safe IntersectionState of each situation of current time step
   */
  RssIntersectionStateMap mCurrentSafeStateMap;

  /**
   * @brief time index of the current processing step
   * If time index increases we need to update the mLastSafeStateMap
   */
  physics::TimeIndex mCurrentTimeIndex{0u};
};

} // namespace situation
} // namespace ad_rss
