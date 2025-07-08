// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/landmark/Types.hpp>
#include <ad/map/lane/Types.hpp>
#include <ad/map/route/Types.hpp>
#include <ad/rss/map/RssAppendRoadBoundariesMode.hpp>
#include <ad/rss/map/RssConstellationCreationMode.hpp>
#include <ad/rss/map/RssObjectData.hpp>
#include <ad/rss/map/RssRestrictSpeedLimitMode.hpp>
#include <ad/rss/map/RssRouteList.hpp>
#include <ad/rss/world/WorldModel.hpp>
#include <mutex>
#include <ostream>
#include <string>

#include "ad/rss/map/ConnectingRoutesCache.hpp"

/*!
 * @brief namespace ad
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

class RssWorldModelCreator;
class RssObjectConversion;

/*!
 * @brief class providing supporting functions to create a world model and its constellations.
 *
 * The appendConstellations() and appendRoadBoundaries() are multi-thread safe
 */
class RssWorldModelCreation
{
public:
  /**
   * @brief create a constellation creation object
   *
   * A world model object is created and initialized with given time_index and default ego dynamics
   *
   * @param[in] time_index the time index to be applied
   * @param[in] defaultEgoRssDynamics the default ego vehicles' RssDynamics to be applied
   */
  RssWorldModelCreation(::ad::rss::world::TimeIndex const &time_index,
                        ::ad::rss::world::RssDynamics const &defaultEgoRssDynamics);

  /**
   * @brief create a constellation creation object
   *
   * A world model object is created and initialized with given time_index and default ego dynamics
   *
   * @param[in] time_index the time index to be applied
   * @param[in] defaultEgoRssDynamics the default ego vehicles' RssDynamics to be applied
   * @param[in] connecting_routes_cache a cache for connecting routes to be used
   */
  RssWorldModelCreation(::ad::rss::world::TimeIndex const &time_index,
                        ::ad::rss::world::RssDynamics const &defaultEgoRssDynamics,
                        ConnectingRoutesCache &connecting_routes_cache);

  /**
   *  @brief default destructor
   */
  ~RssWorldModelCreation() = default;

