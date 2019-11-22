// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "physics/Math.hpp"
#include <algorithm>
#include <limits>
#include "ad_rss/physics/Operations.hpp"

namespace ad_rss {
namespace physics {

Distance calculateDistanceOffsetInAccerlatedMovement(Speed const &speed,
                                                     Acceleration const &acceleration,
                                                     Duration const &duration)
{
  // s(t) =(a/2) * t^2 + v0 * t
  Distance const distanceOffset = (acceleration * 0.5 * duration * duration) + (speed * duration);
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
  if (deceleration <= Acceleration(0.))
  {
    // deceleration must be positive
    return false;
  }

  // s = v^2 / (2 *a)
  // keep the signbit of the current Speed
  stoppingDistance = (currentSpeed * std::fabs(currentSpeed)) / (2.0 * deceleration);
  return true;
}

bool calculateSpeedAfterResponseTime(CoordinateSystemAxis const &axis,
                                     Speed const &currentSpeed,
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
  }

  return true;
}

bool calculateDistanceOffsetAfterResponseTime(CoordinateSystemAxis const &axis,
                                              Speed const &currentSpeed,
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
  }

  distanceOffset = calculateDistanceOffsetInAccerlatedMovement(currentSpeed, acceleration, resultingResponseTime);

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
                                  Duration const &responseTime,
                                  Acceleration const &acceleration,
                                  Acceleration const &deceleration,
                                  Distance const &distanceToCover,
                                  Duration &requiredTime)
{
  if ((currentSpeed < Speed(0.)) || (deceleration < Acceleration(0.)) || (distanceToCover < Distance(0.)))
  {
    return false;
  }

  bool result = false;

  Distance distanceAfterResponseTime;

  result = calculateDistanceOffsetAfterResponseTime( // LCOV_EXCL_LINE: wrong detection
    CoordinateSystemAxis::Longitudinal,
    currentSpeed,
    acceleration,
    responseTime,
    distanceAfterResponseTime);

  if (result)
  {
    if (distanceAfterResponseTime > distanceToCover)
    {
      result = calculateTimeForDistance(currentSpeed, acceleration, distanceToCover, requiredTime);
    }
    else
    {
      Speed resultingSpeed;

      result = calculateSpeedAfterResponseTime( // LCOV_EXCL_LINE: wrong detection
        CoordinateSystemAxis::Longitudinal,
        currentSpeed,
        acceleration,
        responseTime,
        resultingSpeed);

      Distance stoppingDistance;
      result = result && calculateStoppingDistance(resultingSpeed, deceleration, stoppingDistance);

      if (result)
      {
        if (distanceAfterResponseTime + stoppingDistance > distanceToCover)
        {
          Distance remainingDistance = distanceToCover - distanceAfterResponseTime;

          result = calculateTimeForDistance(resultingSpeed, deceleration, remainingDistance, requiredTime);
          requiredTime += responseTime;
        }
        else
        {
          requiredTime = std::numeric_limits<Duration>::max();
        }
      }
    }
  }

  return result;
}

} // namespace physics
} // namespace ad_rss
