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

#include "world/RssSituationIdProvider.hpp"
#include <algorithm>

namespace ad_rss {
namespace world {

RssSituationIdProvider::SituationData::SituationData(physics::TimeIndex timeIndex,
                                                     situation::SituationId const situationId,
                                                     Scene const &scene)
  : mTimeIndex(timeIndex)
  , mSituationType(scene.situationType)
  , mSituationId(situationId)
{
  if ((mSituationType == situation::SituationType::IntersectionEgoHasPriority)
      || (mSituationType == situation::SituationType::IntersectionObjectHasPriority)
      || (mSituationType == situation::SituationType::IntersectionSamePriority))
  {
    mEgoVehicleIntersectionArea = getIntersectionArea(scene.egoVehicleRoad);
    mObjectIntersectionArea = getIntersectionArea(scene.intersectingRoad);
  }
}

RssSituationIdProvider::SituationData::IntersectionArea
RssSituationIdProvider::SituationData::getIntersectionArea(RoadArea roadArea)
{
  IntersectionArea intersectionArea;
  for (auto &roadSegment : roadArea)
  {
    for (auto &laneSegment : roadSegment)
    {
      if (laneSegment.type == LaneSegmentType::Intersection)
      {
        intersectionArea.insert(laneSegment.id);
      }
    }
  }
  return intersectionArea;
}

bool RssSituationIdProvider::SituationData::isSmallerOrEqual(
  RssSituationIdProvider::SituationData::IntersectionArea const &left,
  RssSituationIdProvider::SituationData::IntersectionArea const &right) const
{
  if (right.size() < left.size())
  {
    return false;
  }
  std::size_t const expectedDifference = right.size() - left.size();
  IntersectionArea differenceSet;
  std::set_difference(right.begin(),
                      right.end(),
                      left.begin(),
                      left.end(),
                      std::insert_iterator<IntersectionArea>(differenceSet, differenceSet.begin()));
  return differenceSet.size() == expectedDifference;
}

bool RssSituationIdProvider::SituationData::updateSituation(physics::TimeIndex const timeIndex, Scene const &scene)
{
  if (scene.situationType != mSituationType)
  {
    return false;
  }

  IntersectionArea sceneEgoVehicleIntersectionArea;
  IntersectionArea sceneObjectIntersectionArea;

  if ((mSituationType == situation::SituationType::IntersectionEgoHasPriority)
      || (mSituationType == situation::SituationType::IntersectionObjectHasPriority)
      || (mSituationType == situation::SituationType::IntersectionSamePriority))
  {
    // extract the intersection areas of the scene
    sceneEgoVehicleIntersectionArea = getIntersectionArea(scene.egoVehicleRoad);
    if (!isSmallerOrEqual(sceneEgoVehicleIntersectionArea, mEgoVehicleIntersectionArea))
    {
      return false;
    }

    sceneObjectIntersectionArea = getIntersectionArea(scene.intersectingRoad);
    if (!isSmallerOrEqual(sceneObjectIntersectionArea, mObjectIntersectionArea))
    {
      return false;
    }
  }
  else
  {
    // there must be only one situation of all other types between two objects
    // therefore, the situation is treated to be the same if the situation type matches
  }

  mTimeIndex = timeIndex;
  return true;
}

void RssSituationIdProvider::updateTime(physics::TimeIndex const &timeIndex)
{
  if (timeIndex != mCurrentTime)
  {
    mLastTime = mCurrentTime;
    mCurrentTime = timeIndex;

    // next time step, remove outdated data
    for (auto iter = mSituationData.begin(); iter != mSituationData.end();)
    {
      if ((iter->second.mTimeIndex != mLastTime) && (iter->second.mTimeIndex != mCurrentTime))
      {
        iter = mSituationData.erase(iter);
      }
      else
      {
        ++iter;
      }
    }
  }
}

situation::SituationId RssSituationIdProvider::getSituationId(physics::TimeIndex const &timeIndex, Scene const &scene)
{
  updateTime(timeIndex);

  auto const objectDataRange = mSituationData.equal_range(scene.object.objectId);
  auto findResult = std::find_if(
    objectDataRange.first, objectDataRange.second, [&scene, this](SituationDataMap::value_type &situation) {
      return situation.second.updateSituation(this->mCurrentTime, scene);
    });
  if (findResult != objectDataRange.second)
  {
    return findResult->second.mSituationId;
  }
  auto insertResult = mSituationData.emplace_hint(
    objectDataRange.first, scene.object.objectId, SituationData(mCurrentTime, getFreeSituationId(), scene));
  if (insertResult != mSituationData.end())
  {
    return insertResult->second.mSituationId;
  }
  // LCOV_EXCL_START: unreachable code, keep to be on the safe side
  throw std::runtime_error("RssSituationIdProvider::getSituationId>> cannot add scene to situation map");
  // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
}

situation::SituationId RssSituationIdProvider::getFreeSituationId()
{
  bool situationIdFound = false;
  do // LCOV_EXCL_LINE: lcov analysis misses this line
  {
    mNextSituationId++;
    auto findResult = std::find_if(
      mSituationData.begin(), mSituationData.end(), [this](SituationDataMap::value_type const &situation) {
        return (situation.second.mSituationId == this->mNextSituationId);
      });
    situationIdFound = findResult == mSituationData.end();
  } while (!situationIdFound);

  return mNextSituationId;
}

} // namespace world
} // namespace ad_rss
