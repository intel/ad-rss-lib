// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssSceneCreation.hpp"
#include <ad/map/route/Planning.hpp>
#include <ad/rss/world/WorldModelValidInputRange.hpp>
#include "RssObjectConversion.hpp"
#include "RssSceneCreator.hpp"
#include "ad/rss/map/Logging.hpp"

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

const ::ad::physics::Distance cMinSceneDistance(100.);

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

  auto egoObject = std::make_shared<RssObjectConversion const>(
    egoId, ::ad::rss::world::ObjectType::EgoVehicle, egoMatchObject, egoSpeed, worldModel.egoVehicleRssDynamics);
  auto otherObject = std::make_shared<RssObjectConversion const>(
    objectId, objectType, objectMatchObject, objectSpeed, objectRssDynamics);
  RssSceneCreator sceneCreator(restrictSpeedLimitMode, greenTrafficLights, worldModel);

  try
  {
    physics::Distance minStoppingDistance;
    if (!egoObject->calculateMinStoppingDistance(minStoppingDistance))
    {
      getLogger()->error("RssSceneCreation::appendScenes[ {} ]>> error calculating min stopping distance", objectId);
      return false;
    }

    // and for sure consider some minimum distance
    auto maxConnectingRouteDistance = std::max(minStoppingDistance, cMinSceneDistance);

    //   Calculate shortest route (ignore driving direction) between the two objects MapMatchedObjectBoundingBox
    auto const connectingRoute = ::ad::map::route::planning::calculateConnectingRoute(
      egoMatchObject, objectMatchObject, maxConnectingRouteDistance);

    if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Invalid)
    {
      getLogger()->debug(
        "RssSceneCreation::appendScenes[ {} ]>> no connecting route available to object with {} meters",
        objectId,
        maxConnectingRouteDistance);
      sceneCreator.appendNotRelevantScene(egoRouteInput, egoObject, otherObject);
      return true;
    }
    getLogger()->trace(
      "RssSceneCreation::appendScenes[ {} ]>> connecting route available to object {}", objectId, connectingRoute);

    // prepare ego route
    auto const predictionLength = ::ad::map::route::calcLength(connectingRoute) + ::ad::physics::Distance(20.);
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

    // reset the result to ensure we don't miss anything
    result = false;
    if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Following)
    {
      // vehicle following mode: it doesn't matter if there is an intersection in between or not
      // as the cars might follow each other through the intersection

      // @todo: to be clarified finally, if we actually can ignore others not on our route
      // for the moment we do so if we are following another one, but that one already left our route
      // (e.g. standing at the intersection exit when turning left, but we are driving straight through)
      bool objectOnOneOfOurRoutes = false;
      if (connectingRoute.routeA.roadSegments.empty())
      {
        // we are in front -> situation has to be considered since the other might follow us in our route
        objectOnOneOfOurRoutes = true;
      }
      else
      {
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
      }
      if (objectOnOneOfOurRoutes)
      {
        getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> relevant following connecting route found: create "
                           "same direction use-case {}",
                           objectId,
                           connectingRoute);
        result = sceneCreator.appendNonIntersectionScene(
          connectingRoute, ::ad::rss::situation::SituationType::SameDirection, egoObject, otherObject);
      }
      else
      {
        // no relevant object found
        // @todo: is there anything else to be done here?
        result = true;
      }
    }
    else if (!::ad::map::route::intersectionOnConnectedRoute(connectingRoute))
    {
      if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Opposing)
      {
        getLogger()->trace(
          "RssSceneCreation::appendScenes[ {} ]>> no intersections on opposing connecting route found: create "
          "opposite direction use-case {}",
          objectId,
          connectingRoute);
        result = sceneCreator.appendNonIntersectionScene(
          connectingRoute, ::ad::rss::situation::SituationType::OppositeDirection, egoObject, otherObject);
      }
      else
      {
        // ConnectingRouteType::Merging
        // no intersection in between, but merging
        // we interpret this now as intersection case
        // @todo: analyze in more detail how such scenes have to be handled
        getLogger()->trace(
          "RssSceneCreation::appendScenes[ {} ]>> no intersections on merging connecting route found: create "
          "merging-intersection same prio use-case {}",
          objectId,
          connectingRoute);
        result = sceneCreator.appendMergingScene(
          connectingRoute, ::ad::rss::situation::SituationType::IntersectionSamePriority, egoObject, otherObject);
      }
    }
    else
    {
      // case: ConnectingRouteType::Opposing with intersections
      // or:   ConnectingRouteType::Merging with intersections
      for (auto const &egoRoute : egoPredictedRoutes)
      {
        getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> investigate egoRoute {}", objectId, egoRoute);
        auto const intersectionsOnRoute = ::ad::map::intersection::Intersection::getIntersectionsForRoute(egoRoute);
        if (intersectionsOnRoute.empty())
        {
          // no intersection on ego route, but within opposing connectingRoute
          // looks like not a straight forward road layout, but
          // need to ensure we don't miss this situation
          // @todo: analyze when this can happen and if the created scene is appropriate
          if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Opposing)
          {
            getLogger()->trace(
              "RssSceneCreation::appendScenes[ {} ]>> no intersections on route found: create opposite "
              "direction use-case {}",
              objectId,
              egoRoute);
            result = sceneCreator.appendNonIntersectionScene(
              connectingRoute, ::ad::rss::situation::SituationType::OppositeDirection, egoObject, otherObject);
          }
          else
          {
            getLogger()->trace("RssSceneCreation::appendScenes[ {} ]>> no intersections on route found: create"
                               "merging-intersection same prio use-case {}",
                               objectId,
                               egoRoute);
            result = sceneCreator.appendMergingScene(
              connectingRoute, ::ad::rss::situation::SituationType::IntersectionSamePriority, egoObject, otherObject);
          }
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
                getLogger()->trace(
                  "RssSceneCreation::appendScenes[ {} ]>> egoRoute: {} objectRoute: {} intersection {} "
                  "object route from same arm as intersection route: same direction",
                  objectId,
                  egoRoute,
                  objectRoute,
                  intersection->entryParaPoints());
                // @todo: here it is not 100% guaranteed that the intersection is part of the initial connecting route!
                // e.g. if it is the second intersection in both, the ego and the object route there we might need for
                // this a different connecting route which's calculation starts AFTER each of the first intersections!
                // On the other hand it has to be clarified if this is relevant at all, because the first intersection
                // is already handled... for the moment let's add a scene
                result = result
                  && sceneCreator.appendNonIntersectionScene(
                       connectingRoute, ::ad::rss::situation::SituationType::SameDirection, egoObject, otherObject);
              }
              else if (intersection->objectRouteOppositeToIntersectionRoute(objectRoute)
                       || !intersection->objectRouteCrossesIntersectionRoute(objectRoute))
              {
                auto const findResult = ::ad::map::route::intersectionOnRoute(*intersection, objectRoute);
                if (findResult.isValid())
                {
                  if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Opposing)
                  {
                    // here, the connecting route should be correct; otherwise we would not oppose to each other
                    getLogger()->trace(
                      "RssSceneCreation::appendScenes[ {} ]>> egoRoute: {} objectRoute: {} intersection "
                      "{} object route crosses intersection: opposite direction scene",
                      objectId,
                      egoRoute,
                      objectRoute,
                      intersection->entryParaPoints());
                    result = result
                      && sceneCreator.appendNonIntersectionScene(connectingRoute,
                                                                 ::ad::rss::situation::SituationType::OppositeDirection,
                                                                 egoObject,
                                                                 otherObject);
                  }
                  else
                  {
                    // @todo: can this strange constellation happen?
                    //
                    getLogger()->warn(
                      "RssSceneCreation::appendScenes[ {} ]>> egoRoute: {} objectRoute: {} intersection "
                      "{} object route crosses intersection but merging situation {}: create "
                      "merging-intersection same prio use-case",
                      objectId,
                      egoRoute,
                      objectRoute,
                      intersection->entryParaPoints(),
                      connectingRoute);
                    result = result
                      && sceneCreator.appendMergingScene(connectingRoute,
                                                         ::ad::rss::situation::SituationType::IntersectionSamePriority,
                                                         egoObject,
                                                         otherObject);
                  }
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
                getLogger()->trace(
                  "RssSceneCreation::appendScenes[ {} ]>> egoRoute: {} objectRoute: {} "
                  "intersectionLanesOnRoute {} intersection {} object route crosses intersection route: "
                  "intersection scene",
                  objectId,
                  egoRoute,
                  objectRoute,
                  intersection->paraPointsOnRoute(),
                  intersection->entryParaPoints());
                result = result
                  && sceneCreator.appendIntersectionScene(intersection, egoRoute, objectRoute, egoObject, otherObject);
              }
            }
          }
        }
      }
    }
  }
  catch (std::exception const &e)
  {
    getLogger()->error("RssSceneCreation::appendScenes[ ]>> Failed. Catched exception: {}", e.what());
  }

  if (result && (scenesSizeBefore == worldModel.scenes.size()))
  {
    getLogger()->trace(
      "RssSceneCreation::appendScenes[ {} ]>> detailed analysis did not find any relevant situation {} {}",
      objectId,
      objectMatchObject,
      egoRouteInput);
    result = sceneCreator.appendNotRelevantScene(egoRouteInput, egoObject, otherObject);
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
  if (inputRoute.roadSegments.empty())
  {
    return false;
  }
  bool result = false;
  try
  {
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

    auto egoObject = std::make_shared<RssObjectConversion const>(
      egoId, ::ad::rss::world::ObjectType::EgoVehicle, egoMatchObject, egoSpeed, worldModel.egoVehicleRssDynamics);

    RssSceneCreator sceneCreator(worldModel);
    result = sceneCreator.appendRoadBoundaryScenes(route, egoObject);
  }
  catch (std::exception const &e)
  {
    getLogger()->error("RssSceneCreation::appendRoadBoundaries[ ]>> Failed. Catched exception: {}", e.what());
  }
  return result;
}
} // namespace RssSceneCreation
} // namespace map
} // namespace rss
} // namespace ad
