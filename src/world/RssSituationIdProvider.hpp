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

#include <map>
#include <set>
#include "ad_rss/physics/TimeIndex.hpp"
#include "ad_rss/situation/SituationId.hpp"
#include "ad_rss/world/Scene.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

/*!
 * @brief class supporting to keep track of unique situation ids
 *
 * Situation id's have to be constant over time.
 */
class RssSituationIdProvider
{
public:
  /*!
   * @brief default constructor
   */
  RssSituationIdProvider() = default;

  /*!
   * @brief default destructor
   */
  ~RssSituationIdProvider() = default;

  /*!
   * @brief get the situation id of the given scene
   *
   * @param[in] timeIndex the time index the scene refers to
   * @param[in] scene the relevant scene
   *
   * @return the situation id assigned to the given scene
   */
  situation::SituationId getSituationId(physics::TimeIndex const &timeIndex, Scene const &scene);

private:
  struct SituationData
  {
    SituationData(physics::TimeIndex timeIndex, situation::SituationId const situationId, Scene const &scene);
    /*!
     * @brief update the current situation data in case the scene matches the situation data
     *
     * @return \c true if the update succeeded, \c false if the scene doesn't match the situation
     */
    bool updateSituation(physics::TimeIndex timeIndex, Scene const &scene);

    typedef std::set<LaneSegmentId> IntersectionArea;

    /*!
     * Most of the time the intersection areas are identical
     * If a vehicle has already entered the intersection, the areas are shrinking,
     * but still have to be identical from end on
     * As a consequence the whole new areas have to be within the old ones.
     *
     * @return \c true if the left intersection area is fully contained in the right one.
     */
    bool isSmallerOrEqual(IntersectionArea const &left, IntersectionArea const &right) const;

    /*!
     * @brief extract the intersection area from the RoadArea
     */
    IntersectionArea getIntersectionArea(RoadArea roadArea);

    physics::TimeIndex mTimeIndex;
    situation::SituationType mSituationType;
    situation::SituationId mSituationId;
    IntersectionArea mEgoVehicleIntersectionArea;
    IntersectionArea mObjectIntersectionArea;
  };

  /*!
   * Update the time and free outdated data.
   *
   * @param[in] timeIndex the current time index
   */
  void updateTime(physics::TimeIndex const &timeIndex);

  /*!
   * @brief get the next free situation id
   */
  situation::SituationId getFreeSituationId();

  typedef std::multimap<ObjectId, SituationData> SituationDataMap;

  physics::TimeIndex mCurrentTime{0};
  physics::TimeIndex mLastTime{0};
  situation::SituationId mNextSituationId{0};
  SituationDataMap mSituationData;
};

} // namespace world
} // namespace ad_rss
