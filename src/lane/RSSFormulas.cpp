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

#include "RSSFormulas.hpp"
#include <algorithm>
#include "Math.hpp"
#include "RSSParameters.hpp"

namespace rss {
namespace lane {

bool checkVehicleDynamics(Dynamics const &dynamics)
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

bool checkVehicleVelocity(Velocity const &velocity)
{
  if (velocity.speedLon < 0)
  {
    return false;
  }

  return true;
}

bool checkVehicleState(VehicleState const &state)
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

bool calculateDistanceAfterStatedBrakingPatternOtherVehicle(Speed const currentSpeed, Distance &coveredDistance)
{
  return calculateDistanceAfterStatedBrakingPattern(currentSpeed, cResponseTimeOtherVehicles, coveredDistance);
}

bool calculateDistanceAfterStatedBrakingPatternEgoVehicle(Speed const currentSpeed, Distance &coveredDistance)
{
  return calculateDistanceAfterStatedBrakingPattern(currentSpeed, cResponseTimeEgoVehicle, coveredDistance);
}

bool calculateDistanceAfterStatedBrakingPattern(Speed const currentSpeed,
                                                time::Duration const responseTime,
                                                Distance &coveredDistance)
{
  return calculateDistanceAfterStatedBrakingPattern(
    currentSpeed, responseTime, cMaximumAcceleration, cMinimumBrakingDeceleleration, coveredDistance);
}

bool calculateDistanceAfterStatedBrakingPattern(Speed const currentSpeed,
                                                time::Duration const responseTime,
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
    = calculateDistanceAfterResponseTime(currentSpeed, acceleration, responseTime, distanceAfterResponseTime);

  Distance distanceToStop = 0.;
  bool resultCaluclateStoppingDistance = calculateStoppingDistance(resultingSpeed, deceleration, distanceToStop);

  if (resultCalculateResponseDistance && resultCaluclateStoppingDistance)
  {
    coveredDistance = distanceAfterResponseTime + distanceToStop;
    result = true;
  }

  return result;
}

bool calculateSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                    VehicleState const &followingVehicle,
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
  Distance distanceStatedBraking = 0.;

  bool resultStatedBraking = calculateDistanceAfterStatedBrakingPattern(followingVehicle.velocity.speedLon,
                                                                        followingVehicle.responseTime,
                                                                        followingVehicle.dynamics.alphaLon.accelMax,
                                                                        followingVehicle.dynamics.alphaLon.brakeMin,
                                                                        distanceStatedBraking);

  Distance distanceMaxBrake = 0.;
  bool resultStoppingDistance = calculateStoppingDistance(
    leadingVehicle.velocity.speedLon, leadingVehicle.dynamics.alphaLon.brakeMax, distanceMaxBrake);

  if (resultStatedBraking && resultStoppingDistance)
  {
    result = true;
    safeDistance = distanceStatedBraking - distanceMaxBrake;
    safeDistance = std::max(safeDistance, 0.);
  }
  return result;
}

bool checkSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                VehicleState const &followingVehicle,
                                                bool &isDistanceSafe)
{
  bool result = false;
  isDistanceSafe = false;

  // Vehicle distance can become negativ if the two cars are heads up or the "followingVehicle" is even in front
  // of the "leadingVehicle"
  //@todo do we need a check here to make sure that followingVehicle is not in front of the leadingVehicle?
  Distance vehicleDistance
    = leadingVehicle.position.lonInterval.minimum - followingVehicle.position.lonInterval.maximum;

  Distance safeLongitudinalDistance = 0.;
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
  Distance distanceStatedBraking = 0.;
  bool resultStatedBraking = calculateDistanceAfterStatedBrakingPatternOtherVehicle(otherSpeed, distanceStatedBraking);

  Distance distanceMaxBrake = 0.;
  bool resultStoppingDistance = calculateStoppingDistance(egoSpeed, cMaximumBrakingDeceleleration, distanceMaxBrake);

  if (resultStatedBraking && resultStoppingDistance)
  {
    result = true;
    safeDistance = distanceStatedBraking - distanceMaxBrake;
    safeDistance = std::max(safeDistance, 0.);
  }
  return result;
}

bool calculateSafeLongitudinalDistanceOppositeDirectionOnCorrectLane(Speed const egoSpeed,
                                                                     Speed const otherSpeed,
                                                                     Distance &safeDistance)
{
  bool result = false;
  Distance distanceStatedBrakingEgo = 0.;
  bool resultStatedBrakingEgo = calculateDistanceAfterStatedBrakingPattern(egoSpeed,
                                                                           cResponseTimeEgoVehicle,
                                                                           cMaximumAcceleration,
                                                                           cMinimumBrakingDecelelerationCorrect,
                                                                           distanceStatedBrakingEgo);

  Distance distanceStatedBrakingOther = 0.;
  bool resultStatedBrakingOther
    = calculateDistanceAfterStatedBrakingPatternOtherVehicle(otherSpeed, distanceStatedBrakingOther);

  if (resultStatedBrakingEgo && resultStatedBrakingOther)
  {
    result = true;
    safeDistance = distanceStatedBrakingEgo + distanceStatedBrakingOther;
  }

  return result;
}

bool calculateSafeLongitudinalDistanceOppositeDirectionOnOppositeLane(Speed const egoSpeed,
                                                                      Speed const otherSpeed,
                                                                      Distance &safeDistance)
{
  bool result = false;
  Distance distanceStatedBrakingEgo = 0.;
  bool resultStatedBrakingEgo
    = calculateDistanceAfterStatedBrakingPatternEgoVehicle(egoSpeed, distanceStatedBrakingEgo);

  Distance distanceStatedBrakingOther = 0.;
  bool resultStatedBrakingOther = calculateDistanceAfterStatedBrakingPattern(otherSpeed,
                                                                             cResponseTimeOtherVehicles,
                                                                             cMaximumAcceleration,
                                                                             cMinimumBrakingDecelelerationCorrect,
                                                                             distanceStatedBrakingOther);

  if (resultStatedBrakingEgo && resultStatedBrakingOther)
  {
    result = true;
    safeDistance = distanceStatedBrakingEgo + distanceStatedBrakingOther;
  }

  return result;
}

} // namespace lane
} // namespace rss
