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

bool checkVehicleDynamics(lane::Dynamics const &dynamics)
{
  // acceleration must be >=0
  if (dynamics.alphaLon.accelMax < 0)
  {
    return false;
  }

  // deceleration must be > 0
  if (dynamics.alphaLon.brakeMax <= 0 || dynamics.alphaLon.brakeMin <= 0
      || dynamics.alphaLon.brakeMax < dynamics.alphaLon.brakeMin)
  {
    return false;
  }

  // acceleration must be >=0
  if (dynamics.alphaLat.accelMax < 0)
  {
    return false;
  }

  // deceleration must be > 0
  if (dynamics.alphaLat.brakeMax <= 0 || dynamics.alphaLat.brakeMin <= 0
      || dynamics.alphaLat.brakeMax < dynamics.alphaLat.brakeMin)
  {
    return false;
  }
  return true;
}

bool checkVehicleVelocity(lane::Velocity const &velocity)
{
  if (velocity.speedLon < 0)
  {
    return false;
  }

  return true;
}

bool checkVehicleState(lane::VehicleState const &state)
{
  if (!checkVehicleDynamics(state.dynamics))
  {
    return false;
  }

  if (state.responseTime <= 0)
  {
    return false;
  }

  return true;
}

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
    currentSpeed, responseTime, cMaximumAcceleration, cMinimumBreakingDeceleleration, coveredDistance);
}

bool calculateDistanceAfterStatedBreakingPattern(Speed const currentSpeed,
                                                 Duration const responseTime,
                                                 Acceleration const acceleration,
                                                 Acceleration const deceleration,
                                                 Distance &coveredDistance)
{
  Speed resultingSpeed = 0.;
  bool resultCalculateSpeed = calculateSpeedAfterResponseTime(currentSpeed, acceleration, responseTime, resultingSpeed);

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

bool calculateSafeLongitudinalDistanceSameDirection(lane::VehicleState const &leadingVehicle,
                                                    lane::VehicleState const &followingVehicle,
                                                    Distance &safeDistance)
{
  if (!checkVehicleState(leadingVehicle) || !checkVehicleState(followingVehicle))
  {
    return false;
  }

  if (!checkVehicleVelocity(leadingVehicle.velocity) || !checkVehicleVelocity(followingVehicle.velocity))
  {
    return false;
  }

  bool result = false;
  Distance distanceStatedBreaking = 0.;

  bool resultStatedBreaking = calculateDistanceAfterStatedBreakingPattern(followingVehicle.velocity.speedLon,
                                                                          followingVehicle.responseTime,
                                                                          followingVehicle.dynamics.alphaLon.accelMax,
                                                                          followingVehicle.dynamics.alphaLon.brakeMin,
                                                                          distanceStatedBreaking);

  Distance distanceMaxBreak = 0.;
  bool resultStoppingDistance = calculateStoppingDistance(
    leadingVehicle.velocity.speedLon, leadingVehicle.dynamics.alphaLon.brakeMax, distanceMaxBreak);

  if (resultStatedBreaking && resultStoppingDistance)
  {
    result = true;
    safeDistance = distanceStatedBreaking - distanceMaxBreak;
    safeDistance = std::max(safeDistance, 0.);
  }
  return result;
}

bool checkSafeLongitudinalDistanceSameDirection(lane::VehicleState const &leadingVehicle,
                                                lane::VehicleState const &followingVehicle,
                                                bool &isDistanceSafe)
{
  bool result = false;
  isDistanceSafe = false;

  // Vehicle distance can become negativ if the two cars are heads up or the "followingVehicle" is even in front
  // of the "leadingVehicle"
  //@todo do we need a check here to make sure that followingVehicle is not in front of the leadingVehicle?
  lane::Distance vehicleDistance
    = leadingVehicle.position.lonInterval.minimum - followingVehicle.position.lonInterval.maximum;

  lane::Distance safeLongitudinalDistance = 0.;
  result = calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeLongitudinalDistance);

  if (vehicleDistance > safeLongitudinalDistance)
  {
    isDistanceSafe = true;
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
  bool resultStatedBreakingEgo = calculateDistanceAfterStatedBreakingPattern(egoSpeed,
                                                                             cResponseTimeEgoVehicle,
                                                                             cMaximumAcceleration,
                                                                             cMinimumBreakingDecelelerationCorrect,
                                                                             distanceStatedBreakingEgo);

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
  bool resultStatedBreakingOther = calculateDistanceAfterStatedBreakingPattern(otherSpeed,
                                                                               cResponseTimeOtherVehicles,
                                                                               cMaximumAcceleration,
                                                                               cMinimumBreakingDecelelerationCorrect,
                                                                               distanceStatedBreakingOther);

  if (resultStatedBreakingEgo && resultStatedBreakingOther)
  {
    result = true;
    safeDistance = distanceStatedBreakingEgo + distanceStatedBreakingOther;
  }

  return result;
}
}
