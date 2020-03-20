// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssObjectConversion.hpp"

#include <ad/map/point/HeadingOperation.hpp>
#include <ad/map/route/RouteOperation.hpp>
#include <ad/physics/Operation.hpp>
#include <ad/rss/situation/Physics.hpp>
#include <algorithm>
#include "ad/rss/map/Logging.hpp"

namespace ad {
namespace rss {
namespace map {

RssObjectConversion::RssObjectConversion(::ad::rss::world::ObjectId const &objectId,
                                         ::ad::rss::world::ObjectType const &objectType,
                                         ::ad::map::match::Object const &objectMapMatchedPosition,
                                         ::ad::physics::Speed const &objectSpeed,
                                         ::ad::rss::world::RssDynamics const &rssDynamics)
  : mObjectMapMatchedPosition(&objectMapMatchedPosition)
  , mSpeed(std::fabs(objectSpeed))
  , mMaxSpeed(0.)
  , mRssDynamics(rssDynamics)
{
  mRssObject.objectId = objectId;
  mRssObject.objectType = objectType;
  mRssObject.velocity.speedLonMin = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLonMax = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLatMin = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLatMax = ::ad::physics::Speed(0.);
}

RssObjectConversion::RssObjectConversion(::ad::rss::world::ObjectId const &objectId,
                                         ::ad::rss::world::ObjectType const &objectType,
                                         ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions,
                                         ::ad::physics::Speed const &objectSpeed,
                                         ::ad::rss::world::RssDynamics const &rssDynamics)
  : mObjectMapMatchedPosition(nullptr)
  , mSpeed(std::fabs(objectSpeed))
  , mMaxSpeed(0.)
  , mRssDynamics(rssDynamics)
{
  mRssObject.objectId = objectId;
  mRssObject.objectType = objectType;
  mRssObject.velocity.speedLonMin = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLonMax = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLatMin = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLatMax = ::ad::physics::Speed(0.);
  mRssObject.occupiedRegions = objectOccupiedRegions;
}

::ad::rss::world::Object const &RssObjectConversion::getRssObject() const
{
  return mRssObject;
}

::ad::rss::world::ObjectId RssObjectConversion::getId() const
{
  return mRssObject.objectId;
}

::ad::rss::world::RssDynamics RssObjectConversion::getRssDynamics() const
{
  ::ad::rss::world::RssDynamics resultDynamics(mRssDynamics);
  if (mMaxSpeed != ::ad::physics::Speed(0.))
  {
    resultDynamics.maxSpeed = mMaxSpeed;
  }
  return resultDynamics;
}

bool RssObjectConversion::calculateMinStoppingDistance(::ad::physics::Distance &minStoppingDistance) const
{
  // calculate rough distance to be relevant at the moment
  ::ad::physics::Speed speedAfterResponseTime;
  auto result = situation::calculateSpeedAfterResponseTime(situation::CoordinateSystemAxis::Longitudinal,
                                                           std::fabs(mSpeed),
                                                           physics::Speed::getMax(),
                                                           mRssDynamics.alphaLon.accelMax,
                                                           mRssDynamics.responseTime,
                                                           speedAfterResponseTime);
  if (!result)
  {
    getLogger()->error(
      "RssObjectConversion::calculateminStoppingDistance[ {} ]>> error calculating speed after response time {} {}",
      mRssObject.objectId,
      std::fabs(mSpeed),
      mRssDynamics);
    return result;
  }

  result = situation::calculateStoppingDistance(
    speedAfterResponseTime, mRssDynamics.alphaLon.brakeMinCorrect, minStoppingDistance);
  if (!result)
  {
    getLogger()->error(
      "RssObjectConversion::calculateminStoppingDistance[ {} ]>> error calculating stopping distance {} {}",
      mRssObject.objectId,
      speedAfterResponseTime,
      mRssDynamics);
    return result;
  }

  // overestimate stopping distance a bit
  minStoppingDistance += speedAfterResponseTime * mRssDynamics.responseTime;

  return true;
}

void RssObjectConversion::updateSpeedLimit(::ad::physics::Speed const &maxSpeed)
{
  mMaxSpeed = std::max(mMaxSpeed, maxSpeed);
}

void RssObjectConversion::addRestrictedOccupiedRegion(::ad::map::match::LaneOccupiedRegion const &laneOccupiedRegion,
                                                      ::ad::map::route::LaneInterval const &laneInterval)
{
  ::ad::rss::world::OccupiedRegion occupiedRegion;
  occupiedRegion.segmentId = ::ad::rss::world::LaneSegmentId(static_cast<uint64_t>(laneOccupiedRegion.laneId));

  ::ad::physics::ParametricValue cutAtStart;
  if (::ad::map::route::isRouteDirectionNegative(laneInterval))
  {
    occupiedRegion.lonRange.maximum = ::ad::physics::ParametricValue(1.) - laneOccupiedRegion.longitudinalRange.minimum;
    occupiedRegion.lonRange.minimum = ::ad::physics::ParametricValue(1.) - laneOccupiedRegion.longitudinalRange.maximum;

    occupiedRegion.latRange.maximum = ::ad::physics::ParametricValue(1.) - laneOccupiedRegion.lateralRange.minimum;
    occupiedRegion.latRange.minimum = ::ad::physics::ParametricValue(1.) - laneOccupiedRegion.lateralRange.maximum;
    cutAtStart = ::ad::physics::ParametricValue(1.) - laneInterval.start;
  }
  else
  {
    occupiedRegion.lonRange = laneOccupiedRegion.longitudinalRange;
    occupiedRegion.latRange = laneOccupiedRegion.lateralRange;
    cutAtStart = laneInterval.start;
  }

  // scale region to the lane interval sizes
  auto const intervalLength = calcParametricLength(laneInterval);
  if (intervalLength == ::ad::physics::ParametricValue(0.))
  {
    occupiedRegion.lonRange.minimum = ::ad::physics::ParametricValue(0.);
    occupiedRegion.lonRange.maximum = ::ad::physics::ParametricValue(1.);
  }
  else
  {
    // move region
    occupiedRegion.lonRange.minimum -= cutAtStart;
    occupiedRegion.lonRange.maximum -= cutAtStart;
    // scale region
    occupiedRegion.lonRange.minimum = occupiedRegion.lonRange.minimum / static_cast<double>(intervalLength);
    occupiedRegion.lonRange.maximum = occupiedRegion.lonRange.maximum / static_cast<double>(intervalLength);
    // restrict to segment
    occupiedRegion.lonRange.minimum
      = std::min(std::max(occupiedRegion.lonRange.minimum, ::ad::physics::ParametricValue(0.)),
                 ::ad::physics::ParametricValue(1.));
    occupiedRegion.lonRange.maximum
      = std::min(std::max(occupiedRegion.lonRange.maximum, ::ad::physics::ParametricValue(0.)),
                 ::ad::physics::ParametricValue(1.));
  }
  getLogger()->trace("RssObjectConversion::addRestrictedOccupiedRegion[ {} ]>>laneOccupiedRegion {} laneInterval {} -> "
                     "occupiedRegion {}",
                     getId(),
                     laneOccupiedRegion,
                     laneInterval,
                     occupiedRegion);

  mRssObject.occupiedRegions.push_back(occupiedRegion);
}

void RssObjectConversion::fillNotRelevantSceneBoundingBox()
{
  if (mObjectMapMatchedPosition != nullptr)
  {
    for (auto const &laneOccupiedRegion : mObjectMapMatchedPosition->mapMatchedBoundingBox.laneOccupiedRegions)
    {
      ::ad::map::route::LaneInterval dummyLaneInterval;
      dummyLaneInterval.laneId = laneOccupiedRegion.laneId;
      dummyLaneInterval.start = physics::ParametricValue(0.);
      dummyLaneInterval.end = physics::ParametricValue(1.);
      addRestrictedOccupiedRegion(laneOccupiedRegion, dummyLaneInterval);
    }
  }
}

void RssObjectConversion::laneIntervalAdded(::ad::map::route::LaneInterval const &laneInterval)
{
  if (mObjectMapMatchedPosition != nullptr)
  {
    auto findLaneIntervalResult
      = std::find_if(mObjectMapMatchedPosition->mapMatchedBoundingBox.laneOccupiedRegions.begin(),
                     mObjectMapMatchedPosition->mapMatchedBoundingBox.laneOccupiedRegions.end(),
                     [laneInterval](::ad::map::match::LaneOccupiedRegion const &occupiedRegion) {
                       return laneInterval.laneId == occupiedRegion.laneId;
                     });
    if (findLaneIntervalResult != mObjectMapMatchedPosition->mapMatchedBoundingBox.laneOccupiedRegions.end())
    {
      addRestrictedOccupiedRegion(*findLaneIntervalResult, laneInterval);
    }
  }
}

void RssObjectConversion::updateVelocityOnRoute(::ad::map::route::FullRoute const &route)
{
  double headingDiff = 0.;
  if (mObjectMapMatchedPosition != nullptr)
  {
    auto const routeHeading = getENUHeadingOfRoute(*mObjectMapMatchedPosition, route);
    headingDiff = static_cast<double>(
      ::ad::map::point::normalizeENUHeading(routeHeading - mObjectMapMatchedPosition->enuPosition.heading));
  }

  mRssObject.velocity.speedLonMin = std::fabs(std::cos(headingDiff)) * mSpeed;
  mRssObject.velocity.speedLonMax = mRssObject.velocity.speedLonMin;

  mRssObject.velocity.speedLatMin = std::sin(headingDiff) * mSpeed;
  mRssObject.velocity.speedLatMax = mRssObject.velocity.speedLatMin;
}

} // namespace map
} // namespace rss
} // namespace ad
