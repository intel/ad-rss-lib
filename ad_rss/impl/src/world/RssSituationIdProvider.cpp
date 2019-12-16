// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RssSituationIdProvider.hpp"
#include <algorithm>

namespace ad {
namespace rss {
namespace world {

RssSituationIdProvider::SituationData::SituationData(TimeIndex timeIndex,
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

bool RssSituationIdProvider::SituationData::updateSituation(TimeIndex const timeIndex, Scene const &scene)
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

void RssSituationIdProvider::updateTime(TimeIndex const &timeIndex)
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

situation::SituationId RssSituationIdProvider::getSituationId(TimeIndex const &timeIndex, Scene const &scene)
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
} // namespace rss
} // namespace ad
