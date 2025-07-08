// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssWorldModelCreation.hpp"
#include <ad/map/route/Planning.hpp>
#include <ad/map/route/RouteOperation.hpp>
#include <ad/rss/world/WorldModelValidInputRange.hpp>
#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssObjectConversion.hpp"
#include "ad/rss/map/RssWorldModelCreator.hpp"

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

const ::ad::physics::Distance RssWorldModelCreation::cMinConnectedRouteLength(100.);
const ::ad::physics::Distance cNearTermRoadBoundariesRouteLength(10.);

RssWorldModelCreation::RssWorldModelCreation(world::TimeIndex const &time_index,
                                             world::RssDynamics const &defaultEgoRssDynamics)
  : mFinalized(false)
  , mWorldModelLock()
  , mConnectingRoutesCache(nullptr)
{
  mWorldModel.time_index = time_index;
  mWorldModel.default_ego_vehicle_rss_dynamics = defaultEgoRssDynamics;
}

RssWorldModelCreation::RssWorldModelCreation(::ad::rss::world::TimeIndex const &time_index,
                                             ::ad::rss::world::RssDynamics const &defaultEgoRssDynamics,
                                             ConnectingRoutesCache &connecting_routes_cache)
  : mFinalized(false)
  , mWorldModelLock()
  , mConnectingRoutesCache(&connecting_routes_cache)
{
  mWorldModel.time_index = time_index;
  mWorldModel.default_ego_vehicle_rss_dynamics = defaultEgoRssDynamics;
}

world::WorldModel RssWorldModelCreation::getWorldModel()
{
  const std::lock_guard<std::mutex> lock(mWorldModelLock);
  if (mFinalized)
  {
    getLogger()->error("RssWorldModelCreation::getWorldModel[:{}]>> error world model already finalized.", mRouteId);
    return world::WorldModel();
  }

  mFinalized = true;
  return std::move(mWorldModel);
}

bool RssWorldModelCreation::appendConstellations(RssObjectData const &egoObjectData,
                                                 ::ad::map::route::FullRoute const &egoRouteInput,
                                                 RssObjectData const &otherObjectData,
                                                 RssRestrictSpeedLimitMode const &restrict_speed_limit_mode,
                                                 ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                                                 map::RssConstellationCreationMode const &mode,
                                                 ::ad::map::lane::LaneIdSet const &relevantLanes)
{
  RssRouteList egoObjectPredictionHints;
  RssRouteList otherObjectPredictionHints;
  return appendConstellations(egoObjectData,
                              egoRouteInput,
                              otherObjectData,
                              restrict_speed_limit_mode,
                              greenTrafficLights,
                              mode,
                              egoObjectPredictionHints,
                              otherObjectPredictionHints,
                              relevantLanes);
}

