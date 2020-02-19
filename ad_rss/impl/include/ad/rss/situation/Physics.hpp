// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

/**
 * @file
 */

#pragma once

#include "ad/physics/Acceleration.hpp"
#include "ad/physics/Distance.hpp"
#include "ad/physics/Duration.hpp"
#include "ad/physics/Speed.hpp"
#include "ad/rss/situation/CoordinateSystemAxis.hpp"

/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace situation
 */
namespace situation {

/**
 * @brief Calculate the stopping distance for a given speed and deceleration on a constant accelerated movement
 *
 * @param[in]  currentSpeed           is the current speed of the vehicle
 * @param[in]  deceleration           is the applied (positive) deceleration
 * @param[out] stoppingDistance       is the resulting stopping distance
 *                                    The sign of the stoppingDistance equals the sign of the currentSpeed.
 *
 * @return true on success, false otherwise
 */
bool calculateStoppingDistance(physics::Speed const &currentSpeed,
                               physics::Acceleration const &deceleration,
                               physics::Distance &stoppingDistance);

/**
 * @brief Calculate the vehicle speed after a given period of time on a constant accelerated movement
 *
 * @param[in]  axis            is the coordinate axis this calculation is for
 * @param[in]  currentSpeed    is the current speed of the vehicle
 *                             (in longitudinal direction this has to be always positive)
 * @param[in]  maxSpeed        is the maximum speed of the vehicle (e.g. restricted by a limit)
 *                             (only used in longitudinal direction, has to be always positive)
 * @param[in]  acceleration    is the acceleration of the vehicle
 * @param[in]  responseTime    is the (positive) period of time the vehicle keeps accelerating
 * @param[out] resultingSpeed  is the resulting speed after \a responseTime
 *                             In longitudinal direction, the resulting speed >= 0. Especially, the vehicle is not
 *                             starting to drive in reverse direction after standing still. In lateral direction,
 *                             the resulting speed might have a different sign than the currentSpeed.
 *
 * @return true on success, false otherwise
 */
bool calculateSpeedAfterResponseTime(CoordinateSystemAxis const &axis,
                                     physics::Speed const &currentSpeed,
                                     physics::Speed const &maxSpeed,
                                     physics::Acceleration const &acceleration,
                                     physics::Duration const &responseTime,
                                     physics::Speed &resultingSpeed);

/**
 * @brief Calculate the distance offset of a vehicle after a given period of time on a constant accelerated movement
 *
 * @param[in]  axis             is the coordinate axis this calculation is for
 * @param[in]  currentSpeed     is the current speed of the vehicle
 *                              (in longitudinal direction this has to be always positive)
 * @param[in]  maxSpeed         is the maximum speed of the vehicle
 *                              (only used in longitudinal direction, has to be always positive)
 * @param[in]  acceleration     is the acceleration of the vehicle
 * @param[in]  responseTime     is the (positive) period of time the vehicle keeps accelerating
 * @param[out] distanceOffset   is the distance offset from the current position
 *                              In decelerated longitudinal situation, the distance offset is restricted to the point
 *                              in time the vehicle stops; if the vehicle is able to stop within the response time,
 *                              it's equal to the stopping distance. Therefore, the distance offset in longitudinal
 *                              case is always positive. In lateral situation, the sign of the distance offset can be
 *                              positive or negative; the following is always true:
 *                              'lateral_position_after_response_time' = distanceOffset + 'current_lateral_position'
 *
 * @return true on success, false otherwise
 */
bool calculateDistanceOffsetAfterResponseTime(CoordinateSystemAxis const &axis,
                                              physics::Speed const &currentSpeed,
                                              physics::Speed const &maxSpeed,
                                              physics::Acceleration const &acceleration,
                                              physics::Duration const &responseTime,
                                              physics::Distance &distanceOffset);

/**
 * @brief Calculate the time needed to cover a given distance
 *
 * The function will respect acceleration during response time and then braking till zero velocity
 * If the distance is not covered when then velocity reaches zero, infinite time will be returned
 *
 * @param[in] currentSpeed starting velocity
 * @param[in] maxSpeed maximum velocity
 * @param[in] responseTime
 * @param[in] acceleration during response time
 * @param[in] deceleration after response time
 * @param[in] distanceToCover distance that should be covered
 * @param[out] requiredTime time needed to cover the distance
 *
 * @return true on, success, false otherwise
 *
 */
bool calculateTimeToCoverDistance(physics::Speed const &currentSpeed,
                                  physics::Speed const &maxSpeed,
                                  physics::Duration const &responseTime,
                                  physics::Acceleration const &acceleration,
                                  physics::Acceleration const &deceleration,
                                  physics::Distance const &distanceToCover,
                                  physics::Duration &requiredTime);

} // namespace situation
} // namespace rss
} // namespace ad
