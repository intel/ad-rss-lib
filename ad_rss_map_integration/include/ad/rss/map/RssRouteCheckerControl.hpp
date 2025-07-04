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

#include <ad/map/access/Logging.hpp>
#include <ad/rss/core/Logging.hpp>
#include <ad/rss/core/shared_lock_guard.hpp>
#include <ad/rss/map/Logging.hpp>
#include <ad/rss/map/RssAppendRoadBoundariesMode.hpp>
#include <ad/rss/map/RssConstellationConfiguration.hpp>
#include <ad/rss/map/RssObjectAdapter.hpp>
#include <ad/rss/map/RssObjectData.hpp>
#include <ad/rss/map/RssRoute.hpp>
#include <ad/rss/map/RssWorldModelCreation.hpp>
#include <map>

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

/**
 *  @brief class for interacting with the RssRouteChecker in a thread safe manner
 *
 *  Allows to register callbacks and configuration values that get called on calculations of RssRouteChecker
 *  via the RssObjectAdapter classes default implementations.
 */
template <class OBJECT_INSTANCE_TYPE> class RssRouteCheckerControl
{
public:
  /*!
   * \brief Smart pointer on RssObjectAdapter
   */
  typedef std::shared_ptr<RssRouteCheckerControl> Ptr;

  /*!
   * \brief Smart pointer on constant RssObjectAdapter
   */
  typedef std::shared_ptr<RssRouteCheckerControl const> ConstPtr;

  /** @brief default constructor
   */
  RssRouteCheckerControl() = default;

  /** @brief default destructor
   */
  virtual ~RssRouteCheckerControl() = default;

  /** @brief Callback function type to query the default RSS parameters to be used for the given other vehicle instance
   */
  using DefaultRssDynamicsCallbackFunctionType
    = std::function<::ad::rss::world::RssDynamics(OBJECT_INSTANCE_TYPE vehicle)>;

  /** @brief Register a callback function to query the default RSS parameters to be used for the respective
   * vehicle instance of given objectType
   */
  void registerDefaultRssDynamicsCallback(::ad::rss::world::ObjectType const objectType,
                                          DefaultRssDynamicsCallbackFunctionType callback)
  {
    std::lock_guard<std::shared_timed_mutex> const lock(mCallbackRwLock);
    mDefaultRssDynamicsCallbacks[objectType] = callback;
  }

  /** @returns \c true if a callback function to query the default RSS parameters to be used for the respective
   * vehicle instance of given objectType is registered
   */
  bool isDefaultRssDynamicsCallbackRegistered(::ad::rss::world::ObjectType const objectType) const
  {
    core::shared_lock_guard const shared_lock(mCallbackRwLock);
    return mDefaultRssDynamicsCallbacks.find(objectType) != mDefaultRssDynamicsCallbacks.end();
  }

  /** @returns the default RSS parameters to be used for the given vehicle instance of given objectType by calling the
   * registered callback function (called by RssVehicleAdapter)
   *
   *  If no callback function is registered an invalid default constructed ::ad::rss::world::RssDynamics() is returned.
   */
  ::ad::rss::world::RssDynamics getDefaultRssDynamics(::ad::rss::world::ObjectType const objectType,
                                                      OBJECT_INSTANCE_TYPE vehicle) const
  {
    core::shared_lock_guard const shared_lock(mCallbackRwLock);
    auto findResult = mDefaultRssDynamicsCallbacks.find(objectType);
    if (findResult != mDefaultRssDynamicsCallbacks.end())
    {
      return findResult->second(vehicle);
    }
    return ::ad::rss::world::RssDynamics();
  }

  /** @brief Callback function type to query the RssConstellationConfiguration of a concrete vehicle constellation
   * within the RssRouteChecker calculations.
   *
   *  @param[in] route The current route of the ego vehicle under consideration
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] egoVehicle the ego vehicle instance pointer of this constellation
   *  @param[in] vehicleObject the vehicle object data of this constellation
   *  @param[in] vehicle the vehicle instance pointer of this constellation
   *
   * @returns RssConstellationConfiguration to be used for the constellation
   */
  using VehicleConstellationCallbackFunctionType
    = std::function<::ad::rss::map::RssConstellationConfiguration(::ad::rss::map::RssRoute const &route,
                                                                  ::ad::rss::map::RssObjectData const &egoVehicleObject,
                                                                  OBJECT_INSTANCE_TYPE egoVehicle,
                                                                  ::ad::rss::map::RssObjectData const &vehicleObject,
                                                                  OBJECT_INSTANCE_TYPE vehicle)>;

  /** @brief Register a callback function to query the RssConstellationConfiguration of a concrete vehicle constellation
   * within the RssRouteChecker calculations.
   */
  void registerVehicleConstellationCallback(VehicleConstellationCallbackFunctionType callback)
  {
    std::lock_guard<std::shared_timed_mutex> const lock(mCallbackRwLock);
    mVehicleConstellationCallback = callback;
  }

  /** @returns \c true if a callback function to query the RssConstellationConfiguration of a concrete vehicle
   * constellation within the RssRouteChecker calculations is registered
   */
  bool isVehicleConstellationCallbackRegistered() const
  {
    core::shared_lock_guard const shared_lock(mCallbackRwLock);
    return bool(mVehicleConstellationCallback);
  }

  /** @brief Returns the RssConstellationConfiguration of a concrete vehicle constellation within the RssRouteChecker
   * calculations
   *  by calling the registered callback function (called by RssEgoVehicleAdapter)
   *
   *  @param[in] route The current route of the ego vehicle under consideration
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] egoVehicle the ego vehicle instance pointer of this constellation
   *  @param[in] vehicleObject the other vehicle object data of this constellation
   *  @param[in] vehicle the other vehicle instance pointer of this constellation
   *
   * @returns RssConstellationConfiguration to be used for the constellation
   */
  ::ad::rss::map::RssConstellationConfiguration
  getVehicleConstellation(::ad::rss::map::RssRoute const &route,
                          ::ad::rss::map::RssObjectData const &egoVehicleObject,
                          OBJECT_INSTANCE_TYPE egoVehicle,
                          ::ad::rss::map::RssObjectData const &vehicleObject,
                          OBJECT_INSTANCE_TYPE vehicle) const
  {
    core::shared_lock_guard const shared_lock(mCallbackRwLock);
    if (bool(mVehicleConstellationCallback))
    {
      return mVehicleConstellationCallback(route, egoVehicleObject, egoVehicle, vehicleObject, vehicle);
    }
    return ::ad::rss::map::RssConstellationConfiguration();
  }

  /** @brief Callback function type to query the RssConstellationConfiguration of a concrete pedestrian constellation
   * within the RssRouteChecker calculations.
   *
   *  @param[in] route The current route of the ego vehicle under consideration
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] egoVehicle the ego vehicle instance pointer of this constellation
   *  @param[in] pedestrianObject the pedestrian object data of this constellation
   *  @param[in] pedestrian the pedestrian instance pointer of this constellation
   *
   * @returns RssConstellationConfiguration to be used for the constellation
   */
  using PedestrianConstellationCallbackFunctionType
    = std::function<::ad::rss::map::RssConstellationConfiguration(::ad::rss::map::RssRoute const &route,
                                                                  ::ad::rss::map::RssObjectData const &egoVehicleObject,
                                                                  OBJECT_INSTANCE_TYPE egoVehicle,
                                                                  ::ad::rss::map::RssObjectData const &pedestrianObject,
                                                                  OBJECT_INSTANCE_TYPE pedestrian)>;

  /** @brief Register a callback function to query the RssConstellationConfiguration of a concrete pedestrian
   * constellation within the RssRouteChecker calculations.
   */
  void registerPedestrianConstellationCallback(PedestrianConstellationCallbackFunctionType callback)
  {
    std::lock_guard<std::shared_timed_mutex> const lock(mCallbackRwLock);
    mPedestrianConstellationCallback = callback;
  }

  /** @returns \c true if a callback function to query the RssConstellationConfiguration of a concrete pedestrian
   * constellation within the RssRouteChecker calculations is registered
   */
  bool isPedestrianConstellationCallbackRegistered() const
  {
    core::shared_lock_guard const shared_lock(mCallbackRwLock);
    return bool(mPedestrianConstellationCallback);
  }

  /** @brief Returns the RssConstellationConfiguration of a concrete pedestrian constellation within the RssRouteChecker
   * calculations
   *  by calling the registered callback function (called by RssEgoVehicleAdapter)
   *
   *  @param[in] route The current route of the ego vehicle under consideration
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] egoVehicle the ego vehicle instance pointer of this constellation
   *  @param[in] pedestrianObject the pedestrian object data of this constellation
   *  @param[in] pedestrian the pedestrian instance pointer of this constellation
   *
   * @returns RssConstellationConfiguration to be used for the constellation
   */
  ::ad::rss::map::RssConstellationConfiguration
  getPedestrianConstellation(::ad::rss::map::RssRoute const &route,
                             ::ad::rss::map::RssObjectData const &egoVehicleObject,
                             OBJECT_INSTANCE_TYPE egoVehicle,
                             ::ad::rss::map::RssObjectData const &pedestrianObject,
                             OBJECT_INSTANCE_TYPE pedestrian) const
  {
    core::shared_lock_guard const shared_lock(mCallbackRwLock);
    if (bool(mPedestrianConstellationCallback))
    {
      return mPedestrianConstellationCallback(route, egoVehicleObject, egoVehicle, pedestrianObject, pedestrian);
    }
    return ::ad::rss::map::RssConstellationConfiguration();
  }

  /** @brief Callback function type to query the RssConstellationConfiguration of a concrete artificial object
   * constellation within the RssRouteChecker calculations.
   *
   *  @param[in] route The current route of the ego vehicle under consideration
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] egoVehicle the ego vehicle instance pointer of this constellation
   *  @param[in] artificialObject the artificial object data of this constellation
   *
   * @returns RssConstellationConfiguration to be used for the constellation
   */
  using ArtificialObjectConstellationCallbackFunctionType = std::function<::ad::rss::map::RssConstellationConfiguration(
    ::ad::rss::map::RssRoute const &route,
    ::ad::rss::map::RssObjectData const &egoVehicleObject,
    OBJECT_INSTANCE_TYPE egoVehicle,
    ::ad::rss::map::RssObjectData const &artificialObject)>;

  /** @brief Register a callback function to query the RssConstellationConfiguration of a concrete artificial object
   * constellation within the RssRouteChecker calculations.
   */
  void registerArtificialObjectConstellationCallback(ArtificialObjectConstellationCallbackFunctionType callback)
  {
    std::lock_guard<std::shared_timed_mutex> const lock(mCallbackRwLock);
    mArtificialObjectConstellationCallback = callback;
  }

  /** @returns \c true if a callback function to query the RssConstellationConfiguration of a concrete artificial object
   * constellation within the RssRouteChecker calculations is registered
   */
  bool isArtificialObjectConstellationCallbackRegistered() const
  {
    core::shared_lock_guard const shared_lock(mCallbackRwLock);
    return bool(mArtificialObjectConstellationCallback);
  }

  /** @brief Returns the RssConstellationConfiguration of a concrete artificial object constellation within the
   * RssRouteChecker calculations
   *  by calling the registered callback function (called by RssEgoVehicleAdapter)
   *  (can be used by derivatives of RssRouteChecker)
   *
   *  @param[in] route The current route of the ego vehicle under consideration
   *  @param[in] egoVehicleObject the ego vehicle object data of this constellation
   *  @param[in] egoVehicle the ego vehicle instance pointer of this constellation
   *  @param[in] artificialObject the artificial object data of this constellation
   *
   * @returns RssConstellationConfiguration to be used for the constellation
   */
  ::ad::rss::map::RssConstellationConfiguration
  getArtificialObjectConstellation(::ad::rss::map::RssRoute const &route,
                                   ::ad::rss::map::RssObjectData const &egoVehicleObject,
                                   OBJECT_INSTANCE_TYPE egoVehicle,
                                   ::ad::rss::map::RssObjectData const &artificialObject) const
  {
    core::shared_lock_guard const shared_lock(mCallbackRwLock);
    if (bool(mArtificialObjectConstellationCallback))
    {
      return mArtificialObjectConstellationCallback(route, egoVehicleObject, egoVehicle, artificialObject);
    }
    return ::ad::rss::map::RssConstellationConfiguration();
  }

  /** @brief sets the current mode for respecting the road boundaries
   */
  void setRoadBoundariesMode(const ::ad::rss::map::RssAppendRoadBoundariesMode roadBoundariesMode)
  {
    mRssAppendRoadBoundariesMode = roadBoundariesMode;
  }

  /** @returns the current mode for respecting the road boundaries (called by RssEgoVehicleAdapter)
   */
  ::ad::rss::map::RssAppendRoadBoundariesMode getRoadBoundariesMode() const
  {
    return mRssAppendRoadBoundariesMode;
  }

  /** @brief sets the current green traffic lights to be considered
   */
  void setCurrentGreenTrafficLights(::ad::map::landmark::LandmarkIdSet const &currentGreenTrafficLights)
  {
    mCurrentGreenTrafficLights = currentGreenTrafficLights;
  }

  /** @returns the current green traffic lights to be considered (called by RssEgoVehicleAdapter)
   */
  ::ad::map::landmark::LandmarkIdSet getCurrentGreenTrafficLights() const
  {
    return mCurrentGreenTrafficLights;
  }

  /** @brief sets the distance interpreted as a jump of a vehicle triggering new route calucations
   */
  void setPositionJumpTraveledDistance(ad::physics::Distance const positionJumpTraveledDistance)
  {
    mPositionJumpTraveledDistance = positionJumpTraveledDistance;
  }

  /** @brief gets the distance interpreted as a jump of a vehicle triggering new route calucations
   */
  ad::physics::Distance getPositionJumpTraveledDistance() const
  {
    return mPositionJumpTraveledDistance;
  }

  /*! @brief Sets the distance below which a detailed analysis becomes necessary regardless of the objects stopping
   * distance estimates.
   *
   *  Far away object might not be analyzed in detail, if the stopping distances allow it
   */
  void setMinimumDistanceToObjectsThatHaveToBeAnalyzed(
    ad::physics::Distance const minimumDistanceToObjectsThatHaveToBeAnalyzed)
  {
    mMinimumDistanceToObjectsThatHaveToBeAnalyzed = minimumDistanceToObjectsThatHaveToBeAnalyzed;
  }

  /*! @brief Defines the distance below which a detailed analysis becomes necessary regardless of the objects stopping
   * distance estimates.
   *
   *  Far away object might not be analyzed in detail, if the stopping distances allow it
   */
  ad::physics::Distance getMinimumDistanceToObjectsThatHaveToBeAnalyzed() const
  {
    return mMinimumDistanceToObjectsThatHaveToBeAnalyzed;
  }

  void setConsiderPositionConfidence(bool const consider_position_confidence)
  {
    mConsiderPositionConfidence = consider_position_confidence;
  }
  bool getConsiderPositionConfidence()
  {
    return mConsiderPositionConfidence;
  }

  /** @brief sets the current log level
   */
  void setLogLevel(const spdlog::level::level_enum logLevel)
  {
    ::ad::rss::core::getLogger()->set_level(logLevel);
    ::ad::rss::map::getLogger()->set_level(logLevel);
  }

  /** @brief sets the current map log level
   */
  void setMapLogLevel(const spdlog::level::level_enum mapLogLevel)
  {
    ::ad::map::access::getLogger()->set_level(mapLogLevel);
  }

  /** @brief RssRoutingTargetOperation type from RssVehicleAdapter
   */
  using RssRoutingTargetOperation = typename RssVehicleAdapter<OBJECT_INSTANCE_TYPE>::RssRoutingTargetOperation;

  /** @brief RssRoutingTargetCommand type from RssVehicleAdapter
   */
  using RssRoutingTargetCommand = typename RssVehicleAdapter<OBJECT_INSTANCE_TYPE>::RssRoutingTargetCommand;

  /** @brief sets the the current active routing targets (called by RssVehicleAdapter)
   *
   * @param[in] vehicleId object id of the vehicle reporting its active routing targets
   * @param[in] activeRoutingTargets the active routing targets
   */
  void setActiveRoutingTargets(ad::rss::world::ObjectId vehicleId,
                               ::ad::map::point::ENUPointList const &activeRoutingTargets)
  {
    std::lock_guard<std::mutex> const lock(mRoutingLock);
    mActiveRoutingTargets[vehicleId] = activeRoutingTargets;
  }

  /** @returns the the current active routing targets of the respective vehicle
   *
   * @param[in] vehicleId object id of the vehicle reporting its active routing targets
   */
  ::ad::map::point::ENUPointList getActiveRoutingTargets(ad::rss::world::ObjectId vehicleId) const
  {
    std::lock_guard<std::mutex> const lock(mRoutingLock);
    auto findResult = mActiveRoutingTargets.find(vehicleId);
    if (findResult != mActiveRoutingTargets.end())
    {
      return findResult->second;
    }
    return ::ad::map::point::ENUPointList();
  }

  /**  @brief appends a list of routing targets to the current routing target list of the respective vehicle
   *
   * @param[in] vehicleId object id of the vehicle to append the routing targets
   * @param[in] routingTargetsToAppend the routing targets to append
   */
  void appendRoutingTargets(ad::rss::world::ObjectId vehicleId,
                            ::ad::map::point::ENUPointList const &routingTargetsToAppend)
  {
    std::lock_guard<std::mutex> const lock(mRoutingLock);
    RssRoutingTargetOperation operation;
    operation.command = RssRoutingTargetCommand::AppendTargets;
    operation.routingTargets = routingTargetsToAppend;
    auto const insertResult = mRoutingTargetOperations.insert(std::make_pair(vehicleId, operation));
    if (!insertResult.second)
    {
      insertResult.first->second.routingTargets.insert(
        insertResult.first->second.routingTargets.end(), routingTargetsToAppend.begin(), routingTargetsToAppend.end());
    }
  }

  /**  @brief replaces the current routing targets of the respective vehicle
   *
   * @param[in] vehicleId object id of the vehicle to replace the routing targets
   * @param[in] newRoutingTargets the new routing targets to be applied
   */
  void replaceRoutingTargets(ad::rss::world::ObjectId vehicleId,
                             ::ad::map::point::ENUPointList const &newRoutingTargets)
  {
    std::lock_guard<std::mutex> const lock(mRoutingLock);
    RssRoutingTargetOperation operation;
    operation.command = RssRoutingTargetCommand::ReplaceTargets;
    operation.routingTargets = newRoutingTargets;
    auto const insertResult = mRoutingTargetOperations.insert(std::make_pair(vehicleId, operation));
    if (!insertResult.second)
    {
      insertResult.first->second = operation;
    }
  }

  /** @returns the current routing target operation of the respective vehicle (called by RssVehicleAdapter)
   *
   * @param[in] vehicleId object id of the vehicle to apply the routing target operation
   */
  RssRoutingTargetOperation getCurrentRoutingTargetOperation(ad::rss::world::ObjectId vehicleId)
  {
    RssRoutingTargetOperation resultOperation;
    std::lock_guard<std::mutex> const lock(mRoutingLock);
    auto findResult = mRoutingTargetOperations.find(vehicleId);
    if (findResult != mRoutingTargetOperations.end())
    {
      resultOperation = findResult->second;
      mRoutingTargetOperations.erase(vehicleId);
    }
    return resultOperation;
  }

  /**  @brief drop the current route of the respective vehicle
   *
   *  Enforces a new route calculation of the vehicle by replacing the routing targets with the current active ones.
   *
   * @param[in] vehicleId object id of the vehicle to replace the routing targets
   */
  void dropRoute(ad::rss::world::ObjectId vehicleId)
  {
    replaceRoutingTargets(vehicleId, getActiveRoutingTargets(vehicleId));
  }

  /** @brief erase all data of a vehicle from internal lists (called by ~RssVehicleAdapter)
   */
  void dropVehicle(ad::rss::world::ObjectId vehicleId)
  {
    std::lock_guard<std::mutex> const lock(mRoutingLock);
    mRoutingTargetOperations.erase(vehicleId);
    mActiveRoutingTargets.erase(vehicleId);
  }

private:
  // one writer mutex for the callbacks of the class should be sufficient
  // vast majority of concurrent access is of shared nature
  mutable std::shared_timed_mutex mCallbackRwLock;

  //// the registered callback functions
  std::map<::ad::rss::world::ObjectType, DefaultRssDynamicsCallbackFunctionType> mDefaultRssDynamicsCallbacks;

  VehicleConstellationCallbackFunctionType mVehicleConstellationCallback;
  PedestrianConstellationCallbackFunctionType mPedestrianConstellationCallback;
  ArtificialObjectConstellationCallbackFunctionType mArtificialObjectConstellationCallback;

  ::ad::rss::map::RssAppendRoadBoundariesMode mRssAppendRoadBoundariesMode{
    ::ad::rss::map::RssAppendRoadBoundariesMode::Off};
  ::ad::map::landmark::LandmarkIdSet mCurrentGreenTrafficLights;

  mutable std::mutex mRoutingLock;

  std::map<ad::rss::world::ObjectId, ::ad::map::point::ENUPointList> mActiveRoutingTargets;
  std::map<ad::rss::world::ObjectId, RssRoutingTargetOperation> mRoutingTargetOperations;

  ad::physics::Distance mPositionJumpTraveledDistance{20.};
  ad::physics::Distance mMinimumDistanceToObjectsThatHaveToBeAnalyzed{RssWorldModelCreation::cMinConnectedRouteLength};
  bool mConsiderPositionConfidence{true};
};

} // namespace map
} // namespace rss
} // namespace ad
