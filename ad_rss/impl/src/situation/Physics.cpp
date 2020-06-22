// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
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

Distance calculateDistanceOffsetInAcceleratedMovement(Speed const &speed,
                                                      Acceleration const &acceleration,
                                                      Duration const &duration)
{
  // s(t) = (a/2) * t^2 + v0 * t
  Distance const distanceOffset = (acceleration * 0.5 * duration * duration) + (speed * duration);
  return distanceOffset;
}

bool calculateDistanceOffsetInAcceleratedLimitedMovement(Speed const &speed,
                                                         Speed const &maxSpeed,
                                                         Acceleration const &acceleration,
                                                         Duration const &duration,
                                                         Distance &distanceOffset)
{
  Speed speedAfterAcceleration;
  auto result = calculateSpeedAfterAcceleration(
    CoordinateSystemAxis::Longitudinal, speed, maxSpeed, acceleration, duration, speedAfterAcceleration);

  if (result)
  {
    Duration accelTime = Duration(0.);
    if (acceleration != Acceleration(0.))
    {
      accelTime = (speedAfterAcceleration - speed) / acceleration;
    }

    Duration maxSpeedTime = duration - accelTime;

    distanceOffset = speed * duration;
    distanceOffset += 0.5 * acceleration * accelTime * accelTime;
    distanceOffset += (speedAfterAcceleration - speed) * maxSpeedTime;
  }
  return result;
}

Speed calculateSpeedInAcceleratedMovement(Speed const &speed,
                                          Acceleration const &acceleration,
                                          Duration const &duration)
{
  // v(t) =v0 + a * t
  Speed const resultingSpeed = speed + acceleration * duration;
  return resultingSpeed;
}

bool calculateStoppingDistance(Speed const &currentSpeed, Acceleration const &deceleration, Distance &stoppingDistance)
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

bool calculateSpeedAfterAcceleration(CoordinateSystemAxis const &axis,
                                     Speed const &currentSpeed,
                                     Speed const &maxSpeed,
                                     Acceleration const &acceleration,
                                     Duration const &duration,
                                     Speed &resultingSpeed)
{
  if (duration < Duration(0.))
  {
    // time must not be negative
    return false;
  }

  if (axis == CoordinateSystemAxis::Longitudinal)
  {
    // in longitudinal direction the speed has to be always >= 0.
    if (currentSpeed < Speed(0.))
    {
      return false;
    }
  }

  resultingSpeed = calculateSpeedInAcceleratedMovement(currentSpeed, acceleration, duration);

  if (axis == CoordinateSystemAxis::Longitudinal)
  {
    // Only deceleration till stop is allowed
    resultingSpeed = std::max(Speed(0.), resultingSpeed);
    if (maxSpeed.isValid())
    {
      resultingSpeed = std::min(maxSpeed, resultingSpeed);
    }
  }

  return true;
}

bool calculateDistanceOffsetAfterDuration(CoordinateSystemAxis const &axis,
                                          Speed const &currentSpeed,
                                          Speed const &maxSpeed,
                                          Acceleration const &acceleration,
                                          Duration const &duration,
                                          Distance &distanceOffset)
{
  auto result = true;
  if (duration < Duration(0.))
  {
    // time must not be negative
    return false;
  }

  Duration resultingDuration = duration;
  if (axis == CoordinateSystemAxis::Longitudinal)
  {
    if (currentSpeed < Speed(0.))
    {
      // in longitudinal direction the speed has to be always >= 0.
      return false;
    }

    if (acceleration < Acceleration(0.))
    {
      // on deceleration restrict the time to the time required to stop
      resultingDuration = -1. * currentSpeed / acceleration;
      resultingDuration = std::min(resultingDuration, duration);
    }
    result = calculateDistanceOffsetInAcceleratedLimitedMovement(
      currentSpeed, maxSpeed, acceleration, resultingDuration, distanceOffset);
  }
  else
  {
    distanceOffset = calculateDistanceOffsetInAcceleratedMovement(currentSpeed, acceleration, resultingDuration);
  }

  return result;
}

bool calculateTimeForDistance(Speed const &currentSpeed,
                              Acceleration const &acceleration,
                              Distance const &distanceToCover,
                              Duration &requiredTime)
{
  if (currentSpeed < Speed(0.))
  {
    return false;
  }

  bool result = true;

  if (acceleration == Acceleration(0.))
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
    // constant accelerated movement:
    // t = -v_0/a +- sqrt(v_0^2/a^2 + 2s/a)
    Duration const firstPart = -1. * currentSpeed / acceleration;

    Duration const secondPart = std::sqrt((firstPart * firstPart) + (2. * distanceToCover / acceleration));

    Duration t1 = firstPart + secondPart;
    Duration t2 = firstPart - secondPart;

    if (t2 > Duration(0.))
    {
      requiredTime = t2;
    }
    else
    {
      requiredTime = t1;
    }
  }
  return result;
}

