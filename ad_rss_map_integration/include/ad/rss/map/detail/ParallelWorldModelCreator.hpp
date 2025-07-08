// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssRouteCheckerData.hpp"
#include "ad/rss/map/RssWorldModelCreator.hpp"

namespace ad {
namespace rss {
namespace map {

template <class OBJECT_INSTANCE_TYPE> class ParallelWorldModelCreator
{
public:
  ParallelWorldModelCreator(::ad::rss::world::TimeIndex const time_index,
                            RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &egoVehicleData,
                            RssRoute const &rss_route,
                            ConnectingRoutesCache &connecting_routes_cache,
                            ::ad::map::lane::LaneIdSet const &mapAreaLanes)
    : mEgoVehicleData(egoVehicleData)
    , mRssRoute(rss_route)
    , mWorldModelCreation(time_index, mEgoVehicleData.mRssObjectData.rss_dynamics, connecting_routes_cache)
    , mMapAreaLanes(mapAreaLanes)
  {
    mWorldModelCreation.setRouteId(mRssRoute.route_id);
    auto egoVehicleAdapter = mEgoVehicleData.getAdapter();
    if (!bool(egoVehicleAdapter))
    {
      throw std::runtime_error("RssRouteChecker::ParallelWorldModelCreator>> ego_vehicle adapter invalid");
    }
    mWorldModelCreation.setMinimumDistanceToObjectsThatHaveToBeAnalyzed(
      egoVehicleAdapter->getMinimumDistanceToObjectsThatHaveToBeAnalyzed());

    mGreenTrafficLightsOnRoute = egoVehicleAdapter->getGreenTrafficLightsOnRoute(mRssRoute.route);
    auto const roadBoundariesMode = egoVehicleAdapter->getRoadBoundariesMode(mRssRoute.route);
    ::ad::rss::map::RssObjectData egoObjectData = mEgoVehicleData.mRssObjectData;
    // don't expect acceleration towards boundaries ('soft border')
    // and ignore ego fluctuation margin to get smoother behavior
    egoObjectData.rss_dynamics.alpha_lat.accel_max = ::ad::physics::Acceleration(0.);
    egoObjectData.rss_dynamics.lateral_fluctuation_margin = ::ad::physics::Distance(0.);
    mWorldModelCreation.appendRoadBoundaries(egoObjectData, mRssRoute.route, roadBoundariesMode);
  }

  ParallelWorldModelCreator(ParallelWorldModelCreator const &other) = delete;
  ParallelWorldModelCreator &operator=(ParallelWorldModelCreator const &other) = delete;

  void
  operator()(typename RssRouteCheckerPedestrianDataMap<OBJECT_INSTANCE_TYPE>::value_type &pedestrianToProcess) const
  {
    if (pedestrianToProcess.second.mActive)
    {
      auto egoVehicleAdapter = mEgoVehicleData.getAdapter();
      if (!bool(egoVehicleAdapter))
      {
        throw std::runtime_error("RssRouteChecker::ParallelWorldModelCreator>> ego_vehicle adapter invalid");
      }
      auto pedestrianAdapter = pedestrianToProcess.second.getAdapter();
      if (!bool(pedestrianAdapter))
      {
        throw std::runtime_error("RssRouteChecker::ParallelWorldModelCreator>> pedestrian adapter invalid");
      }
      ::ad::rss::map::RssObjectData egoObjectData = mEgoVehicleData.mRssObjectData;
      ::ad::rss::map::RssObjectData pedestrianData = pedestrianToProcess.second.mRssObjectData;
      auto rssConstellationResult = egoVehicleAdapter->getPedestrianConstellationOnRoute(
        mRssRoute, egoObjectData, pedestrianAdapter, pedestrianData);
      egoObjectData.rss_dynamics = rssConstellationResult.ego_vehicle_dynamics;
      pedestrianData.rss_dynamics = rssConstellationResult.object_dynamics;

      mWorldModelCreation.appendConstellations(egoObjectData,
                                               mRssRoute.route,
                                               pedestrianData,
                                               rssConstellationResult.restrict_speed_limit_mode,
                                               mGreenTrafficLightsOnRoute,
                                               rssConstellationResult.constellation_creation_mode,
                                               mMapAreaLanes);
    }
  }

  void operator()(
    typename RssRouteCheckerArtificialObjectDataMap<OBJECT_INSTANCE_TYPE>::value_type &artificialObjectToProcess) const
  {
    if (artificialObjectToProcess.second.mActive)
    {
      auto egoVehicleAdapter = mEgoVehicleData.getAdapter();
      if (!bool(egoVehicleAdapter))
      {
        throw std::runtime_error("RssRouteChecker::ParallelWorldModelCreator>> ego_vehicle adapter invalid");
      }
      auto artificialObjectAdapter = artificialObjectToProcess.second.getAdapter();
      if (!bool(artificialObjectAdapter))
      {
        throw std::runtime_error("RssRouteChecker::ParallelWorldModelCreator>> artificialObject adapter invalid");
      }
      ::ad::rss::map::RssObjectData egoObjectData = mEgoVehicleData.mRssObjectData;
      ::ad::rss::map::RssObjectData artificialObjectData = artificialObjectToProcess.second.mRssObjectData;
      auto rssConstellationResult = egoVehicleAdapter->getArtificialObjectConstellationOnRoute(
        mRssRoute, egoObjectData, artificialObjectAdapter, artificialObjectData);
      egoObjectData.rss_dynamics = rssConstellationResult.ego_vehicle_dynamics;
      artificialObjectData.rss_dynamics = rssConstellationResult.object_dynamics;

      mWorldModelCreation.appendConstellations(egoObjectData,
                                               mRssRoute.route,
                                               artificialObjectData,
                                               rssConstellationResult.restrict_speed_limit_mode,
                                               mGreenTrafficLightsOnRoute,
                                               rssConstellationResult.constellation_creation_mode,
                                               mMapAreaLanes);
    }
  }

  void operator()(typename RssRouteCheckerVehicleDataMap<OBJECT_INSTANCE_TYPE>::value_type &vehicleToProcess) const
  {
    if (vehicleToProcess.second.mActive)
    {
      process(vehicleToProcess.second);
    }
  }

  void operator()(typename RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE>::value_type &vehicleToProcess) const
  {
    if ((vehicleToProcess.second.mActive)
        && (vehicleToProcess.second.mRssObjectData.id != mEgoVehicleData.mRssObjectData.id))
    {
      process(vehicleToProcess.second);
    }
  }

  void process(RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE> const &vehicleToProcess) const
  {
    auto egoVehicleAdapter = mEgoVehicleData.getAdapter();
    if (!bool(egoVehicleAdapter))
    {
      throw std::runtime_error("RssRouteChecker::ParallelWorldModelCreator>> ego_vehicle adapter invalid");
    }
    auto vehicleAdapter = vehicleToProcess.getAdapter();
    if (!bool(vehicleAdapter))
    {
      throw std::runtime_error("RssRouteChecker::ParallelWorldModelCreator>> vehicle adapter invalid");
    }
    ::ad::rss::map::RssObjectData egoObjectData = mEgoVehicleData.mRssObjectData;
    ::ad::rss::map::RssObjectData vehicleData = vehicleToProcess.mRssObjectData;
    if (vehicleData.type == ::ad::rss::world::ObjectType::EgoVehicle)
    {
      vehicleData.type = ::ad::rss::world::ObjectType::OtherVehicle;
    }
    auto rssConstellationResult
      = egoVehicleAdapter->getVehicleConstellationOnRoute(mRssRoute, egoObjectData, vehicleAdapter, vehicleData);
    egoObjectData.rss_dynamics = rssConstellationResult.ego_vehicle_dynamics;
    vehicleData.rss_dynamics = rssConstellationResult.object_dynamics;

    if ((mEgoVehicleData.mRouteExtensionMode
         == RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::RouteExtensionMode::eAllowMultipleRoutes)
        && (vehicleToProcess.mRouteExtensionMode
            == RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::RouteExtensionMode::eAllowMultipleRoutes))
    {
      // only can deploy the routes if all routes have been considered
      mWorldModelCreation.appendConstellations(egoObjectData,
                                               mRssRoute.route,
                                               vehicleData,
                                               rssConstellationResult.restrict_speed_limit_mode,
                                               mGreenTrafficLightsOnRoute,
                                               rssConstellationResult.constellation_creation_mode,
                                               mEgoVehicleData.mRoutes,
                                               vehicleToProcess.mRoutes,
                                               mMapAreaLanes);
    }
    else
    {
      mWorldModelCreation.appendConstellations(egoObjectData,
                                               mRssRoute.route,
                                               vehicleData,
                                               rssConstellationResult.restrict_speed_limit_mode,
                                               mGreenTrafficLightsOnRoute,
                                               rssConstellationResult.constellation_creation_mode,
                                               mMapAreaLanes);
    }
  }

  ::ad::rss::world::WorldModel getWorldModel()
  {
    return mWorldModelCreation.getWorldModel();
  }

private:
  RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &mEgoVehicleData;
  RssRoute const &mRssRoute;
  // the constellation creation calls are thread-safe, therefore mark mutable here is ok.
  mutable RssWorldModelCreation mWorldModelCreation;
  ::ad::map::landmark::LandmarkIdSet mGreenTrafficLightsOnRoute;
  ::ad::map::lane::LaneIdSet const &mMapAreaLanes;
};

} // namespace map
} // namespace rss
} // namespace ad
