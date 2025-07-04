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

template <class OBJECT_INSTANCE_TYPE> class ParallelChecker
{
public:
  ParallelChecker(RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE> const &egoVehicleMap)
    : mEgoVehicleMap(egoVehicleMap)
  {
  }

  ParallelChecker(ParallelChecker const &other) = delete;
  ParallelChecker &operator=(ParallelChecker const &other) = delete;

  void analyseResultOfRoute(RssRouteCheckerEgoVehicleData<OBJECT_INSTANCE_TYPE> const &ego_vehicle,
                            RssRouteCheckResult &situationCheckResult) const
  {
    if (situationCheckResult.is_valid)
    {
      situationCheckResult.result_analysis.dangerous_state = false;
      situationCheckResult.result_analysis.dangerous_vehicle = false;
      situationCheckResult.result_analysis.dangerous_opposite_state = false;
      situationCheckResult.result_analysis.vehicle_crossing_road_boundaries = false;
      bool leftBorderIsDangerous = false;
      bool rightBorderIsDangerous = false;
      bool vehicleTriggeredLeftResponse = false;
      bool vehicleTriggeredRightResponse = false;
      bool vehicleTriggeredLongitudinalResponse = false;
      for (auto const &state : situationCheckResult.rss_state_snapshot.individual_responses)
      {
        if (::ad::rss::state::isDangerous(state))
        {
          situationCheckResult.result_analysis.dangerous_state = true;
          auto dangerousSitationIter
            = std::find_if(situationCheckResult.rss_situation_snapshot.constellations.begin(),
                           situationCheckResult.rss_situation_snapshot.constellations.end(),
                           [&state](::ad::rss::core::RelativeConstellation const &constellation) {
                             return constellation.constellation_id == state.constellation_id;
                           });
          if (dangerousSitationIter != situationCheckResult.rss_situation_snapshot.constellations.end())
          {
            if (dangerousSitationIter->object_id == ::ad::rss::structured::getRightBorderObjectId())
            {
              rightBorderIsDangerous = true;
              if (state.lateral_state_right.rss_state_information.current_distance == ::ad::physics::Distance(0.))
              {
                getLogger()->debug("RssRouteChecker::analyseResultOfRoute[{}:{}] right border is crossed",
                                   ego_vehicle.mRssObjectData.id,
                                   situationCheckResult.rss_route.route_id);
                situationCheckResult.result_analysis.vehicle_crossing_road_boundaries = true;
              }
            }
            else if (dangerousSitationIter->object_id == ::ad::rss::structured::getLeftBorderObjectId())
            {
              leftBorderIsDangerous = true;
              if (state.lateral_state_left.rss_state_information.current_distance == ::ad::physics::Distance(0.))
              {
                getLogger()->debug("RssRouteChecker::analyseResultOfRoute[{}:{}] left border is crossed",
                                   ego_vehicle.mRssObjectData.id,
                                   situationCheckResult.rss_route.route_id);
                situationCheckResult.result_analysis.vehicle_crossing_road_boundaries = true;
              }
            }
            else
            {
              situationCheckResult.result_analysis.dangerous_vehicle = true;
              if (state.longitudinal_state.response != ::ad::rss::state::LongitudinalResponse::None)
              {
                vehicleTriggeredLongitudinalResponse = true;
              }
              if (state.lateral_state_left.response != ::ad::rss::state::LateralResponse::None)
              {
                vehicleTriggeredLeftResponse = true;
              }
              if (state.lateral_state_right.response != ::ad::rss::state::LateralResponse::None)
              {
                vehicleTriggeredRightResponse = true;
              }
            }
            if (dangerousSitationIter->constellation_type == ::ad::rss::world::ConstellationType::OppositeDirection)
            {
              situationCheckResult.result_analysis.dangerous_opposite_state = true;
            }
          }
        }
      }

      // border are restricting potentially too much, fix this
      if (!vehicleTriggeredLongitudinalResponse
          && (situationCheckResult.proper_response.longitudinal_response
              != ::ad::rss::state::LongitudinalResponse::None))
      {
        getLogger()->debug(
          "RssRouteChecker::analyseResultOfRoute[{}:{}] longitudinal_response only triggered by borders: ignore",
          ego_vehicle.mRssObjectData.id,
          situationCheckResult.rss_route.route_id);
        situationCheckResult.proper_response.longitudinal_response = ::ad::rss::state::LongitudinalResponse::None;
        situationCheckResult.proper_response.acceleration_restrictions.longitudinal_range.maximum
          = ego_vehicle.mRssObjectData.rss_dynamics.alpha_lon.accel_max;
      }
      if (!vehicleTriggeredLeftResponse && !leftBorderIsDangerous
          && (situationCheckResult.proper_response.lateral_response_left != ::ad::rss::state::LateralResponse::None))
      {
        getLogger()->debug(
          "RssRouteChecker::analyseResultOfRoute[{}:{}] lateral_response_left only triggered by right border: ignore",
          ego_vehicle.mRssObjectData.id,
          situationCheckResult.rss_route.route_id);
        situationCheckResult.proper_response.lateral_response_left = ::ad::rss::state::LateralResponse::None;
        situationCheckResult.proper_response.acceleration_restrictions.lateral_left_range.maximum
          = ego_vehicle.mRssObjectData.rss_dynamics.alpha_lat.accel_max;
        situationCheckResult.result_analysis.vehicle_crossing_road_boundaries = true;
      }
      if (!vehicleTriggeredRightResponse && !rightBorderIsDangerous
          && (situationCheckResult.proper_response.lateral_response_right != ::ad::rss::state::LateralResponse::None))
      {
        getLogger()->debug(
          "RssRouteChecker::analyseResultOfRoute[{}:{}] lateral_response_right only triggered by left border: ignore",
          ego_vehicle.mRssObjectData.id,
          situationCheckResult.rss_route.route_id);
        situationCheckResult.proper_response.lateral_response_right = ::ad::rss::state::LateralResponse::None;
        situationCheckResult.proper_response.acceleration_restrictions.lateral_right_range.maximum
          = ego_vehicle.mRssObjectData.rss_dynamics.alpha_lat.accel_max;
        situationCheckResult.result_analysis.vehicle_crossing_road_boundaries = true;
      }

      if (!situationCheckResult.proper_response.is_safe)
      {
        getLogger()->debug("RssRouteChecker::analyseResultOfRoute[{}:{}] Unsafe route: {}\n {}",
                           ego_vehicle.mRssObjectData.id,
                           situationCheckResult.rss_route.route_id,
                           situationCheckResult.proper_response,
                           situationCheckResult);
      }
      else
      {
        getLogger()->trace("RssRouteChecker::analyseResults[{}:{}] RouteResponse: {}\n {}",
                           ego_vehicle.mRssObjectData.id,
                           situationCheckResult.rss_route.route_id,
                           situationCheckResult.proper_response,
                           situationCheckResult);
      }
    }
  }

  void operator()(RssObjectResult &objectResult) const
  {
    auto egoVehicleFindResult = mEgoVehicleMap.find(objectResult.object_data.id);
    if (egoVehicleFindResult == mEgoVehicleMap.end())
    {
      getLogger()->error("RssRouteChecker::ParallelChecker[{}] unexpectedly did not find checker for object",
                         objectResult.object_data.id);
      return;
    }
    auto &egoVehicleData = egoVehicleFindResult->second;

    for (auto &situationCheckResult : objectResult.situation_check_results)
    {
      auto rssCheckFindResult = egoVehicleData.mRssRouteCheckMap.find(situationCheckResult.rss_route.route_id);
      if (rssCheckFindResult == egoVehicleData.mRssRouteCheckMap.end())
      {
        getLogger()->error("RssRouteChecker::ParallelChecker[{}:{}] unexpectedly did not find checker for route",
                           objectResult.object_data.id,
                           situationCheckResult.rss_route.route_id);
        continue;
      }
      auto &rssCheck = rssCheckFindResult->second;

      situationCheckResult.is_valid = rssCheck->mSituationExtraction.extractSituation(
        situationCheckResult.world_model, situationCheckResult.rss_situation_snapshot);
      if (!situationCheckResult.is_valid)
      {
        getLogger()->warn("RssRouteChecker::ParallelChecker[{}:{}] extractSituation failed {}!",
                          objectResult.object_data.id,
                          situationCheckResult.rss_route.route_id,
                          situationCheckResult.world_model);
      }

      if (situationCheckResult.is_valid)
      {
        situationCheckResult.is_valid = rssCheck->mSituationChecking.checkSituation(
          situationCheckResult.rss_situation_snapshot, situationCheckResult.rss_state_snapshot);
        if (!situationCheckResult.is_valid)
        {
          getLogger()->warn("RssRouteChecker::ParallelChecker[{}:{}] checkSituation failed {}!",
                            objectResult.object_data.id,
                            situationCheckResult.rss_route.route_id,
                            situationCheckResult.rss_situation_snapshot);
        }
      }

      if (situationCheckResult.is_valid)
      {
        situationCheckResult.is_valid = rssCheck->mResponseResolving.provideProperResponse(
          situationCheckResult.rss_state_snapshot, situationCheckResult.proper_response);
        if (!situationCheckResult.is_valid)
        {
          getLogger()->warn("RssRouteChecker::ParallelChecker[{}:{}] provideProperResponse failed {}!",
                            objectResult.object_data.id,
                            situationCheckResult.rss_route.route_id,
                            situationCheckResult.rss_state_snapshot);
        }
      }

      analyseResultOfRoute(egoVehicleData, situationCheckResult);
    }
  }

private:
  RssRouteCheckerEgoVehicleDataMap<OBJECT_INSTANCE_TYPE> const &mEgoVehicleMap;
};

} // namespace map
} // namespace rss
} // namespace ad