bool calculateTimeToCoverDistance(Speed const &currentSpeed,
                                  Speed const &maxSpeed,
                                  Duration const &responseTime,
                                  Acceleration const &aUntilResponseTime,
                                  Acceleration const &aAfterResponseTime,
                                  Distance const &distanceToCover,
                                  Duration &requiredTime)
{
  if (distanceToCover < Distance(0.))
  {
    return false;
  }

  bool result = false;

  Distance distanceAfterResponseTime;

  result = calculateDistanceOffsetAfterDuration( // LCOV_EXCL_LINE: wrong detection
    CoordinateSystemAxis::Longitudinal,
    currentSpeed,
    maxSpeed,
    aUntilResponseTime,
    responseTime,
    distanceAfterResponseTime);

  if (result)
  {
    if (distanceAfterResponseTime >= distanceToCover)
    {
      // TODO: obey max speed
      result = calculateTimeForDistance(currentSpeed, aUntilResponseTime, distanceToCover, requiredTime);
    }
    else
    {
      Speed speedAfterResponseTime;

      result = calculateSpeedAfterAcceleration( // LCOV_EXCL_LINE: wrong detection
        CoordinateSystemAxis::Longitudinal,
        currentSpeed,
        maxSpeed,
        aUntilResponseTime,
        responseTime,
        speedAfterResponseTime);

      if (speedAfterResponseTime == Speed(0.))
      {
        requiredTime = std::numeric_limits<Duration>::max();
      }
      else
      {
        Distance stoppingDistance;
        result = result && calculateStoppingDistance(speedAfterResponseTime, aAfterResponseTime, stoppingDistance);

        if (result)
        {
          if (distanceAfterResponseTime + stoppingDistance > distanceToCover)
          {
            Distance remainingDistance = distanceToCover - distanceAfterResponseTime;

            result
              = calculateTimeForDistance(speedAfterResponseTime, aAfterResponseTime, remainingDistance, requiredTime);
            requiredTime += responseTime;
          }
          else
          {
            requiredTime = std::numeric_limits<Duration>::max();
          }
        }
      }
    }
  }

  return result;
}

void calculateSpeed(Duration const &duration,
                    Speed const &currentSpeed,
                    Duration const &responseTime,
                    Speed const &maxSpeed,
                    Acceleration const &aUntilReponseTime,
                    Acceleration const &aAfterResponseTime,
                    Speed &resultingSpeed)
{
  resultingSpeed = currentSpeed + aUntilReponseTime * std::min(duration, responseTime);
  if (resultingSpeed < Speed(0.))
  {
    resultingSpeed = Speed(0.);
  }

  if (duration > responseTime)
  {
    resultingSpeed += (duration - responseTime) * aAfterResponseTime;
  }
  if (resultingSpeed < Speed(0.))
  {
    resultingSpeed = Speed(0.);
  }
  else if (resultingSpeed > maxSpeed)
  {
    resultingSpeed = maxSpeed;
  }
}

bool calculateDistanceOffset(Duration const &duration,
                             Speed const &currentSpeed,
                             Duration const &responseTime,
                             Speed const &maxSpeed,
                             Acceleration const &aUntilResponseTime,
                             Acceleration const &aAfterResponseTime,
                             Distance &distanceOffset)
{
  auto result = true;
  result = calculateDistanceOffsetInAcceleratedLimitedMovement(
    currentSpeed, maxSpeed, aUntilResponseTime, std::min(duration, responseTime), distanceOffset);

  if (result && (duration > responseTime))
  {
    Speed vResponseTime;
    result = calculateSpeedAfterAcceleration(
      CoordinateSystemAxis::Longitudinal, currentSpeed, maxSpeed, aUntilResponseTime, responseTime, vResponseTime);
    Distance distanceAfterResponseTime;
    result &= calculateDistanceOffsetInAcceleratedLimitedMovement(
      vResponseTime, maxSpeed, aAfterResponseTime, duration - responseTime, distanceAfterResponseTime);
    distanceOffset += distanceAfterResponseTime;
  }
  return result;
}

bool calculateTimeToStop(Speed const &currentSpeed,
                         Duration const &responseTime,
                         Speed const &maxSpeed,
                         Acceleration const &aUntilResponseTime,
                         Acceleration const &aAfterResponseTime,
                         Duration &stopDuration)
{
  auto result = true;
  if ((aUntilResponseTime < Acceleration(0.)) && (currentSpeed <= Speed(0.)))
  { // deceleration until response time, but no initial speed.
    stopDuration = Duration(0.);
    result = false;
  }

  Speed vResponseTime;
  if (result)
  {
    result = calculateSpeedAfterAcceleration(
      CoordinateSystemAxis::Longitudinal, currentSpeed, maxSpeed, aUntilResponseTime, responseTime, vResponseTime);
  }

  if (result && (aAfterResponseTime >= Acceleration(0.)) && (vResponseTime > Speed(0.)))
  { // continues to drive forever
    stopDuration = Duration(0.);
    result = false;
  }

  if (result)
  {
    // 0 = currentSpeed + a * t
    // t = -currentSpeed/a
    if (vResponseTime == Speed(0.))
    {
      // vehicle stopped before response time
      stopDuration = -currentSpeed / aUntilResponseTime;
    }
    else
    {
      Duration timeToStop = -vResponseTime / aAfterResponseTime;
      stopDuration = responseTime + timeToStop;
    }
  }
  return result;
}

} // namespace situation
} // namespace rss
} // namespace ad
