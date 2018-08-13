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

#include "rss/lane/CoordinateSystemAxis.hpp"
#include "rss/lane/Distance.hpp"
#include "rss/lane/VehicleState.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS lane coordinate system datatypes and operations
 */
namespace lane {

/**
 * @brief Calculate the distance offset of a vehicle when applying the \a "stated braking pattern" with given
 *        deceleration
 *
 * @param[in]  axis              is the coordinate axis this calculation is for
 * @param[in]  currentSpeed      is the current vehicle speed [lane coordinate system units per second]
 * @param[in]  responseTime      is the response time of the vehicle [s]
 * @param[in]  acceleration      the acceleration of the vehicle during responseTime [lane coordinate system unit per
 * second squared]
 * @param[in]  deceleration      is the applied breaking deceleration [lane coordinate system unit per second squared]
 * @param[out] distanceOffset    is the distance offset of the vehicle from the current position after
 *  \a "the stated braking pattern" [lane coordinate system unit]
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis const axis,
                                                      Speed const currentSpeed,
                                                      time::Duration const responseTime,
                                                      Acceleration const acceleration,
                                                      Acceleration const deceleration,
                                                      Distance &distanceOffset) noexcept;

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
 * @param[out] safeDistance     is the calculated safe longitudinal distance [lane coordinate system unit]
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                    VehicleState const &followingVehicle,
                                                    Distance &safeDistance) noexcept;

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
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                VehicleState const &followingVehicle,
                                                Distance const &vehicleDistance,
                                                bool &isDistanceSafe) noexcept;

/**
 * @brief Calculate  the safe longitudinal distance between to vehicles driving in opposite direction
 * If consider correct is true the calculation will assume that the correctVehicle is on the correct lane
 * and oppositeVehicle on an opposite lane
 *
 * So calculation for the correctVehicle will be performed with brakeMinCorrect
 *
 * If consider correct is false its assumed that both vehicles are either on a correct or an opposite lane
 * So calculation will be performed with BrakeMin for both vehicles
 *
 *        ======================================================
 *
 *             CorrectVehicle --->        <---  oppositeVehicle
 *
 *        ======================================================
 *
 * @param[in] considerCorrect     should the check respect that one of the vehicles is on the correct lane or not
 * @param[in]  correctVehicle     is the state of the vehicle driving in the correct lane
 * @param[in]  oppositeVehicle    is the state of the vehicle driving in the wrong lane
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceOppositeDirection(bool considerCorrect,
                                                        VehicleState const &correctVehicle,
                                                        VehicleState const &oppositeVehicle,
                                                        Distance &safeDistance) noexcept;

/**
 * @brief Check if the longitudinal distance between to vehicles driving in opposite direction is safe.
 * If consider correct is true the check will assume that the correctVehicle is on the correct lane
 * and oppositeVehicle on an opposite lane
 *
 * So check for the correctVehcile will be performed with brakeMinCorrect
 *
 * If consider correct is false its assumed that both vehicles are either on a correct or an opposite lane
 * So check will be performed with BrakeMin
 *
 *        ======================================================
 *
 *             CorrectVehicle --->        <---  oppositeVehicle
 *
 *        ======================================================
 *
 * @param[in] considerCorrect     should the check respect that one of the vehicles is on the correct lane or not
 * @param[in]  correctVehicle     is the state of the vehicle driving in the correct lane
 * @param[in]  oppositeVehicle    is the state of the vehicle driving in the wrong lane
 * @param[in]  vehicleDistance    the (positive) longitudinal distance between the two vehicles
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceOppositeDirection(bool considerCorrect,
                                                    VehicleState const &correctVehicle,
                                                    VehicleState const &oppositeVehicle,
                                                    Distance const &vehicleDistance,
                                                    bool &isDistanceSafe) noexcept;

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
 * @param[out] safeDistance     is the calculated safe lateral distance [lane coordinate system unit]
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLateralDistance(VehicleState const &leftVehicle,
                                  VehicleState const &rightVehicle,
                                  Distance &safeDistance) noexcept;

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
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLateralDistance(VehicleState const &leftVehicle,
                              VehicleState const &rightVehicle,
                              Distance const &vehicleDistance,
                              bool &isDistanceSafe) noexcept;

} // namespace lane
} // namespace rss
