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
#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssObjectConversion.hpp"
#include "ad/rss/map/RssSceneCreator.hpp"

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

const ::ad::physics::Distance cMinSceneDistance(100.);

RssSceneCreation::RssSceneCreation(::ad::rss::world::TimeIndex const &timeIndex,
                                   ::ad::rss::world::RssDynamics const &defaultEgoRssDynamics)
  : mFinalized(false)
  , mWorldModelLock()
{
  mWorldModel.timeIndex = timeIndex;
  mWorldModel.defaultEgoVehicleRssDynamics = defaultEgoRssDynamics;
}

::ad::rss::world::WorldModel RssSceneCreation::getWorldModel()
{
  const std::lock_guard<std::mutex> lock(mWorldModelLock);
  if (mFinalized)
  {
    getLogger()->error("RssSceneCreation::getWorldModel>> error world model already finalized.");
    return ::ad::rss::world::WorldModel();
  }

  mFinalized = true;
  return std::move(mWorldModel);
}

bool RssSceneCreation::appendScenes(::ad::rss::world::ObjectId const &egoId,
                                    ::ad::map::match::Object const &egoMatchObject,
                                    ::ad::physics::Speed const &egoSpeed,
                                    ::ad::physics::AngularVelocity const &egoYawRate,
                                    ::ad::rss::world::RssDynamics const &egoRssDynamics,
                                    ::ad::map::route::FullRoute const &egoRouteInput,
                                    ::ad::rss::world::ObjectId const &objectId,
                                    ::ad::rss::world::ObjectType const &objectType,
                                    ::ad::map::match::Object const &objectMatchObject,
                                    ::ad::physics::Speed const &objectSpeed,
                                    ::ad::physics::AngularVelocity const &objectYawRate,
                                    ::ad::rss::world::RssDynamics const &objectRssDynamics,
                                    RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                                    ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                                    ::ad::rss::map::RssMode const &mode)
{
  if (mFinalized)
  {
    getLogger()->error("RssSceneCreation::appendScenes[{}]>> error world model already finalized.", objectId);
    return false;
  }

  if (egoMatchObject.mapMatchedBoundingBox.laneOccupiedRegions.empty())
  {
    getLogger()->warn("RssSceneCreation::appendScenes[{}]>> ego without occupied regions skipping.", objectId);
    return false;
  }
  if (objectMatchObject.mapMatchedBoundingBox.laneOccupiedRegions.empty())
  {
    getLogger()->warn("RssSceneCreation::appendScenes[{}]>> object without occupied regions skipping.", objectId);
    return false;
  }

  auto egoObject = std::make_shared<RssObjectConversion const>(
    egoId, ::ad::rss::world::ObjectType::EgoVehicle, egoMatchObject, egoSpeed, egoYawRate, egoRssDynamics);
  auto otherObject = std::make_shared<RssObjectConversion const>(
    objectId, objectType, objectMatchObject, objectSpeed, objectYawRate, objectRssDynamics);

  RssSceneCreator sceneCreator(restrictSpeedLimitMode, greenTrafficLights, *this);

  if (mode == ::ad::rss::map::RssMode::Unstructured)
  {
    return sceneCreator.appendUnstructuredScene(egoObject, otherObject);
  }
  else
  {
    return appendStructuredScenes(sceneCreator,
                                  egoObject,
                                  egoId,
                                  egoMatchObject,
                                  egoSpeed,
                                  egoYawRate,
                                  egoRssDynamics,
                                  egoRouteInput,
                                  otherObject,
                                  objectId,
                                  objectType,
                                  objectMatchObject,
                                  objectSpeed,
                                  objectYawRate,
                                  objectRssDynamics);
  }
}

