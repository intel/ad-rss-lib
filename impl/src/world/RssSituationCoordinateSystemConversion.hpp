// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
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