  /**
   * @brief Setter for a route_id provided on debug output
   */
  void setRouteId(::ad::rss::map::RssRouteId const &route_id)
  {
    mRouteId = route_id;
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

  /**
   * @brief create possible constellations between ego vehicle and the object
   *
   * Based on the map information a connecting route between ego vehicle and the object is created.
   *
   * @param[in] egoObjectData the ego vehicle's data
   * @param[in] egoRoute the route the ego vehicle intends to take.
   *   If the given route is empty, all potential route predictions of the ego vehicle are taken into account if
   * required.
   * @param[in] otherObjectData the other object's data
   * @param[in] restrict_speed_limit_mode the mode to select the behavior of
   * object_rss_dynamics.max_speed_on_acceleration and
   * egoRssDynamics.max_speed_on_acceleration
   * parameter
   * @param[in] greenTrafficLights the list of known green traffic lights.
   *   Required to derive the correct priority rule for the ego vehicle when approaching a traffic light intersection.
   * @param[in] mode the mode of this constellation
   *
   * @returns \c true if the operation succeeded.
   */
  bool appendConstellations(RssObjectData const &egoObjectData,
                            ::ad::map::route::FullRoute const &egoRoute,
                            RssObjectData const &otherObjectData,
                            RssRestrictSpeedLimitMode const &restrict_speed_limit_mode,
                            ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                            ::ad::rss::map::RssConstellationCreationMode const &mode,
                            ::ad::map::lane::LaneIdSet const &relevantLanes = ::ad::map::lane::LaneIdSet());

  /**
   * @brief create possible constellations between ego vehicle and the object
   *
   * Based on the map information a connecting route between ego vehicle and the object is created.
   *
   * @param[in] egoObjectData the ego vehicle's data
   * @param[in] egoRoute the route the ego vehicle intends to take.
   *   If the given route is empty, all potential route predictions of the ego vehicle are taken into account if
   * required.
   * @param[in] otherObjectData the other object's data
   * @param[in] restrict_speed_limit_mode the mode to select the behavior of
   * object_rss_dynamics.max_speed_on_acceleration and
   * egoRssDynamics.max_speed_on_acceleration
   * parameter
   * @param[in] greenTrafficLights the list of known green traffic lights.
   *   Required to derive the correct priority rule for the ego vehicle when approaching a traffic light intersection.
   * @param[in] mode the mode of this constellation
   * @param[in] egoObjectPredictionHints route prediction hints for ego object
   * @param[in] otherObjectPredictionHints route prediction hints for other object
   *
   * @returns \c true if the operation succeeded.
   */
  bool appendConstellations(RssObjectData const &egoObjectData,
                            ::ad::map::route::FullRoute const &egoRoute,
                            RssObjectData const &otherObjectData,
                            RssRestrictSpeedLimitMode const &restrict_speed_limit_mode,
                            ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                            ::ad::rss::map::RssConstellationCreationMode const &mode,
                            RssRouteList const &egoObjectPredictionHints,
                            RssRouteList const &otherObjectPredictionHints,
                            ::ad::map::lane::LaneIdSet const &relevantLanes = ::ad::map::lane::LaneIdSet());

  /**
   * @brief create constellations between ego vehicle and road boundaries
   *
   * Based on the map information static object constellations at the borders of the driveable lanes are created.
   * For detailed operation modes see the operation modes at \a RssAppendRoadBoundariesMode.
   *
   * @param[in] egoObjectData the ego vehicle's data
   * @param[in] egoRoute the route the ego vehicle intends to take.
   * @param[in] operationMode the mode how the road boundaries shall be handled
   *
   * @returns \c true if the operation succeeded.
   */
  bool appendRoadBoundaries(RssObjectData const &egoObjectData,
                            ::ad::map::route::FullRoute const &route,
                            RssAppendRoadBoundariesMode const operationMode);

  /**
   * @brief get the final world model object
   *
   * After the call of this function the world model is treated as finalized.
   * No further operation will succeed.
   * Successive calls to this will return an empty default initialized world model.
   */
  ::ad::rss::world::WorldModel getWorldModel();

  /**
   * @brief constant defining the minimum lenght to be used for the search of connected routes
   *
   *  Actually the maximum of this and the conservative stopping distances of the objects (see
   * RssObjectConversion::calculateConservativeMinStoppingDistance()) is used for the calculations.
   */
  static const ::ad::physics::Distance cMinConnectedRouteLength;

private:
  friend class RssWorldModelCreator;

  bool appendStructuredConstellations(::ad::rss::map::RssWorldModelCreator &constellationCreator,
                                      std::shared_ptr<RssObjectConversion const> const &egoObject,
                                      ::ad::map::route::FullRoute const &egoRoute,
                                      std::shared_ptr<RssObjectConversion const> const &otherObject,
                                      RssRouteList const &egoObjectPredictionHints,
                                      RssRouteList const &otherObjectPredictionHints,
                                      ::ad::map::lane::LaneIdSet const &relevantLanes,
                                      ::ad::physics::Distance const &maxConnectingRouteDistance);

  bool appendConstellationToWorldModel(::ad::rss::world::Constellation const &constellation);

  ::ad::rss::world::WorldModel mWorldModel;
  bool mFinalized;
  std::mutex mWorldModelLock;
  ::ad::rss::map::RssRouteId mRouteId{0};
  ad::physics::Distance mMinimumDistanceToObjectsThatHaveToBeAnalyzed{RssWorldModelCreation::cMinConnectedRouteLength};
  ConnectingRoutesCache *mConnectingRoutesCache;
};

} // namespace map
} // namespace rss
} // namespace ad
