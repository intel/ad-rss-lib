// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/map/lane/MapAreaOperation.hpp"
#include "ad/map/route/Planning.hpp"
#include "ad/rss/map/ConnectingRoutesCache.hpp"
#include "ad/rss/map/RssObjectResultList.hpp"
#include "ad/rss/map/RssRouteCheckerData.hpp"

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

/// @brief supporting class for implementing the RSS checks
template <class OBJECT_INSTANCE_TYPE> class RssRouteChecker
{
public:
  /*!
   * \brief Smart pointer on RssVehicleAdapter
   */
  typedef std::shared_ptr<RssRouteChecker> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectAdapter
   */
  typedef std::shared_ptr<RssRouteChecker const> ConstPtr;

  /// @brief default constructor
  RssRouteChecker(::ad::physics::Duration const dropOutdatedObjecstDuration)
    : mDropOutdatedObjectsDuration(dropOutdatedObjecstDuration)
    , mTimeIndex(0u)
    , mArtificialObjectSamplingDistance(1.)
    , mArtificialObjectsInjectionCallback(nullptr)
  {
  }

  /// @brief destructor
  virtual ~RssRouteChecker() = default;

  /*!
   *  @brief defines the type for callback to inject artificial objects
   *
   *  The provided parameters to the function can be used to re-use already pre-proccessed data on
   *  vehicles and pedestrians at the current point in time.
   */
  using ArtificialObjectInjectionCallbackFunctionType
    = std::function<RssArtificialObjectAdapterList<OBJECT_INSTANCE_TYPE>(
      RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE> const &egoVehicleMap,
      RssRouteCheckerVehicleDataMap<OBJECT_INSTANCE_TYPE> const &vehicleMap,
      RssRouteCheckerPedestrianDataMap<OBJECT_INSTANCE_TYPE> const &pedestrianMap)>;

  /*!
   *  @brief register a callback to inject artificial objects
   *
   * This function allows to register a callback to inject artificial objects into the procssing of the checkObjects()
   * function. The callback is triggered after the object and route data of the vehicles and pedestrians is updated to
   * allow the injection function the reuse of already available data like map matched positions and future routes.
   *
   * @param[in] artificialObjectSamplingDistance the sampling distance used for map matching of artificial objects
   * (see ad::map::match::AdMapMatching::getMapMatchedBoundingBox() for a detailed description of this
   * @param[in] artificialObjectsInjectionCallback the actual callback function to register (use nullptr to unregister)
   *
   */
  void registerArtificialObjectInjectionCallback(
    ::ad::physics::Distance const artificialObjectSamplingDistance,
    ArtificialObjectInjectionCallbackFunctionType artificialObjectsInjectionCallback);

  /*!
   * @brief Function callback type for unstructured trajectory set calculation
   *
   * @param[in] egoVehicle The ego-vehicle data the calculation is performed for
   * @param[in] routedId The route id of the ego-vehicle the calculation is performed for
   * @param[in] constellation The relative constellation the calculation is based on
   * @param[in] objectId The id of the object the calculation is based on (one of the two constellation objects)
   * @param[in] vehicleState The relative object state of the object the calculation is based on (one of the two
   * constellation vehicle states)
   * @param[out] brakePolygon The calculated brake polygon
   * @param[out] continueForwardPolygon The calculated continue forward polygon
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  using CalculateTrajectorySetsCallbackFunctionType
    = std::function<bool(RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &egoVehicle,
                         ::ad::rss::map::RssRouteId const &routeId,
                         ::ad::rss::core::RelativeConstellation const &constellation,
                         ::ad::rss::world::ObjectId const &objectId,
                         ::ad::rss::core::RelativeObjectState const &vehicleState,
                         ::ad::geometry::Polygon &brakePolygon,
                         ::ad::geometry::Polygon &continueForwardPolygon)>;

  /*!
   * @brief Register a callback for unstructured trajectory set calculation
   *
   * @param[in] objectType The object type this trajectory set calculation should be applied
   * @param[in] calculateTrajectorySetsCallback The actual callback function to perform the trajectory set calculation
   */
  void
  registerCalculateTrajectorySetsCallback(world::ObjectType objectType,
                                          CalculateTrajectorySetsCallbackFunctionType calculateTrajectorySetsCallback);

  /*!
   *  @brief perform the RSS check of the objects
   *
   *  This function performs the following steps:
   *
   *  - update the object data of egoVehicles, vehicles, pedestrians (i.e. data of RssObjectAdapter class including
   *    map matching)
   *  - update the route data of the egoVehicles and vehicles
   *  - trigger artificial object injection callback if registered (see also
   * registerArtificialObjectInjectionCallback()) and update
   *  - keep track of the ::ad::rss::core::RssCheck objects for each route of each ego vehicle (which defines the input
   * situation to be checked; one checker for one situation)
   *  - create the world model for each situation (each route of each ego vehicle)
   *  - extract the situation for each situation (each route of each ego vehicle)
   *  - check the constellation for each situation (each route of each ego vehicle)
   *  - provide a proper response for each situation (each route of each ego vehicle)
   *
   *  The protected callback functions allow to interact with the calculation process and e.g. allow to override
   *  intermediate results.
   *
   *  @returns a RSS result list of all considered egoVehicles, vehicles, pedestrians and artificialObjects within this
   *    calculations
   */
  virtual RssObjectResultList
  checkObjects(std::chrono::system_clock::time_point const &currentTime,
               ::ad::physics::Distance const vehicleSamplingDistance,
               RssEgoVehicleAdapterList<OBJECT_INSTANCE_TYPE> &egoVehicles,
               RssVehicleAdapterList<OBJECT_INSTANCE_TYPE> &vehicles,
               ::ad::physics::Distance const pedestrianSamplingDistance,
               RssPedestrianAdapterList<OBJECT_INSTANCE_TYPE> &pedestrians,
               typename RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::RouteExtensionMode routeExtensionMode);

  /*!
   * @brief These group of functions restrict the operation of this class to a certain map area
   *
   * The computations within this class are heavily depending on the size and complexity of the used ad map.
   * Especially use cases with many ego vehicles suffer from this.
   * On the other hand, the use-cases with many vehicles are often restricted to specific locations
   * on a map with a certain extend.
   *
   * The following functions provide different means of restricting the lanes of the map that actually
   * are being considered for internal computations like:
   * - ::ad::map::match::AdMapMatching()
   * - ::ad::map::route::extendRouteToDistance()
   * - ::ad::map::route::planning::predictRoutesOnDistance()
   * If the map area is restricted by one of the following functions, all the map based operations will
   * be performed as if the rest of the map would not exist at all.
   *
   * @{
   */
  /*!
   * @brief restriction of the map area to an explicit list of lanes
   *
   * This function sets the lane to consider for all map operations.
   *
   * @param[in] lanesToConsider the lanes of the map to be considered
   *
   */
  void restrictOperationToMapArea(::ad::map::lane::LaneIdSet const &lanesToConsider);

  /*!
   * @brief restriction of the map area to a bounding sphere
   *
   * This function collects all lane within the given bounding sphere in a LaneIdSet
   * to consider for all map operations.
   * For collecting the lanes ::ad::map::lane::isNear() is called that checks for overlapping
   * of the bounding sphere of the lane and the given bounding sphere.
   *
   * @param[in] bounding_sphere the bounding sphere of the map area to be considered
   *
   * @returns \c true if the map area is filled
   */
  bool restrictOperationToMapArea(::ad::map::point::BoundingSphere const &bounding_sphere);

  /*!
   * @brief restriction of the map area to a set of reachable lanes
   *
   * This function collects all reachable lanes from the given list of input MapAreaPredictionStartPoint
   * to consider for all map operations.
   *
   * @param[in] predictionStartPoints the start points used to perform route prediction
   * with respective prediction distance and route creation mode
   *
   * @returns \c true if the map area is filled
   */
  bool restrictOperationToMapArea(std::vector<ad::map::lane::MapAreaPredictionStartPoint> const &predictionStartPoints);

  /**
   * @brief restriction of the map area around an intersection to a set of reachable lanes
   *
   * This function collects all reachable lanes from the intersection at the given intersectionPoint
   * to consider for all map operations.
   * Reachable in the sense of all inner intersection lanes plus all entry/exit arms of the intersection
   * until the given intersectionDistance is reached.
   *
   * @param[in] intersectionPoint the start points used to check for an intersection to be used
   * @param[in] intersectionDistance distance to be used for a directionless prediction from
   *            all intersection border points
   *
   * @returns \c true if the map area is filled
   */
  bool restrictOperationToIntersectionArea(::ad::map::point::ENUPoint const &intersectionPoint,
                                           ::ad::physics::Distance const &intersectionDistance);

  /*!
   * @brief clear the restriction to a certain map area
   *
   * This function clears the lanes to consider for all map operations.
   */
  void clearOperationToMapAreaRestriction();
  /*!
   *  @}
   */

  /*!
   * @brief check if the ego vehicle object is still present.
   *
   * ego vehicles are dropped from the internal list if there is not update on it for longer than
   * the constructor parameter \c dropOutdatedObjecstDuration.
   */
  bool isEgoVehicleAvailable(::ad::rss::world::ObjectId ego_object_id)
  {
    return mEgoVehicleMap.find(ego_object_id) != mEgoVehicleMap.end();
  }

  /*!
   * @brief check if the ego vehicle object is still present and currently active.
   *
   * Check if the ego vehicle is available and still listed as active. The vehicles are active if they have been part of
   * the latest check.
   */
  bool isEgoVehicleActive(::ad::rss::world::ObjectId ego_object_id)
  {
    auto findResult = mEgoVehicleMap.find(ego_object_id);
    if (findResult != mEgoVehicleMap.end())
    {
      return findResult->second.mActive;
    }
    else
    {
      return false;
    }
  }

protected:
  /*! Callback functions called after the respective functionality is processed
   *
   *  The following set of callback functions are intentionally non const to allow derived classes to adapt intermediate
   * results.
   *  Depending on the research activities conducted, this might be useful to quickly log and/or test out the effects of
   * smaller
   *  changes to the complete proceessing chain.
   *
   *  @{
   */
  /*!
   * @brief callback after object data of the ego vehicles has been updated
   */
  virtual void objectDataUpdated(RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE> &egoVehicleMap)
  {
    (void)egoVehicleMap;
  }
  /*!
   * @brief callback after object data of the vehicles has been updated
   */
  virtual void objectDataUpdated(RssRouteCheckerVehicleDataMap<OBJECT_INSTANCE_TYPE> &vehicleMap)
  {
    (void)vehicleMap;
  }
  /*!
   * @brief callback after object data of the pedestrians has been updated
   */
  virtual void objectDataUpdated(RssRouteCheckerPedestrianDataMap<OBJECT_INSTANCE_TYPE> &pedestrianMap)
  {
    (void)pedestrianMap;
  }
  /*!
   * @brief callback after object data of the artificial objects has been updated
   */
  virtual void objectDataUpdated(RssRouteCheckerArtificialObjectDataMap<OBJECT_INSTANCE_TYPE> &artificialObjectMap)
  {
    (void)artificialObjectMap;
  }
  /*!
   * @brief callback after the routes of the ego vehicles have been updated
   */
  virtual void routesUpdated(RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE> &egoVehicleMap)
  {
    (void)egoVehicleMap;
  }
  /*!
   * @brief callback after the routes of the vehicles have been updated
   */
  virtual void routesUpdated(RssRouteCheckerVehicleDataMap<OBJECT_INSTANCE_TYPE> &vehicleMap)
  {
    (void)vehicleMap;
  }
  /*!
   * @brief callback after the rssRouteCheckResult situations has been created for the respective ego vehicle
   *
   *  Filled members of rssRouteCheckResult:
   *  - rss_route
   *  - world_model
   */
  virtual void situationCreated(RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &ego_vehicle,
                                RssRouteCheckResult &rssRouteCheckResult)
  {
    (void)ego_vehicle;
    (void)rssRouteCheckResult;
  }
  /*!
   * @brief callback after all rssRouteCheckResult situations have been created for the respective ego vehicle
   *
   *  Filled members of respective rssRouteCheckResult:
   *  - rss_route
   *  - world_model
   */
  virtual void situationsCreated(RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &ego_vehicle,
                                 RssObjectResult &rssObjectResult)
  {
    (void)ego_vehicle;
    (void)rssObjectResult;
  }
  /*!
   * @brief callback after all situations for all ego vehicles have been created
   */
  virtual void situationsCreated(RssObjectResultList &objectResultList)
  {
    (void)objectResultList;
  }
  /*!
   * @brief callback after all constellations for all ego vehicles have been checked
   */
  virtual void checksPerformed(RssObjectResultList &objectResultList)
  {
    (void)objectResultList;
  }
  /*!
   *  @}
   */

private:
  /*! Function to update object maps with latest adapter classes
   */
  template <class Data, class Adapter>
  void updateObjectMap(std::chrono::system_clock::time_point const &currentTime,
                       std::map<::ad::rss::world::ObjectId, Data> &objectMap,
                       std::vector<typename Adapter::Ptr> const &activeObjectAdapterList);

  /*!
   *  @brief update the RssCheck objects in respect to the routes of the RssEgoVehicleAdapter list
   */
  void updateRssCheckers();

  RssRouteCheckResult createSituationForRoute(RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &ego_vehicle,
                                              RssRoute const &rss_route);

  RssObjectResultList createSituations();

  void appendObjectsToResults(RssObjectResultList &objectResultList);

  void updateRssCheckerCallbacks(RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &egoVehicle,
                                 RssRouteCheckMap::iterator routeCheckerMapIter);

  void updateRssCheckerCallbacksLocked(RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &egoVehicle,
                                       RssRouteCheckMap::iterator routeCheckerMapIter);

  bool callCalculateTrajectorySetsCallback(CalculateTrajectorySetsCallbackFunctionType callback,
                                           ::ad::rss::world::ObjectId const &egoVehicleId,
                                           ::ad::rss::map::RssRouteId const &routeId,
                                           ::ad::rss::core::RelativeConstellation const &constellation,
                                           ::ad::rss::world::ObjectId const &objectId,
                                           ::ad::rss::core::RelativeObjectState const &vehicleState,
                                           ::ad::geometry::Polygon &brakePolygon,
                                           ::ad::geometry::Polygon &continueForwardPolygon);

  ::ad::physics::Duration const mDropOutdatedObjectsDuration;
  ::ad::rss::world::TimeIndex mTimeIndex;
  ::ad::map::lane::LaneIdSet mMapAreaLanes;
  ConnectingRoutesCache mConnectingRoutesCache;

  RssRouteCheckerPedestrianDataMap<OBJECT_INSTANCE_TYPE> mPedestrianMap;
  RssRouteCheckerVehicleDataMap<OBJECT_INSTANCE_TYPE> mVehicleMap;
  RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE> mEgoVehicleMap;
  ::ad::physics::Distance mArtificialObjectSamplingDistance;
  ArtificialObjectInjectionCallbackFunctionType mArtificialObjectsInjectionCallback;
  RssRouteCheckerArtificialObjectDataMap<OBJECT_INSTANCE_TYPE> mArtificialObjectMap;

  // one writer mutex for the callbacks of the class should be sufficient
  // vast majority of concurrent access is of shared nature
  mutable std::shared_timed_mutex mCallbackRwLock;

  std::map<world::ObjectType, CalculateTrajectorySetsCallbackFunctionType> mCalculateTrajectorySetsCallbackMap;
};

} // namespace map
} // namespace rss
} // namespace ad

#include "ad/rss/map/detail/RssRouteCheckerDetail.hpp"
