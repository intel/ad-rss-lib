// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssSceneCreation.hpp"

#include <ad/map/intersection/Intersection.hpp>
#include <ad/map/lane/LaneOperation.hpp>
#include <ad/map/match/MapMatchedOperation.hpp>
#include <ad/map/route/LaneIntervalOperation.hpp>
#include <ad/map/route/Planning.hpp>
#include <ad/rss/world/WorldModelValidInputRange.hpp>
#include <algorithm>
#include <cassert>
#include <iostream>
#include <map>
#include <unordered_set>
#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssObjectConversion.hpp"

/*!
 * @brief namespace rss
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace map
 */
namespace map {
/*!
 * @brief namespace providing supporting functions to create a scene
 */
namespace RssSceneCreation {

const ::ad::physics::Duration cPredictionDurationSameDirection(5.);
const ::ad::physics::Duration cMaxSceneDuration(20.);

::ad::rss::world::WorldModel initializeWorldModel(::ad::rss::world::TimeIndex const &timeIndex,
                                                  ::ad::rss::world::RssDynamics const &egoRssDynamics)
{
  ::ad::rss::world::WorldModel worldModel;
  worldModel.timeIndex = timeIndex;
  worldModel.egoVehicleRssDynamics = egoRssDynamics;
  worldModel.egoVehicleRssDynamics.maxSpeed = ::ad::physics::Speed(0.);
  return worldModel;
}

bool finalizeWorldModel(::ad::rss::world::RssDynamics const &egoRssDynamics, ::ad::rss::world::WorldModel &worldModel)
{
  if (worldModel.egoVehicleRssDynamics.maxSpeed == ::ad::physics::Speed(0.))
  {
    // if there was no relevant situation reset the max speed
    worldModel.egoVehicleRssDynamics.maxSpeed = egoRssDynamics.maxSpeed;
  }

  return withinValidInputRange(worldModel);
}

void convertToRss(::ad::map::route::LaneInterval const &laneInterval,
                  ::ad::map::lane::LaneIdSet const &intersectionLanes,
                  ::ad::rss::world::LaneSegment &rssLaneSegment,
                  ::ad::map::lane::LaneIdSet &negativeRouteDirectionLanes,
                  ::ad::physics::Speed &maxSpeed)
{
  const auto lane = ::ad::map::lane::getLane(laneInterval.laneId);

  rssLaneSegment.id = ::ad::rss::world::LaneSegmentId(laneInterval.laneId);
  if (intersectionLanes.count(laneInterval.laneId) > 0)
  {
    rssLaneSegment.type = ::ad::rss::world::LaneSegmentType::Intersection;
  }
  else
  {
    rssLaneSegment.type = ::ad::rss::world::LaneSegmentType::Normal;
  }
  if (laneInterval.wrongWay)
  {
    rssLaneSegment.drivingDirection = ::ad::rss::world::LaneDrivingDirection::Negative;
  }
  else
  {
    rssLaneSegment.drivingDirection = ::ad::rss::world::LaneDrivingDirection::Positive;
  }
  if (::ad::map::route::isRouteDirectionNegative(laneInterval))
  {
    negativeRouteDirectionLanes.insert(laneInterval.laneId);
  }
  rssLaneSegment.length = lane.lengthRange;
  rssLaneSegment.width = lane.widthRange;

  for (auto const &speedLimit : getSpeedLimits(laneInterval))
  {
    maxSpeed = std::max(maxSpeed, speedLimit.speedLimit);
  }
}

void convertToRss(::ad::map::route::RoadSegment const &roadSegment,
                  ::ad::map::lane::LaneIdSet const &intersectionLanes,
                  ::ad::rss::world::RoadArea &area,
                  ::ad::map::lane::LaneIdSet &negativeRouteDirectionLanes,
                  ::ad::physics::Speed &maxSpeed)
{
  ::ad::rss::world::RoadSegment rssRoadSegment;
  // RoadSegments are in strict order from right to left
  // RSS order is vice-versa
  for (auto laneSegmentIter = roadSegment.drivableLaneSegments.crbegin();
       laneSegmentIter != roadSegment.drivableLaneSegments.crend();
       laneSegmentIter++)
  {
    ::ad::rss::world::LaneSegment rssLaneSegment;
    convertToRss(
      laneSegmentIter->laneInterval, intersectionLanes, rssLaneSegment, negativeRouteDirectionLanes, maxSpeed);
    rssRoadSegment.push_back(rssLaneSegment);
  }
  area.push_back(rssRoadSegment);
}

::ad::rss::world::RoadArea convertToRss(::ad::map::route::FullRoute const &route,
                                        ::ad::map::lane::LaneIdSet &negativeRouteDirectionLanes,
                                        ::ad::physics::Speed &maxSpeed)
{
  ::ad::rss::world::RoadArea area;
  for (const auto &roadSegment : route.roadSegments)
  {
    convertToRss(roadSegment, ::ad::map::lane::LaneIdSet(), area, negativeRouteDirectionLanes, maxSpeed);
  }
  return area;
}

::ad::rss::world::RoadArea convertToRss(::ad::map::route::FullRoute const &route,
                                        ::ad::map::intersection::IntersectionPtr intersection,
                                        ::ad::map::lane::LaneIdSet &negativeRouteDirectionLanes,
                                        ::ad::physics::Speed &maxSpeed)
{
  auto const findWaypointResult = ::ad::map::route::findNearestWaypoint(intersection->outgoingParaPoints(), route);
  ::ad::rss::world::RoadArea area;
  for (auto roadSegmentIter = route.roadSegments.begin(); roadSegmentIter != findWaypointResult.roadSegmentIterator;
       roadSegmentIter++)
  {
    convertToRss(*roadSegmentIter, intersection->internalLanes(), area, negativeRouteDirectionLanes, maxSpeed);
  }
  return area;
}

void convertToRss(::ad::map::route::ConnectingSegment const &connectingSegment,
                  ::ad::rss::world::RoadArea &area,
                  ::ad::map::lane::LaneIdSet &negativeRouteDirectionLanes,
                  ::ad::physics::Speed &maxSpeed)
{
  ::ad::rss::world::RoadSegment rssRoadSegment;
  // ConnectingSegments are in strict order from right to left
  // RSS order is vice-versa
  for (auto laneSegmentIter = connectingSegment.crbegin(); laneSegmentIter != connectingSegment.crend();
       laneSegmentIter++)
  {
    ::ad::rss::world::LaneSegment rssLaneSegment;
    convertToRss(laneSegmentIter->laneInterval,
                 ::ad::map::lane::LaneIdSet(),
                 rssLaneSegment,
                 negativeRouteDirectionLanes,
                 maxSpeed);
    rssRoadSegment.push_back(rssLaneSegment);
  }
  area.push_back(rssRoadSegment);
}

::ad::rss::world::RoadArea convertToRss(::ad::map::route::ConnectingRoute const &route,
                                        ::ad::map::lane::LaneIdSet &negativeRouteDirectionLanes,
                                        ::ad::physics::Speed &maxSpeed)
{
  ::ad::rss::world::RoadArea area;
  for (const auto &connectingSegment : route.connectingSegments)
  {
    convertToRss(connectingSegment, area, negativeRouteDirectionLanes, maxSpeed);
  }
  return area;
}

void handleSpeedLimitRestriction(RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                                 ::ad::physics::Speed const &maxSpeedLimit,
                                 ::ad::physics::Speed &maxSpeed)
{
  switch (restrictSpeedLimitMode)
  {
    case RestrictSpeedLimitMode::ExactSpeedLimit:
      maxSpeed = std::max(maxSpeed, maxSpeedLimit);
      break;
    case RestrictSpeedLimitMode::IncreasedSpeedLimit5:
      maxSpeed = std::max(maxSpeed, maxSpeedLimit * 1.05);
      break;
    case RestrictSpeedLimitMode::IncreasedSpeedLimit10:
      maxSpeed = std::max(maxSpeed, maxSpeedLimit * 1.1);
      break;
    case RestrictSpeedLimitMode::None:
    default:
      break;
  }
}

void handleSpeedLimitRestriction(RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                                 ::ad::physics::Speed const &maxSpeedLimit,
                                 ::ad::rss::world::RssDynamics &objectRssDynamics)
{
  if (restrictSpeedLimitMode != RestrictSpeedLimitMode::None)
  {
    objectRssDynamics.maxSpeed = ::ad::physics::Speed(0.);
  }
  handleSpeedLimitRestriction(restrictSpeedLimitMode, maxSpeedLimit, objectRssDynamics.maxSpeed);
}

bool appendIntersectionScene(::ad::map::intersection::IntersectionPtr intersection,
                             ::ad::map::route::FullRoute const &egoRoute,
                             ::ad::map::route::FullRoute const &objectRoute,
                             ::ad::rss::world::ObjectId const &egoId,
                             ::ad::map::match::Object const &egoMatchObject,
                             ::ad::physics::Speed const &egoSpeed,
                             ::ad::rss::world::ObjectId const &objectId,
                             ::ad::rss::world::ObjectType const &objectType,
                             ::ad::map::match::Object const &objectMatchObject,
                             ::ad::physics::Speed const &objectSpeed,
                             ::ad::rss::world::RssDynamics const &objectRssDynamics,
                             RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                             ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                             ::ad::rss::world::WorldModel &worldModel)
{
  ::ad::rss::world::Scene scene;

  if (intersection->intersectionType() == ::ad::map::intersection::IntersectionType::TrafficLight)
  {
    // in case no traffic light actually modelled (map error), we assume others have always priority
    bool egoHasGreen = true;
    if (intersection->applicableTrafficLights().empty())
    {
      getLogger()->warn("RssSceneCreation::appendIntersectionScene[ {} ]>> traffic light intersection has no "
                        "applicable traffic lights {}",
                        objectId,
                        std::to_string(intersection->incomingLanesOnRoute()));
      egoHasGreen = false;
    }
    for (auto relevantTrafficLight : intersection->applicableTrafficLights())
    {
      if (greenTrafficLights.find(relevantTrafficLight) == greenTrafficLights.end())
      {
        // if any relevant traffic light is not green, we have no priority
        egoHasGreen = false;
        break;
      }
    }

    if (!egoHasGreen || intersection->objectRouteCrossesLanesWithHigherPriority(objectRoute))
    {
      scene.situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
    }
    else
    {
      scene.situationType = ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
    }
    getLogger()->debug(
      "RssSceneCreation::appendIntersectionScene[ {} ]>> traffic light intersection ego has green: {} situation: {}",
      objectId,
      egoHasGreen,
      scene.situationType);
  }
  else if (intersection->objectRouteCrossesLanesWithHigherPriority(objectRoute))
  {
    scene.situationType = ::ad::rss::situation::SituationType::IntersectionObjectHasPriority;
  }
  else
  {
    auto const findWaypointResult
      = ::ad::map::route::findNearestWaypoint(intersection->incomingParaPointsWithLowerPriority(), objectRoute);
    if (findWaypointResult.isValid())
    {
      scene.situationType = ::ad::rss::situation::SituationType::IntersectionEgoHasPriority;
    }
    else
    {
      scene.situationType = ::ad::rss::situation::SituationType::IntersectionSamePriority;
    }
  }

  ::ad::map::lane::LaneIdSet negativeRouteDirectionLanesEgoRoad;

  ::ad::physics::Speed egoRoadSpeedLimit(0.);
  scene.egoVehicleRoad = convertToRss(egoRoute, intersection, negativeRouteDirectionLanesEgoRoad, egoRoadSpeedLimit);
  ::ad::map::lane::LaneIdSet negativeRouteDirectionLanesIntersectingRoad;
  ::ad::physics::Speed objectRoadSpeedLimit(0.);
  scene.intersectingRoad
    = convertToRss(objectRoute, intersection, negativeRouteDirectionLanesIntersectingRoad, objectRoadSpeedLimit);
  getLogger()->debug("RssSceneCreation::appendIntersectionScene[ {} ]>> situation {} ego road area {}",
                     objectId,
                     scene.situationType,
                     scene.egoVehicleRoad);
  getLogger()->debug("RssSceneCreation::appendIntersectionScene[ {} ]>> situation {} intersection road area {}",
                     objectId,
                     scene.situationType,
                     scene.intersectingRoad);

  auto objectConversionResult = RssObjectConversion::convertObject(objectId,
                                                                   objectType,
                                                                   objectMatchObject,
                                                                   objectSpeed,
                                                                   scene.intersectingRoad,
                                                                   negativeRouteDirectionLanesIntersectingRoad,
                                                                   scene.object);
  if (!objectConversionResult)
  {
    getLogger()->error("RssSceneCreation::appendIntersectionScene[ {} ]>> converting object to scene failed {} {} {}",
                       objectId,
                       objectType,
                       objectMatchObject,
                       objectSpeed);
    return false;
  }
  scene.objectRssDynamics = objectRssDynamics;
  getLogger()->debug("RssSceneCreation::appendIntersectionScene[ {} ]>> object {}", objectId, scene.object);
  auto egoConversionResult = RssObjectConversion::convertObject(egoId,
                                                                ::ad::rss::world::ObjectType::EgoVehicle,
                                                                egoMatchObject,
                                                                egoSpeed,
                                                                scene.egoVehicleRoad,
                                                                negativeRouteDirectionLanesEgoRoad,
                                                                scene.egoVehicle);
  if (!egoConversionResult)
  {
    getLogger()->error("RssSceneCreation::appendIntersectionScene[ {} ]>> converting ego to scene failed {} {}",
                       objectId,
                       egoMatchObject,
                       egoSpeed);
    return false;
  }
  getLogger()->debug("RssSceneCreation::appendIntersectionScene[ {} ]>> ego {}", objectId, scene.egoVehicle);

  handleSpeedLimitRestriction(restrictSpeedLimitMode, objectRoadSpeedLimit, scene.objectRssDynamics);
  handleSpeedLimitRestriction(restrictSpeedLimitMode, egoRoadSpeedLimit, worldModel.egoVehicleRssDynamics.maxSpeed);

  worldModel.scenes.push_back(scene);
  return true;
}

bool appendNonIntersectionScene(::ad::map::route::ConnectingRoute const &connectingRoute,
                                ::ad::rss::situation::SituationType const &situationType,
                                ::ad::rss::world::ObjectId const &egoId,
                                ::ad::map::match::Object const &egoMatchObject,
                                ::ad::physics::Speed const &egoSpeed,
                                ::ad::rss::world::ObjectId const &objectId,
                                ::ad::rss::world::ObjectType const &objectType,
                                ::ad::map::match::Object const &objectMatchObject,
                                ::ad::physics::Speed const &objectSpeed,
                                ::ad::rss::world::RssDynamics const &objectRssDynamics,
                                RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                                ::ad::rss::world::WorldModel &worldModel)
{
  ::ad::rss::world::Scene scene;
  scene.situationType = situationType;
  ::ad::map::lane::LaneIdSet negativeRouteDirectionLanes;
  ::ad::physics::Speed speedLimit(0.);
  scene.egoVehicleRoad = convertToRss(connectingRoute, negativeRouteDirectionLanes, speedLimit);

  getLogger()->debug("RssSceneCreation::appendNonIntersectionScene[ {} ]>> situation {} road area {}",
                     objectId,
                     situationType,
                     scene.egoVehicleRoad);

  auto objectConversionResult = RssObjectConversion::convertObject(objectId,
                                                                   objectType,
                                                                   objectMatchObject,
                                                                   objectSpeed,
                                                                   scene.egoVehicleRoad,
                                                                   negativeRouteDirectionLanes,
                                                                   scene.object);
  if (!objectConversionResult)
  {
    getLogger()->error(
      "RssSceneCreation::appendNonIntersectionScene[ {} ]>> converting object to scene failed {} {} {}",
      objectId,
      objectType,
      objectMatchObject,
      objectSpeed);
    return false;
  }
  scene.objectRssDynamics = objectRssDynamics;
  getLogger()->debug("RssSceneCreation::appendNonIntersectionScene[ {} ]>> object {}", objectId, scene.object);
  auto egoConversionResult = RssObjectConversion::convertObject(egoId,
                                                                ::ad::rss::world::ObjectType::EgoVehicle,
                                                                egoMatchObject,
                                                                egoSpeed,
                                                                scene.egoVehicleRoad,
                                                                negativeRouteDirectionLanes,
                                                                scene.egoVehicle);
  if (!egoConversionResult)
  {
    getLogger()->error("RssSceneCreation::appendNonIntersectionScene[ {} ]>> converting ego to scene failed {} {}",
                       objectId,
                       egoMatchObject,
                       egoSpeed);
    return false;
  }
  getLogger()->debug("RssSceneCreation::appendNonIntersectionScene[ {} ]>> ego {}", objectId, scene.egoVehicle);

  handleSpeedLimitRestriction(restrictSpeedLimitMode, speedLimit, scene.objectRssDynamics);
  handleSpeedLimitRestriction(restrictSpeedLimitMode, speedLimit, worldModel.egoVehicleRssDynamics.maxSpeed);

  worldModel.scenes.push_back(scene);
  return true;
}

bool appendNotRelevantScene(::ad::rss::world::ObjectId const &egoId,
                            ::ad::map::match::Object const &egoMatchObject,
                            ::ad::physics::Speed const &egoSpeed,
                            ::ad::rss::world::ObjectId const &objectId,
                            ::ad::rss::world::ObjectType const &objectType,
                            ::ad::map::match::Object const &objectMatchObject,
                            ::ad::physics::Speed const &objectSpeed,
                            ::ad::rss::world::RssDynamics const &objectRssDynamics,
                            ::ad::rss::world::WorldModel &worldModel)
{
  ::ad::rss::world::Scene scene;
  scene.situationType = ::ad::rss::situation::SituationType::NotRelevant;

  getLogger()->debug("RssSceneCreation::appendNotRelevantScene[ {} ]>>situation {} road area {}",
                     objectId,
                     scene.situationType,
                     scene.egoVehicleRoad);
  ::ad::map::lane::LaneIdSet negativeRouteDirectionLanes;
  auto objectConversionResult = RssObjectConversion::convertObject(objectId,
                                                                   objectType,
                                                                   objectMatchObject,
                                                                   objectSpeed,
                                                                   scene.egoVehicleRoad,
                                                                   negativeRouteDirectionLanes,
                                                                   scene.object);
  if (!objectConversionResult)
  {
    getLogger()->error("RssSceneCreation::appendNotRelevantScene[ {} ]>> converting object to scene failed {} {} {}",
                       objectId,
                       objectType,
                       objectMatchObject,
                       objectSpeed);
    return false;
  }
  getLogger()->debug("RssSceneCreation::appendNotRelevantScene[ {} ]>> object {}", objectId, scene.object);
  scene.objectRssDynamics = objectRssDynamics;
  auto egoConversionResult = RssObjectConversion::convertObject(egoId,
                                                                ::ad::rss::world::ObjectType::EgoVehicle,
                                                                egoMatchObject,
                                                                egoSpeed,
                                                                scene.egoVehicleRoad,
                                                                negativeRouteDirectionLanes,
                                                                scene.egoVehicle);
  if (!egoConversionResult)
  {
    getLogger()->error("RssSceneCreation::appendNotRelevantScene[ {} ]>> converting ego to scene failed {} {}",
                       objectId,
                       egoMatchObject,
                       egoSpeed);
    return false;
  }
  getLogger()->debug("RssSceneCreation::appendNotRelevantScene[ {} ]>> ego {}", objectId, scene.egoVehicle);

  worldModel.scenes.push_back(scene);
  return true;
}

bool appendScenes(::ad::rss::world::ObjectId const &egoId,
                  ::ad::map::match::Object const &egoMatchObject,
                  ::ad::physics::Speed const &egoSpeed,
                  ::ad::map::route::FullRoute const &egoRouteInput,
                  ::ad::rss::world::ObjectId const &objectId,
                  ::ad::rss::world::ObjectType const &objectType,
                  ::ad::map::match::Object const &objectMatchObject,
                  ::ad::physics::Speed const &objectSpeed,
                  ::ad::rss::world::RssDynamics const &objectRssDynamics,
                  RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                  ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                  ::ad::rss::world::WorldModel &worldModel)
{
  bool result = false;
  auto const scenesSizeBefore = worldModel.scenes.size();

  //   Calculate shortest route (ignore driving direction) between the two objects MapMatchedObjectBoundingBox
  auto const connectingRoute = ::ad::map::route::planning::calculateConnectingRoute(
    egoMatchObject.mapMatchedBoundingBox, objectMatchObject.mapMatchedBoundingBox);

  // todo: connecting route calculation has to consider Y routes, too
  // currently cars driving on routes that merge together into one route (i.e. ramps) don't get a connecting route, yet!

  if (connectingRoute.connectingSegments.empty())
  {
    getLogger()->debug("RssSceneCreation::appendScenes[ {} ]>> no connecting route available to object", objectId);
    appendNotRelevantScene(egoId,
                           egoMatchObject,
                           egoSpeed,
                           objectId,
                           objectType,
                           objectMatchObject,
                           objectSpeed,
                           objectRssDynamics,
                           worldModel);
    return true;
  }

  auto const routeDuration = ::ad::map::route::calcDuration(connectingRoute);
  if (routeDuration > cMaxSceneDuration)
  {
    getLogger()->debug(
      "RssSceneCreation::appendScenes[ {} ]>> connecting route to object exceeds max scene duration {} {}",
      objectId,
      routeDuration,
      cMaxSceneDuration);
    appendNotRelevantScene(egoId,
                           egoMatchObject,
                           egoSpeed,
                           objectId,
                           objectType,
                           objectMatchObject,
                           objectSpeed,
                           objectRssDynamics,
                           worldModel);
    return true;
  }

  auto const startInterval = std::find_if(
    connectingRoute.connectingSegments.front().begin(),
    connectingRoute.connectingSegments.front().end(),
    [&connectingRoute](::ad::map::route::ConnectingInterval const &interval) { return interval.laneOffset == 0u; });
  if (startInterval == connectingRoute.connectingSegments.front().end())
  {
    throw std::runtime_error("RssSceneCreation::appendScenes>> start interval not found in connecting route");
    return false;
  }

  auto const destinationInterval
    = std::find_if(connectingRoute.connectingSegments.back().begin(),
                   connectingRoute.connectingSegments.back().end(),
                   [&connectingRoute](::ad::map::route::ConnectingInterval const &interval) {
                     return interval.laneOffset == connectingRoute.destinationLaneOffset;
                   });
  if (destinationInterval == connectingRoute.connectingSegments.back().end())
  {
    throw std::runtime_error("RssSceneCreation::appendScenes>> destination interval not found in connecting route");
    return false;
  }

  // Determine situation type
  // @todo: consider that it's not yet clear if we had a forward search or backward seach:
  // meaning is the object behind us in the interval or in front
  // we have to extend the creation of the connecting route to handle this properly (at the moment the connecting route
  // is searching
  // in forward direction...)
  auto const objectEnuHeading = objectMatchObject.enuPosition.heading;
  auto const objectHeadingInLaneDirection = ::ad::map::lane::isHeadingInLaneDirection(
    ::ad::map::route::getIntervalEnd(destinationInterval->laneInterval), objectEnuHeading);
  auto const objectDrivingAlongConnectingRoute
    = destinationInterval->laneInterval.wrongWay != objectHeadingInLaneDirection;

  auto const predictionLength = connectingRoute.connectingRouteLength + ::ad::physics::Distance(20.);
  std::vector<::ad::map::route::FullRoute> egoPredictedRoutes;
  if (egoRouteInput.roadSegments.empty())
  {
    egoPredictedRoutes
      = ::ad::map::route::planning::predictRoutesOnDistance(egoMatchObject.mapMatchedBoundingBox, predictionLength);
  }
  else
  {
    // for the analysis we are only interested in the near term route
    auto shortenedRoute = egoRouteInput;
    ::ad::map::route::shortenRouteToDistance(shortenedRoute, predictionLength);
    egoPredictedRoutes.push_back(shortenedRoute);
  }

  if (objectDrivingAlongConnectingRoute)
  {
    // the other is driving in front of us
    // it doesn't matter if there is an intersection in between or not as we might follow the other through the
    // intersection
    bool objectOnOneOfOurRoutes = false;
    for (auto const &egoRoute : egoPredictedRoutes)
    {
      auto const findObject = ::ad::map::route::objectOnRoute(objectMatchObject.mapMatchedBoundingBox, egoRoute);
      if (findObject.isValid())
      {
        objectOnOneOfOurRoutes = true;
        getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> driving in front on our route {} {}",
                           objectId,
                           objectMatchObject,
                           egoRoute);
        break;
      }
      else
      {
        getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> driving in front but not on route {} {}",
                           objectId,
                           objectMatchObject,
                           egoRoute);
      }
    }
    if (objectOnOneOfOurRoutes)
    {
      result = appendNonIntersectionScene(connectingRoute,
                                          ::ad::rss::situation::SituationType::SameDirection,
                                          egoId,
                                          egoMatchObject,
                                          egoSpeed,
                                          objectId,
                                          objectType,
                                          objectMatchObject,
                                          objectSpeed,
                                          objectRssDynamics,
                                          restrictSpeedLimitMode,
                                          worldModel);
    }
    else
    {
      // todo: check whether something else to be done here
      result = appendNotRelevantScene(egoId,
                                      egoMatchObject,
                                      egoSpeed,
                                      objectId,
                                      objectType,
                                      objectMatchObject,
                                      objectSpeed,
                                      objectRssDynamics,
                                      worldModel);
    }
  }
  else if (!::ad::map::route::intersectionOnConnectedRoute(connectingRoute))
  {
    getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> no intersections on connecting route found: create "
                       "opposite direction use-case {}",
                       objectId,
                       egoPredictedRoutes.front());
    result = appendNonIntersectionScene(connectingRoute,
                                        ::ad::rss::situation::SituationType::OppositeDirection,
                                        egoId,
                                        egoMatchObject,
                                        egoSpeed,
                                        objectId,
                                        objectType,
                                        objectMatchObject,
                                        objectSpeed,
                                        objectRssDynamics,
                                        restrictSpeedLimitMode,
                                        worldModel);
  }
  else
  {
    for (auto const &egoRoute : egoPredictedRoutes)
    {
      getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> investigate egoRoute {}", objectId, egoRoute);
      auto const intersectionsOnRoute = ::ad::map::intersection::Intersection::getIntersectionsForRoute(egoRoute);
      if (intersectionsOnRoute.empty())
      {
        getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> no intersections on route found: create opposite "
                           "direction use-case {}",
                           objectId,
                           egoRoute);
        result = appendNonIntersectionScene(connectingRoute,
                                            ::ad::rss::situation::SituationType::OppositeDirection,
                                            egoId,
                                            egoMatchObject,
                                            egoSpeed,
                                            objectId,
                                            objectType,
                                            objectMatchObject,
                                            objectSpeed,
                                            objectRssDynamics,
                                            restrictSpeedLimitMode,
                                            worldModel);
      }
      else
      {
        result = true;
        auto const objectPredictedRoutes = ::ad::map::route::planning::predictRoutesOnDistance(
          objectMatchObject.mapMatchedBoundingBox, predictionLength);
        for (auto const &intersection : intersectionsOnRoute)
        {
          for (auto const &objectRoute : objectPredictedRoutes)
          {
            if (intersection->objectRouteFromSameArmAsIntersectionRoute(objectRoute))
            {
              getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> egoRoute: {} objectRoute: {} intersection {} "
                                 "object route from same arm as intersection route: same direction",
                                 objectId,
                                 egoRoute,
                                 objectRoute,
                                 intersection->entryParaPoints());
              // @todo: here it is not 100% guaranteed that the intersection is part of the initial connecting route!
              // e.g. if it is the second intersection in both, the ego and the object route there we might need for
              // this
              // a different connecting route which's calculation starts AFTER each of the first intersections!
              // Is then potentially also a Y-like connecting route (not yet supported!)
              // there is an example in the unit tests for this
              // we need to create a new same direction connecting route having both, the egoRoute and the objectRoute
              // present
              // - egoRoute before route gets common
              // - objectRoute before route gets common
              // + the common part of the routes
              result = result && appendNonIntersectionScene(connectingRoute,
                                                            ::ad::rss::situation::SituationType::SameDirection,
                                                            egoId,
                                                            egoMatchObject,
                                                            egoSpeed,
                                                            objectId,
                                                            objectType,
                                                            objectMatchObject,
                                                            objectSpeed,
                                                            objectRssDynamics,
                                                            restrictSpeedLimitMode,
                                                            worldModel);
            }
            else if (intersection->objectRouteOppositeToIntersectionRoute(objectRoute)
                     || !intersection->objectRouteCrossesIntersectionRoute(objectRoute))
            {
              auto const findResult = ::ad::map::route::intersectionOnRoute(*intersection, objectRoute);
              if (findResult.isValid())
              {
                getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> egoRoute: {} objectRoute: {} intersection "
                                   "{} object route crosses intersection: opposite direction scene",
                                   objectId,
                                   egoRoute,
                                   objectRoute,
                                   intersection->entryParaPoints());
                // here, the connecting route should be correct; otherwise we would not oppose to each other
                //
                result = result && appendNonIntersectionScene(connectingRoute,
                                                              ::ad::rss::situation::SituationType::OppositeDirection,
                                                              egoId,
                                                              egoMatchObject,
                                                              egoSpeed,
                                                              objectId,
                                                              objectType,
                                                              objectMatchObject,
                                                              objectSpeed,
                                                              objectRssDynamics,
                                                              restrictSpeedLimitMode,
                                                              worldModel);
              }
              else
              {
                getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> egoRoute: {} objectRoute: {} intersection "
                                   "{} found object route not interacting with intersection on route",
                                   objectId,
                                   egoRoute,
                                   objectRoute,
                                   intersection->entryParaPoints());
              }
            }
            else
            {
              getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> egoRoute: {} objectRoute: {} "
                                 "intersectionLanesOnRoute {} intersection {} object route crosses intersection route: "
                                 "intersection scene",
                                 objectId,
                                 egoRoute,
                                 objectRoute,
                                 intersection->paraPointsOnRoute(),
                                 intersection->entryParaPoints());
              result = result && appendIntersectionScene(intersection,
                                                         egoRoute,
                                                         objectRoute,
                                                         egoId,
                                                         egoMatchObject,
                                                         egoSpeed,
                                                         objectId,
                                                         objectType,
                                                         objectMatchObject,
                                                         objectSpeed,
                                                         objectRssDynamics,
                                                         restrictSpeedLimitMode,
                                                         greenTrafficLights,
                                                         worldModel);
            }
          }
        }
      }
    }
  }

  if (result && (scenesSizeBefore == worldModel.scenes.size()))
  {
    getLogger()->trace(
      "RssSceneCreation::appendScenes[ {} ]>> detailed analysis did not find any relevant situation {} {}",
      objectId,
      objectMatchObject,
      egoRouteInput);
    result = appendNotRelevantScene(egoId,
                                    egoMatchObject,
                                    egoSpeed,
                                    objectId,
                                    objectType,
                                    objectMatchObject,
                                    objectSpeed,
                                    objectRssDynamics,
                                    worldModel);
  }

  return result;
}

