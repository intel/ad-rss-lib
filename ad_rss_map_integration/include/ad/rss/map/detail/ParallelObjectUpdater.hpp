// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/map/match/AdMapMatching.hpp"
#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssObjectConversion.hpp"
#include "ad/rss/map/RssRouteCheckerData.hpp"

namespace ad {
namespace rss {
namespace map {

template <class OBJECT_INSTANCE_TYPE> class ParallelObjectUpdater
{
public:
  ParallelObjectUpdater(std::chrono::system_clock::time_point const &currentTime,
                        ::ad::physics::Distance const vehicleSamplingDistance,
                        ::ad::physics::Distance const pedestrianSamplingDistance,
                        ::ad::physics::Distance const artificialObjectSamplingDistance,
                        ::ad::map::lane::LaneIdSet const &mapAreaLanes)
    : mCurrentTime(currentTime)
    , mVehicleSamplingDistance(vehicleSamplingDistance)
    , mPedestrianSamplingDistance(pedestrianSamplingDistance)
    , mArtificialObjectSamplingDistance(artificialObjectSamplingDistance)
    , mConservativeMaxStoppingDistance(0.)
    , mMaxVehicleLength(0.)
  {
    mMapMatching.setRelevantLanes(mapAreaLanes);
  }

  ParallelObjectUpdater(ParallelObjectUpdater const &other) = delete;
  ParallelObjectUpdater &operator=(ParallelObjectUpdater const &other) = delete;

  void operator()(typename RssRouteCheckerPedestrianDataMap<OBJECT_INSTANCE_TYPE>::value_type &pedestrianToUpdate) const
  {
    if (pedestrianToUpdate.second.mActive)
    {
      auto pedestrianAdapter = pedestrianToUpdate.second.getAdapter();
      if (!bool(pedestrianAdapter))
      {
        throw std::runtime_error("RssRouteChecker::ParallelObjectUpdater>> pedestrian adapter invalid");
      }
      pedestrianToUpdate.second.mRssObjectData
        = getRssObjectData(pedestrianAdapter, mPedestrianSamplingDistance, pedestrianAdapter->getObjectType());
      pedestrianToUpdate.second.mClearObjectHistory = !pedestrianAdapter->isObjectIdUniqueOverTime();
      getLogger()->trace("ParallelObjectUpdater::updatePedestrian[{}] {}",
                         pedestrianAdapter->getObjectId(),
                         pedestrianToUpdate.second.mRssObjectData);
    }
  }

  void operator()(
    typename RssRouteCheckerArtificialObjectDataMap<OBJECT_INSTANCE_TYPE>::value_type &artificialObjectToUpdate) const
  {
    if (artificialObjectToUpdate.second.mActive)
    {
      auto artificialObjectAdapter = artificialObjectToUpdate.second.getAdapter();
      if (!bool(artificialObjectAdapter))
      {
        throw std::runtime_error("RssRouteChecker::ParallelObjectUpdater>> artificialObject adapter invalid");
      }
      artificialObjectToUpdate.second.mRssObjectData = getRssObjectData(
        artificialObjectAdapter, mArtificialObjectSamplingDistance, artificialObjectAdapter->getObjectType());
      artificialObjectToUpdate.second.mClearObjectHistory = !artificialObjectAdapter->isObjectIdUniqueOverTime();

      getLogger()->trace("ParallelObjectUpdater::updateArtificialObject[{}] {}",
                         artificialObjectAdapter->getObjectId(),
                         artificialObjectToUpdate.second.mRssObjectData);
    }
  }

  void operator()(typename RssRouteCheckerVehicleDataMap<OBJECT_INSTANCE_TYPE>::value_type &vehicleToUpdate) const
  {
    if (vehicleToUpdate.second.mActive)
    {
      auto vehicleAdapter = vehicleToUpdate.second.getAdapter();
      if (!bool(vehicleAdapter))
      {
        throw std::runtime_error("RssRouteChecker::ParallelObjectUpdater>> vehicle adapter invalid");
      }
      updateVehicle(vehicleToUpdate.second, vehicleAdapter->getObjectType());
    }
  }

  void operator()(typename RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE>::value_type &egoVehicleToUpdate) const
  {
    if (egoVehicleToUpdate.second.mActive)
    {
      auto egoVehicleAdapter = egoVehicleToUpdate.second.getAdapter();
      if (!bool(egoVehicleAdapter))
      {
        throw std::runtime_error("RssRouteChecker::ParallelObjectUpdater>> ego_vehicle adapter invalid");
      }
      updateVehicle(egoVehicleToUpdate.second, egoVehicleAdapter->getObjectType());
    }
  }

  RssObjectData getRssObjectData(typename RssObjectAdapter<OBJECT_INSTANCE_TYPE>::Ptr object,
                                 physics::Distance const sampling_distance,
                                 ::ad::rss::world::ObjectType const object_type) const
  {
    RssObjectData rssObjectData;
    rssObjectData.id = object->getObjectId();
    rssObjectData.type = object_type;
    rssObjectData.last_update = mCurrentTime;
    rssObjectData.match_object = object->getMatchedObject(mMapMatching, sampling_distance);
    rssObjectData.speed_range = object->getSpeedRange();
    rssObjectData.yaw_rate = object->getYawRate();
    rssObjectData.rss_dynamics = object->getDefaultRssDynamics();
    rssObjectData.steering_angle = object->getSteeringAngle();
    return rssObjectData;
  }

  void updateVehicle(RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE> &vehicle,
                     ::ad::rss::world::ObjectType const object_type) const
  {
    auto const lastCenterPoint = vehicle.mRssObjectData.match_object.enu_position.center_point;
    auto vehicleAdapter = vehicle.getAdapter();
    if (!bool(vehicleAdapter))
    {
      throw std::runtime_error("RssRouteChecker::ParallelObjectUpdater>> vehicle adapter invalid");
    }
    vehicle.mRssObjectData = getRssObjectData(vehicleAdapter, mVehicleSamplingDistance, object_type);
    vehicle.mClearObjectHistory = !vehicleAdapter->isObjectIdUniqueOverTime();
    getLogger()->trace(
      "ParallelObjectUpdater::updateVehicle[{}] {}", vehicleAdapter->getObjectId(), vehicle.mRssObjectData);

    if ((::ad::rss::world::ObjectType::OtherObject == vehicle.mRssObjectData.type) || vehicle.mClearObjectHistory)
    {
      // OtherObject types are not taking routes into consideration, because using unstructured evaluation
      // explictly cleanup requests also clear routes
      vehicle.mRoutes.clear();
      // clear routing targets, too
      vehicle.mRoutingTargets.clear();
    }
    else if (isValid(lastCenterPoint, false) && (!vehicle.mRoutes.empty()))
    {
      auto const traveledDistance
        = ad::map::point::distance(vehicle.mRssObjectData.match_object.enu_position.center_point, lastCenterPoint);

      // check for bigger position jumps of the vehicle
      if (traveledDistance > vehicleAdapter->getPositionJumpTraveledDistance())
      {
        getLogger()->warn("ParallelObjectUpdater::updateVehicle[{}] Jump of {} in vehicle position detected {} -> {}, "
                          "larger than allowed distance {}. Force new route!",
                          vehicle.mRssObjectData.id,
                          traveledDistance,
                          lastCenterPoint,
                          vehicle.mRssObjectData.match_object.enu_position.center_point,
                          vehicleAdapter->getPositionJumpTraveledDistance());
        vehicle.mRoutes.clear();
      }
    }

    updateConservativeMaxStoppingDistance(vehicle);
  }

  ad::physics::Distance getMinRoutePreviewDistance()
  {
    uint32_t currentMaxStoppingDistance = mConservativeMaxStoppingDistance;
    // get rid of small fluctuations
    currentMaxStoppingDistance /= 10u;
    currentMaxStoppingDistance++;
    currentMaxStoppingDistance *= 10;
    ::ad::physics::Distance result(2 * currentMaxStoppingDistance);
    // ensure to be larger than min connected route length
    result = std::max(result, RssWorldModelCreation::cMinConnectedRouteLength);
    // ensure to consider the max vehicle length to prevent from recalculations
    result += ::ad::physics::Distance(mMaxVehicleLength);
    // now the route preview distance should be exactly what is required for
    // world model creation, except for changes due to individualized RssDynamics
    // of the situations
    // -> this has an actual positive effect on runtime
    return result;
  }

private:
  // mConservativeMaxStoppingDistance is mutable and we ensure safe multi-threaded update
  void updateConservativeMaxStoppingDistance(RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE> &vehicle) const
  {
    ::ad::physics::Distance conservativeMinStoppingDistance;
    if (RssObjectConversion::calculateConservativeMinStoppingDistance(vehicle.mRssObjectData.id,
                                                                      vehicle.mRssObjectData.speed_range.maximum,
                                                                      vehicle.mRssObjectData.rss_dynamics,
                                                                      conservativeMinStoppingDistance))
    {
      // lock-free update of mConservativeMaxStoppingDistance
      auto const conservativeMinStoppingDistance_uint
        = static_cast<uint32_t>(conservativeMinStoppingDistance.mDistance);
      uint32_t currentMaxStoppingDistance = mConservativeMaxStoppingDistance;
      while (conservativeMinStoppingDistance_uint > currentMaxStoppingDistance)
      {
        mConservativeMaxStoppingDistance.compare_exchange_weak(currentMaxStoppingDistance,
                                                               conservativeMinStoppingDistance_uint);
      }
    }
    // lock-free update of mConservativeMaxStoppingDistance
    auto const vehicleLength_uint = static_cast<uint32_t>(vehicle.getAdapter()->getDimensions().length.mDistance);
    uint32_t currentMaxVehicleLength = mMaxVehicleLength;
    while (vehicleLength_uint > currentMaxVehicleLength)
    {
      mMaxVehicleLength.compare_exchange_weak(currentMaxVehicleLength, vehicleLength_uint);
    }
  }

  std::chrono::system_clock::time_point const mCurrentTime;
  ::ad::map::match::AdMapMatching mMapMatching;
  ::ad::physics::Distance const mVehicleSamplingDistance;
  ::ad::physics::Distance const mPedestrianSamplingDistance;
  ::ad::physics::Distance const mArtificialObjectSamplingDistance;
  mutable std::atomic_uint32_t mConservativeMaxStoppingDistance;
  mutable std::atomic_uint32_t mMaxVehicleLength;
};

} // namespace map
} // namespace rss
} // namespace ad
