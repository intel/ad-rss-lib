// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#pragma once

#include "RssObjectPositionExtractor.hpp"
#include "rss/situation/VehicleState.hpp"
#include "rss/world/Distance.hpp"
#include "rss/world/Object.hpp"
#include "rss/world/WorldModel.hpp"

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
 * @param[in] egoVehicle information about the egoVehicle
 * @param[in] currentScene information about the other object and the lanes
 * @param[out] egoVehiclePosition: position ranges in the situation coordinate system of the egoVehicle
 * @param[out] objectPosition: position ranges in the situation coordinate system of the other object
 */
bool calculateObjectDimensions(Object const &egoVehicle,
                               Scene const &currentScene,
                               ObjectDimensions &egoVehiclePosition,
                               ObjectDimensions &objectPosition) noexcept;

/**
 * @brief Calculate the object position ranges in the situation coordinate system
 *
 * @param[in] object: information about the object
 * @param[in] roadArea: information about the lanes
 * @param[out] objectPosition: position ranges in the situation coordinate system of the other object
 */
bool calculateObjectDimensions(Object const &object,
                               ::rss::world::RoadArea const &roadArea,
                               ObjectDimensions &objectPosition) noexcept;

/**
 * @brief Convert object to vehicle state
 *
 * This functions only converts data from the structs. The values it self are not modified.
 */
void convertVehicleStateDynamics(Object const &object, ::rss::situation::VehicleState &vehicleState);

} // namespace world
} // namespace rss