bool appendRoadBoundaries(::ad::rss::world::ObjectId const &egoId,
                          ::ad::map::match::Object const &egoMatchObject,
                          ::ad::physics::Speed const &egoSpeed,
                          ::ad::map::route::FullRoute const &inputRoute,
                          AppendRoadBoundariesMode const operationMode,
                          ::ad::rss::world::WorldModel &worldModel)
{
  bool result = true;
  if (inputRoute.roadSegments.empty())
  {
    return false;
  }
  // for the analysis we are only interested in the near term route
  ::ad::map::route::FullRoute route = inputRoute;
  ::ad::map::route::shortenRouteToDistance(route, ::ad::physics::Distance(20.));

  if (operationMode == AppendRoadBoundariesMode::ExpandRouteToOppositeLanes)
  {
    route = ::ad::map::route::getRouteExpandedToOppositeLanes(route);
  }
  else if (operationMode == AppendRoadBoundariesMode::ExpandRouteToAllNeighbors)
  {
    route = ::ad::map::route::getRouteExpandedToAllNeighborLanes(route);
  }

  ::ad::rss::world::RssDynamics staticDynamics;
  staticDynamics.alphaLat.accelMax = ::ad::physics::Acceleration(0.);
  staticDynamics.alphaLat.brakeMin = ::ad::physics::Acceleration(0.01);
  staticDynamics.alphaLon.accelMax = ::ad::physics::Acceleration(0.);
  staticDynamics.alphaLon.brakeMax = ::ad::physics::Acceleration(0.01);
  staticDynamics.alphaLon.brakeMin = ::ad::physics::Acceleration(0.01);
  staticDynamics.alphaLon.brakeMinCorrect = ::ad::physics::Acceleration(0.01);
  staticDynamics.lateralFluctuationMargin = ::ad::physics::Distance(0.0);
  staticDynamics.responseTime = ::ad::physics::Duration(0.01);

  ::ad::rss::world::Velocity staticVelocity;
  staticVelocity.speedLonMin = ::ad::physics::Speed(0);
  staticVelocity.speedLonMax = ::ad::physics::Speed(0);
  staticVelocity.speedLatMin = ::ad::physics::Speed(0);
  staticVelocity.speedLatMax = ::ad::physics::Speed(0);

  ::ad::rss::world::ObjectId rightBorderId = std::numeric_limits<::ad::rss::world::ObjectId>::max();
  ::ad::rss::world::ObjectId leftBorderId = std::numeric_limits<::ad::rss::world::ObjectId>::max() - 1;

  ::ad::rss::world::Scene rightBorderScene;
  rightBorderScene.situationType = ::ad::rss::situation::SituationType::SameDirection;
  ::ad::map::lane::LaneIdSet negativeRouteDirectionLanes;
  ::ad::physics::Speed speedLimit(0.);
  rightBorderScene.egoVehicleRoad = convertToRss(route, negativeRouteDirectionLanes, speedLimit);
  ::ad::rss::world::Scene leftBorderScene;
  leftBorderScene.situationType = ::ad::rss::situation::SituationType::SameDirection;
  leftBorderScene.egoVehicleRoad = rightBorderScene.egoVehicleRoad;

  ::ad::rss::world::Object rightBorderObject;
  rightBorderObject.objectId = rightBorderId;
  rightBorderObject.objectType = ::ad::rss::world::ObjectType::ArtificialObject;
  rightBorderObject.velocity = staticVelocity;

  ::ad::rss::world::Object leftBorderObject;
  leftBorderObject.objectId = leftBorderId;
  leftBorderObject.objectType = ::ad::rss::world::ObjectType::ArtificialObject;
  leftBorderObject.velocity = staticVelocity;

  for (auto const &roadSegment : route.roadSegments)
  {
    auto &rightmostLane = roadSegment.drivableLaneSegments.front();

    ::ad::rss::world::OccupiedRegion region;
    region.lonRange.minimum = ::ad::physics::ParametricValue(0.);
    region.lonRange.maximum = ::ad::physics::ParametricValue(1.);
    region.latRange.minimum = ::ad::physics::ParametricValue(0.999);
    region.latRange.maximum = ::ad::physics::ParametricValue(1.);
    region.segmentId = ::ad::rss::world::LaneSegmentId(rightmostLane.laneInterval.laneId);
    rightBorderObject.occupiedRegions.push_back(region);

    auto &leftmostLane = roadSegment.drivableLaneSegments.back();

    region.lonRange.minimum = ::ad::physics::ParametricValue(0.);
    region.lonRange.maximum = ::ad::physics::ParametricValue(1.);
    region.latRange.minimum = ::ad::physics::ParametricValue(0.);
    region.latRange.maximum = ::ad::physics::ParametricValue(0.001);
    region.segmentId = ::ad::rss::world::LaneSegmentId(leftmostLane.laneInterval.laneId);
    leftBorderObject.occupiedRegions.push_back(region);
  }

  rightBorderScene.object = rightBorderObject;
  rightBorderScene.objectRssDynamics = staticDynamics;
  leftBorderScene.object = leftBorderObject;
  leftBorderScene.objectRssDynamics = staticDynamics;

  ::ad::rss::world::Object egoVehicle;
  auto egoConversionResult = RssObjectConversion::convertObject(egoId,
                                                                ::ad::rss::world::ObjectType::EgoVehicle,
                                                                egoMatchObject,
                                                                egoSpeed,
                                                                rightBorderScene.egoVehicleRoad,
                                                                negativeRouteDirectionLanes,
                                                                egoVehicle);
  if (!egoConversionResult)
  {
    getLogger()->error("RssSceneCreation::appendRoadBoundaries[ {} ]>> converting ego to scene failed {} {}",
                       egoId,
                       egoMatchObject,
                       egoSpeed);
    return false;
  }
  rightBorderScene.egoVehicle = egoVehicle;
  leftBorderScene.egoVehicle = egoVehicle;
  getLogger()->debug("RssSceneCreation::appendRoadBoundaries[ {} ]>> ego {}", egoId, egoVehicle);

  worldModel.scenes.push_back(rightBorderScene);
  worldModel.scenes.push_back(leftBorderScene);
  return result;
}
} // namespace RssSceneCreation
} // namespace map
} // namespace rss
} // namespace ad
