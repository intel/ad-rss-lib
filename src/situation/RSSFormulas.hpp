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

#include "rss/situation/CoordinateSystemAxis.hpp"
#include "rss/situation/Distance.hpp"
#include "rss/situation/VehicleState.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS situation coordinate system datatypes and operations
 */
namespace situation {

/**
 * @brief Calculate the distance offset of a vehicle when applying the \a "stated braking pattern" with given
 *        deceleration
 *
 * @param[in]  axis              is the coordinate axis this calculation is for
 * @param[in]  currentSpeed      is the current vehicle speed
 *                               [situation coordinate system units per second]
 * @param[in]  responseTime      is the response time of the vehicle [s]
 * @param[in]  acceleration      the acceleration of the vehicle during responseTime
 *                               [situation coordinate system unit per second squared]
 * @param[in]  deceleration      is the applied breaking deceleration
 *                               [situation coordinate system unit per second squared]
 * @param[out] distanceOffset    is the distance offset of the vehicle from the current position after
 *                               \a "the stated braking pattern"
 *                               [situation coordinate system unit]
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis const axis,
                                                      Speed const currentSpeed,
                                                      time::Duration const responseTime,
                                                      Acceleration const acceleration,
                                                      Acceleration const deceleration,
                                                      Distance &distanceOffset);

/**
 * @brief Calculate the \a "safe longitudinal distance" between the two vehicles,
 *        Assuming: Maximum deceleration for leading vehicle, and \a "stated breaking pattern" for following vehicle
 *
 *        ======================================================
 *
 *             FollowingVehicle --->          LeadingVehicle --->
 *
 *        ======================================================
 *
 * @param[in]  leadingVehicle      is the state of the leading vehicle
 * @param[in]  followingVehicle    is the state of the following vehicle
 * @param[out] safeDistance        is the calculated safe longitudinal distance
 *                                 [situation coordinate system unit]
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                    VehicleState const &followingVehicle,
                                                    Distance &safeDistance);

/**
 * @brief Check if the longitudinal distance between the two vehicles is safe.
 *        Assuming: Maximum deceleration for leading vehicle, and \a "stated breaking pattern" for following vehicle
 *
 *        ======================================================
 *
 *             FollowingVehicle --->          LeadingVehicle --->
 *
 *        ======================================================
 *
 * @param[in]  leadingVehicle      is the state of the leading vehicle
 * @param[in]  followingVehicle    is the state of the following vehicle
 * @param[in]  vehicleDistance     the (positive) longitudinal distance between the two vehicles
 * @param[out] isDistanceSafe      true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                VehicleState const &followingVehicle,
                                                Distance const &vehicleDistance,
                                                bool &isDistanceSafe);

/**
 * @brief Calculate  the safe longitudinal distance between to vehicles driving in opposite direction
 * The calculation will assume that the correctVehicle is on the correct lane
 * and oppositeVehicle on an opposite lane
 *
 * So calculation for the correctVehicle is performed with brakeMinCorrect and performed with brakeMin
 * for the oppositeVehicle
 *
 *        ======================================================
 *
 *             correctVehicle --->        <---  oppositeVehicle
 *
 *        ======================================================
 *
 * @param[in]  correctVehicle     is the state of the vehicle driving in the correct lane
 * @param[in]  oppositeVehicle    is the state of the vehicle driving in the wrong lane
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceOppositeDirection(VehicleState const &correctVehicle,
                                                        VehicleState const &oppositeVehicle,
                                                        Distance &safeDistance);

/**
 * @brief Check if the longitudinal distance between to vehicles driving in opposite direction is safe.
 * The check will assume that the correctVehicle is on the correct lane
 * and oppositeVehicle on an opposite lane
 *
 * So check for the correctVehcile is performed with brakeMinCorrect and performed with brakeMin
 * for the oppositeVehicle
 *
 *        ======================================================
 *
 *             correctVehicle --->        <---  oppositeVehicle
 *
 *        ======================================================
 *
 * @param[in]  correctVehicle     is the state of the vehicle driving in the correct lane
 * @param[in]  oppositeVehicle    is the state of the vehicle driving in the wrong lane
 * @param[in]  vehicleDistance    the (positive) longitudinal distance between the two vehicles
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceOppositeDirection(VehicleState const &correctVehicle,
                                                    VehicleState const &oppositeVehicle,
                                                    Distance const &vehicleDistance,
                                                    bool &isDistanceSafe);

/**
 * @brief Check if the vehicle can safely break longitudinaly in front of the intersection.
 *        Assuming: Using \a "stated breaking pattern" for breaking
 *
 *        ======================================================
 *
 *             vehicle --->             |  Intersection
 *                                      |
 *        ==============================              ===============
 *                                      |            |
 *                                      |            |
 *
 * @param[in]  vehicle      is the state of the vehicle
 * @param[out] isDistanceSafe      true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkStopInFrontIntersection(VehicleState const &vehicle, bool &isDistanceSafe);

/**
 * @brief Calculate the \a "safe lateral distance" between the two vehicles,
 *        Assuming: Both vehicles apply \a "stated breaking pattern"
 *
 *        ======================================================
 *
 *             Left vehicle  -->
 *                 |
 *                 |
 *                 v
 *
 *                 ^
 *                 |
 *                 |
 *             Right vehicle -->
 *
 *        ======================================================
 *
 * @param[in]  leftVehicle      is the state of the left vehicle
 * @param[in]  rightVehicle     is the state of the right vehicle
 * @param[out] safeDistance     is the calculated safe lateral distance [situation coordinate system unit]
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLateralDistance(VehicleState const &leftVehicle,
                                  VehicleState const &rightVehicle,
                                  Distance &safeDistance);

/**
 * @brief Check if the lateral distance between to vehicles is safe
 *        Assuming: Both vehicles apply \a "stated breaking pattern"
 *
 *        ======================================================
 *
 *             Left vehicle  -->
 *                 |
 *                 |
 *                 v
 *
 *                 ^
 *                 |
 *                 |
 *             Right vehicle -->
 *
 *        ======================================================
 *
 * @param[in]  leftVehicle      is the state of the left vehicle
 * @param[in]  rightVehicle     is the state of the right vehicle
 * @param[in]  vehicleDistance  the (positive) lateral distance between the two vehicles
 * @param[out] isDistanceSafe   is true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLateralDistance(VehicleState const &leftVehicle,
                              VehicleState const &rightVehicle,
                              Distance const &vehicleDistance,
                              bool &isDistanceSafe);

} // namespace situation
} // namespace rss