bool RssSceneCreation::appendStructuredScenes(::ad::rss::map::RssSceneCreator &sceneCreator,
                                              std::shared_ptr<RssObjectConversion const> const &egoObject,
                                              ::ad::rss::world::ObjectId const &egoId,
                                              ::ad::map::match::Object const &egoMatchObject,
                                              ::ad::physics::Speed const &egoSpeed,
                                              ::ad::physics::AngularVelocity const &egoYawRate,
                                              ::ad::rss::world::RssDynamics const &egoRssDynamics,
                                              ::ad::map::route::FullRoute const &egoRouteInput,
                                              std::shared_ptr<RssObjectConversion const> const &otherObject,
                                              ::ad::rss::world::ObjectId const &objectId,
                                              ::ad::rss::world::ObjectType const &objectType,
                                              ::ad::map::match::Object const &objectMatchObject,
                                              ::ad::physics::Speed const &objectSpeed,
                                              ::ad::physics::AngularVelocity const &objectYawRate,
                                              ::ad::rss::world::RssDynamics const &objectRssDynamics)
{
  bool result = false;
  bool sceneAppended = false;

  try
  {
    physics::Distance minStoppingDistance;
    if (!egoObject->calculateMinStoppingDistance(minStoppingDistance))
    {
      getLogger()->error("RssSceneCreation::appendScenes[{}]>> error calculating min stopping distance", objectId);
      return false;
    }

    // and for sure consider some minimum distance
    auto maxConnectingRouteDistance = std::max(minStoppingDistance, cMinSceneDistance);

    //   Calculate shortest route (ignore driving direction) between the two objects MapMatchedObjectBoundingBox
    auto const connectingRoute = ::ad::map::route::planning::calculateConnectingRoute(
      egoMatchObject, objectMatchObject, maxConnectingRouteDistance);

    if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Invalid)
    {
      getLogger()->debug("RssSceneCreation::appendScenes[{}]>> no connecting route available to object with {} meters",
                         objectId,
                         maxConnectingRouteDistance);
      auto const appendResult = sceneCreator.appendNotRelevantScene(egoRouteInput, egoObject, otherObject);
      return appendResult;
    }
    getLogger()->trace(
      "RssSceneCreation::appendScenes[{}]>> connecting route available to object:\n {}", objectId, connectingRoute);

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
            getLogger()->trace("RssSceneCreation::appendScenes[{}]>> driving in front on our route:\n"
                               " objectMatchObject({})\n egoRoute({})",
                               objectId,
                               objectMatchObject,
                               egoRoute);
            break;
          }
          else
          {
            getLogger()->trace("RssSceneCreation::appendScenes[{}]>> driving in front but not on route:\n"
                               " objectMatchObject({})\n egoRoute({})",
                               objectId,
                               objectMatchObject,
                               egoRoute);
          }
        }
      }
      if (objectOnOneOfOurRoutes)
      {
        getLogger()->debug("RssSceneCreation::appendScenes[{}]>> relevant following connecting route found: create "
                           "same direction use-case\n {}",
                           objectId,
                           connectingRoute);
        auto const appendResult = sceneCreator.appendNonIntersectionScene(
          connectingRoute, ::ad::rss::situation::SituationType::SameDirection, egoObject, otherObject);
        result = appendResult;
        sceneAppended = appendResult;
      }
      else
      {
        // no relevant object found
        // @todo: is there anything else to be done here?
        result = true;
      }
    }
    else if (!::ad::map::route::isConnectedRoutePartOfAnIntersection(connectingRoute))
    {
      if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Opposing)
      {
        getLogger()->debug(
          "RssSceneCreation::appendScenes[{}]>> no intersections on opposing connecting route found: create "
          "opposite direction use-case\n {}",
          objectId,
          connectingRoute);
        auto const appendResult = sceneCreator.appendNonIntersectionScene(
          connectingRoute, ::ad::rss::situation::SituationType::OppositeDirection, egoObject, otherObject);
        result = appendResult;
        sceneAppended = appendResult;
      }
      else
      {
        // ConnectingRouteType::Merging
        // no intersection in between, but merging
        // we interpret this now as intersection case
        // @todo: analyze in more detail how such scenes have to be handled, keep as info message for now
        getLogger()->info(
          "RssSceneCreation::appendScenes[{}]>> no intersections on merging connecting route found: create "
          "merging-intersection same prio use-case\n {}",
          objectId,
          connectingRoute);
        auto const appendResult = sceneCreator.appendMergingScene(
          connectingRoute, ::ad::rss::situation::SituationType::IntersectionSamePriority, egoObject, otherObject);
        result = appendResult;
        sceneAppended = appendResult;
      }
    }
    else
    {
      result = true;
      // case: ConnectingRouteType::Opposing with intersections
      // or:   ConnectingRouteType::Merging with intersections
      for (auto const &egoRoute : egoPredictedRoutes)
      {
        getLogger()->trace("RssSceneCreation::appendScenes[{}]>> investigate egoRoute({})", objectId, egoRoute);
        auto intersectionsOnEgoRoute = ::ad::map::intersection::Intersection::getIntersectionsForRoute(egoRoute);
        if (intersectionsOnEgoRoute.empty() && (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Merging))
        {
          getLogger()->debug("RssSceneCreation::appendScenes[{}]>> no intersections on route found: create"
                             "merging-intersection same prio use-case:\n egoRoute({})",
                             objectId,
                             egoRoute);
          auto const appendResult = sceneCreator.appendMergingScene(
            connectingRoute, ::ad::rss::situation::SituationType::IntersectionSamePriority, egoObject, otherObject);
          result = result && appendResult;
          sceneAppended |= appendResult;
        }
        else
        {
          // analyse object predictions in detail
          auto const objectPredictedRoutes = ::ad::map::route::planning::predictRoutesOnDistance(
            objectMatchObject.mapMatchedBoundingBox, predictionLength);
          for (auto const &objectRoute : objectPredictedRoutes)
          {
            auto intersectionsOnRoute = intersectionsOnEgoRoute;
            auto const *intersectionOtherRoute = &objectRoute;
            if (intersectionsOnRoute.empty())
            {
              // no intersection on ego route, but within opposing connectingRoute
              // Currently this can happen if the ego vehicle route starts inside the intersection,
              // and the object is outside, let's then take the intersections on the object route
              intersectionsOnRoute = ::ad::map::intersection::Intersection::getIntersectionsForRoute(objectRoute);
              if (intersectionsOnRoute.empty())
              {
                // looks like not a straight forward road layout, but
                // need to ensure we don't miss this situation
                // @todo: analyze when this can happen and if the created scene is appropriate

                getLogger()->debug("RssSceneCreation::appendScenes[{}]>> no intersections on route found: create "
                                   "opposite direction use-case:\n"
                                   " egoRoute({})",
                                   objectId,
                                   egoRoute);
                auto const appendResult = sceneCreator.appendNonIntersectionScene(
                  connectingRoute, ::ad::rss::situation::SituationType::OppositeDirection, egoObject, otherObject);
                result = result && appendResult;
                sceneAppended |= appendResult;
              }
              else
              {
                intersectionOtherRoute = &egoRoute;
                getLogger()->trace("RssSceneCreation::appendScenes[{}]>> no intersection on ego route, but"
                                   "opposite connecting route; checking intersections in object route:\n"
                                   " egoRoute({})\n objectRoute({})",
                                   objectId,
                                   egoRoute,
                                   objectRoute);
              }
            }

            for (auto const &intersection : intersectionsOnRoute)
            {
              if (!intersection->objectRouteCrossesIntersection(*intersectionOtherRoute))
              {
                getLogger()->trace(
                  "RssSceneCreation::appendScenes[{}]>> found object route not crossing intersection on route:\n"
                  " egoRoute({})\n objectRoute({})\n intersection({})",
                  objectId,
                  egoRoute,
                  objectRoute,
                  intersection->entryParaPoints());
              }
              else if (intersection->objectRouteFromSameArmAsIntersectionRoute(*intersectionOtherRoute))
              {
                // This can happen if the intersection is not necessarily the first intersection of both vehicles
                // and so being a secondary merging use-case at that far intersection
                // Therefore, later this situation might switch to an actual merging connected route or following use
                // case from above.
                // Now: Create an intersection scene
                // @todo: find out more here: is it required now to search the two routes for a merge even before the
                // intersection?
                getLogger()->debug("RssSceneCreation::appendScenes[{}]>> object route from same arm as intersection "
                                   "looks like merging situation far in future: create intersection scene\n"
                                   " egoRoute({})\n objectRoute({})\n intersection({})\n {}",
                                   objectId,
                                   egoRoute,
                                   objectRoute,
                                   intersection->entryParaPoints(),
                                   connectingRoute);
                auto const appendResult = sceneCreator.appendIntersectionScene(
                  intersection, egoRoute, objectRoute, *intersectionOtherRoute, egoObject, otherObject);
                result = result && appendResult;
                sceneAppended |= appendResult;
              }
              else if (intersection->objectRouteOppositeToIntersectionRoute(*intersectionOtherRoute)
                       || !intersection->objectRouteCrossesIntersectionRoute(*intersectionOtherRoute))
              {
                if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Opposing)
                {
                  // here, the connecting route should be correct; otherwise we would not oppose to each other
                  getLogger()->debug("RssSceneCreation::appendScenes[{}]>> object route opposite and not crossing: "
                                     "opposite direction scene:\n"
                                     " egoRoute({})\n objectRoute({})\n intersection({})",
                                     objectId,
                                     egoRoute,
                                     objectRoute,
                                     intersection->entryParaPoints());
                  auto const appendResult = sceneCreator.appendNonIntersectionScene(
                    connectingRoute, ::ad::rss::situation::SituationType::OppositeDirection, egoObject, otherObject);
                  result = result && appendResult;
                  sceneAppended |= appendResult;
                }
                else
                {
                  // This can happen if the cars are too far away from each other for creating an opposing
                  // connecting route, but we find two predictions of the two vehicles ending at the same
                  // intersection
                  // Therefore, later this situation might switch to the opposite type above.
                  // Now: Create an intersection scene
                  getLogger()->debug("RssSceneCreation::appendScenes[{}]>> object route opposite and not crossing, but "
                                     "merging situation: create "
                                     "intersection scene\n",
                                     " egoRoute({})\n objectRoute({})\n intersection({})\n {}",
                                     objectId,
                                     egoRoute,
                                     objectRoute,
                                     intersection->entryParaPoints(),
                                     connectingRoute);
                  auto const appendResult = sceneCreator.appendIntersectionScene(
                    intersection, egoRoute, objectRoute, *intersectionOtherRoute, egoObject, otherObject);
                  result = result && appendResult;
                  sceneAppended |= appendResult;
                }
              }
              else
              {
                getLogger()->debug("RssSceneCreation::appendScenes[{}]>> object route crosses intersection route: "
                                   "intersection scene\n"
                                   " egoRoute({})\n objectRoute({})\n intersectionLanesOnRoute({})\n intersection({})",
                                   objectId,
                                   egoRoute,
                                   objectRoute,
                                   intersection->paraPointsOnRoute(),
                                   intersection->entryParaPoints());
                auto const appendResult = sceneCreator.appendIntersectionScene(
                  intersection, egoRoute, objectRoute, *intersectionOtherRoute, egoObject, otherObject);
                result = result && appendResult;
                sceneAppended |= appendResult;
              }
            }
          }
        }
      }
    }
  }
  catch (std::exception const &e)
  {
    getLogger()->error("RssSceneCreation::appendScenes[{}]>> Failed. Catched exception: {}", objectId, e.what());
  }

  if (!sceneAppended)
  {
    if (result)
    {
      getLogger()->debug("RssSceneCreation::appendScenes[{}]>> detailed analysis did not find any relevant "
                         "situation. Append non relevant scene\n"
                         " objectMatchObject({})\n egoMatchObject({})\n egoRoute({})",
                         objectId,
                         objectMatchObject,
                         egoMatchObject,
                         egoRouteInput);
    }
    else
    {
      getLogger()->warn("RssSceneCreation::appendScenes[{}]>> an operation failed and no scene could have been "
                        "created. Try to append non relevant scene\n"
                        " objectMatchObject({})\n egoMatchObject({})\n egoRoute({})",
                        objectId,
                        objectMatchObject,
                        egoMatchObject,
                        egoRouteInput);
    }
    auto const appendResult = sceneCreator.appendNotRelevantScene(egoRouteInput, egoObject, otherObject);
    result = result && appendResult;
  }

  return result;
}

