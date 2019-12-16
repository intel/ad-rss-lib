// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2019 Intel Corporation
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
 * @brief create possible scenes between ego vehicle and the object
 *
 * Based on the map information a connecting route between ego vehicle and the object is created.
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
                  ::ad::map::landmark::LandmarkIdSet const &greenTrafficLights,
                  ::ad::rss::world::SceneVector &scenes);

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
