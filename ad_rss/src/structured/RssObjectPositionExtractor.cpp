// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#include "ad/rss/structured/RssObjectPositionExtractor.hpp"
#include <ad/physics/Operation.hpp>
#include <algorithm>

namespace ad {
namespace rss {
namespace structured {

using physics::Distance;
using physics::MetricRange;

RssObjectPositionExtractor::RssObjectPositionExtractor(world::OccupiedRegionVector const &occupied_regions)
  : mOccupiedRegions(occupied_regions)
{
  mObjectDimensions.intersectionPosition.maximum = Distance(0.);
  mCurrentLongitudinalRoadSegmentStart.minimum = Distance(0.);
  mCurrentLongitudinalRoadSegmentStart.maximum = Distance(0.);
}

bool RssObjectPositionExtractor::newRoadSegment(physics::MetricRange const &longitudinalStart,
                                                world::RoadSegment const &roadSegment)
{
  bool result = true;
  mCurrentLongitudinalRoadSegmentStart = longitudinalStart;
  mRoadSegmentMinLengthAfterIntersectingArea = roadSegment.minimum_length_after_intersecting_area;

  switch (mIntersectionState)
  {
    case IntersectionState::BeforeIntersection:
      if (roadSegment.type == world::RoadSegmentType::Intersection)
      {
        // fix minimum
        mObjectDimensions.intersectionPosition.minimum
          = mCurrentLongitudinalRoadSegmentStart.minimum + roadSegment.minimum_length_before_intersecting_area;
        // and ensure max is larger than min and larger than max of current segment start
        mObjectDimensions.intersectionPosition.maximum = std::max(
          mObjectDimensions.intersectionPosition.minimum,
          std::max(mCurrentLongitudinalRoadSegmentStart.maximum, mObjectDimensions.intersectionPosition.maximum));
        mIntersectionState = IntersectionState::WithinIntersection;
      }
      break;
    case IntersectionState::WithinIntersection:
      if (roadSegment.type != world::RoadSegmentType::Intersection)
      {
        mIntersectionState = IntersectionState::AfterIntersection;
      }
      break;
    default:
      break;
  }

  return result;
}

bool RssObjectPositionExtractor::newLaneSegment(MetricRange lateral_distance, world::LaneSegment const &laneSegment)
{
  bool result = true;

  bool noAdditionalObjects = false;
  while (!noAdditionalObjects && !mOccupiedRegions.empty())
  {
    auto const objectSegment = std::find_if(
      mOccupiedRegions.begin(), mOccupiedRegions.end(), [laneSegment](world::OccupiedRegion const &region) {
        return region.segment_id == laneSegment.id;
      });
    if (objectSegment == mOccupiedRegions.end())
    {
      noAdditionalObjects = true;
    }
    else
    {
      Distance latMinPosition
        = lateral_distance.minimum + (objectSegment->lat_range.minimum * laneSegment.width.minimum);
      Distance latMaxPosition
        = lateral_distance.maximum + (objectSegment->lat_range.maximum * laneSegment.width.maximum);

      Distance lonMinPosition = mCurrentLongitudinalRoadSegmentStart.minimum
        + (objectSegment->lon_range.minimum * laneSegment.length.minimum);
      Distance lonMaxPosition = mCurrentLongitudinalRoadSegmentStart.maximum
        + (objectSegment->lon_range.maximum * laneSegment.length.maximum);

      mObjectDimensions.lateralDimensions.minimum
        = std::min(mObjectDimensions.lateralDimensions.minimum, latMinPosition);
      mObjectDimensions.lateralDimensions.maximum
        = std::max(mObjectDimensions.lateralDimensions.maximum, latMaxPosition);

      mObjectDimensions.longitudinalDimensions.minimum
        = std::min(mObjectDimensions.longitudinalDimensions.minimum, lonMinPosition);
      mObjectDimensions.longitudinalDimensions.maximum
        = std::max(mObjectDimensions.longitudinalDimensions.maximum, lonMaxPosition);

      if (laneSegment.driving_direction == world::LaneDrivingDirection::Positive)
      {
        mObjectDimensions.onPositiveLane = true;
      }

      if (laneSegment.driving_direction == world::LaneDrivingDirection::Negative)
      {
        mObjectDimensions.onNegativeLane = true;
      }

      mOccupiedRegions.erase(objectSegment);
    }
  }

  if (mIntersectionState == IntersectionState::WithinIntersection)
  {
    // only parts of the lane segment might be relevant
    auto laneSegmentMax
      = std::max(physics::Distance(0.), laneSegment.length.maximum - mRoadSegmentMinLengthAfterIntersectingArea);
    mObjectDimensions.intersectionPosition.maximum = std::max(
      mCurrentLongitudinalRoadSegmentStart.maximum + laneSegmentMax, mObjectDimensions.intersectionPosition.maximum);
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

} // namespace structured
} // namespace rss
} // namespace ad
