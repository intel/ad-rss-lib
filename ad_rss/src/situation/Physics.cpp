// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "ad/rss/situation/Physics.hpp"
#include <algorithm>
#include <cmath>
#include <limits>
#include "ad/physics/Operation.hpp"

namespace ad {

using physics::Acceleration;
using physics::Distance;
using physics::Duration;
using physics::Speed;

namespace rss {
namespace situation {

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
  if (std::signbit(static_cast<double>(deceleration)) == std::signbit(static_cast<double>(currentSpeed)))
  {
    // not reaching zero speed
    return false;
  }

  // s = v^2 / (2 * -a)
  stoppingDistance = (currentSpeed * currentSpeed) / (2.0 * -deceleration);
  return true;
}

bool calculateAcceleratedLimitedMovement(Speed const currentSpeed,
                                         Speed const maxSpeedOnAcceleration,
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

    // The resultingSpeed is restricted by the maxSpeedOnAcceleration
    if (maxSpeedOnAcceleration.isValid())
    {
      // in case the currentSpeed is already higher, the currentSpeed is the limit
      auto const maxSpeedToAccelerate = std::max(maxSpeedOnAcceleration, currentSpeed);
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
                              Speed const maxSpeedOnAcceleration,
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
      ((currentSpeed >= maxSpeedOnAcceleration) && (acceleration > Acceleration(0.))))
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
      auto const accelerationDuration = (maxSpeedOnAcceleration - currentSpeed) / acceleration;
      if (requiredTime > accelerationDuration)
      {
        // split calculation into 1. accelerated movement and 2. maxSpeedOnAcceleration movement
        Distance distanceWhenReachingMaximalSpeed;
        Speed speed;
        result = calculateAcceleratedLimitedMovement(currentSpeed,
                                                     maxSpeedOnAcceleration,
                                                     acceleration,
                                                     accelerationDuration,
                                                     speed,
                                                     distanceWhenReachingMaximalSpeed);
        if ((speed != maxSpeedOnAcceleration) || (distanceWhenReachingMaximalSpeed > distanceToCover))
        {
          // in this case something went terribly wrong
          throw std::runtime_error("calculateTimeForDistance>> irregular calculation results");
        }
        else
        {
          // accelerated movement
          requiredTime
            = calculateRequiredTimeInAcceleratedMovement(currentSpeed, acceleration, distanceWhenReachingMaximalSpeed);
          // constant movement with maxSpeedOnAcceleration
          requiredTime += (distanceToCover - distanceWhenReachingMaximalSpeed) / maxSpeedOnAcceleration;
        }
      }
    }
  }
  return result;
}

bool calculateTimeToCoverDistance(Speed const currentSpeed,
                                  Speed const maxSpeedOnAcceleration,
                                  Duration const responseTime,
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
                                                    maxSpeedOnAcceleration,
                                                    aUntilResponseTime,
                                                    responseTime,
                                                    speedAfterResponseTime,
                                                    distanceAfterResponseTime);

  if (result)
  {
    if (distanceAfterResponseTime >= distanceToCover)
    {
      // already too far at responseTime
      result = calculateTimeForDistance(
        currentSpeed, maxSpeedOnAcceleration, aUntilResponseTime, distanceToCover, requiredTime);
    }
    else if (speedAfterResponseTime == Speed(0.))
    {
      // distance not reached at responseTime, but speed already zero. Will never reach the distance.
      requiredTime = std::numeric_limits<Duration>::max();
    }
    else
    {
      // distance not reached at responseTime, stopping afterwards
      Distance stoppingDistance;
      result = calculateStoppingDistance(speedAfterResponseTime, aAfterResponseTime, stoppingDistance);

      if (result)
      {
        if (distanceAfterResponseTime + stoppingDistance > distanceToCover)
        {
          // already too far after stopping
          Distance const remainingDistance = distanceToCover - distanceAfterResponseTime;

          // maxSpeedOnAcceleration not relevant anymore, because we are AFTER the response time
          result = calculateTimeForDistance(speedAfterResponseTime,
                                            std::numeric_limits<Speed>::max(),
                                            aAfterResponseTime,
                                            remainingDistance,
                                            requiredTime);
          requiredTime += responseTime;
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
                                     Duration const responseTime,
                                     Speed const maxSpeedOnAcceleration,
                                     Acceleration const aUntilResponseTime,
                                     Acceleration const aAfterResponseTime,
                                     Speed &resultingSpeed,
                                     Distance &distanceOffset)
{
  auto const accelerationDurationUntilReponseTime = std::min(duration, responseTime);
  auto result = calculateAcceleratedLimitedMovement(currentSpeed,
                                                    maxSpeedOnAcceleration,
                                                    aUntilResponseTime,
                                                    accelerationDurationUntilReponseTime,
                                                    resultingSpeed,
                                                    distanceOffset);

  if (result && (duration > responseTime))
  {
    auto const accelerationDurationAfterReponseTime = duration - responseTime;
    Distance distanceAfterResponseTime;
    result &= calculateAcceleratedLimitedMovement(resultingSpeed,
                                                  maxSpeedOnAcceleration,
                                                  aAfterResponseTime,
                                                  accelerationDurationAfterReponseTime,
                                                  resultingSpeed,
                                                  distanceAfterResponseTime);
    distanceOffset += distanceAfterResponseTime;
  }
  return result;
}

bool calculateTimeToStop(Speed const currentSpeed,
                         Duration const responseTime,
                         Speed const maxSpeedOnAcceleration,
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
      currentSpeed, maxSpeedOnAcceleration, aUntilResponseTime, responseTime, speedAtResponseTime, distanceOffset);
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
      // vehicle stopped before response time
      stopDuration = -currentSpeed / aUntilResponseTime;
    }
    else
    {
      Duration timeToStop = -speedAtResponseTime / aAfterResponseTime;
      stopDuration = responseTime + timeToStop;
    }
  }
  return result;
}

} // namespace situation
} // namespace rss
} // namespace ad