bool RssWorldModelCreation::appendConstellations(RssObjectData const &egoObjectData,
                                                 ::ad::map::route::FullRoute const &egoRouteInput,
                                                 RssObjectData const &otherObjectData,
                                                 RssRestrictSpeedLimitMode const &restrict_speed_limit_mode,
                                                 ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                                                 map::RssConstellationCreationMode const &mode,
                                                 RssRouteList const &egoObjectPredictionHints,
                                                 RssRouteList const &otherObjectPredictionHints,
                                                 ::ad::map::lane::LaneIdSet const &relevantLanes)
{
  if (mFinalized)
  {
    getLogger()->error("RssWorldModelCreation::appendConstellations[{}->{}:{}]>> error world model already finalized.",
                       egoObjectData.id,
                       otherObjectData.id,
                       mRouteId);
    return false;
  }

  if (mode == map::RssConstellationCreationMode::Ignore)
  {
    return true;
  }

  auto egoObject = std::make_shared<RssObjectConversion const>(egoObjectData);
  auto otherObject = std::make_shared<RssObjectConversion const>(otherObjectData);
  if (!bool(egoObject) || !bool(otherObject))
  {
    getLogger()->error("RssWorldModelCreation::appendConstellations[{}->{}:{}]>> error allocating object data.",
                       egoObjectData.id,
                       otherObjectData.id,
                       mRouteId);
    return false;
  }
  RssWorldModelCreator constellationCreator(restrict_speed_limit_mode, greenTrafficLights, *this);

  if (mode == map::RssConstellationCreationMode::NotRelevant)
  {
    return constellationCreator.appendNotRelevantConstellation(egoRouteInput, egoObject, otherObject);
  }
  else
  {
    physics::Distance minEgoStoppingDistance;
    if (!egoObject->calculateConservativeMinStoppingDistance(minEgoStoppingDistance))
    {
      getLogger()->error("RssWorldModelCreation::appendConstellations[{}->{}:{}]>> error calculating ego min "
                         "stopping distance",
                         egoObject->getId(),
                         otherObject->getId(),
                         mRouteId);
      return false;
    }
    physics::Distance minOtherStoppingDistance;
    if (!otherObject->calculateConservativeMinStoppingDistance(minOtherStoppingDistance))
    {
      getLogger()->error("RssWorldModelCreation::appendConstellations[{}->{}:{}]>> error calculating other "
                         "min stopping distance",
                         egoObject->getId(),
                         otherObject->getId(),
                         mRouteId);
      return false;
    }

    // consider the sum of both stopping distances and some minimum distance
    auto const maxObjectDistance
      = std::max(minEgoStoppingDistance + minOtherStoppingDistance, mMinimumDistanceToObjectsThatHaveToBeAnalyzed);

    auto const roughObjectDistance = egoObject->getDistanceEstimate(otherObject) - egoObject->getVehicleLength() / 2.
      - egoObject->getVehicleWidth() / 2. - otherObject->getVehicleLength() / 2. - otherObject->getVehicleWidth() / 2.;
    // early check on the object distance
    if (roughObjectDistance > maxObjectDistance)
    {
      getLogger()->debug("RssWorldModelCreation::appendConstellations[{}->{}:{}]>> object distance {} larger than {} "
                         "meters: not relevant",
                         egoObject->getId(),
                         otherObject->getId(),
                         mRouteId,
                         roughObjectDistance,
                         maxObjectDistance);
      auto const appendResult
        = constellationCreator.appendNotRelevantConstellation(egoRouteInput, egoObject, otherObject);
      return appendResult;
    }

    if (mode == map::RssConstellationCreationMode::Unstructured)
    {
      return constellationCreator.appendUnstructuredConstellation(egoObject, otherObject);
    }
    else
    {
      return appendStructuredConstellations(constellationCreator,
                                            egoObject,
                                            egoRouteInput,
                                            otherObject,
                                            egoObjectPredictionHints,
                                            otherObjectPredictionHints,
                                            relevantLanes,
                                            maxObjectDistance);
    }
  }
}

// resize the routes in length and width if required

enum class ResizeRoutePrefixMode
{
  KeepRoutePrefix,
  ShortenRoutePrefix
};

::ad::map::route::FullRouteList resizeRoutesIfRequired(RssRouteList const &rssRoutes,
                                                       physics::Distance const expectedRoutePreviewDistance,
                                                       ad::map::route::RouteCreationMode const route_creation_mode,
                                                       ::ad::map::lane::LaneIdSet const &relevantLanes,
                                                       ResizeRoutePrefixMode const prefix_mode
                                                       = ResizeRoutePrefixMode::KeepRoutePrefix)
{
  ::ad::map::route::FullRouteList expandedRoutes;
  for (auto const &rss_route : rssRoutes)
  {
    auto expanded_route = ad::map::route::getRouteExpandedTo(rss_route.route, route_creation_mode);
    // handle potential intersection prefix
    if (prefix_mode == ResizeRoutePrefixMode::ShortenRoutePrefix)
    {
      ::ad::map::route::shortenRoute(rss_route.progress_on_route, expanded_route);
    }

    // in case the route is not long enough, we have to extend is
    ::ad::map::route::FullRouteList additionalRoutes;
    auto const desiredRouteLength = rss_route.progress_on_route + expectedRoutePreviewDistance;
    ::ad::map::route::extendRouteToDistance(expanded_route, desiredRouteLength, additionalRoutes, relevantLanes);

    // and shorten if it's too long and add to results
    ::ad::map::route::shortenRouteToDistance(expanded_route, desiredRouteLength);
    expandedRoutes.push_back(expanded_route);
    // shorten potential additional routes and add to results
    for (auto &additionalRoute : additionalRoutes)
    {
      ::ad::map::route::shortenRouteToDistance(additionalRoute, desiredRouteLength);
      expandedRoutes.push_back(additionalRoute);
    }
  }

  return expandedRoutes;
}

::ad::rss::map::RssRoute createRssRoute(::ad::map::route::FullRoute const &route,
                                        ::ad::map::match::Object const &match_object)
{
  ::ad::rss::map::RssRoute rss_route;
  rss_route.route = route;
  rss_route.progress_on_route = ad::physics::Distance(0.);
  auto findWaypointResult = ::ad::map::route::findCenterWaypoint(match_object, route);
  if (findWaypointResult.isValid())
  {
    rss_route.progress_on_route = ::ad::map::route::calcLength(findWaypointResult);
  }
  return rss_route;
}

