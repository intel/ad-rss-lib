// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include "ad_rss/physics/CoordinateSystemAxis.hpp"
#include "ad_rss/situation/VehicleState.hpp"

/*!
 * @brief namespace ad_rss
 */
namespace ad_rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/**
 * @brief Calculate the distance offset of a vehicle when applying the \a "stated braking pattern" with given
 *        deceleration
 *
 * @param[in]  axis              is the coordinate axis this calculation is for
 * @param[in]  currentSpeed      is the current vehicle speed
 * @param[in]  responseTime      is the response time of the vehicle
 * @param[in]  acceleration      the acceleration of the vehicle during responseTime
 * @param[in]  deceleration      is the applied breaking deceleration
 * @param[out] distanceOffset    is the distance offset of the vehicle from the current position after
 *                               \a "the stated braking pattern"
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceOffsetAfterStatedBrakingPattern(physics::CoordinateSystemAxis const &axis,
                                                      physics::Speed const &currentSpeed,
                                                      physics::Duration const &responseTime,
                                                      physics::Acceleration const &acceleration,
                                                      physics::Acceleration const &deceleration,
                                                      physics::Distance &distanceOffset);

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
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                    VehicleState const &followingVehicle,
                                                    physics::Distance &safeDistance);

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
 * @param[out] safeDistance        is the calculated safe longitudinal distance
 * @param[out] isDistanceSafe      true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                VehicleState const &followingVehicle,
                                                physics::Distance const &vehicleDistance,
                                                physics::Distance &safeDistance,
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
                                                        physics::Distance &safeDistance);

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
 * @param[out] safeDistance        is the calculated safe longitudinal distance
 * @param[out] isDistanceSafe     true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLongitudinalDistanceOppositeDirection(VehicleState const &correctVehicle,
                                                    VehicleState const &oppositeVehicle,
                                                    physics::Distance const &vehicleDistance,
                                                    physics::Distance &safeDistance,
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
 * @param[out] safeDistance      the safe distance according to the stated braking pattern
 * @param[out] isDistanceSafe      true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkStopInFrontIntersection(VehicleState const &vehicle, physics::Distance &safeDistance, bool &isDistanceSafe);

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
 * @param[out] safeDistance     is the calculated safe lateral distance
 *
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLateralDistance(VehicleState const &leftVehicle,
                                  VehicleState const &rightVehicle,
                                  physics::Distance &safeDistance);

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
 * @param[out] safeDistance     is the calculated safe lateral distance
 * @param[out] isDistanceSafe   is true if the distance is safe, false otherwise
 *
 * @return true on successful calculation, false otherwise
 */
bool checkSafeLateralDistance(VehicleState const &leftVehicle,
                              VehicleState const &rightVehicle,
                              physics::Distance const &vehicleDistance,
                              physics::Distance &safeDistance,
                              bool &isDistanceSafe);

} // namespace situation
} // namespace ad_rss
