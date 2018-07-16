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

#include "rss_core/RSSFormulas.hpp"
#include <algorithm>
#include "rss_core/Math.hpp"
#include "rss_core/RSSParameters.hpp"

namespace rss_core {

bool calculateDistanceAfterStatedBreakingPatternOtherVehicle(Velocity const currentVelocity, Distance &coveredDistance)
{
  return calculateDistanceAfterStatedBreakingPattern(currentVelocity, cResponseTimeOtherVehicles, coveredDistance);
}

bool calculateDistanceAfterStatedBreakingPatternEgoVehicle(Velocity const currentVelocity, Distance &coveredDistance)
{
  return calculateDistanceAfterStatedBreakingPattern(currentVelocity, cResponseTimeEgoVehicle, coveredDistance);
}

bool calculateDistanceAfterStatedBreakingPattern(Velocity const currentVelocity,
                                                 Duration const responseTime,
                                                 Distance &coveredDistance)
{
  Velocity resultingVelocity = 0.;
  bool resultCalculateVelocity
    = calculateVelocityAfterResponseTime(currentVelocity, cMaximumAcceleration, responseTime, resultingVelocity);

  if (!resultCalculateVelocity)
  {
    return false;
  }
  bool result = false;

  Distance distanceAfterResponseTime = 0.;
  bool resultCalculateResponseDistance = calculateDistanceAfterResponseTime(
    currentVelocity, cMaximumAcceleration, responseTime, distanceAfterResponseTime);

  Distance distanceToStop = 0.;
  bool resultCaluclateStoppingDistance
    = calculateStoppingDistance(resultingVelocity, cMinimumBreakingDeceleleration, distanceToStop);

  if (resultCalculateResponseDistance && resultCaluclateStoppingDistance)
  {
    coveredDistance = distanceAfterResponseTime + distanceToStop;
    result = true;
  }

  return result;
}

bool calculateSafeLongitudinalDistanceSameDirection(Velocity const egoVelocity,
                                                    Velocity const otherVelocity,
                                                    Distance &safeDistance)
{
  bool result = false;
  Distance distanceStatedBreaking = 0.;
  bool resultStatedBreaking
    = calculateDistanceAfterStatedBreakingPatternEgoVehicle(egoVelocity, distanceStatedBreaking);

  Distance distanceMaxBreak = 0.;
  bool resultStoppingDistance
    = calculateStoppingDistance(otherVelocity, cMaximumBreakingDeceleleration, distanceMaxBreak);

  if (resultStatedBreaking && resultStoppingDistance)
  {
    result = true;
    safeDistance = distanceStatedBreaking - distanceMaxBreak;
    safeDistance = std::max(safeDistance, 0.);
  }
  return result;
}

bool calculateSafeLongitudinalDistanceOppositeDirection(Velocity const egoVelocity,
                                                        Velocity const otherVelocity,
                                                        Distance &safeDistance)
{
  bool result = false;
  Distance distanceStatedBreakingEgo = 0.;
  bool resultStatedBreakingEgo
    = calculateDistanceAfterStatedBreakingPatternEgoVehicle(egoVelocity, distanceStatedBreakingEgo);

  Distance distanceStatedBreakingOther = 0.;
  bool resultStatedBreakingOther
    = calculateDistanceAfterStatedBreakingPatternOtherVehicle(otherVelocity, distanceStatedBreakingOther);

  if (resultStatedBreakingEgo && resultStatedBreakingOther)
  {
    result = true;
    safeDistance = distanceStatedBreakingEgo + distanceStatedBreakingOther;
  }

  return result;
}
}
