// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <ad/map/lane/Operation.hpp>
#include <ad/map/match/MapMatchedOperation.hpp>
#include <ad/map/route/Planning.hpp>
#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssObjectDataOperation.hpp"
#include "ad/rss/map/RssRouteCheckerControl.hpp"
#include "ad/rss/map/RssRouteCheckerData.hpp"

namespace ad {
namespace rss {
namespace map {

template <class OBJECT_INSTANCE_TYPE> RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::~RssRouteCheckerVehicleData()
{
  // housekeeping of RssRouteCheckerControl
  if (mVehicleAdapter != nullptr)
  {
    mVehicleAdapter->getCheckerControl()->dropVehicle(mRssObjectData.id);
  }
}

enum class ReachedRoutingTargetsMode
{
  eDISTANCE_ONLY,
  eDISTANCE_AND_ORIENTATION
};

inline void dropReachedRoutingTargets(std::vector<::ad::map::point::ENUPoint> &routingTargets,
                                      RssObjectData const &rssObjectData,
                                      ad::physics::Distance const &reachedDistance,
                                      ReachedRoutingTargetsMode reachedRoutingTargetsMode)
{
  // removeReachedRoutingTargets
  while (!routingTargets.empty())
  {
    auto const nextTarget = routingTargets.front();
    auto const distanceToNextTarget
      = ad::map::point::distance(nextTarget, rssObjectData.match_object.enu_position.center_point);
    if (distanceToNextTarget < reachedDistance)
    {
      routingTargets.erase(routingTargets.begin());
      getLogger()->debug(
        "RssRouteCheckerVehicleData::removeReachedRoutingTargets[{}] Next target reached by distance: {}; "
        "remaining targets: {}",
        rssObjectData.id,
        nextTarget,
        routingTargets);
    }
    else if ((reachedRoutingTargetsMode == ReachedRoutingTargetsMode::eDISTANCE_AND_ORIENTATION)
             && (routingTargets.size() > 1u) && (distanceToNextTarget < 10. * reachedDistance))

    {
      // if we have a new list of targets and there will be additional targets left if we drop this
      // and the next target is already located behind the vehicle and not more than 10 time further away as
      // reachedDistance, we also drop this; otherwhise the ego might try to plan more or less a round trip before
      // finishing the target list
      auto routingTargetHeading
        = ad::map::point::createENUHeading(rssObjectData.match_object.enu_position.center_point, nextTarget);
      auto headingDiffSigned = ad::physics::normalizeAngleSigned(ad::physics::Angle(
        routingTargetHeading.mENUHeading - rssObjectData.match_object.enu_position.heading.mENUHeading));
      if (std::fabs(headingDiffSigned) > ad::physics::cPI_2)
      {
        routingTargets.erase(routingTargets.begin());
        getLogger()->debug(
          "RssRouteCheckerVehicleData::removeReachedRoutingTargets[{}] Next target reached by orientation: {}, {}; "
          "remaining targets: {}",
          rssObjectData.id,
          nextTarget,
          headingDiffSigned,
          routingTargets);
      }
      else
      {
        break;
      }
    }
    else
    {
      break;
    }
  }
}

template <class OBJECT_INSTANCE_TYPE>
std::vector<::ad::map::point::ENUPoint> RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::handleRoutingTargets()
{
  auto const routingTargetOperation = getAdapter()->getRoutingTargetOperation();
  std::vector<::ad::map::point::ENUPoint> routingTargetsToAppend;
  if (routingTargetOperation.command
      == RssVehicleAdapter<OBJECT_INSTANCE_TYPE>::RssRoutingTargetCommand::ReplaceTargets)
  {
    mRoutes.clear();
    mRoutingTargets = routingTargetOperation.routingTargets;
    dropReachedRoutingTargets(mRoutingTargets,
                              mRssObjectData,
                              getAdapter()->getRoutingTargetReachedDistance(),
                              ReachedRoutingTargetsMode::eDISTANCE_AND_ORIENTATION);
  }
  else
  {
    dropReachedRoutingTargets(mRoutingTargets,
                              mRssObjectData,
                              getAdapter()->getRoutingTargetReachedDistance(),
                              ReachedRoutingTargetsMode::eDISTANCE_ONLY);

    if (routingTargetOperation.command
        == RssVehicleAdapter<OBJECT_INSTANCE_TYPE>::RssRoutingTargetCommand::AppendTargets)
    {
      routingTargetsToAppend = routingTargetOperation.routingTargets;
      dropReachedRoutingTargets(routingTargetsToAppend,
                                mRssObjectData,
                                getAdapter()->getRoutingTargetReachedDistance(),
                                ReachedRoutingTargetsMode::eDISTANCE_AND_ORIENTATION);
    }
  }
  return routingTargetsToAppend;
}

template <class OBJECT_INSTANCE_TYPE> void RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::shortenRoutes()
{
  ad::map::point::ParaPointList allLaneMatches;
  for (auto const &referencePoint :
       {::ad::map::match::ObjectReferencePoints::RearRight, ::ad::map::match::ObjectReferencePoints::RearLeft})
  {
    for (auto const &matchPoint :
         mRssObjectData.match_object.map_matched_bounding_box.reference_point_positions[size_t(referencePoint)])
    {
      // consider only longitudinal in lane matches here, because we want to cover the rear of the vehicle
      // allow lateral outside matches to cover vehicle driving slightly outside the route
      if (ad::map::match::isLongitudinalInLaneMatch(matchPoint))
      {
        allLaneMatches.push_back(matchPoint.lane_point.para_point);
      }
    }
  }

  auto routeIndex = 0u;
  while (routeIndex < mRoutes.size())
  {
    getLogger()->trace("RssVehicleAdapter::shortenRoutes[{}:{}] call shorten route with {} and  {}",
                       mRssObjectData.id,
                       mRoutes[routeIndex].route_id,
                       allLaneMatches,
                       mRoutes[routeIndex].route);
    auto shortenRouteResult = ::ad::map::route::shortenRoute(
      allLaneMatches,
      mRoutes[routeIndex].route,
      ::ad::map::route::ShortenRouteMode::DontCutIntersectionAndPrependIfSucceededBeforeRoute);

    if ((shortenRouteResult != ::ad::map::route::ShortenRouteResult::Succeeded)
        && (shortenRouteResult != ::ad::map::route::ShortenRouteResult::SucceededIntersectionNotCut))
    {
      getLogger()->trace("RssVehicleAdapter::shortenRoutes[{}:{}] shorten current route failed. Dropping. {}",
                         mRssObjectData.id,
                         mRoutes[routeIndex].route_id,
                         mRoutes[routeIndex].route);
      mRoutes.erase(mRoutes.begin() + routeIndex);
    }
    else
    {
      getLogger()->trace("RssVehicleAdapter::shortenRoutes[{}:{}] shorten current route succeeded {}",
                         mRssObjectData.id,
                         mRoutes[routeIndex].route_id,
                         mRoutes[routeIndex].route);
      auto findWaypointResult = findNearestWaypoint(allLaneMatches, mRoutes[routeIndex].route);
      mRoutes[routeIndex].progress_on_route = calcLength(findWaypointResult);
      routeIndex++;
    }
  }
}

template <class OBJECT_INSTANCE_TYPE>
void RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::extendRoutes(
  physics::Distance const routePreviewDistance,
  std::vector<::ad::map::point::ENUPoint> const &routingTargetsToAppend,
  ::ad::map::lane::LaneIdSet const &mapAreaLanes)
{
  RssRouteList routesToAdd;
  auto routeIndex = 0u;
  while (routeIndex < mRoutes.size())
  {
    std::vector<::ad::map::route::FullRoute> additionalRoutes;

    bool routeValid = false;
    if (!routingTargetsToAppend.empty())
    {
      routeValid = ::ad::map::route::extendRouteToDestinations(mRoutes[routeIndex].route, routingTargetsToAppend);
      mRoutingTargets.insert(mRoutingTargets.end(), routingTargetsToAppend.begin(), routingTargetsToAppend.end());
    }
    else if (mRoutingTargets.empty() && (mRouteExtensionMode != RouteExtensionMode::eAllowOnlyTargetRoute))
    {
      // only extend if no routing targets are provided and not forbidden to extend by extension mode
      routeValid = ::ad::map::route::extendRouteToDistance(mRoutes[routeIndex].route,
                                                           mRoutes[routeIndex].progress_on_route + routePreviewDistance,
                                                           additionalRoutes,
                                                           mapAreaLanes);
    }
    else
    {
      routeValid = true;
    }

    if (routeValid)
    {
      getLogger()->trace("RssVehicleAdapter::extendRoutes[{}:{}] extended current route {} {}",
                         mRssObjectData.id,
                         mRoutes[routeIndex].route_id,
                         mRoutes[routeIndex].progress_on_route,
                         mRoutes[routeIndex].route);
      if (mRouteExtensionMode == RouteExtensionMode::eAllowMultipleRoutes)
      {
        for (auto &additionalRoute : additionalRoutes)
        {
          bool addRoute = true;
          for (auto checkRouteIndex = 0u; checkRouteIndex < mRoutes.size(); checkRouteIndex++)
          {
            if (checkRouteIndex != routeIndex)
            {
              auto const compareResult = ::ad::map::route::planning::compareRoutesOnIntervalLevel(
                additionalRoute, mRoutes[checkRouteIndex].route);
              if (compareResult != ::ad::map::route::planning::CompareRouteResult::Differ)
              {
                getLogger()->trace("RssVehicleAdapter::extendRoutes[{}:{}] drop additional route {} because compares "
                                   "{} to route_id {} {}",
                                   mRssObjectData.id,
                                   mRoutes[routeIndex].route_id,
                                   additionalRoute,
                                   compareResult,
                                   mRoutes[checkRouteIndex].route_id,
                                   mRoutes[checkRouteIndex].route);
                addRoute = false;
                break;
              }
            }
          }

          if (addRoute)
          {
            // as the current point in the route is identical with the new one, we take over the current vehicle
            // dynamics, too.
            RssRoute newRssRoute;
            newRssRoute.route_id = mNextRouteId++;
            newRssRoute.route = additionalRoute;
            newRssRoute.vehicle_dynamics_on_route = mRoutes[routeIndex].vehicle_dynamics_on_route;
            newRssRoute.likelihood = mRoutes[routeIndex].likelihood;
            newRssRoute.parent_route_id = mRoutes[routeIndex].route_id;
            newRssRoute.progress_on_route = mRoutes[routeIndex].progress_on_route;
            getLogger()->trace("RssVehicleAdapter::extendRoutes[{}:{}] additional route {}: {} {}",
                               mRssObjectData.id,
                               mRoutes[routeIndex].route_id,
                               newRssRoute.route_id,
                               newRssRoute.progress_on_route,
                               newRssRoute.route);
            routesToAdd.push_back(newRssRoute);
          }
        }
      }
      else if (additionalRoutes.size() > 0u)
      {
        getLogger()->trace(
          "RssVehicleAdapter::extendRoutes[{}:{}] allow only single route mode: drop additional routes {}",
          mRssObjectData.id,
          mRoutes[routeIndex].route_id,
          additionalRoutes.size());
      }
      routeIndex++;
    }
    else
    {
      // drop this
      getLogger()->warn("RssVehicleAdapter::extendRoutes[{}:{}] extend current route failed, dropping {}",
                        mRssObjectData.id,
                        mRoutes[routeIndex].route_id,
                        mRoutes[routeIndex].route);
      mRoutes.erase(mRoutes.begin() + routeIndex);
    }
  }
  mRoutes.insert(mRoutes.end(), routesToAdd.begin(), routesToAdd.end());
}

template <class OBJECT_INSTANCE_TYPE>
std::vector<::ad::map::route::FullRoute>
RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::createRoutes(physics::Distance const routePreviewDistance,
                                                               ::ad::map::lane::LaneIdSet const &mapAreaLanes)
{
  std::vector<::ad::map::route::FullRoute> newRoutes;
  for (const auto &refPoint :
       {::ad::map::match::ObjectReferencePoints::RearLeft, ::ad::map::match::ObjectReferencePoints::RearRight})
  {
    for (const auto &position :
         mRssObjectData.match_object.map_matched_bounding_box.reference_point_positions[std::size_t(int32_t(refPoint))])
    {
      // consider only longitudinal in lane matches here, to be consistent to shortenRoute
      // otherwhise the next shorten route might fail
      if (!ad::map::match::isLongitudinalInLaneMatch(position))
      {
        continue;
      }
      auto startPoint = position.lane_point.para_point;
      auto projectedStartPoint = startPoint;
      if (!::ad::map::lane::isHeadingInLaneDirection(startPoint, mRssObjectData.match_object.enu_position.heading))
      {
        getLogger()->trace("Vehicle heading in opposite lane direction");
        if (::ad::map::lane::projectPositionToLaneInHeadingDirection(
              startPoint, mRssObjectData.match_object.enu_position.heading, projectedStartPoint))
        {
          getLogger()->trace("Projected to lane {}", projectedStartPoint.lane_id);
        }
      }
      getLogger()->trace("Route startPoint: {}, projectedStartPoint: {}", startPoint, projectedStartPoint);
      auto routingStartPoint = ::ad::map::route::planning::createRoutingPoint(
        projectedStartPoint, mRssObjectData.match_object.enu_position.heading);

      if (!mRoutingTargets.empty() && ad::map::point::isValid(mRoutingTargets))
      {
        auto newRoute = ::ad::map::route::planning::planRoute(
          routingStartPoint, mRoutingTargets, ::ad::map::route::RouteCreationMode::AllRoutableLanes);
        if (newRoute.route_planning_counter > 0u)
        {
          newRoutes.push_back(newRoute);
          getLogger()->trace("Route found from startPoint: {}, projectedStartPoint: {}, routingTargets: {}, route: {}",
                             startPoint,
                             projectedStartPoint,
                             mRoutingTargets,
                             newRoute);
        }
        else
        {
          getLogger()->warn("No Route found from startPoint: {}, projectedStartPoint: {}, routingTargets: {}",
                            startPoint,
                            projectedStartPoint,
                            mRoutingTargets);
        }
      }
      else if (mRouteExtensionMode != RouteExtensionMode::eAllowOnlyTargetRoute)
      {
        // better prefer longer routes to ensure back of the vehicle is in
        auto newRoutesFromCurrentStart = ::ad::map::route::planning::predictRoutesOnDistance(
          routingStartPoint,
          routePreviewDistance,
          ::ad::map::route::RouteCreationMode::AllRoutableLanes,
          ::ad::map::route::planning::FilterDuplicatesMode::SubRoutesPreferLongerOnes,
          mapAreaLanes);
        newRoutes.insert(newRoutes.end(), newRoutesFromCurrentStart.begin(), newRoutesFromCurrentStart.end());
        getLogger()->trace("Routes predicted from startPoint: {}, projectedStartPoint: {}, routes: {}",
                           startPoint,
                           projectedStartPoint,
                           newRoutesFromCurrentStart);
      }
    }
  }

  // better prefer longer routes to ensure back of the vehicle is in
  newRoutes = ::ad::map::route::planning::filterDuplicatedRoutes(
    newRoutes, ::ad::map::route::planning::FilterDuplicatesMode::SubRoutesPreferLongerOnes);

  return newRoutes;
}

template <class OBJECT_INSTANCE_TYPE>
void RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::updateRoutes(
  ::ad::physics::Distance const routePreviewDistance,
  ::ad::map::lane::LaneIdSet const &mapAreaLanes,
  RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::RouteExtensionMode routeExtensionMode)
{
  mRouteExtensionMode = routeExtensionMode;
  auto adapterPredictions = getAdapter()->getRoutePredictions();
  if (!adapterPredictions.empty())
  {
    if (!mExternalRoutes)
    {
      // mode switch between external and internal routes
      mRoutes.clear();
    }
    mExternalRoutes = true;
    RssRouteList oldRoutes;
    oldRoutes.swap(mRoutes);
    for (auto &prediction : adapterPredictions)
    {
      mRoutes.push_back(prediction);
      auto oldRouteIter
        = std::find_if(oldRoutes.begin(), oldRoutes.end(), [&prediction](RssRoute const &route) -> bool {
            return route.route_id == prediction.route_id;
          });
      if (oldRouteIter != oldRoutes.end())
      {
        // preserve vehicle dynamics if possible
        mRoutes.back().vehicle_dynamics_on_route = oldRouteIter->vehicle_dynamics_on_route;
      }
    }
  }
  else
  {
    if (mExternalRoutes)
    {
      // mode switch between external and internal routes
      mRoutes.clear();
    }
    mExternalRoutes = false;

    auto const routingTargetsToAppend = handleRoutingTargets();

    if (mRoutes.empty())
    {
      // try to create routes
      ::ad::map::route::FullRouteList newRoutes = createRoutes(routePreviewDistance, mapAreaLanes);
      for (auto &newRoute : newRoutes)
      {
        RssRoute rss_route;
        rss_route.route_id = mNextRouteId++;
        rss_route.route = newRoute;
        rss_route.object_data_on_route = RssObjectDataOnRoute();
        rss_route.vehicle_dynamics_on_route = RssEgoVehicleDynamicsOnRoute();
        rss_route.likelihood = physics::Probability(1.);
        rss_route.parent_route_id = RssRouteId(0);
        rss_route.progress_on_route = physics::Distance(0.);
        getLogger()->trace("RssVehicleAdapter::updateRoutes[{}] new route {}: {} {}",
                           mRssObjectData.id,
                           rss_route.route_id,
                           rss_route.progress_on_route,
                           rss_route.route);
        mRoutes.push_back(rss_route);
      }
    }
    else
    {
      // adapt routes if required
      shortenRoutes();
      extendRoutes(routePreviewDistance, routingTargetsToAppend, mapAreaLanes);
    }
    getAdapter()->activeRoutingTargets(mRoutingTargets);
  }
}

template <class OBJECT_INSTANCE_TYPE> void RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::normalizeAndOrderRoutes()
{
  physics::Probability likelihoodSum(.0);
  for (auto &rss_route : mRoutes)
  {
    likelihoodSum += rss_route.likelihood;
  }

  if (likelihoodSum != physics::Probability(0.))
  {
    // normalize
    for (auto &rss_route : mRoutes)
    {
      rss_route.likelihood = physics::Probability(rss_route.likelihood / likelihoodSum);
    }
  }

  // sort
  std::sort(mRoutes.begin(), mRoutes.end(), [](RssRoute const &left, RssRoute const &right) -> bool {
    return left.likelihood > right.likelihood;
  });

  if ((mRouteExtensionMode == RouteExtensionMode::eAllowOnlySingleRoute) && (mRoutes.size() > 1))
  {
    getLogger()->trace(
      "RssVehicleAdapter::normalizeAndOrderRoutes[{}] allow only single route mode: drop other routes #{}",
      mRssObjectData.id,
      mRoutes.size() - 1);
    mRoutes.resize(1u);
  }
}

template <class OBJECT_INSTANCE_TYPE>
void RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE>::updateVehicleDynamicsOnRoutes()
{
  for (auto &rss_route : mRoutes)
  {
    // before starting to override, store required old data
    physics::Duration deltaTime(0.);
    if (rss_route.vehicle_dynamics_on_route.last_update.time_since_epoch().count() != 0)
    {
      deltaTime = physics::Duration(
        std::chrono::duration<double>(mRssObjectData.last_update - rss_route.vehicle_dynamics_on_route.last_update)
          .count());
    }
    auto const lastRouteSpeedValid = rss_route.object_data_on_route.is_valid;
    auto const lastRouteSpeedLat = rss_route.object_data_on_route.route_speed_lat;
    auto const lastRouteSpeedLon = rss_route.object_data_on_route.route_speed_lon;

    // start the update
    rss_route.object_data_on_route = calculateRssObjectDataOnRoute(rss_route.route, mRssObjectData);
    rss_route.vehicle_dynamics_on_route.last_update = mRssObjectData.last_update;

    if ((deltaTime > physics::Duration(0.0001)) && lastRouteSpeedValid && rss_route.object_data_on_route.is_valid)
    {
      rss_route.vehicle_dynamics_on_route.route_accel_lat
        = (rss_route.object_data_on_route.route_speed_lat - lastRouteSpeedLat) / deltaTime;
      rss_route.vehicle_dynamics_on_route.avg_route_accel_lat
        = ((rss_route.vehicle_dynamics_on_route.avg_route_accel_lat * 2.)
           + rss_route.vehicle_dynamics_on_route.route_accel_lat)
        / 3.;
      rss_route.vehicle_dynamics_on_route.route_accel_lon
        = (rss_route.object_data_on_route.route_speed_lon - lastRouteSpeedLon) / deltaTime;
      rss_route.vehicle_dynamics_on_route.avg_route_accel_lon
        = ((rss_route.vehicle_dynamics_on_route.avg_route_accel_lon * 2.)
           + rss_route.vehicle_dynamics_on_route.route_accel_lon)
        / 3.;

      if (rss_route.vehicle_dynamics_on_route.avg_route_accel_lat == physics::Acceleration(0.))
      {
        // prevent from underrun
        rss_route.vehicle_dynamics_on_route.avg_route_accel_lat = physics::Acceleration(0.);
      }
      if (rss_route.vehicle_dynamics_on_route.avg_route_accel_lon == physics::Acceleration(0.))
      {
        // prevent from underrun
        rss_route.vehicle_dynamics_on_route.avg_route_accel_lon = physics::Acceleration(0.);
      }
    }
  }
}

template <class OBJECT_INSTANCE_TYPE> void RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE>::evaluateRoutes()
{
  if (!mExternalRoutes)
  {
    physics::Angle const maxHeadingDelta(M_PI / 4.);
    physics::Distance const maxCenterDistance(4.);
    for (auto &rss_route : mRoutes)
    {
      rss_route.likelihood = physics::Probability(.05);
      if (rss_route.object_data_on_route.is_valid)
      {
        // distance to nominal center
        auto const distanceToRouteNominalCenter = ad::map::point::distance(
          rss_route.object_data_on_route.nominal_center_position_of_lane_in_nominal_route_direction,
          mRssObjectData.match_object.enu_position.center_point);
        if (!rss_route.object_data_on_route.object_within_route)
        {
          rss_route.likelihood = physics::Probability(.01);
        }
        else if ((rss_route.object_data_on_route.object_center_within_route)
                 && (distanceToRouteNominalCenter < maxCenterDistance)
                 && (std::fabs(rss_route.object_data_on_route.route_heading_delta) < maxHeadingDelta))
        {
          auto const distanceFactor = 1. - distanceToRouteNominalCenter / maxCenterDistance;
          auto const headingFactor
            = 1. - std::fabs(rss_route.object_data_on_route.route_heading_delta) / maxHeadingDelta;
          rss_route.likelihood = physics::Probability(distanceFactor * headingFactor);
        }
        else
        {
          // center not within route anymore, or heading diff larger than 45 degree
        }
      }
    }
  }
}

} // namespace map
} // namespace rss
} // namespace ad
