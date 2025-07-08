// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2022 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
#pragma once

#include <ad/geometry/Types.hpp>
#include <ad/map/route/FullRoute.hpp>
#include <ad/rss/core/RelativeObjectState.hpp>
#include <ad/rss/world/ObjectId.hpp>

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
 * @brief namespace RssReachableSetsCalculation
 */
namespace RssReachableSetsCalculation {

/*! @brief calculate the trajectory sets and restrict to given route
 *
 * @param[in] objectId the id of the object
 * @param[in] route the full route to be considered
 * @param[in] vehicleState the vehicle state and parameters to be used
 * @param[out] brakePolygon           the trajectory set for braking behavior
 * @param[out] continueForwardPolygon the trajectory set for continue-forward behavior
 *
 * @returns \c true on success
 */
bool calculateTrajectorySetsRestrictedToRoute(::ad::rss::world::ObjectId const &objectId,
                                              ::ad::map::route::FullRoute const &route,
                                              ::ad::rss::core::RelativeObjectState const &vehicleState,
                                              ::ad::geometry::Polygon &brakePolygon,
                                              ::ad::geometry::Polygon &continueForwardPolygon);

} // namespace RssReachableSetsCalculation
} // namespace map
} // namespace rss
} // namespace ad
