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
 * @brief Calculate the stopping distance for a given speed and deceleration
 * @param[in]  speed               is the current speed of the vehicle [m/s]
 * @param[in]  deceleration           is the applied deceleration [m/s^2]
 * @param[out] stoppingDistance       is the resulting stopping distance [m]
 * @return true on success, false otherwise (e.g. if speed < 0)
 */
bool calculateStoppingDistance(Speed const speed, Acceleration const deceleration, Distance &stoppingDistance);

/**
 * @brief Calculate the vehicle speed after a given period of time (i.e. response time)
 * @param[in]  currentSpeed         is the current speed of the vehicle [m/s]
 * @param[in]  acceleration            is the acceleration of the vehicle [m/s^2]
 * @param[in]  responseTime            is the period of time the vehicle keeps accelerating [s]
 * @param[out] resultingSpeed       is the resulting speed after \a responseTime [m]
 * @return true on success, false otherwise (e.g. if speed < 0)
 */
bool calculateSpeedAfterResponseTime(Speed const currentSpeed,
                                     Acceleration const acceleration,
                                     Duration const responseTime,
                                     Speed &resultingSpeed);

/**
 * @brief Calculate the covered distance of a vehicle after a given period of time (i.e. reponse time)
 * @param[in]  currentSpeed         is the current speed of the vehicle [m/s]
 * @param[in]  acceleration            is the acceleration of the vehicle [m/s^2]
 * @param[in]  responseTime            is the period of time the vehicle keeps accelerating [s]
 * @param[out] coveredDistance         is the covered distance [m]
 * @return true on success, false otherwise (e.g. if speed < 0)
 */
bool calculateDistanceAfterResponseTime(Speed const currentSpeed,
                                        Acceleration const acceleration,
                                        Duration const responseTime,
                                        Distance &coveredDistance);
}
