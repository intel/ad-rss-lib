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

#include <vector>
#include "ad/physics/Acceleration.hpp"
#include "ad/physics/Angle.hpp"
#include "ad/physics/AngleRange.hpp"
#include "ad/physics/Distance.hpp"
#include "ad/physics/Duration.hpp"
#include "ad/physics/Speed.hpp"

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
 * @brief Calculate the distance traveled after a given period of time on a constant accelerated movement
 *
 * @param[in]  speed           is the current speed
 * @param[in]  acceleration    is the acceleration value to be considered
 * @param[in]  duration        is the (positive) period of time the acceleration is performed
 *  @param[out] distanceOffset  is the distance offset from the current position.
 *
 * @return true on success, false otherwise
 */
bool calculateDistanceOffsetInAcceleratedMovement(physics::Speed const speed,
                                                  physics::Acceleration const acceleration,
                                                  physics::Duration const duration,
                                                  physics::Distance &distanceOffset);

/**
 * @brief Calculate the speed after a given period of time on a constant accelerated movement
 *
 * @param[in]  speed           is the current speed
 * @param[in]  acceleration    is the acceleration value to be considered
 * @param[in]  duration        is the (positive) period of time the acceleration is performed
 * @param[out] resultingSpeed  is the resulting speed after \a duration
 *
 * @return true on success, false otherwise
 */
bool calculateSpeedInAcceleratedMovement(physics::Speed const speed,
                                         physics::Acceleration const acceleration,
                                         physics::Duration const duration,
                                         physics::Speed &resultingSpeed);

/**
 * @brief Calculate the stopping distance for a given speed and deceleration on a constant accelerated movement
 *
 * @param[in]  currentSpeed           is the current speed of the vehicle
 * @param[in]  deceleration           is the applied deceleration
 * @param[out] stoppingDistance       is the resulting stopping distance
 *                                    The sign of the stoppingDistance equals the sign of the currentSpeed.
 *
 * @return true on success, false if a stop cannot be reached
 */
bool calculateStoppingDistance(physics::Speed const currentSpeed,
                               physics::Acceleration const deceleration,
                               physics::Distance &stoppingDistance);

/**
 * @brief Calculate the vehicle speed after a given period of time on a constant accelerated movement
 *
 * The accelerated movement (acceleration>0) is limited:
 * The acceleration stops if the speed reaches a limiting maximum speed.
 * The decelerated movement (acceleration<0) is limited:
 * The deceleration stops if the speed reaches zero. Especially, the vehicle is not
 * starting to drive in reverse direction after standing still (In this case, it's equal to the stopping distance)
 *
 * @param[in]  currentSpeed          is the current speed of the vehicle (has to be always positive)
 * @param[in]  maxSpeedOnAcceleration is the maximum speed of the vehicle (e.g. restricted by a limit) to be considered
 * while accelerating (if acceleration >0) (has to be always positive)
 * @param[in]  acceleration          is the acceleration of the vehicle
 * @param[in]  duration              is the (positive) period of time the vehicle keeps accelerating
 * @param[out] resultingSpeed        is the resulting speed after \a duration (resultingSpeed >= 0)
 * @param[out] distanceOffset        is the distance offset from the current position (distanceOffset >= 0)
 *
 * @return true on success, false otherwise
 */
bool calculateAcceleratedLimitedMovement(physics::Speed const currentSpeed,
                                         physics::Speed const maxSpeedOnAcceleration,
                                         physics::Acceleration const acceleration,
                                         physics::Duration const duration,
                                         physics::Speed &resultingSpeed,
                                         physics::Distance &distanceOffset);

/**
 * @brief Calculate the time needed to cover a given distance
 *
 * The function will use two values for acceleration, one until reaching the response time, the
 * second one afterwards.
 * If the distance is not covered when then velocity reaches zero, infinite time will be returned
 *
 * @param[in]  currentSpeed          starting velocity
 * @param[in]  maxSpeedOnAcceleration is the maximum speed of the vehicle (has to be always positive) to be considered
 * while accelerating
 * @param[in]  responseTime          the time after which \a aAfterResponseTime is used instead of
 *                                   \a aUntilResponseTime as acceleration
 * @param[in]  aUntilResponseTime    during response time
 * @param[in]  aAfterResponseTime    after response time
 * @param[in]  distanceToCover       distance that should be covered
 * @param[out] requiredTime          time needed to cover the distance
 *
 * @return true on, success, false otherwise
 */
bool calculateTimeToCoverDistance(physics::Speed const currentSpeed,
                                  physics::Speed const maxSpeedOnAcceleration,
                                  physics::Duration const responseTime,
                                  physics::Acceleration const aUntilResponseTime,
                                  physics::Acceleration const aAfterResponseTime,
                                  physics::Distance const distanceToCover,
                                  physics::Duration &requiredTime);

/**
 * @brief Calculate the speed and distance offset after a given duration in a two phased limited constant accelerated
 * movement
 *
 * The function will use two values for acceleration, one until reaching the response time, the
 * second one afterwards.
 *
 * @param[in] duration              the duration for which the speed gets calculated
 * @param[in] currentSpeed          starting velocity
 * @param[in] responseTime          the time after which \a aAfterResponseTime is used instead of
 *                                  \a aUntilResponseTime as acceleration
 * @param[in] maxSpeedOnAcceleration is the maximum speed of the vehicle (has to be always positive) to be considered
 * while accelerating
 * @param[in] aUntilResponseTime    acceleration until response time
 * @param[in] aAfterResponseTime    acceleration after response time
 * @param[out] resultingSpeed       resulting speed after \a duration
 * @param[out] distanceOffset       resulting distance
 */
bool calculateSpeedAndDistanceOffset(physics::Duration const duration,
                                     physics::Speed const currentSpeed,
                                     physics::Duration const responseTime,
                                     physics::Speed const maxSpeedOnAcceleration,
                                     physics::Acceleration const aUntilReponseTime,
                                     physics::Acceleration const aAfterResponseTime,
                                     physics::Speed &resultingSpeed,
                                     physics::Distance &distanceOffset);

/**
 * @brief Calculate the stopping time in a two phased limited constant accelerated movement
 *
 * The function will use two values for acceleration, one until reaching the response time, the
 * second one afterwards.
 *
 * @param[in] currentSpeed          starting velocity
 * @param[in] responseTime          the time after which \a aAfterResponseTime is used instead of
 *                                  \a aUntilResponseTime as acceleration
 * @param[in] maxSpeedOnAcceleration is the maximum speed of the vehicle (has to be always positive) to be considered
 * while accelerating
 * @param[in] aUntilResponseTime    acceleration until response time
 * @param[in] aAfterResponseTime    acceleration after response time
 * @param[out] stopDuration         resulting duration
 *
 * @return true on, success, false otherwise
 */
bool calculateTimeToStop(physics::Speed const currentSpeed,
                         physics::Duration const responseTime,
                         physics::Speed const maxSpeedOnAcceleration,
                         physics::Acceleration const aUntilResponseTime,
                         physics::Acceleration const aAfterResponseTime,
                         physics::Duration &stopDuration);

} // namespace situation
} // namespace rss
} // namespace ad
