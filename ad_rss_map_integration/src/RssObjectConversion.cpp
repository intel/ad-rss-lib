// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssObjectConversion.hpp"

#include <ad/map/point/HeadingOperation.hpp>
#include <ad/map/route/RouteOperation.hpp>
#include <ad/physics/Operation.hpp>
#include <ad/rss/situation/RssFormulas.hpp>
#include <algorithm>
#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssSceneCreator.hpp"

namespace ad {
namespace rss {
namespace map {

RssObjectConversion::RssObjectConversion(RssObjectData const &objectData)
  : mObjectMapMatchedPosition(&objectData.matchObject)
  , mMaxSpeedOnAcceleration(0.)
  , mOriginalObjectSpeed(objectData.speed)
  , mRssDynamics(objectData.rssDynamics)
{
  initializeRssObject(objectData.id,
                      objectData.type,
                      ::ad::rss::world::OccupiedRegionVector(),
                      objectData.matchObject.enuPosition,
                      objectData.speed,
                      objectData.yawRate,
                      objectData.steeringAngle);
}

RssObjectConversion::RssObjectConversion(RssObjectData const &objectData,
                                         ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions)
  : mObjectMapMatchedPosition(nullptr)
  , mMaxSpeedOnAcceleration(0.)
  , mOriginalObjectSpeed(objectData.speed)
  , mRssDynamics(objectData.rssDynamics)
{
  initializeRssObject(objectData.id,
                      objectData.type,
                      objectOccupiedRegions,
                      objectData.matchObject.enuPosition,
                      objectData.speed,
                      objectData.yawRate,
                      objectData.steeringAngle);
}

void RssObjectConversion::initializeRssObject(::ad::rss::world::ObjectId const &objectId,
                                              ::ad::rss::world::ObjectType const &objectType,
                                              ::ad::rss::world::OccupiedRegionVector const &objectOccupiedRegions,
                                              ::ad::map::match::ENUObjectPosition const &objectEnuPosition,
                                              ::ad::physics::Speed const &objectSpeed,
                                              ::ad::physics::AngularVelocity const &objectYawRate,
                                              ::ad::physics::Angle const &objectSteeringAngle)
{
  mRssObject.objectId = objectId;
  mRssObject.objectType = objectType;
  mRssObject.velocity.speedLonMin = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLonMax = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLatMin = ::ad::physics::Speed(0.);
  mRssObject.velocity.speedLatMax = ::ad::physics::Speed(0.);
  mRssObject.occupiedRegions = objectOccupiedRegions;

  mRssObject.state.yaw = ::ad::physics::Angle(static_cast<double>(objectEnuPosition.heading));
  mRssObject.state.centerPoint.x = ::ad::physics::Distance(static_cast<double>(objectEnuPosition.centerPoint.x));
  mRssObject.state.centerPoint.y = ::ad::physics::Distance(static_cast<double>(objectEnuPosition.centerPoint.y));
  mRssObject.state.dimension.width = ::ad::physics::Distance(static_cast<double>(objectEnuPosition.dimension.width));
  mRssObject.state.dimension.length = ::ad::physics::Distance(static_cast<double>(objectEnuPosition.dimension.length));
  mRssObject.state.steeringAngle = objectSteeringAngle;

  // restrict to positive speeds
  mRssObject.state.speed = std::max(::ad::physics::Speed(0.), objectSpeed);
  if (mRssObject.state.speed == ::ad::physics::Speed(0.))
  {
    // ensure angular speed is also zero if speed is zero
    mRssObject.state.yawRate = ::ad::physics::AngularVelocity(0.);
  }
  else
  {
    mRssObject.state.yawRate = objectYawRate;
  }
}

bool RssObjectConversion::isOriginalSpeedAcceptable(::ad::physics::Speed const acceptableNegativeSpeed) const
{
  if (mRssObject.state.speed == mOriginalObjectSpeed)
  {
    return true;
  }
  if (mOriginalObjectSpeed >= acceptableNegativeSpeed)
  {
    return true;
  }
  return false;
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
  if (mMaxSpeedOnAcceleration != ::ad::physics::Speed(0.))
  {
    resultDynamics.maxSpeedOnAcceleration = mMaxSpeedOnAcceleration;
  }
  return resultDynamics;
}

bool RssObjectConversion::calculateMinStoppingDistance(::ad::physics::Distance &minStoppingDistance) const
{
  auto const result
    = situation::calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(mRssObject.state.speed,
                                                                              physics::Speed::getMax(),
                                                                              mRssDynamics.responseTime,
                                                                              mRssDynamics.alphaLon.accelMax,
                                                                              mRssDynamics.alphaLon.brakeMinCorrect,
                                                                              minStoppingDistance);

  if (!result)
  {
    getLogger()->error("RssObjectConversion::calculateminStoppingDistance[ {} ]>> error calculating longitudinal "
                       "distance offset after stated braking pattern {} {}",
                       mRssObject.objectId,
                       mRssObject.state.speed,
                       mRssDynamics);
  }
  return result;
}

void RssObjectConversion::updateSpeedLimit(::ad::physics::Speed const &maxSpeedOnAcceleration)
{
  mMaxSpeedOnAcceleration = std::max(mMaxSpeedOnAcceleration, maxSpeedOnAcceleration);
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

  mRssObject.velocity.speedLonMin = std::fabs(std::cos(headingDiff)) * mRssObject.state.speed;
  mRssObject.velocity.speedLonMax = mRssObject.velocity.speedLonMin;

  mRssObject.velocity.speedLatMin = std::sin(headingDiff) * mRssObject.state.speed;
  mRssObject.velocity.speedLatMax = mRssObject.velocity.speedLatMin;
}

} // namespace map
} // namespace rss
} // namespace ad
