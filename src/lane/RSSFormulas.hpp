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
 * @brief checks if the given vehicle state contains valid values
 *
 * @return true if state is valid, false otherwise
 */
bool checkVehicleState(VehicleState const &state) noexcept;

/**
 * @brief checks if the vehicle is completely in front of other vehicle
 *
 * Back bumper of the vehicle is in front of the front bumper of the other vehicle
 *
 * @return true if is in front, false otherwise
 */
bool isVehicleInFront(lane::VehicleState const &vehicle, lane::VehicleState const &otherVehicle) noexcept;

/**
 * @brief calculates the longitudinal distance of the positions of the vehicles
 *
 * @returns the distance between the two vehicles or zero if the vehicles do overlap longitudinally
 *
 */
Distance calculateLongitudinaltDistanceBetweenVehicles(lane::VehicleState const &vehicle,
                                                       lane::VehicleState const &otherVehicle) noexcept;

/**
 * @brief Calculate the distance covered by a vehicle when applying the \a "stated braking pattern" with given
 *        deceleration
 * @param[in]  currentSpeed      is the current vehicle speed [lane coordinate system units per second]
 * @param[in]  responseTime      is the response time of the vehicle [s]
 * @param[in] acceleration       the acceleration of the vehicle during responseTime
 * @param[in]  deceleration      is the applied breaking deceleration [lane coordinate system unit per second squared]
 * @param[out] coveredDistance   is the covered distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceAfterStatedBrakingPattern(Speed const currentSpeed,
                                                time::Duration const responseTime,
                                                Acceleration const acceleration,
                                                Acceleration const deceleration,
                                                Distance &coveredDistance) noexcept;

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
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                VehicleState const &followingVehicle,
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
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceOppositeDirection(bool considerCorrect,
                                                    VehicleState const &correctVehicle,
                                                    VehicleState const &oppositeVehicle,
                                                    bool &isDistanceSafe) noexcept;

} // namespace lane
} // namespace rss
