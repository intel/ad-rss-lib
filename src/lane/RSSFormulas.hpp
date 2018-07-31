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
bool checkVehicleState(VehicleState const &state);

/**
 * @brief Calculate the distance covered by a non-ego vehicle when applying the \a "stated braking pattern"
 *        Calls \sa calculateDistanceAfterStatedBreakingPattern()
 * @param[in]  currentSpeed   is the current vehicle speed [m/s]
 * @param[out] coveredDistance  is the covered distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceAfterStatedBrakingPatternOtherVehicle(Speed const currentSpeed, Distance &coveredDistance);

/**
 * @brief Calculate the distance covered by the ego vehicle when applying the \a "stated breaking pattern"
 *        Calls \sa calculateDistanceAfterStatedBrakingPattern()
 * @param[in]  currentSpeed   is the current vehicle speed [m/s]
 * @param[out] coveredDistance   is the covered distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceAfterStatedBrakingPatternEgoVehicle(Speed const currentSpeed, Distance &coveredDistance);

/**
 * @brief Calculate the distance covered by a vehicle when applying the \a "stated braking pattern"
 * @param[in]  currentSpeed   is the current vehicle speed [m/s]
 * @param[in]  responseTime      is the response time of the vehicle [s]
 * @param[out] coveredDistance   is the covered distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceAfterStatedBrakingPattern(Speed const currentSpeed,
                                                time::Duration const responseTime,
                                                Distance &coveredDistance);

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
                                                Distance &coveredDistance);

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
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                VehicleState const &followingVehicle,
                                                bool &isDistanceSafe);

/**
 * @brief Calculate the \a "safe longitudinal distance" between the ego vehicle and another, approaching, vehicle,
 *        where the ego vehicle is on the correct lane.
 *        Assuming: Both vehicles apply \a "stated breaking pattern"
 *
 *        ======================================================
 *
 *            EgoVehicle --->      <--- OtherVehicle
 *
 *        ======================================================
 *
 * @param[in]  egoSpeed      is the speed of the ego vehicle [m/s]
 * @param[in]  otherSpeed    is the speed of the other vehicle [m/s]
 * @param[out] safeDistance     is the calculated safe longitudinal distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane(Speed const egoSpeed,
                                                                     Speed const otherSpeed,
                                                                     Distance &safeDistance);

/**
 * @brief Calculate the \a "safe longitudinal distance" between the ego vehicle and another, approaching, vehicle,
 *        where the other vehicle is on its correct lane
 *        Assuming: Both vehicles apply \a "stated breaking pattern"
 *
 *        ======================================================
 *
 *            EgoVehicle --->      <--- OtherVehicle
 *
 *        ======================================================
 *
 * @param[in]  egoSpeed      is the speed of the ego vehicle [m/s]
 * @param[in]  otherSpeed    is the speed of the other vehicle [m/s]
 * @param[out] safeDistance     is the calculated safe longitudinal distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceOppositeDirectionOnOppositeLane(Speed const egoSpeed,
                                                                      Speed const otherSpeed,
                                                                      Distance &safeDistance);

} // namespace lane
} // namespace rss
