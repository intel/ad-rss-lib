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
#include <ad/rss/world/SceneVector.hpp>

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
 * @brief namespace providing supporting functions to create a scene
 */
namespace RssSceneCreation {

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
   * Set the objects maxSpeed parameter of objectRssDynamics to the maximal allowed speed of the relevant road section +
   * 5 percent
   */
  IncreasedSpeedLimit5,

  /**
   * Set the objects maxSpeed parameter of objectRssDynamics to the maximal allowed speed of the relevant road section +
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
 * @param[in] egoPosition the ego vehicle's position described by its map matched bounding box
 * @param[in] egoSpeed the ego vehicle's speed
 * @param[in] egoRoute the route the ego vehicle intends to take.
 *   If the given route is empty, all potential route predictions of the ego vehicle are taken into account if required.
 * @param[in] objectId the object id
 * @param[in] objectType the object type
 * @param[in] objectPosition the object's position described by its map matched bounding box
 * @param[in] objectSpeed the object's speed
 * @param[in] objectRssDynamics the object's RssDynamics to be applied
 * @param[in] restrictSpeedLimitMode the mode to select the behavior of objectRssDynamics.maxSpeed and egoMaxSpeed
 * parameter
 * @param[in] greenTrafficLights the list of known green traffic lights.
 *   Required to derive the correct priority rule for the ego vehicle when approaching a traffic light intersection.
 * @param[in/out] scenes the list of scenes where the newly created scenes are appended
 * @param[in/out] egoMaxSpeed the maximum speed to be considered for the ego vehicle.
 *   This value might be increased if the restrictSpeedLimitMode != RestrictSpeedLimitMode::None and the speed limit
 * calculation for
 *   at least one of the relevant road sections exceed the input value of egoMaxSpeed.
 */
bool appendScenes(::ad::rss::world::ObjectId const &egoId,
                  ::ad::map::match::MapMatchedObjectBoundingBox const &egoPosition,
                  ::ad::physics::Speed const &egoSpeed,
                  ::ad::map::route::FullRoute const &egoRoute,
                  ::ad::rss::world::ObjectId const &objectId,
                  ::ad::rss::world::ObjectType const &objectType,
                  ::ad::map::match::MapMatchedObjectBoundingBox const &objectPosition,
                  ::ad::physics::Speed const &objectSpeed,
                  ::ad::rss::world::RssDynamics const &objectRssDynamics,
                  RestrictSpeedLimitMode const &restrictSpeedLimitMode,
                  ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                  ::ad::rss::world::SceneVector &scenes,
                  ::ad::physics::Speed &egoMaxSpeed);

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
 * Based on the map information static object scenes at the borders of the drivable lanes are created.
 * For detailed operation modes see the operation modes at \a AppendRoadBoundariesMode.
 *
 * @returns \c false if the route is empty
 */
bool appendRoadBoundaries(::ad::rss::world::ObjectId const &egoId,
                          ::ad::map::match::MapMatchedObjectBoundingBox const &egoPosition,
                          ::ad::physics::Speed const &egoSpeed,
                          ::ad::map::route::FullRoute const &route,
                          AppendRoadBoundariesMode const operationMode,
                          ::ad::rss::world::SceneVector &scenes);

} // namespace RssSceneCreation
} // namespace map
} // namespace rss
} // namespace ad