bool RssSceneCreation::appendRoadBoundaries(::ad::rss::world::ObjectId const &egoId,
                                            ::ad::map::match::Object const &egoMatchObject,
                                            ::ad::physics::Speed const &egoSpeed,
                                            ::ad::physics::AngularVelocity const &egoYawRate,
                                            ::ad::rss::world::RssDynamics const &egoRssDynamics,
                                            ::ad::map::route::FullRoute const &inputRoute,
                                            AppendRoadBoundariesMode const operationMode)
{
  if (mFinalized)
  {
    getLogger()->error("RssSceneCreation::appendRoadBoundaries>> error world model already finalized.");
    return false;
  }
  if (egoMatchObject.mapMatchedBoundingBox.laneOccupiedRegions.empty())
  {
    getLogger()->warn("RssSceneCreation::appendRoadBoundaries>> ego without occupied regions skipping.");
    return false;
  }

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
      egoId, ::ad::rss::world::ObjectType::EgoVehicle, egoMatchObject, egoSpeed, egoYawRate, egoRssDynamics);

    RssSceneCreator sceneCreator(*this);
    getLogger()->debug("RssSceneCreation::appendRoadBoundaries[]>>\n"
                       " egoRoute({})\n egoObject({})",
                       route,
                       egoObject);
    result = sceneCreator.appendRoadBoundaryScenes(route, egoObject);
  }
  catch (std::exception const &e)
  {
    getLogger()->error("RssSceneCreation::appendRoadBoundaries[ ]>> Failed. Catched exception: {}", e.what());
  }
  return result;
}

bool RssSceneCreation::appendSceneToWorldModel(::ad::rss::world::Scene const &scene)
{
  const std::lock_guard<std::mutex> lock(mWorldModelLock);
  if (mFinalized)
  {
    getLogger()->error("RssSceneCreation::appendSceneToWorldModel>> error world model already finalized.");
    return false;
  }

  mWorldModel.scenes.push_back(scene);
  return true;
}

} // namespace map
} // namespace rss
} // namespace ad
