// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/RssRouteChecker.hpp"

#include <ad/rss/state/RssStateOperation.hpp>
#include <tbb/tbb.h>

#include "ad/map/intersection/CoreIntersection.hpp"
#include "ad/map/lane/Operation.hpp"
#include "ad/map/route/Operation.hpp"
#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssWorldModelCreator.hpp"
#include "ad/rss/map/detail/ParallelChecker.hpp"
#include "ad/rss/map/detail/ParallelObjectUpdater.hpp"
#include "ad/rss/map/detail/ParallelRouteUpdater.hpp"
#include "ad/rss/map/detail/ParallelWorldModelCreator.hpp"

namespace ad {
namespace rss {
namespace map {

template <class OBJECT_INSTANCE_TYPE>
void RssRouteChecker<OBJECT_INSTANCE_TYPE>::registerArtificialObjectInjectionCallback(
  ::ad::physics::Distance const artificialObjectSamplingDistance,
  ArtificialObjectInjectionCallbackFunctionType artificialObjectsInjectionCallback)
{
  std::lock_guard<std::shared_timed_mutex> const lock(mCallbackRwLock);
  mArtificialObjectSamplingDistance = artificialObjectSamplingDistance;
  mArtificialObjectsInjectionCallback = artificialObjectsInjectionCallback;
}

template <class OBJECT_INSTANCE_TYPE>
template <class Data, class Adapter>
void RssRouteChecker<OBJECT_INSTANCE_TYPE>::updateObjectMap(
  std::chrono::system_clock::time_point const &currentTime,
  std::map<::ad::rss::world::ObjectId, Data> &objectMap,
  std::vector<typename Adapter::Ptr> const &activeObjectAdapterList)
{
  for (auto &objectEntry : objectMap)
  {
    objectEntry.second.mActive = false;
  }
  for (auto &adapter : activeObjectAdapterList)
  {
    auto objectEntryIter = objectMap.find(adapter->getObjectId());
    if (objectEntryIter == objectMap.end())
    {
      // create new map entry for this object
      auto insertResult = objectMap.insert({adapter->getObjectId(), Data()});
      if (!insertResult.second)
      {
        getLogger()->error("RssRouteChecker::updateObjectMap[{}] unexpected error on adding new object adapter entry",
                           adapter->getObjectId());
        continue;
      }
      objectEntryIter = insertResult.first;
    }

    objectEntryIter->second.mActive = true;
    objectEntryIter->second.updateAdapter(adapter);
  }

  // remove outdated entries
  for (auto objectEntryIter = objectMap.begin(); objectEntryIter != objectMap.end();)
  {
    if (!objectEntryIter->second.mActive)
    {
      auto durationSinceLastUpdate = currentTime - objectEntryIter->second.mRssObjectData.last_update;
      if (std::chrono::duration_cast<std::chrono::seconds>(durationSinceLastUpdate).count()
          > (static_cast<int64_t>(mDropOutdatedObjectsDuration.mDuration) + 1))
      {
        getLogger()->debug("RssRouteChecker::updateObjectMap[{}] Dropping outdated object adapter.",
                           objectEntryIter->first);
        objectMap.erase(objectEntryIter++);
        continue;
      }
    }
    objectEntryIter++;
  }
}

template <class OBJECT_INSTANCE_TYPE> void RssRouteChecker<OBJECT_INSTANCE_TYPE>::updateRssCheckers()
{
  for (auto &egoVehicleToUpdate : mEgoVehicleMap)
  {
    auto &egoVehicleData = egoVehicleToUpdate.second;
    if (egoVehicleData.mActive)
    {
      RssRouteCheckMap lastRouteCheckMap;
      egoVehicleData.mRssRouteCheckMap.swap(lastRouteCheckMap);

      for (auto &lastCheckerEntry : lastRouteCheckMap)
      {
        for (auto &otherVehicle : mVehicleMap)
        {
          if (otherVehicle.second.mClearObjectHistory)
          {
            lastCheckerEntry.second->dropObjectHistory(otherVehicle.second.mRssObjectData.id);
          }
        }
      }

      for (auto &egoRssRoute : egoVehicleData.mRoutes)
      {
        auto routeCheckFindResult = lastRouteCheckMap.find(egoRssRoute.route_id);
        if (routeCheckFindResult != lastRouteCheckMap.end())
        {
          getLogger()->trace("RssRouteChecker::updateRssCheckers[{}:{}] taking over existing checker",
                             egoVehicleData.mRssObjectData.id,
                             egoRssRoute.route_id);
          RssRouteCheckMap::value_type checkerToTakeOver = *routeCheckFindResult;
          egoVehicleData.mRssRouteCheckMap.insert(checkerToTakeOver);
        }
        else
        {
          // is there a parent route assigned or a default checker on RouteId(0) available?
          routeCheckFindResult = lastRouteCheckMap.find(egoRssRoute.parent_route_id);
          if (routeCheckFindResult != lastRouteCheckMap.end())
          {
            getLogger()->trace("RssRouteChecker::updateRssCheckers[{}:{}] add copy parent checker {}",
                               egoVehicleData.mRssObjectData.id,
                               egoRssRoute.route_id,
                               egoRssRoute.parent_route_id);
            // create a copy of the parent checker to preserve the current state of the parent of
            // the new variant of the extended route
            ::ad::rss::core::RssCheck const &parentChecker = *routeCheckFindResult->second.get();
            ::ad::rss::core::RssCheck::Ptr parentCheckerCopy(new ::ad::rss::core::RssCheck(parentChecker));
            auto insertResult = egoVehicleData.mRssRouteCheckMap.insert({egoRssRoute.route_id, parentCheckerCopy});
            if (insertResult.second)
            {
              updateRssCheckerCallbacks(egoVehicleData, insertResult.first);
            }
          }
          else
          {
            getLogger()->trace("RssRouteChecker::updateRssCheckers[{}:{}] no parent checker {} found; add new checker",
                               egoVehicleData.mRssObjectData.id,
                               egoRssRoute.route_id,
                               egoRssRoute.parent_route_id);
            // create a new checker
            ::ad::rss::core::RssCheck::Ptr newChecker(new ::ad::rss::core::RssCheck());
            auto insertResult = egoVehicleData.mRssRouteCheckMap.insert({egoRssRoute.route_id, newChecker});
            if (insertResult.second)
            {
              updateRssCheckerCallbacks(egoVehicleData, insertResult.first);
            }
          }
        }
      }
      if (egoVehicleData.mRssRouteCheckMap.empty())
      {
        // we need to ensure to have a default checker for RouteId(0)
        if (!lastRouteCheckMap.empty())
        {
          getLogger()->trace("RssRouteChecker::updateRssCheckers[{}:0] no current route, resuse first checker {} as 0",
                             egoVehicleData.mRssObjectData.id,
                             lastRouteCheckMap.begin()->first);
          // take over the first checker in the map (if there are multiple ones available,
          // the one with the lowest route id is taken; but the route id is set to zero again)
          auto insertResult
            = egoVehicleData.mRssRouteCheckMap.insert({RssRouteId(0), lastRouteCheckMap.begin()->second});
          if (insertResult.second)
          {
            updateRssCheckerCallbacks(egoVehicleData, insertResult.first);
          }
        }
        else
        {
          getLogger()->trace("RssRouteChecker::updateRssCheckers[{}:0] no current route, and no checker at all "
                             "present; add default checker",
                             egoVehicleData.mRssObjectData.id);
          // and we didn't have any last time, so create new checker to be used for checks
          ::ad::rss::core::RssCheck::Ptr newChecker(new ::ad::rss::core::RssCheck());
          auto insertResult = egoVehicleData.mRssRouteCheckMap.insert({RssRouteId(0), newChecker});
          if (insertResult.second)
          {
            updateRssCheckerCallbacks(egoVehicleData, insertResult.first);
          }
        }
      }
    }
  }
}

template <class OBJECT_INSTANCE_TYPE>
void RssRouteChecker<OBJECT_INSTANCE_TYPE>::registerCalculateTrajectorySetsCallback(
  world::ObjectType objectType,
  RssRouteChecker<OBJECT_INSTANCE_TYPE>::CalculateTrajectorySetsCallbackFunctionType calculateTrajectorySetsCallback)
{
  try
  {
    std::lock_guard<std::shared_timed_mutex> const lock(mCallbackRwLock);
    mCalculateTrajectorySetsCallbackMap[objectType] = calculateTrajectorySetsCallback;
    // update all checkers at once
    for (auto &egoVehicleToUpdate : mEgoVehicleMap)
    {
      auto &egoVehicleData = egoVehicleToUpdate.second;
      for (auto checkMapIter = egoVehicleData.mRssRouteCheckMap.begin();
           checkMapIter != egoVehicleData.mRssRouteCheckMap.end();
           checkMapIter++)
      {
        updateRssCheckerCallbacksLocked(egoVehicleData, checkMapIter);
      }
    }
  }
  catch (std::exception &e)
  {
    getLogger()->critical("RssRouteChecker::registerCalculateTrajectorySetsCallback>> Exception caught'{}'", e.what());
  }
  catch (...)
  {
    getLogger()->critical("RssRouteChecker::registerCalculateTrajectorySetsCallback>> Exception caught");
  }
}

template <class OBJECT_INSTANCE_TYPE>
void RssRouteChecker<OBJECT_INSTANCE_TYPE>::updateRssCheckerCallbacks(
  RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &egoVehicle, RssRouteCheckMap::iterator routeCheckerMapIter)
{
  core::shared_lock_guard const lock_shared(mCallbackRwLock);
  updateRssCheckerCallbacksLocked(egoVehicle, routeCheckerMapIter);
}

template <class OBJECT_INSTANCE_TYPE>
void RssRouteChecker<OBJECT_INSTANCE_TYPE>::updateRssCheckerCallbacksLocked(
  RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &egoVehicle, RssRouteCheckMap::iterator routeCheckerMapIter)
{
  using namespace std::placeholders;
  for (auto &callbackPair : mCalculateTrajectorySetsCallbackMap)
  {
    auto callback = std::bind(&RssRouteChecker::callCalculateTrajectorySetsCallback,
                              this,
                              callbackPair.second,
                              egoVehicle.mRssObjectData.id,
                              routeCheckerMapIter->first,
                              _1,
                              _2,
                              _3,
                              _4,
                              _5);
    routeCheckerMapIter->second->registerCalculateTrajectorySetsCallback(callbackPair.first, callback);
  }
}

template <class OBJECT_INSTANCE_TYPE>
bool RssRouteChecker<OBJECT_INSTANCE_TYPE>::callCalculateTrajectorySetsCallback(
  RssRouteChecker<OBJECT_INSTANCE_TYPE>::CalculateTrajectorySetsCallbackFunctionType callback,
  ::ad::rss::world::ObjectId const &egoVehicleId,
  ::ad::rss::map::RssRouteId const &routeId,
  ::ad::rss::core::RelativeConstellation const &constellation,
  ::ad::rss::world::ObjectId const &objectId,
  ::ad::rss::core::RelativeObjectState const &vehicleState,
  ::ad::geometry::Polygon &brakePolygon,
  ::ad::geometry::Polygon &continueForwardPolygon)
{
  auto findEgoVehicleDataResult = mEgoVehicleMap.find(egoVehicleId);
  if (findEgoVehicleDataResult != mEgoVehicleMap.end())
  {
    auto &egoVehicleData = findEgoVehicleDataResult->second;
    return callback(
      egoVehicleData, routeId, constellation, objectId, vehicleState, brakePolygon, continueForwardPolygon);
  }
  else
  {
    getLogger()->error("RssRouteChecker::callCalculateTrajectorySetsCallback[{}:{}] ego vehicle not found to process "
                       "callback for object type {}",
                       egoVehicleId,
                       routeId,
                       std::to_string(vehicleState.object_type));
  }
  return false;
}

template <class OBJECT_INSTANCE_TYPE>
RssRouteCheckResult RssRouteChecker<OBJECT_INSTANCE_TYPE>::createSituationForRoute(
  RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &ego_vehicle, RssRoute const &rss_route)
{
  RssRouteCheckResult situationCheckResult;
  situationCheckResult.is_valid = false;
  situationCheckResult.rss_route = rss_route;
  situationCheckResult.rss_situation_snapshot = ad::rss::core::RssSituationSnapshot();
  situationCheckResult.rss_state_snapshot = ad::rss::state::RssStateSnapshot();
  situationCheckResult.proper_response = ad::rss::state::ProperResponse();
  situationCheckResult.result_analysis.dangerous_state = true;
  situationCheckResult.result_analysis.dangerous_vehicle = true;
  situationCheckResult.result_analysis.dangerous_opposite_state = true;
  situationCheckResult.result_analysis.vehicle_crossing_road_boundaries = false;

  try
  {
    ParallelWorldModelCreator<OBJECT_INSTANCE_TYPE> situationWorldModelCreator(
      mTimeIndex, ego_vehicle, rss_route, mConnectingRoutesCache, mMapAreaLanes);
    tbb::parallel_for_each(mEgoVehicleMap.begin(), mEgoVehicleMap.end(), situationWorldModelCreator);
    tbb::parallel_for_each(mVehicleMap.begin(), mVehicleMap.end(), situationWorldModelCreator);
    tbb::parallel_for_each(mPedestrianMap.begin(), mPedestrianMap.end(), situationWorldModelCreator);
    tbb::parallel_for_each(mArtificialObjectMap.begin(), mArtificialObjectMap.end(), situationWorldModelCreator);
    situationCheckResult.world_model = situationWorldModelCreator.getWorldModel();

    situationCreated(ego_vehicle, situationCheckResult);
  }
  catch (std::exception &e)
  {
    getLogger()->critical("RssRouteChecker::createSituationForRoute>> Exception caught'{}' {} {}",
                          e.what(),
                          ego_vehicle.mRssObjectData.id,
                          rss_route);
    situationCheckResult.is_valid = false;
  }
  catch (...)
  {
    getLogger()->critical(
      "RssRouteChecker::createSituationForRoute>> Exception caught {} {}", ego_vehicle.mRssObjectData.id, rss_route);
    situationCheckResult.is_valid = false;
  }
  return situationCheckResult;
}

template <class OBJECT_INSTANCE_TYPE> RssObjectResultList RssRouteChecker<OBJECT_INSTANCE_TYPE>::createSituations()
{
  RssObjectResultList resultList;
  mConnectingRoutesCache.clear();
  for (auto const &ego_vehicle : mEgoVehicleMap)
  {
    if (ego_vehicle.second.mActive)
    {
      RssObjectResult checkResult;
      checkResult.object_data = ego_vehicle.second.mRssObjectData;

      if (ego_vehicle.second.mRoutes.empty())
      {
        RssRoute emptyRoute;
        emptyRoute.likelihood = ::ad::physics::Probability(1.);
        emptyRoute.route_id = RssRouteId(0.);
        emptyRoute.route = ::ad::map::route::FullRoute();
        emptyRoute.parent_route_id = RssRouteId(0.);
        auto const situationCheckResult = createSituationForRoute(ego_vehicle.second, emptyRoute);
        checkResult.situation_check_results.push_back(situationCheckResult);
      }
      else
      {
        for (auto const &rss_route : ego_vehicle.second.mRoutes)
        {
          auto const situationCheckResult = createSituationForRoute(ego_vehicle.second, rss_route);
          checkResult.situation_check_results.push_back(situationCheckResult);
        }
      }

      situationsCreated(ego_vehicle.second, checkResult);
      resultList.push_back(checkResult);
    }
  }

  situationsCreated(resultList);
  return resultList;
}

template <class OBJECT_INSTANCE_TYPE>
void RssRouteChecker<OBJECT_INSTANCE_TYPE>::appendObjectsToResults(RssObjectResultList &objectResultList)
{
  for (auto const &vehicle : mVehicleMap)
  {
    if (vehicle.second.mActive)
    {
      RssObjectResult objectResult;
      objectResult.object_data = vehicle.second.mRssObjectData;
      objectResultList.push_back(objectResult);
    }
  }
  for (auto const &pedestrian : mPedestrianMap)
  {
    if (pedestrian.second.mActive)
    {
      RssObjectResult objectResult;
      objectResult.object_data = pedestrian.second.mRssObjectData;
      objectResultList.push_back(objectResult);
    }
  }
  for (auto const &artificialObject : mArtificialObjectMap)
  {
    if (artificialObject.second.mActive)
    {
      RssObjectResult objectResult;
      objectResult.object_data = artificialObject.second.mRssObjectData;
      objectResultList.push_back(objectResult);
    }
  }
}

template <class OBJECT_INSTANCE_TYPE>
RssObjectResultList RssRouteChecker<OBJECT_INSTANCE_TYPE>::checkObjects(
  std::chrono::system_clock::time_point const &currentTime,
  ::ad::physics::Distance const vehicleSamplingDistance,
  RssEgoVehicleAdapterList<OBJECT_INSTANCE_TYPE> &egoVehicles,
  RssVehicleAdapterList<OBJECT_INSTANCE_TYPE> &vehicles,
  ::ad::physics::Distance const pedestrianSamplingDistance,
  RssPedestrianAdapterList<OBJECT_INSTANCE_TYPE> &pedestrians,
  typename RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::RouteExtensionMode routeExtensionMode)
{
  mTimeIndex++;
  RssObjectResultList rssObjectResultList;
  try
  {
    // update object maps
    updateObjectMap<RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE>, RssEgoVehicleAdapter<OBJECT_INSTANCE_TYPE>>(
      currentTime, mEgoVehicleMap, egoVehicles);
    updateObjectMap<RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>, RssVehicleAdapter<OBJECT_INSTANCE_TYPE>>(
      currentTime, mVehicleMap, vehicles);
    updateObjectMap<RssRouteCheckerPedestrianData<OBJECT_INSTANCE_TYPE>, RssPedestrianAdapter<OBJECT_INSTANCE_TYPE>>(
      currentTime, mPedestrianMap, pedestrians);

    // update object data
    ParallelObjectUpdater<OBJECT_INSTANCE_TYPE> objectUpdater(currentTime,
                                                              vehicleSamplingDistance,
                                                              pedestrianSamplingDistance,
                                                              mArtificialObjectSamplingDistance,
                                                              mMapAreaLanes);
    tbb::parallel_for_each(mEgoVehicleMap.begin(), mEgoVehicleMap.end(), objectUpdater);
    objectDataUpdated(mEgoVehicleMap);
    tbb::parallel_for_each(mVehicleMap.begin(), mVehicleMap.end(), objectUpdater);
    objectDataUpdated(mVehicleMap);
    tbb::parallel_for_each(mPedestrianMap.begin(), mPedestrianMap.end(), objectUpdater);
    objectDataUpdated(mPedestrianMap);

    // update routes
    ParallelRouteUpdater<OBJECT_INSTANCE_TYPE> routeUpdater(
      objectUpdater.getMinRoutePreviewDistance(), mMapAreaLanes, routeExtensionMode);
    tbb::parallel_for_each(mEgoVehicleMap.begin(), mEgoVehicleMap.end(), routeUpdater);
    routesUpdated(mEgoVehicleMap);
    tbb::parallel_for_each(mVehicleMap.begin(), mVehicleMap.end(), routeUpdater);
    routesUpdated(mVehicleMap);

    RssArtificialObjectAdapterList<OBJECT_INSTANCE_TYPE> artificialObjects;
    // keep the following block as it's essential to protect the callback registration
    {
      core::shared_lock_guard const lock_shared(mCallbackRwLock);
      if (mArtificialObjectsInjectionCallback != nullptr)
      {
        artificialObjects = mArtificialObjectsInjectionCallback(mEgoVehicleMap, mVehicleMap, mPedestrianMap);
      }
    }
    updateObjectMap<RssRouteCheckerArtificialObjectData<OBJECT_INSTANCE_TYPE>,
                    RssArtificialObjectAdapter<OBJECT_INSTANCE_TYPE>>(
      currentTime, mArtificialObjectMap, artificialObjects);
    tbb::parallel_for_each(mArtificialObjectMap.begin(), mArtificialObjectMap.end(), objectUpdater);
    objectDataUpdated(mArtificialObjectMap);

    updateRssCheckers();

    rssObjectResultList = createSituations();

    ParallelChecker<OBJECT_INSTANCE_TYPE> parallelChecker(mEgoVehicleMap);
    tbb::parallel_for_each(rssObjectResultList.begin(), rssObjectResultList.end(), parallelChecker);
    checksPerformed(rssObjectResultList);

    appendObjectsToResults(rssObjectResultList);
  }
  catch (std::exception &e)
  {
    getLogger()->critical("RssRouteChecker::checkObjects>> Exception caught'{}'", e.what());
    rssObjectResultList.clear();
  }
  catch (...)
  {
    getLogger()->critical("RssRouteChecker::checkObjects>> Exception caught");
    rssObjectResultList.clear();
  }

  return rssObjectResultList;
}

template <class OBJECT_INSTANCE_TYPE>
void RssRouteChecker<OBJECT_INSTANCE_TYPE>::restrictOperationToMapArea(
  ::ad::map::lane::LaneIdSet const &lanesToConsider)
{
  mMapAreaLanes = lanesToConsider;
  getLogger()->debug("RssRouteChecker::restrictOperationToMapArea>> {}", mMapAreaLanes);
}

template <class OBJECT_INSTANCE_TYPE>
bool RssRouteChecker<OBJECT_INSTANCE_TYPE>::restrictOperationToMapArea(
  ::ad::map::point::BoundingSphere const &bounding_sphere)
{
  mMapAreaLanes = ad::map::lane::getLanesOfMapArea(bounding_sphere);
  getLogger()->debug("RssRouteChecker::restrictOperationToMapArea({})>> {}", bounding_sphere, mMapAreaLanes);
  return !mMapAreaLanes.empty();
}

template <class OBJECT_INSTANCE_TYPE>
bool RssRouteChecker<OBJECT_INSTANCE_TYPE>::restrictOperationToMapArea(
  std::vector<::ad::map::lane::MapAreaPredictionStartPoint> const &predictionStartPoints)
{
  mMapAreaLanes = ad::map::lane::getLanesOfMapArea(predictionStartPoints);
  getLogger()->debug("RssRouteChecker::restrictOperationToMapArea(PredictionStartPoints)>> results in {}",
                     mMapAreaLanes);
  return !mMapAreaLanes.empty();
}

template <class OBJECT_INSTANCE_TYPE>
bool RssRouteChecker<OBJECT_INSTANCE_TYPE>::restrictOperationToIntersectionArea(
  ::ad::map::point::ENUPoint const &intersectionPoint, ::ad::physics::Distance const &intersectionDistance)
{
  mMapAreaLanes = ad::map::lane::getLanesOfMapArea(intersectionPoint, intersectionDistance);
  getLogger()->debug("RssRouteChecker::restrictOperationToIntersectionArea({}@{})>> {}",
                     intersectionPoint,
                     intersectionDistance,
                     mMapAreaLanes);
  return !mMapAreaLanes.empty();
}

template <class OBJECT_INSTANCE_TYPE> void RssRouteChecker<OBJECT_INSTANCE_TYPE>::clearOperationToMapAreaRestriction()
{
  mMapAreaLanes.clear();
  getLogger()->debug("RssRouteChecker::clearOperationToMapAreaRestriction>> {}", mMapAreaLanes);
}

} // namespace map
} // namespace rss
} // namespace ad
