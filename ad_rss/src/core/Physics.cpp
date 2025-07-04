// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/core/Physics.hpp"
#include <ad/physics/Operation.hpp>
#include <algorithm>
#include <cmath>
#include <limits>

namespace ad {

using physics::Acceleration;
using physics::Distance;
using physics::Duration;
using physics::Speed;

namespace rss {
namespace core {

bool calculateDistanceOffsetInAcceleratedMovement(Speed const speed,
                                                  Acceleration const acceleration,
                                                  Duration const duration,
                                                  Distance &distanceOffset)
{
  if (duration < Duration(0.))
  {
    // time must not be negative
    return false;
  }
  // s(t) = (a/2) * t^2 + v0 * t
  distanceOffset = (acceleration * 0.5 * duration * duration) + (speed * duration);
  return true;
}

bool calculateSpeedInAcceleratedMovement(Speed const speed,
                                         Acceleration const acceleration,
                                         Duration const duration,
                                         Speed &resultingSpeed)
{
  if (duration < Duration(0.))
  {
    // time must not be negative
    return false;
  }
  // v(t) =v0 + a * t
  resultingSpeed = speed + acceleration * duration;
  return true;
}

bool calculateStoppingDistance(Speed const currentSpeed, Acceleration const deceleration, Distance &stoppingDistance)
{
  if (deceleration == Acceleration(0.))
  {
    if (currentSpeed != Speed(0.))
    {
      // not reaching zero speed
      return false;
    }
    else
    {
      stoppingDistance = Distance(0.);
      return true;
    }
  }
  if (std::signbit(deceleration.mAcceleration) == std::signbit(currentSpeed.mSpeed))
  {
    // not reaching zero speed
    return false;
  }

  // s = v^2 / (2 * -a)
  stoppingDistance = (currentSpeed * currentSpeed) / (2.0 * -deceleration);
  return true;
}

bool calculateAcceleratedLimitedMovement(Speed const currentSpeed,
                                         Speed const max_speed_on_acceleration,
                                         Acceleration const acceleration,
                                         Duration const duration,
                                         Speed &resultingSpeed,
                                         Distance &distanceOffset)
{
  if (duration < Duration(0.))
  {
    // time must not be negative
    return false;
  }
  if (currentSpeed < Speed(0.))
  {
    // the speed has to be always >= 0.
    return false;
  }

  auto const result = calculateSpeedInAcceleratedMovement(currentSpeed, acceleration, duration, resultingSpeed);

  if (result)
  {
    // Only deceleration till stop is allowed
    resultingSpeed = std::max(Speed(0.), resultingSpeed);

    // The resultingSpeed is restricted by the max_speed_on_acceleration
    if (max_speed_on_acceleration.isValid())
    {
      // in case the currentSpeed is already higher, the currentSpeed is the limit
      auto const maxSpeedToAccelerate = std::max(max_speed_on_acceleration, currentSpeed);
      resultingSpeed = std::min(maxSpeedToAccelerate, resultingSpeed);
    }

    Duration accelDuration = Duration(0.);
    if (acceleration != Acceleration(0.))
    {
      accelDuration = (resultingSpeed - currentSpeed) / acceleration;
    }

    Duration resultingSpeedDuration = duration - accelDuration;

    distanceOffset = currentSpeed * duration;
    distanceOffset += 0.5 * acceleration * accelDuration * accelDuration;
    distanceOffset += (resultingSpeed - currentSpeed) * resultingSpeedDuration;
  }

  return result;
}

Duration calculateRequiredTimeInAcceleratedMovement(Speed const currentSpeed,
                                                    Acceleration const acceleration,
                                                    Distance const distanceToCover)
{
  // constant accelerated movement
  // t = -v_0/a +- sqrt(v_0^2/a^2 + 2s/a)
  Duration const firstPart = -1. * currentSpeed / acceleration;

  Duration const secondPart = std::sqrt((firstPart * firstPart) + (2. * distanceToCover / acceleration));

  Duration t1 = firstPart + secondPart;
  Duration t2 = firstPart - secondPart;

  Duration requiredTime;
  if (t2 > Duration(0.))
  {
    requiredTime = t2;
  }
  else
  {
    requiredTime = t1;
  }
  return requiredTime;
}

bool calculateTimeForDistance(Speed const currentSpeed,
                              Speed const max_speed_on_acceleration,
                              Acceleration const acceleration,
                              Distance const distanceToCover,
                              Duration &requiredTime)
{
  if (currentSpeed < Speed(0.))
  {
    return false;
  }

  bool result = true;

  if ((acceleration == Acceleration(0.)) ||
      // actual accelerations > 0 are dismissed, if current speed already exceeds maxSpeedOnAcceleration
      ((currentSpeed >= max_speed_on_acceleration) && (acceleration > Acceleration(0.))))
  {
    // non-accelerated constant movement:
    // t = s/v
    if (currentSpeed == Speed(0.))
    {
      requiredTime = std::numeric_limits<Duration>::max();
    }
    else
    {
      requiredTime = distanceToCover / currentSpeed;
    }
  }
  else
  {
    // first calculate requiredTime if acceleration part would not be limited
    requiredTime = calculateRequiredTimeInAcceleratedMovement(currentSpeed, acceleration, distanceToCover);

    // second, check if max speed is reached before distance is reached
    if (acceleration > Acceleration(0.))
    {
      auto const accelerationDuration = (max_speed_on_acceleration - currentSpeed) / acceleration;
      if (requiredTime > accelerationDuration)
      {
        // split calculation into 1. accelerated movement and 2. max_speed_on_acceleration movement
        Distance distanceWhenReachingMaximalSpeed;
        Speed speed;
        result = calculateAcceleratedLimitedMovement(currentSpeed,
                                                     max_speed_on_acceleration,
                                                     acceleration,
                                                     accelerationDuration,
                                                     speed,
                                                     distanceWhenReachingMaximalSpeed);
        if ((speed != max_speed_on_acceleration) || (distanceWhenReachingMaximalSpeed > distanceToCover))
        {
          // in this case something went terribly wrong
          throw std::runtime_error("calculateTimeForDistance>> irregular calculation results");
        }
        else
        {
          // accelerated movement
          requiredTime
            = calculateRequiredTimeInAcceleratedMovement(currentSpeed, acceleration, distanceWhenReachingMaximalSpeed);
          // constant movement with max_speed_on_acceleration
          requiredTime += (distanceToCover - distanceWhenReachingMaximalSpeed) / max_speed_on_acceleration;
        }
      }
    }
  }
  return result;
}

bool calculateTimeToCoverDistance(Speed const currentSpeed,
                                  Speed const max_speed_on_acceleration,
                                  Duration const response_time,
                                  Acceleration const aUntilResponseTime,
                                  Acceleration const aAfterResponseTime,
                                  Distance const distanceToCover,
                                  Duration &requiredTime)
{
  if (distanceToCover < Distance(0.))
  {
    return false;
  }

  Distance distanceAfterResponseTime;
  Speed speedAfterResponseTime;

  auto result = calculateAcceleratedLimitedMovement(currentSpeed,
                                                    max_speed_on_acceleration,
                                                    aUntilResponseTime,
                                                    response_time,
                                                    speedAfterResponseTime,
                                                    distanceAfterResponseTime);

  if (result)
  {
    if (distanceAfterResponseTime >= distanceToCover)
    {
      // already too far at response_time
      result = calculateTimeForDistance(
        currentSpeed, max_speed_on_acceleration, aUntilResponseTime, distanceToCover, requiredTime);
    }
    else if (speedAfterResponseTime == Speed(0.))
    {
      // distance not reached at response_time, but speed already zero. Will never reach the distance.
      requiredTime = std::numeric_limits<Duration>::max();
    }
    else
    {
      // distance not reached at response_time, stopping afterwards
      Distance stoppingDistance;
      result = calculateStoppingDistance(speedAfterResponseTime, aAfterResponseTime, stoppingDistance);

      if (result)
      {
        if (distanceAfterResponseTime + stoppingDistance > distanceToCover)
        {
          // already too far after stopping
          Distance const remainingDistance = distanceToCover - distanceAfterResponseTime;

          // maxSpeedOnAcceleration not relevant anymore, because we are AFTER the response_time
          result = calculateTimeForDistance(speedAfterResponseTime,
                                            std::numeric_limits<Speed>::max(),
                                            aAfterResponseTime,
                                            remainingDistance,
                                            requiredTime);
          requiredTime += response_time;
        }
        else
        {
          // distance not reached after stopping. Will never reach the distance.
          requiredTime = std::numeric_limits<Duration>::max();
        }
      }
    }
  }

  return result;
}

bool calculateSpeedAndDistanceOffset(Duration const duration,
                                     Speed const currentSpeed,
                                     Duration const response_time,
                                     Speed const max_speed_on_acceleration,
                                     Acceleration const aUntilResponseTime,
                                     Acceleration const aAfterResponseTime,
                                     Speed &resultingSpeed,
                                     Distance &distanceOffset)
{
  auto const accelerationDurationUntilReponseTime = std::min(duration, response_time);
  auto result = calculateAcceleratedLimitedMovement(currentSpeed,
                                                    max_speed_on_acceleration,
                                                    aUntilResponseTime,
                                                    accelerationDurationUntilReponseTime,
                                                    resultingSpeed,
                                                    distanceOffset);

  if (result && (duration > response_time))
  {
    auto const accelerationDurationAfterReponseTime = duration - response_time;
    Distance distanceAfterResponseTime;
    result &= calculateAcceleratedLimitedMovement(resultingSpeed,
                                                  max_speed_on_acceleration,
                                                  aAfterResponseTime,
                                                  accelerationDurationAfterReponseTime,
                                                  resultingSpeed,
                                                  distanceAfterResponseTime);
    distanceOffset += distanceAfterResponseTime;
  }
  return result;
}

bool calculateTimeToStop(Speed const currentSpeed,
                         Duration const response_time,
                         Speed const max_speed_on_acceleration,
                         Acceleration const aUntilResponseTime,
                         Acceleration const aAfterResponseTime,
                         Duration &stopDuration)
{
  auto result = true;
  if ((aUntilResponseTime < Acceleration(0.)) && (currentSpeed <= Speed(0.)))
  { // deceleration until response time, but no initial speed.
    stopDuration = Duration(0.);
    result = false;
  }

  Speed speedAtResponseTime;
  if (result)
  {
    Distance distanceOffset;
    result = calculateAcceleratedLimitedMovement(
      currentSpeed, max_speed_on_acceleration, aUntilResponseTime, response_time, speedAtResponseTime, distanceOffset);
  }

  if (result && (aAfterResponseTime >= Acceleration(0.)) && (speedAtResponseTime > Speed(0.)))
  { // continues to drive forever
    stopDuration = Duration(0.);
    result = false;
  }

  if (result)
  {
    // 0 = currentSpeed + a * t
    // t = -currentSpeed/a
    if (speedAtResponseTime == Speed(0.))
    {
      if ((currentSpeed > Speed(0.)) && (aUntilResponseTime < Acceleration(0.)))
      {
        // vehicle stopped before response time
        stopDuration = -currentSpeed / aUntilResponseTime;
      }
      else
      {
        // vehicle already standing still
        stopDuration = Duration(0.);
      }
    }
    else
    {
      Duration timeToStop = -speedAtResponseTime / aAfterResponseTime;
      stopDuration = response_time + timeToStop;
    }
  }
  return result;
}

} // namespace core
} // namespace rss
} // namespace ad
