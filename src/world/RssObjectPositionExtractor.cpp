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

#include "RssObjectPositionExtractor.hpp"

#include <algorithm>

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

RssObjectPositionExtractor::RssObjectPositionExtractor(OccupiedRegionVector const &occupiedRegions)
  : mOccupiedRegions(occupiedRegions)
{
  mObjectDimensions.intersectionPosition.maximum = 0;
}

bool RssObjectPositionExtractor::newRoadSegment(physics::Distance const &longitudinalStartMin,
                                                physics::Distance const &longitudinalStartMax)
{
  bool result = true;

  mCurrentLongitudinalMax = longitudinalStartMax;
  mCurrentLongitudinalMin = longitudinalStartMin;

  return result;
}

bool RssObjectPositionExtractor::newLaneSegment(physics::MetricRange lateralDistance, LaneSegment const &laneSegment)
{
  bool result = true;

  bool noAdditionalObjects = false;
  while (!noAdditionalObjects && !mOccupiedRegions.empty())
  {
    auto objectSegment
      = std::find_if(mOccupiedRegions.begin(), mOccupiedRegions.end(), [laneSegment](OccupiedRegion region) {
          return region.segmentId == laneSegment.id;
        });
    if (objectSegment == mOccupiedRegions.end())
    {
      noAdditionalObjects = true;
    }
    else
    {
      physics::Distance latMinPosition
        = lateralDistance.minimum + (objectSegment->latRange.minimum * laneSegment.width.minimum);
      physics::Distance latMaxPosition
        = lateralDistance.maximum + (objectSegment->latRange.maximum * laneSegment.width.maximum);

      physics::Distance lonMinPosition
        = mCurrentLongitudinalMin + (objectSegment->lonRange.minimum * laneSegment.length.minimum);
      physics::Distance lonMaxPosition
        = mCurrentLongitudinalMax + (objectSegment->lonRange.maximum * laneSegment.length.maximum);

      mObjectDimensions.lateralDimensions.minimum
        = std::min(mObjectDimensions.lateralDimensions.minimum, latMinPosition);
      mObjectDimensions.lateralDimensions.maximum
        = std::max(mObjectDimensions.lateralDimensions.maximum, latMaxPosition);

      mObjectDimensions.longitudinalDimensions.minimum
        = std::min(mObjectDimensions.longitudinalDimensions.minimum, lonMinPosition);
      mObjectDimensions.longitudinalDimensions.maximum
        = std::max(mObjectDimensions.longitudinalDimensions.maximum, lonMaxPosition);

      if (laneSegment.drivingDirection == ::ad_rss::world::LaneDrivingDirection::Positive)
      {
        mObjectDimensions.onPositiveLane = true;
      }

      if (laneSegment.drivingDirection == ::ad_rss::world::LaneDrivingDirection::Negative)
      {
        mObjectDimensions.onNegativeLane = true;
      }

      mOccupiedRegions.erase(objectSegment);
    }
  }

  if (!mIntersectionReached && !mIntersectionEndReached
      && (laneSegment.type == ::ad_rss::world::LaneSegmentType::Intersection))
  {
    mObjectDimensions.intersectionPosition.minimum = mCurrentLongitudinalMin;
    mObjectDimensions.intersectionPosition.maximum
      = std::max(physics::Distance(mCurrentLongitudinalMax + laneSegment.length.maximum),
                 mObjectDimensions.intersectionPosition.maximum);
    mIntersectionReached = true;
    mIntersectionEndReached = false;
  }
  if (mIntersectionReached && !mIntersectionEndReached
      && (laneSegment.type == ::ad_rss::world::LaneSegmentType::Intersection))
  {
    mObjectDimensions.intersectionPosition.maximum
      = std::max(physics::Distance(mCurrentLongitudinalMax + laneSegment.length.maximum),
                 mObjectDimensions.intersectionPosition.maximum);
  }
  if (mIntersectionReached && !mIntersectionEndReached
      && (laneSegment.type != ::ad_rss::world::LaneSegmentType::Intersection))
  {
    mObjectDimensions.intersectionPosition.maximum = mCurrentLongitudinalMax;
    mIntersectionEndReached = true;
  }

  return result;
}

bool RssObjectPositionExtractor::getObjectDimensions(ObjectDimensions &objectDimensions)
{
  // if mOccupiedRegions is not empty, something went wrong
  if (!mOccupiedRegions.empty())
  {
    return false;
  }

  // if position.max < position.min, something went wrong
  if (mObjectDimensions.longitudinalDimensions.maximum < mObjectDimensions.longitudinalDimensions.minimum)
  {
    return false;
  }
  if (mObjectDimensions.lateralDimensions.maximum < mObjectDimensions.lateralDimensions.minimum)
  {
    return false;
  }

  objectDimensions = mObjectDimensions;

  return true;
}

} // namespace world
} // namespace ad_rss
