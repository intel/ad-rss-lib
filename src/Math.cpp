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

#include "rss_core/Math.hpp"
#include <algorithm>
#include "rss_core/RSSParameters.hpp"

namespace rss_core {

bool calculateStoppingDistance(Velocity const velocity, Acceleration const deceleration, Distance &stoppingDistance)
{
  if (velocity < 0.)
  {
    return false;
  }

  if (deceleration <= 0.)
  {
    return false;
  }

  if (deceleration > cMaximumBreakingDeceleleration)
  {
    return false;
  }

  if (deceleration < cMinimumBreakingDeceleleration)
  {
    return false;
  }

  /**
   * s = v^2 / 2 *a
   */
  stoppingDistance = (velocity * velocity) / (2.0 * deceleration);
  return true;
}

bool calculateVelocityAfterResponseTime(Velocity const currentVelocity,
                                        Acceleration const acceleration,
                                        Duration const responseTime,
                                        Velocity &resultingVelocity)
{
  if (currentVelocity < 0.)
  {
    return false;
  }

  if (responseTime < 0)
  {
    return false;
  }

  if (acceleration > cMaximumAcceleration)
  {
    return false;
  }

  if (acceleration < -1. * cMaximumBreakingDeceleleration)
  {
    return false;
  }

  // v(t) =v0 + a * t
  resultingVelocity = currentVelocity + acceleration * responseTime;

  // Only deceleration till stop is allowed
  resultingVelocity = std::max(0., resultingVelocity);

  return true;
}

bool calculateDistanceAfterResponseTime(Velocity const currentVelocity,
                                        Acceleration const acceleration,
                                        Duration const responseTime,
                                        Distance &coveredDistance)
{
  if (currentVelocity < 0.)
  {
    return false;
  }

  if (responseTime < 0)
  {
    return false;
  }

  if (acceleration > cMaximumAcceleration)
  {
    return false;
  }

  if (acceleration < -1. * cMaximumBreakingDeceleleration)
  {
    return false;
  }

  Duration resultingResponseTime = responseTime;
  if (acceleration < 0)
  {
    resultingResponseTime = -1. * currentVelocity / acceleration;
    resultingResponseTime = std::min(resultingResponseTime, responseTime);
  }

  // s(t) =(a/2) * t^2 + v0 * t

  coveredDistance
    = acceleration * 0.5 * resultingResponseTime * resultingResponseTime + currentVelocity * resultingResponseTime;

  return true;
}
}
