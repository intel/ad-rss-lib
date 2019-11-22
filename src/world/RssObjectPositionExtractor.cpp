// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#include "world/RssObjectPositionExtractor.hpp"
#include <algorithm>
#include "ad_rss/physics/Operations.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace world
 */
namespace world {

using physics::Distance;
using physics::MetricRange;

RssObjectPositionExtractor::RssObjectPositionExtractor(OccupiedRegionVector const &occupiedRegions)
  : mOccupiedRegions(occupiedRegions)
{
  mObjectDimensions.intersectionPosition.maximum = Distance(0.);
}

bool RssObjectPositionExtractor::newRoadSegment(Distance const &longitudinalStartMin,
                                                Distance const &longitudinalStartMax)
{
  bool result = true;

  mCurrentLongitudinalMax = longitudinalStartMax;
  mCurrentLongitudinalMin = longitudinalStartMin;

  return result;
}

bool RssObjectPositionExtractor::newLaneSegment(MetricRange lateralDistance, LaneSegment const &laneSegment)
{
  bool result = true;

  bool noAdditionalObjects = false;
  while (!noAdditionalObjects && !mOccupiedRegions.empty())
  {
    auto const objectSegment
      = std::find_if(mOccupiedRegions.begin(), mOccupiedRegions.end(), [laneSegment](OccupiedRegion const &region) {
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
    mObjectDimensions.intersectionPosition.maximum = std::max(
      Distance(mCurrentLongitudinalMax + laneSegment.length.maximum), mObjectDimensions.intersectionPosition.maximum);
    mIntersectionReached = true;
    mIntersectionEndReached = false;
  }
  if (mIntersectionReached && !mIntersectionEndReached
      && (laneSegment.type == ::ad_rss::world::LaneSegmentType::Intersection))
  {
    mObjectDimensions.intersectionPosition.maximum = std::max(
      Distance(mCurrentLongitudinalMax + laneSegment.length.maximum), mObjectDimensions.intersectionPosition.maximum);
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
    return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
  }
  if (mObjectDimensions.lateralDimensions.maximum < mObjectDimensions.lateralDimensions.minimum)
  {
    return false; // LCOV_EXCL_LINE: unreachable code, keep to be on the safe side
  }

  objectDimensions = mObjectDimensions;

  return true;
}

} // namespace world
} // namespace ad_rss
