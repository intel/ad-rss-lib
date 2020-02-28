// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include <ad/map/match/Types.hpp>
#include <ad/map/route/Types.hpp>
#include <ad/rss/world/WorldModel.hpp>
#include <mutex>

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
/*!
 * @brief class providing supporting functions to create a world model and its scenes.
 *
 * The appendScenes() and appendRoadBoundaries() are multi-thread safe
 */
class RssSceneCreation
{
public:
  /**
   * @brief create a scene creation object
   *
   * A world model object is created and initialized with given timeIndex and default ego dynamics
   *
   * @param[in] timeIndex the time index to be applied
   * @param[in] defaultEgoRssDynamics the default ego vehicles' RssDynamics to be applied
   */
  RssSceneCreation(::ad::rss::world::TimeIndex const &timeIndex,
                   ::ad::rss::world::RssDynamics const &defaultEgoRssDynamics);

  /**
   * @brief enumeration defining the modes of speed limit consideration within RSS accelerated movement.
   *
   * Depending on this mode the objectRssDynamics are calculated dynamically or not.
   */
  enum class RestrictSpeedLimitMode
  {
    /**
     * Do not change the objects maxSpeed parameter of objectRssDynamics.
     */
    None,
    /**
     * Set the objects maxSpeed parameter of objectRssDynamics to the maximal allowed speed of the relevant road section
     */
    ExactSpeedLimit,

    /**
     * Set the objects maxSpeed parameter of objectRssDynamics to the maximal allowed speed of the relevant road section
     * +
     * 5 percent
     */
    IncreasedSpeedLimit5,

    /**
     * Set the objects maxSpeed parameter of objectRssDynamics to the maximal allowed speed of the relevant road section
     * +
     * 10 percent
     */
    IncreasedSpeedLimit10,
  };

  /**
   * @brief create possible scenes between ego vehicle and the object
   *
   * Based on the map information a connecting route between ego vehicle and the object is created.
   *
   * @param[in] egoId the ego vehicle id
   * @param[in] egoMatchObject the ego vehicle's position described by its map matched bounding box and position
   * @param[in] egoSpeed the ego vehicle's speed
   * @param[in] egoRssDynamics the ego vehicles' RssDynamics to be applied
   * @param[in] egoRoute the route the ego vehicle intends to take.
   *   If the given route is empty, all potential route predictions of the ego vehicle are taken into account if
   * required.
   * @param[in] objectId the object id
   * @param[in] objectType the object type
   * @param[in] objectMatchObject the object's position described by its map matched bounding box and position
   * @param[in] objectSpeed the object's speed
   * @param[in] objectRssDynamics the object's RssDynamics to be applied
   * @param[in] restrictSpeedLimitMode the mode to select the behavior of objectRssDynamics.maxSpeed and
   * egoRssDynamics.maxSpeed
   * parameter
   * @param[in] greenTrafficLights the list of known green traffic lights.
   *   Required to derive the correct priority rule for the ego vehicle when approaching a traffic light intersection.
   *
   * @returns \c true if the operation succeeded.
   */
  bool appendScenes(::ad::rss::world::ObjectId const &egoId,
                    ::ad::map::match::Object const &egoMatchObject,
                    ::ad::physics::Speed const &egoSpeed,
                    ::ad::rss::world::RssDynamics const &egoRssDynamics,
                    ::ad::map::route::FullRoute const &egoRoute,
                    ::ad::rss::world::ObjectId const &objectId,
                    ::ad::rss::world::ObjectType const &objectType,
                    ::ad::map::match::Object const &objectMatchObject,
                    ::ad::physics::Speed const &objectSpeed,
                    ::ad::rss::world::RssDynamics const &objectRssDynamics,
                    RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                    ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights);

  /**
   * @brief enumeration defining the operation modes of appendRoadBoundaries() function.
   */
  enum class AppendRoadBoundariesMode
  {
    /** The borders are created at the left border of the leftmost and
     *  the right border righmost lane of the provided route.
     */
    RouteOnly,
    /** the incoming route is expanded with all parallel
     * lanes of the opposite direction to ensure the whole driveable road is within the boundaries
     */
    ExpandRouteToOppositeLanes,
    /** the incoming route is expanded with all parallel neighbor
     * lanes including the opposite direction and shoulder lanes to ensure the whole road is within the boundaries
     */
    ExpandRouteToAllNeighbors,
  };

  /**
   * @brief create scenes between ego vehicle and road boundaries
   *
   * Based on the map information static object scenes at the borders of the driveable lanes are created.
   * For detailed operation modes see the operation modes at \a AppendRoadBoundariesMode.
   *
   * @param[in] egoId the ego vehicle id
   * @param[in] egoMatchObject the ego vehicle's position described by its map matched bounding box and position
   * @param[in] egoSpeed the ego vehicle's speed
   * @param[in] egoRssDynamics the ego vehicles' RssDynamics to be applied
   * @param[in] egoRoute the route the ego vehicle intends to take.
   *
   * @returns \c true if the operation succeeded.
   */
  bool appendRoadBoundaries(::ad::rss::world::ObjectId const &egoId,
                            ::ad::map::match::Object const &egoMatchObject,
                            ::ad::physics::Speed const &egoSpeed,
                            ::ad::rss::world::RssDynamics const &egoRssDynamics,
                            ::ad::map::route::FullRoute const &route,
                            AppendRoadBoundariesMode const operationMode);

  /**
   * @brief get the final world model object
   *
   * After the call of this function the world model is treated as finalized.
   * No further operation will succeed.
   * Successive calls to this will return an empty default initialized world model.
   */
  ::ad::rss::world::WorldModel getWorldModel();

private:
  friend class RssSceneCreator;

  bool appendSceneToWorldModel(::ad::rss::world::Scene const &scene);

  ::ad::rss::world::WorldModel mWorldModel;
  bool mFinalized;
  std::mutex mWorldModelLock;
};

} // namespace map
} // namespace rss
} // namespace ad
