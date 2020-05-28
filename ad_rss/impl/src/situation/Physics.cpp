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

Distance calculateDistanceOffsetInAcceleratedLimitedMovement(Speed const &speed,
                                                             Speed const &maxSpeed,
                                                             Acceleration const &acceleration,
                                                             Duration const &duration)
{
  Speed const deltaSpeed = std::max(Speed(0.), maxSpeed - speed);
  // v_delta = a * t_to_max --> t_to_max = v_delta / a
  Duration accelTime = duration;
  if (acceleration != Acceleration(0.))
  {
    accelTime = std::min(accelTime, std::fabs(deltaSpeed / acceleration));
  }

  Duration maxSpeedTime = std::max(Duration(0.), duration - accelTime);

  // s(t) = (a/2) * t^2 + v0 * t for acceleration time
  // s(t) = v_max * t_max_s for max speed time
  Distance const distanceOffset
    = calculateDistanceOffsetInAcceleratedMovement(speed, acceleration, accelTime) + (maxSpeed * maxSpeedTime);
  return distanceOffset;
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
                                     Duration const &responseTime,
                                     Speed &resultingSpeed)
{
  if (responseTime < Duration(0.))
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

  resultingSpeed = calculateSpeedInAcceleratedMovement(currentSpeed, acceleration, responseTime);

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

bool calculateDistanceOffsetAfterResponseTime(CoordinateSystemAxis const &axis,
                                              Speed const &currentSpeed,
                                              Speed const &maxSpeed,
                                              Acceleration const &acceleration,
                                              Duration const &responseTime,
                                              Distance &distanceOffset)
{
  if (responseTime < Duration(0.))
  {
    // time must not be negative
    return false;
  }

  Duration resultingResponseTime = responseTime;
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
      resultingResponseTime = -1. * currentSpeed / acceleration;
      resultingResponseTime = std::min(resultingResponseTime, responseTime);
    }
    distanceOffset = calculateDistanceOffsetInAcceleratedLimitedMovement(
      currentSpeed, maxSpeed, acceleration, resultingResponseTime);
  }
  else
  {
    distanceOffset = calculateDistanceOffsetInAcceleratedMovement(currentSpeed, acceleration, resultingResponseTime);
  }

  return true;
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
                                  Acceleration const &acceleration,
                                  Acceleration const &deceleration,
                                  Distance const &distanceToCover,
                                  Duration &requiredTime)
{
  if (distanceToCover < Distance(0.))
  {
    return false;
  }

  bool result = false;

  Distance distanceAfterResponseTime;

  result = calculateDistanceOffsetAfterResponseTime( // LCOV_EXCL_LINE: wrong detection
    CoordinateSystemAxis::Longitudinal,
    currentSpeed,
    maxSpeed,
    acceleration,
    responseTime,
    distanceAfterResponseTime);

  if (result)
  {
    if (distanceAfterResponseTime >= distanceToCover)
    {
      // TODO: obey max speed
      result = calculateTimeForDistance(currentSpeed, acceleration, distanceToCover, requiredTime);
    }
    else
    {
      Speed speedAfterResponseTime;

      result = calculateSpeedAfterAcceleration( // LCOV_EXCL_LINE: wrong detection
        CoordinateSystemAxis::Longitudinal,
        currentSpeed,
        maxSpeed,
        acceleration,
        responseTime,
        speedAfterResponseTime);

      if (speedAfterResponseTime == Speed(0.))
      {
        requiredTime = std::numeric_limits<Duration>::max();
      }
      else
      {
        Distance stoppingDistance;
        result = result && calculateStoppingDistance(speedAfterResponseTime, deceleration, stoppingDistance);

        if (result)
        {
          if (distanceAfterResponseTime + stoppingDistance > distanceToCover)
          {
            Distance remainingDistance = distanceToCover - distanceAfterResponseTime;

            result = calculateTimeForDistance(speedAfterResponseTime, deceleration, remainingDistance, requiredTime);
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

void calculateSpeed(Duration const &currentTime,
                    Speed const &initialSpeed,
                    Duration const &responseTime,
                    Speed const &maxSpeed,
                    Acceleration const &aUntilReponseTime,
                    Acceleration const &aAfterResponseTime,
                    Speed &resultingSpeed)
{
  resultingSpeed = initialSpeed + aUntilReponseTime * std::min(currentTime, responseTime);
  if (resultingSpeed < Speed(0.))
  {
    resultingSpeed = Speed(0.);
  }

  if (currentTime > responseTime)
  {
    resultingSpeed += (currentTime - responseTime) * aAfterResponseTime;
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

void calculateDistanceOffset(Duration const &currentTime,
                             Speed const &initialSpeed,
                             Speed const &maxSpeed,
                             Acceleration const &acceleration,
                             Distance &distanceOffset)
{
  distanceOffset = initialSpeed * currentTime;

  Speed vCurrent;
  calculateSpeedAfterAcceleration(
    CoordinateSystemAxis::Longitudinal, initialSpeed, maxSpeed, acceleration, currentTime, vCurrent);

  Duration timeToFinalSpeed = Duration(0.);
  if (acceleration != Acceleration(0.))
  {
    timeToFinalSpeed = (vCurrent - initialSpeed) / acceleration;
  }
  distanceOffset += 0.5 * acceleration * timeToFinalSpeed * timeToFinalSpeed;
  distanceOffset += (vCurrent - initialSpeed) * (currentTime - timeToFinalSpeed);
}

void calculateDistanceOffset(Duration const &currentTime,
                             Speed const &initialSpeed,
                             Duration const &responseTime,
                             Speed const &maxSpeed,
                             Acceleration const &aUntilResponseTime,
                             Acceleration const &aAfterResponseTime,
                             Distance &distanceOffset)
{
  calculateDistanceOffset(
    std::min(currentTime, responseTime), initialSpeed, maxSpeed, aUntilResponseTime, distanceOffset);

  if (currentTime > responseTime)
  {
    Speed vResponseTime;
    calculateSpeedAfterAcceleration(
      CoordinateSystemAxis::Longitudinal, initialSpeed, maxSpeed, aUntilResponseTime, responseTime, vResponseTime);
    Distance distanceAfterResponseTime;
    calculateDistanceOffset(
      currentTime - responseTime, vResponseTime, maxSpeed, aAfterResponseTime, distanceAfterResponseTime);
    distanceOffset += distanceAfterResponseTime;
  }
}

bool calculateTimeToStop(Speed initialSpeed,
                         Duration responseTime,
                         Speed maxSpeed,
                         Acceleration aUntilResponseTimeMax,
                         Acceleration aAfterResponseTime,
                         Duration &result)
{
  if ((aUntilResponseTimeMax < Acceleration(0.)) && (initialSpeed <= Speed(0.)))
  { // deceleration until response time, but no initial speed.
    result = Duration(0.);
    return false;
  }

  Speed vResponseTime;
  calculateSpeedAfterAcceleration(
    CoordinateSystemAxis::Longitudinal, initialSpeed, maxSpeed, aUntilResponseTimeMax, responseTime, vResponseTime);

  if ((aAfterResponseTime >= Acceleration(0.)) && (vResponseTime > Speed(0.)))
  { // continues to drive forever
    result = Duration(0.);
    return false;
  }

  // 0 = Vinit + a * t
  // t = -Vinit/a
  if (vResponseTime == Speed(0.))
  {
    // vehicle stopped before response time
    result = -initialSpeed / aUntilResponseTimeMax;
  }
  else
  {
    Duration timeToStop = -vResponseTime / aAfterResponseTime;
    result = responseTime + timeToStop;
  }
  return true;
}

} // namespace situation
} // namespace rss
} // namespace ad