bool RssWorldModelCreation::appendStructuredConstellations(
  map::RssWorldModelCreator &constellationCreator,
  std::shared_ptr<RssObjectConversion const> const &egoObject,
  ::ad::map::route::FullRoute const &egoRouteInput,
  std::shared_ptr<RssObjectConversion const> const &otherObject,
  RssRouteList const &egoObjectPredictionHints,
  RssRouteList const &otherObjectPredictionHints,
  ::ad::map::lane::LaneIdSet const &relevantLanes,
  ad::physics::Distance const &maxConnectingRouteDistance)
{
  bool result = false;
  bool constellationAppended = false;

  if ((egoObject->getObjectMapMatchedPosition() == nullptr) || (otherObject->getObjectMapMatchedPosition() == nullptr))
  {
    getLogger()->error(
      "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> invalid RssObjectConversion entity passed",
      egoObject->getId(),
      otherObject->getId(),
      mRouteId);
    return false;
  }

  auto const &egoMatchObject = *egoObject->getObjectMapMatchedPosition();
  auto const &objectMatchObject = *otherObject->getObjectMapMatchedPosition();

  if (egoMatchObject.map_matched_bounding_box.lane_occupied_regions.empty())
  {
    getLogger()->warn(
      "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> ego without occupied regions skipping.",
      egoObject->getId(),
      otherObject->getId(),
      mRouteId);
    return false;
  }
  if (objectMatchObject.map_matched_bounding_box.lane_occupied_regions.empty())
  {
    getLogger()->warn(
      "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> object without occupied regions skipping.",
      egoObject->getId(),
      otherObject->getId(),
      mRouteId);
    return false;
  }

  try
  {
    ::ad::map::route::ConnectingRouteList connectingRoutes;
    bool calculateConnectingRoutes = true;
    // make use of the connecting routes cache
    if (mConnectingRoutesCache != nullptr)
    {
      calculateConnectingRoutes = !mConnectingRoutesCache->getConnectingRoutes(
        egoObject->getId(), otherObject->getId(), maxConnectingRouteDistance, connectingRoutes);
    }

    if (calculateConnectingRoutes)
    {
      // for calculation of the connecting route, the potential route prefix at intersection must be removed
      // to prevent from creating of merging routes in the past (predictions are only used for merging route)
      ::ad::map::route::FullRouteList egoPredictedRoutesConnectingRoutes
        = resizeRoutesIfRequired(egoObjectPredictionHints,
                                 maxConnectingRouteDistance,
                                 ad::map::route::RouteCreationMode::AllRoutableLanes,
                                 relevantLanes,
                                 ResizeRoutePrefixMode::ShortenRoutePrefix);
      ::ad::map::route::FullRouteList objectPredictedRoutesConnectingRoutes
        = resizeRoutesIfRequired(otherObjectPredictionHints,
                                 maxConnectingRouteDistance,
                                 ad::map::route::RouteCreationMode::AllRoutableLanes,
                                 relevantLanes,
                                 ResizeRoutePrefixMode::ShortenRoutePrefix);
      //   Calculate shortest route (ignore driving direction) between the two objects MapMatchedObjectBoundingBox
      connectingRoutes = ::ad::map::route::planning::calculateConnectingRoutes(egoMatchObject,
                                                                               objectMatchObject,
                                                                               maxConnectingRouteDistance,
                                                                               egoPredictedRoutesConnectingRoutes,
                                                                               objectPredictedRoutesConnectingRoutes,
                                                                               relevantLanes);
      if (mConnectingRoutesCache != nullptr)
      {
        mConnectingRoutesCache->addConnectingRoutes(
          egoObject->getId(), otherObject->getId(), connectingRoutes, maxConnectingRouteDistance);
      }
    }

    ad::physics::Distance maxConnectingRouteLength(0.);
    for (auto connectingRouteIter = connectingRoutes.begin(); connectingRouteIter != connectingRoutes.end();)
    {
      auto const connectingRoute = *connectingRouteIter;
      auto const feasibility = ad::map::route::getHeadingFeasibility(connectingRoute);
      // drop infeasible routes, but ensure to not drop the last one!
      if ((connectingRoutes.size() > 1u) && (feasibility < ad::physics::Probability(0.1)))
      {
        getLogger()->trace(
          "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> ignoring infeasible connecting route "
          "to object:\n {}",
          egoObject->getId(),
          otherObject->getId(),
          mRouteId,
          connectingRoute);
        connectingRouteIter = connectingRoutes.erase(connectingRouteIter);
      }
      else
      {
        auto const connectingRouteLength = ad::map::route::calcLength(connectingRoute);
        maxConnectingRouteLength = std::max(maxConnectingRouteLength, connectingRouteLength);
        getLogger()->trace(
          "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> connecting route of length {} "
          "available to object:\n {}",
          egoObject->getId(),
          otherObject->getId(),
          mRouteId,
          connectingRouteLength,
          connectingRoute);
        connectingRouteIter++;
      }
    }

    if (connectingRoutes.empty())
    {
      getLogger()->debug("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> no connecting route "
                         "available to object within {} meters",
                         egoObject->getId(),
                         otherObject->getId(),
                         mRouteId,
                         maxConnectingRouteDistance);
      auto const appendResult
        = constellationCreator.appendNotRelevantConstellation(egoRouteInput, egoObject, otherObject);
      return appendResult;
    }

    // prepare ego route
    // ensure the prediction spans at least both vehicles: ego-length + connecting-route-length + other-length
    // ensure the prediction consideres only the same driving direction, otherwhise also mainly opposite use-cases
    // (e.g. ego-turning-right, other-from-right) will lead to actual intersection use-cases!
    // Be aware: if the ego is located outside of its nominal driving lane, the computation might ignore it by this,
    // because predictions could be incomplete
    // @todo: add support for ego outside nominal routes
    auto const predictionLength
      = egoObject->getVehicleLength() + maxConnectingRouteLength + otherObject->getVehicleLength();
    // for the rest of the calculations below we stick to the current egoRouteInput if available
    ::ad::map::route::FullRouteList egoPredictedRoutes;
    if (!egoRouteInput.road_segments.empty())
    {
      auto const rssRoute = createRssRoute(egoRouteInput, egoMatchObject);
      egoPredictedRoutes = resizeRoutesIfRequired(
        {rssRoute}, predictionLength, ::ad::map::route::RouteCreationMode::SameDrivingDirection, relevantLanes);
    }
    else if (egoObjectPredictionHints.empty())
    {
      egoPredictedRoutes = ::ad::map::route::planning::predictRoutesOnDistance(
        egoMatchObject,
        predictionLength,
        ::ad::map::route::RouteCreationMode::SameDrivingDirection,
        ::ad::map::route::planning::FilterDuplicatesMode::SubRoutesPreferLongerOnes,
        relevantLanes);
    }
    else
    {
      egoPredictedRoutes = resizeRoutesIfRequired(egoObjectPredictionHints,
                                                  predictionLength,
                                                  ::ad::map::route::RouteCreationMode::SameDrivingDirection,
                                                  relevantLanes);
    }

    // reset the result to ensure we don't miss anything
    result = false;
    for (auto const &connectingRoute : connectingRoutes)
    {
      getLogger()->trace("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> process connecting route "
                         "available to object:\n {}",
                         egoObject->getId(),
                         otherObject->getId(),
                         mRouteId,
                         connectingRoute);
      bool relevantFollowingConstellationFound = false;
      if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Following)
      {
        // vehicle following mode: it doesn't matter if there is an intersection in between or not
        // as the cars might follow each other through the intersection

        bool objectOnOneOfOurRoutes = false;
        if (connectingRoute.route_a.road_segments.empty())
        {
          // we are in front -> constellation has to be considered since the other might follow us in our route
          objectOnOneOfOurRoutes = true;
        }
        else
        {
          for (auto const &egoRoute : egoPredictedRoutes)
          {
            auto const findObject
              = ::ad::map::route::objectOnRoute(objectMatchObject.map_matched_bounding_box, egoRoute);
            if (findObject.isValid())
            {
              objectOnOneOfOurRoutes = true;
              getLogger()->trace(
                "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> driving in front on our route:\n"
                " objectMatchObject({})\n egoRoute({})",
                egoObject->getId(),
                otherObject->getId(),
                mRouteId,
                objectMatchObject,
                egoRoute);
              break;
            }
            else
            {
              getLogger()->trace("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> driving in front "
                                 "but not on route:\n"
                                 " objectMatchObject({})\n egoRoute({})",
                                 egoObject->getId(),
                                 otherObject->getId(),
                                 mRouteId,
                                 objectMatchObject,
                                 egoRoute);
            }
          }
        }
        if (objectOnOneOfOurRoutes)
        {
          getLogger()->debug("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> relevant following "
                             "connecting route found: create "
                             "same direction use-case\n {}",
                             egoObject->getId(),
                             otherObject->getId(),
                             mRouteId,
                             connectingRoute);
          auto const appendResult = constellationCreator.appendNonIntersectionConstellation(
            connectingRoute, world::ConstellationType::SameDirection, egoObject, otherObject);
          result = appendResult;
          constellationAppended = appendResult;
          relevantFollowingConstellationFound = true;
        }
        else
        {
          // no relevant object found for the following use-case, but still intersection use-case has to be analyzed
        }
      }
      if (!relevantFollowingConstellationFound)
      {
        if (!::ad::map::route::isConnectedRoutePartOfAnIntersection(connectingRoute))
        {
          if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Following)
          {
            // no relevant object found for the following use-case, without intersection no problem
            result = true;
          }
          else if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Opposing)
          {
            getLogger()->debug("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> no intersections on "
                               "opposing connecting "
                               "route found: create "
                               "opposite direction use-case\n {}",
                               egoObject->getId(),
                               otherObject->getId(),
                               mRouteId,
                               connectingRoute);
            auto const appendResult = constellationCreator.appendNonIntersectionConstellation(
              connectingRoute, world::ConstellationType::OppositeDirection, egoObject, otherObject);
            result = appendResult;
            constellationAppended = appendResult;
          }
          else
          {
            // ConnectingRouteType::Merging
            // no intersection in between, but merging
            // we interpret this now as intersection case
            // @todo: analyze in more detail how such constellations have to be handled, keep as info message for now
            getLogger()->info("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> no intersections on "
                              "merging connecting "
                              "route found: create "
                              "merging-intersection same prio use-case\n {}",
                              egoObject->getId(),
                              otherObject->getId(),
                              mRouteId,
                              connectingRoute);
            auto const appendResult = constellationCreator.appendMergingConstellation(
              connectingRoute, world::ConstellationType::IntersectionSamePriority, egoObject, otherObject);
            result = appendResult;
            constellationAppended = appendResult;
          }
        }
        else
        {
          result = true;
          // case: ConnectingRouteType::Following with intersections
          // case: ConnectingRouteType::Opposing with intersections
          // or:   ConnectingRouteType::Merging with intersections
          bool objectPredictedRoutesProcessed = false;
          ::ad::map::route::FullRouteList objectPredictedRoutes;
          for (auto const &egoRoute : egoPredictedRoutes)
          {
            getLogger()->trace(
              "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> investigate egoRoute({})",
              egoObject->getId(),
              otherObject->getId(),
              mRouteId,
              egoRoute);
            // @todo: intersection creation has to support also creation of already entered intersections
            // to get intersections currently driving in also considered appropriate!!
            // The below is calculated wrong if there is -- besides the currently ignored entered intersection another
            // one
            // ...
            //
            auto intersectionsOnEgoRoute = ::ad::map::intersection::Intersection::getIntersectionsForRoute(egoRoute);
            if (intersectionsOnEgoRoute.empty()
                && (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Merging))
            {
              getLogger()->debug(
                "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> no intersections on "
                "route found: create"
                "merging-intersection same prio use-case:\n egoRoute({})",
                egoObject->getId(),
                otherObject->getId(),
                mRouteId,
                egoRoute);
              auto const appendResult = constellationCreator.appendMergingConstellation(
                connectingRoute, world::ConstellationType::IntersectionSamePriority, egoObject, otherObject);
              result = result && appendResult;
              constellationAppended |= appendResult;
            }
            else if (intersectionsOnEgoRoute.empty()
                     && (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Following))
            {
              // no intersection for the following use-case, then irrelevant
            }
            else
            {
              if (!objectPredictedRoutesProcessed)
              {
                objectPredictedRoutesProcessed = true;
                // ensure the prediction consideres only the same driving direction, otherwhise also mainly opposite
                // use-cases (e.g. ego-turning-right, other-from-right) will lead to actual intersection use-cases! Be
                // aware: if the object is located outside of its nominal driving lane, the computation might ignore it
                // by this, because predictions might be incomplete
                // @todo: add support for objects outside nominal routes
                if (otherObjectPredictionHints.empty())
                {
                  // no hints, so predict on our own
                  objectPredictedRoutes = ::ad::map::route::planning::predictRoutesOnDistance(
                    objectMatchObject,
                    predictionLength,
                    ::ad::map::route::RouteCreationMode::SameDrivingDirection,
                    ::ad::map::route::planning::FilterDuplicatesMode::SubRoutesPreferLongerOnes,
                    relevantLanes);
                }
                else
                {
                  objectPredictedRoutes
                    = resizeRoutesIfRequired(otherObjectPredictionHints,
                                             predictionLength,
                                             ::ad::map::route::RouteCreationMode::SameDrivingDirection,
                                             relevantLanes);
                }
              }
              for (auto const &objectRoute : objectPredictedRoutes)
              {
                getLogger()->trace(
                  "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> investigate objectRoute({})",
                  egoObject->getId(),
                  otherObject->getId(),
                  mRouteId,
                  objectRoute);
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
                    // need to ensure we don't miss this constellation
                    // @todo: analyze when this can happen and if the created constellation is appropriate
                    getLogger()->debug(
                      "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> no intersections "
                      "on route found: create "
                      "opposite direction use-case:\n"
                      " egoRoute({})",
                      egoObject->getId(),
                      otherObject->getId(),
                      mRouteId,
                      egoRoute);
                    auto const appendResult = constellationCreator.appendNonIntersectionConstellation(
                      connectingRoute, world::ConstellationType::OppositeDirection, egoObject, otherObject);
                    result = result && appendResult;
                    constellationAppended |= appendResult;
                  }
                  else
                  {
                    intersectionOtherRoute = &egoRoute;
                    getLogger()->trace("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> no "
                                       "intersection on ego route, but"
                                       "opposite connecting route; checking intersections in object route:\n"
                                       " egoRoute({})\n objectRoute({})",
                                       egoObject->getId(),
                                       otherObject->getId(),
                                       mRouteId,
                                       egoRoute,
                                       objectRoute);
                  }
                }

                for (auto const &intersection : intersectionsOnRoute)
                {
                  if (!intersection->objectRouteCrossesIntersection(*intersectionOtherRoute))
                  {
                    getLogger()->trace(
                      "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> found object "
                      "route not crossing "
                      "intersection on route:\n"
                      " egoRoute({})\n objectRoute({})\n intersection({})",
                      egoObject->getId(),
                      otherObject->getId(),
                      mRouteId,
                      egoRoute,
                      objectRoute,
                      intersection->entryParaPoints());
                  }
                  else if (intersection->objectRouteFromSameArmAsIntersectionRoute(*intersectionOtherRoute))
                  {
                    if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Opposing)
                    {
                      // This happens e.g. if the object has an opposite connecting route, but the current considered
                      // prediction starts on ego intersection arm and the object route is still touching the ego's
                      // route could be modeled as following case, but then we would require the actual following route.
                      // And the object should still be safely considered by the actual opposite case predictions.
                      // -> this case is just ignored for now: requires more thorough analysis in future
                      getLogger()->trace(
                        "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> object route from "
                        "same arm as intersection and opposing connecting route: ignore\n"
                        " egoRoute({})\n objectRoute({})\n intersection({})\n {}",
                        egoObject->getId(),
                        otherObject->getId(),
                        mRouteId,
                        egoRoute,
                        objectRoute,
                        intersection->entryParaPoints(),
                        connectingRoute);
                    }
                    else if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Merging)
                    {
                      // This can happen if the intersection is not necessarily the first intersection of both vehicles
                      // and so being a secondary merging use-case at that far intersection
                      // Therefore, later this constellation might switch to an actual merging connected route or
                      // following use case from above. Now: Create an intersection constellation
                      // @todo: find out more here: is it required now to search the two routes for a merge even before
                      // the intersection?
                      getLogger()->debug(
                        "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> object route from "
                        "same arm as intersection "
                        "looks like merging constellation far in future: create intersection constellation\n"
                        " egoRoute({})\n objectRoute({})\n intersection({})\n {}",
                        egoObject->getId(),
                        otherObject->getId(),
                        mRouteId,
                        egoRoute,
                        objectRoute,
                        intersection->entryParaPoints(),
                        connectingRoute);
                      auto const appendResult = constellationCreator.appendIntersectionConstellation(
                        intersection, egoRoute, objectRoute, *intersectionOtherRoute, egoObject, otherObject);
                      result = result && appendResult;
                      constellationAppended |= appendResult;
                    }
                    else
                    {
                      // intersection following use-case, should have been found in the following use case above
                      // ignore for now
                      getLogger()->trace(
                        "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> object route from "
                        "same arm as intersection and follwing connecting route: ignore\n"
                        " egoRoute({})\n objectRoute({})\n intersection({})\n {}",
                        egoObject->getId(),
                        otherObject->getId(),
                        mRouteId,
                        egoRoute,
                        objectRoute,
                        intersection->entryParaPoints(),
                        connectingRoute);
                    }
                  }
                  else if (intersection->objectRouteOppositeToIntersectionRoute(*intersectionOtherRoute)
                           || !intersection->objectRouteCrossesIntersectionRoute(*intersectionOtherRoute))
                  {
                    if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Opposing)
                    {
                      // here, the connecting route should be correct; otherwise we would not oppose to each other
                      getLogger()->debug(
                        "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> object route "
                        "opposite and not crossing: "
                        "opposite direction constellation:\n"
                        " egoRoute({})\n objectRoute({})\n intersection({})",
                        egoObject->getId(),
                        otherObject->getId(),
                        mRouteId,
                        egoRoute,
                        objectRoute,
                        intersection->entryParaPoints());
                      auto const appendResult = constellationCreator.appendNonIntersectionConstellation(
                        connectingRoute, world::ConstellationType::OppositeDirection, egoObject, otherObject);
                      result = result && appendResult;
                      constellationAppended |= appendResult;
                    }
                    else if (connectingRoute.type == ::ad::map::route::ConnectingRouteType::Merging)
                    {
                      // This can happen if the cars are too far away from each other for creating an opposing
                      // connecting route, but we find two predictions of the two vehicles ending at the same
                      // intersection
                      // Therefore, later this constellation might switch to the opposite type above.
                      // Now: Create an intersection constellation
                      getLogger()->debug(
                        "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> object route "
                        "opposite and not crossing, but "
                        "merging constellation: create "
                        "intersection constellation\n"
                        " egoRoute({})\n objectRoute({})\n intersection({})\n {}",
                        egoObject->getId(),
                        otherObject->getId(),
                        mRouteId,
                        egoRoute,
                        objectRoute,
                        intersection->entryParaPoints(),
                        connectingRoute);
                      auto const appendResult = constellationCreator.appendIntersectionConstellation(
                        intersection, egoRoute, objectRoute, *intersectionOtherRoute, egoObject, otherObject);
                      result = result && appendResult;
                      constellationAppended |= appendResult;
                    }
                    else
                    {
                      // intersection following use-case, but object route doesn not cross, strange.
                      // ignore for now
                      getLogger()->trace(
                        "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> object route "
                        "opposite and not crossing: ignore"
                        " egoRoute({})\n objectRoute({})\n intersection({})\n {}",
                        egoObject->getId(),
                        otherObject->getId(),
                        mRouteId,
                        egoRoute,
                        objectRoute,
                        intersection->entryParaPoints(),
                        connectingRoute);
                    }
                  }
                  else
                  {
                    getLogger()->debug(
                      "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> object route "
                      "crosses intersection route: "
                      "intersection constellation\n"
                      " egoRoute({})\n objectRoute({})\n intersectionLanesOnRoute({})\n intersection({})",
                      egoObject->getId(),
                      otherObject->getId(),
                      mRouteId,
                      egoRoute,
                      objectRoute,
                      intersection->paraPointsOnRoute(),
                      intersection->entryParaPoints());
                    auto const appendResult = constellationCreator.appendIntersectionConstellation(
                      intersection, egoRoute, objectRoute, *intersectionOtherRoute, egoObject, otherObject);
                    result = result && appendResult;
                    constellationAppended |= appendResult;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  catch (std::exception const &e)
  {
    getLogger()->error(
      "RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> Failed. Catched exception: {}",
      egoObject->getId(),
      otherObject->getId(),
      mRouteId,
      e.what());
  }

  if (!constellationAppended)
  {
    if (result)
    {
      getLogger()->debug("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> detailed analysis did not "
                         "find any relevant "
                         "constellation. Append non relevant constellation\n"
                         " objectMatchObject({})\n egoMatchObject({})\n egoRoute({})",
                         egoObject->getId(),
                         otherObject->getId(),
                         mRouteId,
                         objectMatchObject,
                         egoMatchObject,
                         egoRouteInput);
    }
    else
    {
      getLogger()->info("RssWorldModelCreation::appendStructuredConstellations[{}->{}:{}]>> an operation failed and no "
                        "constellation could have been "
                        "created. Try to append non relevant constellation\n"
                        " objectMatchObject({})\n egoMatchObject({})\n egoRoute({})",
                        egoObject->getId(),
                        otherObject->getId(),
                        mRouteId,
                        objectMatchObject,
                        egoMatchObject,
                        egoRouteInput);
    }
    auto const appendResult
      = constellationCreator.appendNotRelevantConstellation(egoRouteInput, egoObject, otherObject);
    result = result && appendResult;
  }

  return result;
}

::ad::map::route::FullRoute shortenRoadBoundariesRouteIfRequired(::ad::map::route::FullRoute const &route,
                                                                 ::ad::map::match::Object const &match_object,
                                                                 physics::Distance const expectedRoutePreviewDistance)
{
  ::ad::map::route::FullRoute shortenedRoute = route;
  auto findWaypointResult = ::ad::map::route::findCenterWaypoint(match_object, shortenedRoute);
  if (findWaypointResult.isValid())
  {
    auto const progress_on_route = ::ad::map::route::calcLength(findWaypointResult);
    // remove potential intersection prefix
    ::ad::map::route::shortenRoute(progress_on_route, shortenedRoute);
    // and shorten if it's too long
    ::ad::map::route::shortenRouteToDistance(
      shortenedRoute, expectedRoutePreviewDistance, ::ad::map::route::ShortenRouteToDistanceMode::AllowCutIntersection);
  }
  return shortenedRoute;
}

bool RssWorldModelCreation::appendRoadBoundaries(RssObjectData const &egoObjectData,
                                                 ::ad::map::route::FullRoute const &inputRoute,
                                                 RssAppendRoadBoundariesMode const operationMode)
{
  if (mFinalized)
  {
    getLogger()->error("RssWorldModelCreation::appendRoadBoundaries[{}:{}]>> error world model already finalized.",
                       egoObjectData.id,
                       mRouteId);
    return false;
  }
  if (operationMode == RssAppendRoadBoundariesMode::Off)
  {
    return true;
  }
  if (egoObjectData.match_object.map_matched_bounding_box.lane_occupied_regions.empty())
  {
    getLogger()->warn("RssWorldModelCreation::appendRoadBoundaries[{}:{}]>> ego without occupied regions skipping.",
                      egoObjectData.id,
                      mRouteId);
    return false;
  }

  if (inputRoute.road_segments.empty())
  {
    return false;
  }
  bool result = false;
  try
  {
    auto egoObject = std::make_shared<RssObjectConversion const>(egoObjectData);
    if (!bool(egoObject))
    {
      getLogger()->error("RssWorldModelCreation::appendRoadBoundaries[{}:{}]>> error allocating object data.",
                         egoObjectData.id,
                         mRouteId);
      return false;
    }

    // for the analysis we are only interested in the near term route
    ::ad::map::route::FullRoute route = shortenRoadBoundariesRouteIfRequired(
      inputRoute, *egoObject->getObjectMapMatchedPosition(), cNearTermRoadBoundariesRouteLength);

    switch (operationMode)
    {
      case RssAppendRoadBoundariesMode::RouteOnly:
      {
        if (route.route_creation_mode != ::ad::map::route::RouteCreationMode::SameDrivingDirection)
        {
          route = ::ad::map::route::getRouteExpandedToSameDrivingDirectionLanesOnly(route);
        }
        break;
      }
      case RssAppendRoadBoundariesMode::ExpandRouteToOppositeLanes:
      {
        if (route.route_creation_mode != ::ad::map::route::RouteCreationMode::AllRoutableLanes)
        {
          route = ::ad::map::route::getRouteExpandedToOppositeLanes(route);
        }
        break;
      }
      case RssAppendRoadBoundariesMode::ExpandRouteToAllNeighbors:
      {
        if (route.route_creation_mode != ::ad::map::route::RouteCreationMode::AllNeighborLanes)
        {
          route = ::ad::map::route::getRouteExpandedToAllNeighborLanes(route);
        }
        break;
      }
      default:
        break;
    }

    RssWorldModelCreator constellationCreator(*this);
    getLogger()->debug("RssWorldModelCreation::appendRoadBoundaries[{}:{}]>>\n"
                       " egoRoute({})\n egoObject({})",
                       egoObjectData.id,
                       mRouteId,
                       route,
                       egoObjectData);
    result = constellationCreator.appendRoadBoundaryConstellations(route, egoObject);
  }
  catch (std::exception const &e)
  {
    getLogger()->error("RssWorldModelCreation::appendRoadBoundaries[{}:{}]>> Failed. Catched exception: {}",
                       egoObjectData.id,
                       mRouteId,
                       e.what());
  }
  return result;
}

bool RssWorldModelCreation::appendConstellationToWorldModel(world::Constellation const &constellation)
{
  const std::lock_guard<std::mutex> lock(mWorldModelLock);
  if (mFinalized)
  {
    getLogger()->error(
      "RssWorldModelCreation::appendConstellationToWorldModel(:{})>> error world model already finalized.", mRouteId);
    return false;
  }

  mWorldModel.constellations.push_back(constellation);
  return true;
}

} // namespace map
} // namespace rss
} // namespace ad
