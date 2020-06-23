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
 *
 * @brief Calculate the distance on a constant accelerated movement (with a limiting maximum speed)
 *
 * @param[in]  currentSpeed           is the current speed of the vehicle
 * @param[in]  maxSpeed               is the maximum speed of the vehicle
 * @param[in]  acceleration           is the applied acceleration
 * @param[in]  duration               is the duration to apply the acceleration
 * @param[out] distanceOffset         is the distance offset from the current position
 *
 * @return true on success, false if a stop cannot be reached
 */
bool calculateDistanceOffsetInAcceleratedLimitedMovement(physics::Speed const &speed,
                                                         physics::Speed const &maxSpeed,
                                                         physics::Acceleration const &acceleration,
                                                         physics::Duration const &duration,
                                                         physics::Distance &distanceOffset);

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
 * @param[in]  duration        is the (positive) period of time the vehicle keeps accelerating
 * @param[out] resultingSpeed  is the resulting speed after \a duration
 *                             In longitudinal direction, the resulting speed >= 0. Especially, the vehicle is not
 *                             starting to drive in reverse direction after standing still. In lateral direction,
 *                             the resulting speed might have a different sign than the currentSpeed.
 *
 * @return true on success, false otherwise
 */
bool calculateSpeedAfterAcceleration(CoordinateSystemAxis const &axis,
                                     physics::Speed const &currentSpeed,
                                     physics::Speed const &maxSpeed,
                                     physics::Acceleration const &acceleration,
                                     physics::Duration const &duration,
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
 * @param[in]  duration         is the (positive) period of time the vehicle keeps accelerating
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
bool calculateDistanceOffsetAfterDuration(CoordinateSystemAxis const &axis,
                                          physics::Speed const &currentSpeed,
                                          physics::Speed const &maxSpeed,
                                          physics::Acceleration const &acceleration,
                                          physics::Duration const &duration,
                                          physics::Distance &distanceOffset);

/**
 * @brief Calculate the time needed to cover a given distance
 *
 * The function will use two values for acceleration, one until reaching the response time, the
 * second one afterwards.
 * If the distance is not covered when then velocity reaches zero, infinite time will be returned
 *
 * @param[in]  currentSpeed       starting velocity
 * @param[in]  maxSpeed           maximum velocity
 * @param[in]  responseTime       the time after which \a aAfterResponseTime is used instead of
 *                                \a aUntilResponseTime as acceleration
 * @param[in]  aUntilResponseTime during response time
 * @param[in]  aAfterResponseTime after response time
 * @param[in]  distanceToCover    distance that should be covered
 * @param[out] requiredTime      time needed to cover the distance
 *
 * @return true on, success, false otherwise
 */
bool calculateTimeToCoverDistance(physics::Speed const &currentSpeed,
                                  physics::Speed const &maxSpeed,
                                  physics::Duration const &responseTime,
                                  physics::Acceleration const &aUntilResponseTime,
                                  physics::Acceleration const &aAfterResponseTime,
                                  physics::Distance const &distanceToCover,
                                  physics::Duration &requiredTime);

/**
 * @brief Calculate the speed after a given duration
 *
 * The function will use two values for acceleration, one until reaching the response time, the
 * second one afterwards.
 *
 * @param[in] duration           the duration for which the speed gets calculated
 * @param[in] currentSpeed       starting velocity
 * @param[in] responseTime       the time after which \a aAfterResponseTime is used instead of
 *                               \a aUntilResponseTime as acceleration
 * @param[in] maxSpeed           maximum velocity
 * @param[in] aUntilResponseTime acceleration until response time
 * @param[in] aAfterResponseTime acceleration after response time
 * @param[out] resultingSpeed    resulting speed after \a duration
 */
void calculateSpeed(physics::Duration const &duration,
                    physics::Speed const &currentSpeed,
                    physics::Duration const &responseTime,
                    physics::Speed const &maxSpeed,
                    physics::Acceleration const &aUntilReponseTime,
                    physics::Acceleration const &aAfterResponseTime,
                    physics::Speed &resultingSpeed);

/**
 * @brief Calculate the distance offset after a constant accelerated movement.
 *
 * The function will use two values for acceleration, one until reaching the response time, the
 * second one afterwards.
 *
 * @param[in] duration           the duration for which the speed gets calculated
 * @param[in] currentSpeed       starting velocity
 * @param[in] responseTime       the time after which \a aAfterResponseTime is used instead of
 *                               \a aUntilResponseTime as acceleration
 * @param[in] maxSpeed           maximum velocity
 * @param[in] aUntilResponseTime acceleration until response time
 * @param[in] aAfterResponseTime acceleration after response time
 * @param[out] distanceOffset    resulting distance
 *
 * @return true on, success, false otherwise
 */
bool calculateDistanceOffset(physics::Duration const &duration,
                             physics::Speed const &currentSpeed,
                             physics::Duration const &responseTime,
                             physics::Speed const &maxSpeed,
                             physics::Acceleration const &aUntilResponseTime,
                             physics::Acceleration const &aAfterResponseTime,
                             physics::Distance &distanceOffset);

/**
 * @brief Calculate the stopping time after a constant accelerated movement.
 *
 * The function will use two values for acceleration, one until reaching the response time, the
 * second one afterwards.
 *
 * @param[in] currentSpeed       starting velocity
 * @param[in] responseTime       the time after which \a aAfterResponseTime is used instead of
 *                               \a aUntilResponseTime as acceleration
 * @param[in] maxSpeed           maximum velocity
 * @param[in] aUntilResponseTime acceleration until response time
 * @param[in] aAfterResponseTime acceleration after response time
 * @param[out] stopDuration      resulting duration
 *
 * @return true on, success, false otherwise
 */
bool calculateTimeToStop(physics::Speed const &currentSpeed,
                         physics::Duration const &responseTime,
                         physics::Speed const &maxSpeed,
                         physics::Acceleration const &aUntilResponseTime,
                         physics::Acceleration const &aAfterResponseTime,
                         physics::Duration &stopDuration);

} // namespace situation
} // namespace rss
} // namespace ad
