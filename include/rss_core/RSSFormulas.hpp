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

#include "rss_core/RSSTypes.hpp"

namespace rss_core {

/**
 * @brief Calculate the distance covered by a non-ego vehicle when applying the \a "stated breaking pattern"
 *        Calls \sa calculateDistanceAfterStatedBreakingPattern()
 * @param[in]  currentSpeed   is the current vehicle speed [m/s]
 * @param[out] coveredDistance  is the covered distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceAfterStatedBreakingPatternOtherVehicle(Speed const currentSpeed, Distance &coveredDistance);

/**
 * @brief Calculate the distance covered by the ego vehicle when applying the \a "stated breaking pattern"
 *        Calls \sa calculateDistanceAfterStatedBreakingPattern()
 * @param[in]  currentSpeed   is the current vehicle speed [m/s]
 * @param[out] coveredDistance   is the covered distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceAfterStatedBreakingPatternEgoVehicle(Speed const currentSpeed, Distance &coveredDistance);

/**
 * @brief Calculate the distance covered by a vehicle when applying the \a "stated breaking pattern"
 * @param[in]  currentSpeed   is the current vehicle speed [m/s]
 * @param[in]  responseTime      is the response time of the vehicle [s]
 * @param[out] coveredDistance   is the covered distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceAfterStatedBreakingPattern(Speed const currentSpeed,
                                                 Duration const responseTime,
                                                 Distance &coveredDistance);

/**
 * @brief Calculate the distance covered by a vehicle when applying the \a "stated breaking pattern" with given
 *        deceleration
 * @param[in]  currentSpeed   is the current vehicle speed [m/s]
 * @param[in]  responseTime      is the response time of the vehicle [s]
 * @param[in]  deceleration      is the applied breaking deceleration [m/s^2]
 * @param[out] coveredDistance   is the covered distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateDistanceAfterStatedBreakingPattern(Speed const currentSpeed,
                                                 Duration const responseTime,
                                                 Acceleration const deceleration,
                                                 Distance &coveredDistance);

/**
 * @brief Calculate the \a "safe longitudinal distance" between the ego vehicle and another, leading, vehicle
 *        Assuming: Maximum deceleration for leading vehicle, and \a "stated breaking pattern" for ego vehicle
 *
 *        ======================================================
 *
 *             EgoVehicle --->          OtherVehicle --->
 *
 *        ======================================================
 *
 * @param[in]  egoSpeed      is the speed of the ego vehicle [m/s]
 * @param[in]  otherSpeed    is the speed of the other vehicle [m/s]
 * @param[out] safeDistance     is the calculated safe longitudinal distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceSameDirectionLeadingOther(Speed const egoSpeed,
                                                                Speed const otherSpeed,
                                                                Distance &safeDistance);

/**
 * @brief Calculate the \a "safe longitudinal distance" between the leading ego vehicle and another vehicle
 *        Assuming: Maximum deceleration for ego vehicle, and \a "stated breaking pattern" for the other vehicle
 *
 *        ======================================================
 *
 *             OtherVehicle --->          EgoVehicle --->
 *
 *        ======================================================
 *
 * @param[in]  egoSpeed      is the speed of the ego vehicle [m/s]
 * @param[in]  otherSpeed    is the speed of the other vehicle [m/s]
 * @param[out] safeDistance     is the calculated safe longitudinal distance [m]
 * @return true on successful calculation, false otherwise
 */
bool calculateSafeLongitudinalDistanceSameDirectionLeadingEgo(Speed const egoSpeed,
                                                              Speed const otherSpeed,
                                                              Distance &safeDistance);
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

} // namespace rss_core
