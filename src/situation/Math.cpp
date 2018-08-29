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

#include "Math.hpp"
#include <algorithm>

namespace rss {
namespace situation {

inline Distance calculateDistanceOffsetInAccerlatedMovement(Speed const speed,
                                                            Acceleration const acceleration,
                                                            time::Duration const duration)
{
  // s(t) =(a/2) * t^2 + v0 * t
  Distance const distanceOffset = (acceleration * 0.5 * duration * duration) + (speed * duration);
  return distanceOffset;
}

Speed calculateSpeedInAcceleratedMovement(Speed const speed,
                                          Acceleration const acceleration,
                                          time::Duration const duration)
{
  // v(t) =v0 + a * t
  Speed const resultingSpeed = speed + acceleration * duration;
  return resultingSpeed;
}

bool calculateStoppingDistance(Speed const currentSpeed,
                               Acceleration const deceleration,
                               Distance &stoppingDistance) noexcept
{
  if (deceleration <= 0.)
  {
    // deceleration must be positive
    return false;
  }

  // s = v^2 / 2 *a
  // keep the signbit of the current Speed
  stoppingDistance = (currentSpeed * std::fabs(currentSpeed)) / (2.0 * deceleration);
  return true;
}

bool calculateSpeedAfterResponseTime(CoordinateSystemAxis const axis,
                                     Speed const currentSpeed,
                                     Acceleration const acceleration,
                                     time::Duration const responseTime,
                                     Speed &resultingSpeed) noexcept
{
  if (responseTime < 0)
  {
    // time must not be negative
    return false;
  }

  if (axis == CoordinateSystemAxis::Longitudinal)
  {
    // in longitudinal direction the speed has to be always >= 0.
    if (currentSpeed < 0.)
    {
      return false;
    }
  }

  resultingSpeed = calculateSpeedInAcceleratedMovement(currentSpeed, acceleration, responseTime);

  if (axis == CoordinateSystemAxis::Longitudinal)
  {
    // Only deceleration till stop is allowed
    resultingSpeed = std::max(0., resultingSpeed);
  }

  return true;
}

bool calculateDistanceOffsetAfterResponseTime(CoordinateSystemAxis const axis,
                                              Speed const currentSpeed,
                                              Acceleration const acceleration,
                                              time::Duration const responseTime,
                                              Distance &distanceOffset) noexcept
{
  if (responseTime < 0)
  {
    // time must not be negative
    return false;
  }

  time::Duration resultingResponseTime = responseTime;
  if (axis == CoordinateSystemAxis::Longitudinal)
  {
    if (currentSpeed < 0.)
    {
      // in longitudinal direction the speed has to be always >= 0.
      return false;
    }

    if (acceleration < 0)
    {
      // on deceleration restrict the time to the time required to stop
      resultingResponseTime = -1. * currentSpeed / acceleration;
      resultingResponseTime = std::min(resultingResponseTime, responseTime);
    }
  }

  distanceOffset = calculateDistanceOffsetInAccerlatedMovement(currentSpeed, acceleration, resultingResponseTime);

  return true;
}

bool calculateTimeForDistance(Speed const currentSpeed,
                              Acceleration const acceleration,
                              Distance distanceToCover,
                              time::Duration &requiredTime) noexcept
{
  if (currentSpeed < 0)
  {
    return false;
  }

  bool result = true;

  // t = -v_0/a +- sqrt(v_0^2/a^2 + 2s/a)

  double secondPart
    = std::sqrt(((currentSpeed * currentSpeed) / (acceleration * acceleration)) + (2 * distanceToCover / acceleration));

  double firstPart = -1. * currentSpeed / acceleration;

  time::Duration t1 = firstPart + secondPart;
  time::Duration t2 = firstPart - secondPart;

  if (t2 > 0)
  {
    requiredTime = t2;
  }
  else
  {
    requiredTime = t1;
  }

  return result;
}

bool calculateTimeToCoverDistance(Speed const currentSpeed,
                                  time::Duration const responseTime,
                                  Acceleration const acceleration,
                                  Acceleration const deceleration,
                                  Distance distanceToCover,
                                  time::Duration &requiredTime) noexcept
{
  if (currentSpeed < 0)
  {
    return false;
  }

  bool result = false;

  Distance distanceAfterResponseTime;

  result = calculateDistanceOffsetAfterResponseTime(
    CoordinateSystemAxis::Longitudinal, currentSpeed, acceleration, responseTime, distanceAfterResponseTime);

  if (result && distanceAfterResponseTime > distanceToCover)
  {
    result = calculateTimeForDistance(currentSpeed, acceleration, distanceToCover, requiredTime);
  }
  else
  {
    Speed resultingSpeed;

    result &= calculateSpeedAfterResponseTime(
      CoordinateSystemAxis::Longitudinal, currentSpeed, acceleration, responseTime, resultingSpeed);

    Distance stoppingDistance;
    result = calculateStoppingDistance(resultingSpeed, deceleration, stoppingDistance);

    if (distanceAfterResponseTime + stoppingDistance > distanceToCover)
    {
      Distance remainingDistance = distanceToCover - distanceAfterResponseTime;

      result = calculateTimeForDistance(resultingSpeed, deceleration, remainingDistance, requiredTime);
      requiredTime += responseTime;
    }
    else
    {
      requiredTime = std::numeric_limits<double>::infinity();
    }
  }

  return result;
}

} // namespace situation
} // namespace rss
