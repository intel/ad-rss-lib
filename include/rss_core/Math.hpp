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

#include "RSSTypes.hpp"

namespace rss_core {

/**
 * @brief Calculate the stopping distance for a given velocity and deceleration
 * @param[in]  velocity               is the current velocity of the vehicle [m/s]
 * @param[in]  deceleration           is the applied deceleration [m/s^2]
 * @param[out] stoppingDistance       is the resulting stopping distance [m]
 * @return true on success, false otherwise (e.g. if velocity < 0)
 */
bool calculateStoppingDistance(Velocity const velocity, Acceleration const deceleration, Distance &stoppingDistance);

/**
 * @brief Calculate the vehicle velocity after a given period of time (i.e. response time)
 * @param[in]  currentVelocity         is the current velocity of the vehicle [m/s]
 * @param[in]  acceleration            is the acceleration of the vehicle [m/s^2]
 * @param[in]  responseTime            is the period of time the vehicle keeps accelerating [s]
 * @param[out] resultingVelocity       is the resulting velocity after \a responseTime [m]
 * @return true on success, false otherwise (e.g. if velocity < 0)
 */
bool calculateVelocityAfterResponseTime(Velocity const currentVelocity,
                                        Acceleration const acceleration,
                                        Duration const responseTime,
                                        Velocity &resultingVelocity);

/**
 * @brief Calculate the covered distance of a vehicle after a given period of time (i.e. reponse time)
 * @param[in]  currentVelocity         is the current velocity of the vehicle [m/s]
 * @param[in]  acceleration            is the acceleration of the vehicle [m/s^2]
 * @param[in]  responseTime            is the period of time the vehicle keeps accelerating [s]
 * @param[out] coveredDistance         is the covered distance [m]
 * @return true on success, false otherwise (e.g. if velocity < 0)
 */
bool calculateDistanceAfterResponseTime(Velocity const currentVelocity,
                                        Acceleration const acceleration,
                                        Duration const responseTime,
                                        Distance &coveredDistance);
}
