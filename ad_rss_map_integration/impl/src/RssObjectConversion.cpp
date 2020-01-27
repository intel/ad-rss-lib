// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssObjectConversion.hpp"

#include <ad/map/lane/LaneOperation.hpp>
#include <ad/map/match/MapMatchedOperation.hpp>
#include <ad/map/match/ObjectValidInputRange.hpp>
#include <ad/map/point/Operation.hpp>
#include <ad/map/route/LaneIntervalOperation.hpp>
#include <ad/map/route/RouteOperation.hpp>
#include <ad/rss/world/ObjectId.hpp>
#include <ad/rss/world/ObjectValidInputRange.hpp>

namespace ad {
namespace rss {
namespace map {
namespace RssObjectConversion {

std::pair<bool, ::ad::rss::world::LaneSegment>
getLaneSegmentFromRoadArea(::ad::rss::world::RoadArea const &objectRoadArea,
                           ::ad::rss::world::LaneSegmentId const &laneId)
{
  for (auto const &roadSegment : objectRoadArea)
  {
    for (auto const &laneSegment : roadSegment)
    {
      if (laneSegment.id == laneId)
      {
        return std::make_pair(true, laneSegment);
      }
    }
  }
  return std::make_pair(false, ::ad::rss::world::LaneSegment());
}

bool convertBoundingBox(::ad::map::match::MapMatchedObjectBoundingBox const &boundingBox,
                        ::ad::rss::world::RoadArea const &objectRoadArea,
                        ::ad::map::lane::LaneIdSet const &negativeRouteDirectionLanes,
                        ::ad::rss::world::OccupiedRegionVector &regions)
{
  regions.clear();

  for (auto const &boundingBoxRegion : boundingBox.laneOccupiedRegions)
  {
    ::ad::rss::world::LaneSegmentId const segmentId(static_cast<uint64_t>(boundingBoxRegion.laneId));
    if (getLaneSegmentFromRoadArea(objectRoadArea, segmentId).first)
    {
      ::ad::rss::world::OccupiedRegion occupiedRegion;
      occupiedRegion.segmentId = segmentId;
      if (negativeRouteDirectionLanes.find(boundingBoxRegion.laneId) != negativeRouteDirectionLanes.end())
      {
        occupiedRegion.lonRange.maximum
          = ::ad::physics::ParametricValue(1.) - boundingBoxRegion.longitudinalRange.minimum;
        occupiedRegion.lonRange.minimum
          = ::ad::physics::ParametricValue(1.) - boundingBoxRegion.longitudinalRange.maximum;
        occupiedRegion.latRange.maximum = ::ad::physics::ParametricValue(1.) - boundingBoxRegion.lateralRange.minimum;
        occupiedRegion.latRange.minimum = ::ad::physics::ParametricValue(1.) - boundingBoxRegion.lateralRange.maximum;
      }
      else
      {
        occupiedRegion.lonRange = boundingBoxRegion.longitudinalRange;
        occupiedRegion.latRange = boundingBoxRegion.lateralRange;
      }
      regions.push_back(occupiedRegion);
    }
  }

  return !regions.empty();
}

// TODO: it might even make sense to allow speeds coming from external objects to be also ranges
// 1.) be able to cope with uncertainties of measurements
// 2.) especially when introducing artificial objects to be respected in occulsion scenarios
//     Then one can expect vehicles with different current velocities approaching e.g. an intersection
//     So for worst case analysis the whole interval between 0-maxEstimate might be relevant to cover...
bool convertVelocity(::ad::map::match::Object const &objectMatchObject,
                     ::ad::physics::Speed const &objectSpeed,
                     ::ad::rss::world::RoadArea const &objectRoadArea,
                     ::ad::rss::world::Object &rssObject)
{
  bool objectVelocityInitialized = false;
  // TODO: How should we finally do the velocity conversion?
  // A) Start the search at front left up to rear right to find the most suitable point for velocity conversion
  //    usually one of the front positions has a map matching point within the road area
  //    the first match wins
  // B) Other possibility would be collecting all cases for the whole vehicle and get to the worst case estimate
  // Current selection is B)
  auto objectMapPosition = objectMatchObject.mapMatchedBoundingBox;
  for (auto referencePointPosition : {::ad::map::match::ObjectReferencePoints::FrontLeft,
                                      ::ad::map::match::ObjectReferencePoints::FrontRight,
                                      ::ad::map::match::ObjectReferencePoints::Center,
                                      ::ad::map::match::ObjectReferencePoints::RearLeft,
                                      ::ad::map::match::ObjectReferencePoints::RearRight})
  {
    std::size_t const referencePointIndex(static_cast<std::size_t>(referencePointPosition));
    if (objectMapPosition.referencePointPositions.size() > referencePointIndex)
    {
      auto const objectHeading = objectMatchObject.enuPosition.heading;
      for (auto const &mapMatchedPosition : objectMapPosition.referencePointPositions[referencePointIndex])
      {
        // only actual in lane matches are considered
        if (mapMatchedPosition.type != ::ad::map::match::MapMatchedPositionType::LANE_IN)
        {
          continue;
        }

        ::ad::rss::world::LaneSegmentId const segmentId(
          static_cast<uint64_t>(mapMatchedPosition.lanePoint.paraPoint.laneId));
        auto const laneSegmentResult = getLaneSegmentFromRoadArea(objectRoadArea, segmentId);

        // only lanes actually present in the current road area are considered
        if (laneSegmentResult.first)
        {
          ::ad::map::point::ENUHeading laneHeadingOffset(0.);
          if (laneSegmentResult.second.drivingDirection == ::ad::rss::world::LaneDrivingDirection::Negative)
          {
            laneHeadingOffset = ::ad::map::point::ENUHeading(M_PI);
          }
          auto const laneHeading
            = ::ad::map::lane::getLaneENUHeading(mapMatchedPosition.lanePoint.paraPoint) + laneHeadingOffset;
          auto headingDifference = ::ad::map::point::normalizeENUHeading(laneHeading - objectHeading);
          auto const absSpeed = std::fabs(objectSpeed);
          auto const speedLon = std::fabs(std::cos(static_cast<double>(headingDifference))) * absSpeed;
          auto const speedLat = std::sin(static_cast<double>(headingDifference)) * absSpeed;
          if (!objectVelocityInitialized)
          {
            objectVelocityInitialized = true;
            rssObject.velocity.speedLonMin = speedLon;
            rssObject.velocity.speedLonMax = speedLon;
            rssObject.velocity.speedLatMin = speedLat;
            rssObject.velocity.speedLatMax = speedLat;
          }
          else
          {
            rssObject.velocity.speedLonMin = std::min(rssObject.velocity.speedLonMin, speedLon);
            rssObject.velocity.speedLonMax = std::max(rssObject.velocity.speedLonMax, speedLon);
            rssObject.velocity.speedLatMin = std::min(rssObject.velocity.speedLatMin, speedLat);
            rssObject.velocity.speedLatMax = std::max(rssObject.velocity.speedLatMax, speedLat);
          }
        }
      }
    }
  }
  return objectVelocityInitialized;
}

bool convertObject(::ad::rss::world::ObjectId const &objectId,
                   ::ad::rss::world::ObjectType const &objectType,
                   ::ad::map::match::Object const &objectMatchObject,
                   ::ad::physics::Speed const &objectSpeed,
                   ::ad::rss::world::RoadArea const &objectRoadArea,
                   ::ad::map::lane::LaneIdSet const &negativeRouteDirectionLanes,
                   ::ad::rss::world::Object &rssObject)
{
  if (!withinValidInputRange(objectType) || !withinValidInputRange(objectMatchObject)
      || !withinValidInputRange(objectSpeed))
  {
    return false;
  }
  ::ad::rss::world::Object newRssObject;
  newRssObject.objectId = objectId;
  newRssObject.objectType = objectType;

  if (objectRoadArea.size() > 0u)
  {
    auto result = convertVelocity(objectMatchObject, objectSpeed, objectRoadArea, newRssObject);
    result = result && convertBoundingBox(objectMatchObject.mapMatchedBoundingBox,
                                          objectRoadArea,
                                          negativeRouteDirectionLanes,
                                          newRssObject.occupiedRegions);

    // even if the input within the range of the
    if (!result || !withinValidInputRange(newRssObject))
    {
      return false;
    }
  }

  rssObject = newRssObject;
  return true;
}

} // namespace RssObjectConversion
} // namespace map
} // namespace rss
} // namespace ad
