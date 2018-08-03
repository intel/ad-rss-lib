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
namespace lane {

bool calculateStoppingDistance(Speed const speed, Acceleration const deceleration, Distance &stoppingDistance) noexcept
{
  if (speed < 0.)
  {
    return false;
  }

  if (deceleration <= 0.)
  {
    return false;
  }

  /**
   * s = v^2 / 2 *a
   */
  stoppingDistance = (speed * speed) / (2.0 * deceleration);
  return true;
}

bool calculateSpeedAfterResponseTime(Speed const currentSpeed,
                                     Acceleration const acceleration,
                                     time::Duration const responseTime,
                                     Speed &resultingSpeed) noexcept
{
  if (currentSpeed < 0.)
  {
    return false;
  }

  if (responseTime < 0)
  {
    return false;
  }

  // v(t) =v0 + a * t
  resultingSpeed = currentSpeed + acceleration * responseTime;

  // Only deceleration till stop is allowed
  resultingSpeed = std::max(0., resultingSpeed);

  return true;
}

bool calculateDistanceAfterResponseTime(Speed const currentSpeed,
                                        Acceleration const acceleration,
                                        time::Duration const responseTime,
                                        Distance &coveredDistance) noexcept
{
  if (currentSpeed < 0.)
  {
    return false;
  }

  if (responseTime < 0)
  {
    return false;
  }

  time::Duration resultingResponseTime = responseTime;
  if (acceleration < 0)
  {
    resultingResponseTime = -1. * currentSpeed / acceleration;
    resultingResponseTime = std::min(resultingResponseTime, responseTime);
  }

  // s(t) =(a/2) * t^2 + v0 * t

  coveredDistance
    = (acceleration * 0.5 * resultingResponseTime * resultingResponseTime) + (currentSpeed * resultingResponseTime);

  return true;
}

} // namespace lane
} // namespace rss
