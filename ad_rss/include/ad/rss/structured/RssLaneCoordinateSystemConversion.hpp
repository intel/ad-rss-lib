// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "ad/rss/core/RelativeObjectState.hpp"
#include "ad/rss/structured/RssObjectPositionExtractor.hpp"
#include "ad/rss/world/Constellation.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace structured
 */
namespace structured {

/**
 * @brief Calculate the object position ranges in the constellation coordinate system
 *
 * @param[in] currentConstellation information about the other object and the lanes
 * @param[out] egoVehiclePosition: position ranges in the constellation coordinate system of the ego_vehicle
 * @param[out] objectPosition: position ranges in the constellation coordinate system of the other object
 */
bool calculateObjectDimensions(world::Constellation const &currentConstellation,
                               ObjectDimensions &egoVehiclePosition,
                               ObjectDimensions &objectPosition);

/**
 * @brief Calculate the object position ranges in the constellation coordinate system
 *
 * @param[in] object: information about the object
 * @param[in] roadArea: information about the lanes
 * @param[out] objectPosition: position ranges in the constellation coordinate system of the other object
 */
bool calculateObjectDimensions(world::Object const &object,
                               world::RoadArea const &roadArea,
                               ObjectDimensions &objectPosition);

/**
 * @brief Convert object to vehicle state
 *
 * This functions only converts data from the structs. The values it self are not modified.
 */
void convertVehicleStateDynamics(world::Object const &object,
                                 world::RssDynamics const &rssDynamics,
                                 core::RelativeObjectState &vehicleState);

} // namespace structured
} // namespace rss
} // namespace ad
