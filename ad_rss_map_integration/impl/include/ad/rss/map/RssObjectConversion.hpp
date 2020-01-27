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

#include <ad/map/lane/Types.hpp>
#include <ad/map/match/Types.hpp>
#include <ad/rss/world/Object.hpp>
#include <ad/rss/world/RoadArea.hpp>
#include <set>

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

/*!
 * @brief namespace providing supporting functions to convert ad::map objects into ad::rss objects
 */
namespace RssObjectConversion {

/*!
 * @brief convert ad::map object description to ad::rss object description
 *
 * @param[in] objectId the object id
 * @param[in] objectType the object type
 * @param[in] objectMatchObject the object's position described by its map matched bounding box and position
 * @param[in] objectSpeed the object's speed
 * @param[in] objectRoadArea the object's road area
 * @param[in] negativeRouteDirectionLanes set of lanes that have a physical orientation against the route direction.
 * @param[out] rssObject the resulting RSS object
 *
 * @returns \c true if the conversion succeeded, false otherwise.
 */
bool convertObject(::ad::rss::world::ObjectId const &objectId,
                   ::ad::rss::world::ObjectType const &objectType,
                   ::ad::map::match::Object const &objectMatchObject,
                   ::ad::physics::Speed const &objectSpeed,
                   ::ad::rss::world::RoadArea const &objectRoadArea,
                   ::ad::map::lane::LaneIdSet const &negativeRouteDirectionLanes,
                   ::ad::rss::world::Object &rssObject);

} // namespace RssObjectConversion
} // namespace map
} // namespace rss
} // namespace ad
