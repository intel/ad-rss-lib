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

#include "rss/situation/Acceleration.hpp"
#include "rss/situation/CoordinateSystemAxis.hpp"
#include "rss/situation/Distance.hpp"
#include "rss/situation/RelativePosition.hpp"
#include "rss/situation/Speed.hpp"
#include "rss/time/Duration.hpp"

/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace for RSS situation coordinate system datatypes and operations
 */
namespace situation {

/**
 * @brief Calculate the stopping distance for a given speed and deceleration on a constant accelerated movement
 *
 * @param[in]  currentSpeed           is the current speed of the vehicle
 *                                    [situation coordinate system unit/s]
 * @param[in]  deceleration           is the applied (positive) deceleration
 *                                    [situation coordinate system units/s^2]
 * @param[out] stoppingDistance       is the resulting stopping distance
 *                                    [situation coordinate system units]
 *                                    The sign of the stoppingDistance equals the sign of the currentSpeed.
 *
 * @return true on success, false otherwise
 */
bool calculateStoppingDistance(Speed const currentSpeed,
                               Acceleration const deceleration,
                               Distance &stoppingDistance) noexcept;

/**
 * @brief Calculate the vehicle speed after a given period of time on a constant accelerated movement
 *
 * @param[in]  axis            is the coordinate axis this calculation is for
 * @param[in]  currentSpeed    is the current speed of the vehicle
 *                             [situation coordinate system units/s]
 *                             (in longitudinal direction this has to be always positive)
 * @param[in]  acceleration    is the acceleration of the vehicle
 *                             [situation coordinate system units/s^2]
 * @param[in]  responseTime    is the (positive) period of time the vehicle keeps accelerating [s]
 * @param[out] resultingSpeed  is the resulting speed after \a responseTime
 *                             [situation coordinate system units]
 *                             In longitudinal direction, the resulting speed >= 0. Especially, the vehicle is not
 *                             starting to drive in reverse direction after standing still. In lateral direction,
 *                             the resulting speed might have a different sign than the currentSpeed.
 *
 * @return true on success, false otherwise
 */
bool calculateSpeedAfterResponseTime(CoordinateSystemAxis const axis,
                                     Speed const currentSpeed,
                                     Acceleration const acceleration,
                                     time::Duration const responseTime,
                                     Speed &resultingSpeed) noexcept;

/**
 * @brief Calculate the distance offset of a vehicle after a given period of time on a constant accelerated movement
 *
 * @param[in]  axis             is the coordinate axis this calculation is for
 * @param[in]  currentSpeed     is the current speed of the vehicle
 *                              [situation coordinate system units/s]
 *                              (in longitudinal direction this has to be always positive)
 * @param[in]  acceleration     is the acceleration of the vehicle
 *                              [situation coordinate system units/s^2]
 * @param[in]  responseTime     is the (positive) period of time the vehicle keeps accelerating [s]
 * @param[out] distanceOffset   is the distance offset from the current position
 *                              [situation coordinate system units]
 *                              In decelerated longitudinal situation, the distance offset is restricted to the point
 *                              in time the vehicle stops; if the vehicle is able to stop within the response time,
 *                              it's equal to the stopping distance. Therefore, the distance offset in longitudinal
 *                              case is always positive. In lateral situation, the sign of the distance offset can be
 *                              positive or negative; the following is always true:
 *                              'lateral_position_after_response_time' = distanceOffset + 'current_lateral_position'
 *
 * @return true on success, false otherwise
 */
bool calculateDistanceOffsetAfterResponseTime(CoordinateSystemAxis const axis,
                                              Speed const currentSpeed,
                                              Acceleration const acceleration,
                                              time::Duration const responseTime,
                                              Distance &distanceOffset) noexcept;

} // namespace situation
} // namespace rss
