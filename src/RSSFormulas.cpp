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

bool calculateDistanceAfterStatedBreakingPatternOtherVehicle(Speed const currentSpeed, Distance &coveredDistance)
{
  return calculateDistanceAfterStatedBreakingPattern(currentSpeed, cResponseTimeOtherVehicles, coveredDistance);
}

bool calculateDistanceAfterStatedBreakingPatternEgoVehicle(Speed const currentSpeed, Distance &coveredDistance)
{
  return calculateDistanceAfterStatedBreakingPattern(currentSpeed, cResponseTimeEgoVehicle, coveredDistance);
}

bool calculateDistanceAfterStatedBreakingPattern(Speed const currentSpeed,
                                                 Duration const responseTime,
                                                 Distance &coveredDistance)
{
  return calculateDistanceAfterStatedBreakingPattern(
    currentSpeed, responseTime, cMinimumBreakingDeceleleration, coveredDistance);
}

bool calculateDistanceAfterStatedBreakingPattern(Speed const currentSpeed,
                                                 Duration const responseTime,
                                                 Acceleration const deceleration,
                                                 Distance &coveredDistance)
{
  Speed resultingSpeed = 0.;
  bool resultCalculateSpeed
    = calculateSpeedAfterResponseTime(currentSpeed, cMaximumAcceleration, responseTime, resultingSpeed);

  if (!resultCalculateSpeed)
  {
    return false;
  }
  bool result = false;

  Distance distanceAfterResponseTime = 0.;
  bool resultCalculateResponseDistance
    = calculateDistanceAfterResponseTime(currentSpeed, cMaximumAcceleration, responseTime, distanceAfterResponseTime);

  Distance distanceToStop = 0.;
  bool resultCaluclateStoppingDistance = calculateStoppingDistance(resultingSpeed, deceleration, distanceToStop);

  if (resultCalculateResponseDistance && resultCaluclateStoppingDistance)
  {
    coveredDistance = distanceAfterResponseTime + distanceToStop;
    result = true;
  }

  return result;
}

bool calculateSafeLongitudinalDistanceSameDirectionLeadingOther(Speed const egoSpeed,
                                                                Speed const otherSpeed,
                                                                Distance &safeDistance)
{
  bool result = false;
  Distance distanceStatedBreaking = 0.;
  bool resultStatedBreaking = calculateDistanceAfterStatedBreakingPatternEgoVehicle(egoSpeed, distanceStatedBreaking);

  Distance distanceMaxBreak = 0.;
  bool resultStoppingDistance = calculateStoppingDistance(otherSpeed, cMaximumBreakingDeceleleration, distanceMaxBreak);

  if (resultStatedBreaking && resultStoppingDistance)
  {
    result = true;
    safeDistance = distanceStatedBreaking - distanceMaxBreak;
    safeDistance = std::max(safeDistance, 0.);
  }
  return result;
}

bool calculateSafeLongitudinalDistanceSameDirectionLeadingEgo(Speed const egoSpeed,
                                                              Speed const otherSpeed,
                                                              Distance &safeDistance)
{
  bool result = false;
  Distance distanceStatedBreaking = 0.;
  bool resultStatedBreaking
    = calculateDistanceAfterStatedBreakingPatternOtherVehicle(otherSpeed, distanceStatedBreaking);

  Distance distanceMaxBreak = 0.;
  bool resultStoppingDistance = calculateStoppingDistance(egoSpeed, cMaximumBreakingDeceleleration, distanceMaxBreak);

  if (resultStatedBreaking && resultStoppingDistance)
  {
    result = true;
    safeDistance = distanceStatedBreaking - distanceMaxBreak;
    safeDistance = std::max(safeDistance, 0.);
  }
  return result;
}

bool calculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane(Speed const egoSpeed,
                                                                     Speed const otherSpeed,
                                                                     Distance &safeDistance)
{
  bool result = false;
  Distance distanceStatedBreakingEgo = 0.;
  bool resultStatedBreakingEgo = calculateDistanceAfterStatedBreakingPattern(
    egoSpeed, cResponseTimeEgoVehicle, cMinimumBreakingDecelelerationCorrect, distanceStatedBreakingEgo);

  Distance distanceStatedBreakingOther = 0.;
  bool resultStatedBreakingOther
    = calculateDistanceAfterStatedBreakingPatternOtherVehicle(otherSpeed, distanceStatedBreakingOther);

  if (resultStatedBreakingEgo && resultStatedBreakingOther)
  {
    result = true;
    safeDistance = distanceStatedBreakingEgo + distanceStatedBreakingOther;
  }

  return result;
}

bool calculateSafeLongitudinalDistanceOppositeDirectionOnOppositeLane(Speed const egoSpeed,
                                                                      Speed const otherSpeed,
                                                                      Distance &safeDistance)
{
  bool result = false;
  Distance distanceStatedBreakingEgo = 0.;
  bool resultStatedBreakingEgo
    = calculateDistanceAfterStatedBreakingPatternEgoVehicle(egoSpeed, distanceStatedBreakingEgo);

  Distance distanceStatedBreakingOther = 0.;
  bool resultStatedBreakingOther = calculateDistanceAfterStatedBreakingPattern(
    otherSpeed, cResponseTimeOtherVehicles, cMinimumBreakingDecelelerationCorrect, distanceStatedBreakingOther);

  if (resultStatedBreakingEgo && resultStatedBreakingOther)
  {
    result = true;
    safeDistance = distanceStatedBreakingEgo + distanceStatedBreakingOther;
  }

  return result;
}
}
