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

#include "RssObjectPositionExtractor.hpp"

#include <algorithm>

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

RssObjectPositionExtractor::RssObjectPositionExtractor(OccupiedRegionVector const &occupiedRegions)
  : mOccupiedRegions(occupiedRegions)
{
  mObjectDimensions.intersectionPosition.maximum = 0;
}

bool RssObjectPositionExtractor::newRoadSegment(Distance const &longitudinalStartMin,
                                                Distance const &longitudinalStartMax)
{
  bool result = true;

  mCurrentLongitudinalMax = longitudinalStartMax;
  mCurrentLongitudinalMin = longitudinalStartMin;

  return result;
}

bool RssObjectPositionExtractor::newLaneSegment(world::MetricRange lateralDistance, LaneSegment const &laneSegment)
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
      Distance latMinPosition = lateralDistance.minimum + (objectSegment->latRange.minimum * laneSegment.width.minimum);
      Distance latMaxPosition = lateralDistance.maximum + (objectSegment->latRange.maximum * laneSegment.width.maximum);

      Distance lonMinPosition
        = mCurrentLongitudinalMin + (objectSegment->lonRange.minimum * laneSegment.length.minimum);
      Distance lonMaxPosition
        = mCurrentLongitudinalMax + (objectSegment->lonRange.maximum * laneSegment.length.maximum);

      mObjectDimensions.lateralDimensions.minimum
        = std::min(mObjectDimensions.lateralDimensions.minimum, latMinPosition);
      mObjectDimensions.lateralDimensions.maximum
        = std::max(mObjectDimensions.lateralDimensions.maximum, latMaxPosition);

      mObjectDimensions.longitudinalDimensions.minimum
        = std::min(mObjectDimensions.longitudinalDimensions.minimum, lonMinPosition);
      mObjectDimensions.longitudinalDimensions.maximum
        = std::max(mObjectDimensions.longitudinalDimensions.maximum, lonMaxPosition);

      if (laneSegment.drivingDirection == ::rss::world::LaneDrivingDirection::Positive)
      {
        mObjectDimensions.onPositiveLane = true;
      }

      if (laneSegment.drivingDirection == ::rss::world::LaneDrivingDirection::Negative)
      {
        mObjectDimensions.onNegativeLane = true;
      }

      mOccupiedRegions.erase(objectSegment);
    }
  }

  if (!mIntersectionReached && !mIntersectionEndReached
      && (laneSegment.type == ::rss::world::LaneSegmentType::Intersection))
  {
    mObjectDimensions.intersectionPosition.minimum = mCurrentLongitudinalMin;
    mObjectDimensions.intersectionPosition.maximum = std::max(
      Distance(mCurrentLongitudinalMax + laneSegment.length.maximum), mObjectDimensions.intersectionPosition.maximum);
    mIntersectionReached = true;
    mIntersectionEndReached = false;
  }
  if (mIntersectionReached && !mIntersectionEndReached
      && (laneSegment.type == ::rss::world::LaneSegmentType::Intersection))
  {
    mObjectDimensions.intersectionPosition.maximum = std::max(
      Distance(mCurrentLongitudinalMax + laneSegment.length.maximum), mObjectDimensions.intersectionPosition.maximum);
  }
  if (mIntersectionReached && !mIntersectionEndReached
      && (laneSegment.type != ::rss::world::LaneSegmentType::Intersection))
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
} // namespace rss
