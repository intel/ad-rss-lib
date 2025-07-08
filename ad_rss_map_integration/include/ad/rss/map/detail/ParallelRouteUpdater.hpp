// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/map/Logging.hpp"
#include "ad/rss/map/RssRouteCheckerData.hpp"

namespace ad {
namespace rss {
namespace map {

template <class OBJECT_INSTANCE_TYPE> class ParallelRouteUpdater
{
public:
  ParallelRouteUpdater(::ad::physics::Distance const routePreviewDistance,
                       ::ad::map::lane::LaneIdSet const &mapAreaLanes,
                       typename RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::RouteExtensionMode routeExtensionMode)
    : mRoutePreviewDistance(routePreviewDistance)
    , mMapAreaLanes(mapAreaLanes)
    , mRouteExtensionMode(routeExtensionMode)
  {
  }

  ParallelRouteUpdater(const ParallelRouteUpdater &other) = delete;
  ParallelRouteUpdater &operator=(const ParallelRouteUpdater &other) = delete;

  void operator()(typename RssRouteCheckerVehicleDataMap<OBJECT_INSTANCE_TYPE>::value_type &vehicleToUpdate) const
  {
    if (vehicleToUpdate.second.mActive
        && (::ad::rss::world::ObjectType::OtherObject != vehicleToUpdate.second.mRssObjectData.type)
        && (mRouteExtensionMode
            != RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::RouteExtensionMode::eAllowOnlySingleRoute))
    {
      // update other vehicle routes only if not allow only single route mode; otherwhise other vehicles don't need
      // route processing
      vehicleToUpdate.second.updateRoutes(mRoutePreviewDistance, mMapAreaLanes, mRouteExtensionMode);
      vehicleToUpdate.second.normalizeAndOrderRoutes();
    }
  }

  void operator()(typename RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE>::value_type &egoVehicleToUpdate) const
  {
    if (egoVehicleToUpdate.second.mActive)
    {
      egoVehicleToUpdate.second.updateRoutes(mRoutePreviewDistance, mMapAreaLanes, mRouteExtensionMode);
      egoVehicleToUpdate.second.updateVehicleDynamicsOnRoutes();
      egoVehicleToUpdate.second.evaluateRoutes();
      egoVehicleToUpdate.second.normalizeAndOrderRoutes();
    }
  }

private:
  ::ad::physics::Distance const mRoutePreviewDistance;
  ::ad::map::lane::LaneIdSet const &mMapAreaLanes;
  typename RssRouteCheckerVehicleData<OBJECT_INSTANCE_TYPE>::RouteExtensionMode mRouteExtensionMode;
};

} // namespace map
} // namespace rss
} // namespace ad
