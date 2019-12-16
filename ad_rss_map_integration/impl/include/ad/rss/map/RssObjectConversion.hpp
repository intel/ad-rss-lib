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

#include <ad/map/lane/Types.hpp>
#include <ad/map/match/Types.hpp>
#include <ad/rss/world/Object.hpp>
#include <ad/rss/world/RoadArea.hpp>
#include <set>

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
 * @brief namespace providing supporting functions to convert admap objects into rss objects
 */
namespace RssObjectConversion {

/*!
 * @brief convert admap object description to ad_rss object description
 *
 * @param[in] objectId the object id
 * @param[in] objectType the object type
 * @param[in] objectPosition the object's position described by admap object type
 * @param[in] objectRoadArea the object's road area
 * @param[in] negativeRouteDirectionLanes set of lanes that have a physical orientation against the route direction.
 * @param[out] rssObject the resulting RSS object
 *
 * @returns \c true if the conversion succeeded, false otherwise.
 */
bool convertObject(::ad::rss::world::ObjectId const &objectId,
                   ::ad::rss::world::ObjectType const &objectType,
                   ::ad::map::match::MapMatchedObjectBoundingBox const &objectPosition,
                   ::ad::physics::Speed const &objectSpeed,
                   ::ad::rss::world::RoadArea const &objectRoadArea,
                   ::ad::map::lane::LaneIdSet const &negativeRouteDirectionLanes,
                   ::ad::rss::world::Object &rssObject);

} // namespace RssObjectConversion
} // namespace map
} // namespace rss
} // namespace ad
