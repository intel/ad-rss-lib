// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/structured/RssConstellationIdProvider.hpp"
#include <algorithm>

namespace ad {
namespace rss {
namespace structured {

RssConstellationIdProvider::ConstellationData::ConstellationData(world::TimeIndex time_index,
                                                                 core::RelativeConstellationId const constellation_id,
                                                                 world::Constellation const &constellation)
  : mTimeIndex(time_index)
  , mConstellationType(constellation.constellation_type)
  , mConstellationId(constellation_id)
{
  if ((mConstellationType == world::ConstellationType::IntersectionEgoHasPriority)
      || (mConstellationType == world::ConstellationType::IntersectionObjectHasPriority)
      || (mConstellationType == world::ConstellationType::IntersectionSamePriority))
  {
    mEgoVehicleIntersectionArea = getIntersectionArea(constellation.ego_vehicle_road);
    mObjectIntersectionArea = getIntersectionArea(constellation.intersecting_road);
  }
}

RssConstellationIdProvider::ConstellationData::IntersectionArea
RssConstellationIdProvider::ConstellationData::getIntersectionArea(world::RoadArea roadArea)
{
  IntersectionArea intersectionArea;
  for (auto &roadSegment : roadArea)
  {
    if (roadSegment.type == world::RoadSegmentType::Intersection)
    {
      for (auto &laneSegment : roadSegment.lane_segments)
      {
        intersectionArea.insert(laneSegment.id);
      }
    }
  }
  return intersectionArea;
}

bool RssConstellationIdProvider::ConstellationData::isSmallerOrEqual(
  RssConstellationIdProvider::ConstellationData::IntersectionArea const &left,
  RssConstellationIdProvider::ConstellationData::IntersectionArea const &right) const
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

bool RssConstellationIdProvider::ConstellationData::updateConstellation(world::TimeIndex const time_index,
                                                                        world::Constellation const &constellation)
{
  if (constellation.constellation_type != mConstellationType)
  {
    return false;
  }

  IntersectionArea constellationEgoVehicleIntersectionArea;
  IntersectionArea constellationObjectIntersectionArea;

  if ((mConstellationType == world::ConstellationType::IntersectionEgoHasPriority)
      || (mConstellationType == world::ConstellationType::IntersectionObjectHasPriority)
      || (mConstellationType == world::ConstellationType::IntersectionSamePriority))
  {
    // extract the intersection areas of the constellation
    constellationEgoVehicleIntersectionArea = getIntersectionArea(constellation.ego_vehicle_road);
    if (!isSmallerOrEqual(constellationEgoVehicleIntersectionArea, mEgoVehicleIntersectionArea))
    {
      return false;
    }

    constellationObjectIntersectionArea = getIntersectionArea(constellation.intersecting_road);
    if (!isSmallerOrEqual(constellationObjectIntersectionArea, mObjectIntersectionArea))
    {
      return false;
    }
  }
  else
  {
    // there must be only one constellation of all other types between two objects
    // therefore, the constellation is treated to be the same if the constellation type matches
  }

  mTimeIndex = time_index;
  return true;
}

void RssConstellationIdProvider::updateTime(world::TimeIndex const &time_index)
{
  if (time_index != mCurrentTime)
  {
    mLastTime = mCurrentTime;
    mCurrentTime = time_index;

    // next time step, remove outdated data
    for (auto iter = mConstellationData.begin(); iter != mConstellationData.end();)
    {
      if ((iter->second.mTimeIndex != mLastTime) && (iter->second.mTimeIndex != mCurrentTime))
      {
        iter = mConstellationData.erase(iter);
      }
      else
      {
        ++iter;
      }
    }
  }
}

void RssConstellationIdProvider::dropConstellationIds(world::ObjectId const &object_id)
{
  mConstellationData.erase(object_id);
}

core::RelativeConstellationId RssConstellationIdProvider::getConstellationId(world::TimeIndex const &time_index,
                                                                             world::Constellation const &constellation)
{
  updateTime(time_index);

  auto const objectDataRange = mConstellationData.equal_range(constellation.object.object_id);
  auto findResult
    = std::find_if(objectDataRange.first,
                   objectDataRange.second,
                   [&constellation, this](ConstellationDataMap::value_type &constellationData) {
                     return constellationData.second.updateConstellation(this->mCurrentTime, constellation);
                   });
  if (findResult != objectDataRange.second)
  {
    return findResult->second.mConstellationId;
  }
  auto insertResult
    = mConstellationData.emplace_hint(objectDataRange.first,
                                      constellation.object.object_id,
                                      ConstellationData(mCurrentTime, getFreeConstellationId(), constellation));
  if (insertResult != mConstellationData.end())
  {
    return insertResult->second.mConstellationId;
  }
  // LCOV_EXCL_START: unreachable code, keep to be on the safe side
  throw std::runtime_error(
    "RssConstellationIdProvider::getConstellationId>> cannot add constellation to constellation map");
  // LCOV_EXCL_STOP: unreachable code, keep to be on the safe side
}

core::RelativeConstellationId RssConstellationIdProvider::getFreeConstellationId()
{
  bool constellationIdFound = false;
  do // LCOV_EXCL_LINE: lcov analysis misses this line
  {
    mNextConstellationId++;
    auto findResult = std::find_if(mConstellationData.begin(),
                                   mConstellationData.end(),
                                   [this](ConstellationDataMap::value_type const &constellation) {
                                     return (constellation.second.mConstellationId == this->mNextConstellationId);
                                   });
    constellationIdFound = findResult == mConstellationData.end();
  } while (!constellationIdFound);

  return mNextConstellationId;
}

} // namespace structured
} // namespace rss
} // namespace ad
