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

#include "RssObjectPositionExtractor.hpp"
#include "ad/rss/situation/VehicleState.hpp"
#include "ad/rss/world/Scene.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace world
 */
namespace world {

/**
 * @brief Calculate the object position ranges in the situation coordinate system
 *
 * @param[in] currentScene information about the other object and the lanes
 * @param[out] egoVehiclePosition: position ranges in the situation coordinate system of the egoVehicle
 * @param[out] objectPosition: position ranges in the situation coordinate system of the other object
 */
bool calculateObjectDimensions(Scene const &currentScene,
                               ObjectDimensions &egoVehiclePosition,
                               ObjectDimensions &objectPosition);

/**
 * @brief Calculate the object position ranges in the situation coordinate system
 *
 * @param[in] object: information about the object
 * @param[in] roadArea: information about the lanes
 * @param[out] objectPosition: position ranges in the situation coordinate system of the other object
 */
bool calculateObjectDimensions(Object const &object, RoadArea const &roadArea, ObjectDimensions &objectPosition);

/**
 * @brief Convert object to vehicle state
 *
 * This functions only converts data from the structs. The values it self are not modified.
 */
void convertVehicleStateDynamics(Object const &object,
                                 RssDynamics const &rssDynamics,
                                 situation::VehicleState &vehicleState);

} // namespace world
} // namespace rss
} // namespace ad
