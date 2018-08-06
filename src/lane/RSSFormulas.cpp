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

namespace rss {
namespace lane {

bool checkVehicleDynamics(Dynamics const &dynamics) noexcept
{
  // acceleration has to be >=0
  if (dynamics.alphaLon.accelMax < 0)
  {
    return false;
  }

  // deceleration has to be > 0
  if ((dynamics.alphaLon.brakeMax <= 0) || (dynamics.alphaLon.brakeMin <= 0)
      || (dynamics.alphaLon.brakeMinCorrect <= 0))
  {
    return false;
  }

  // deceleration has to be ordered properly
  if ((dynamics.alphaLon.brakeMax < dynamics.alphaLon.brakeMin)
      || (dynamics.alphaLon.brakeMin < dynamics.alphaLon.brakeMinCorrect))
  {
    return false;
  }

  // acceleration has to be >=0
  if (dynamics.alphaLat.accelMax < 0)
  {
    return false;
  }

  // deceleration has to be > 0
  if (dynamics.alphaLat.brakeMin <= 0)
  {
    return false;
  }

  return true;
}

bool checkVehicleLongitudinalVelocity(Velocity const &velocity) noexcept
{
  if (velocity.speedLon < 0)
  {
    return false;
  }

  return true;
}

bool checkVehicleLateralVelocity(Velocity const &velocity) noexcept
{
  if (velocity.speedLat < 0)
  {
    return false;
  }

  return true;
}

bool checkVehicleState(VehicleState const &state) noexcept
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

bool isVehicleInFront(lane::VehicleState const &vehicle, lane::VehicleState const &otherVehicle) noexcept
{
  return vehicle.position.lonInterval.minimum > otherVehicle.position.lonInterval.maximum;
}

bool isVehicleLeft(lane::VehicleState const &vehicle, lane::VehicleState const &otherVehicle) noexcept
{
  return vehicle.position.latInterval.maximum < otherVehicle.position.latInterval.minimum;
}

Distance calculateLongitudinalDistanceBetweenVehicles(lane::VehicleState const &vehicle,
                                                      lane::VehicleState const &otherVehicle) noexcept
{
  Distance resultingDistance = 0.;

  if (isVehicleInFront(vehicle, otherVehicle))
  {
    resultingDistance = vehicle.position.lonInterval.minimum - otherVehicle.position.lonInterval.maximum;
  }
  else if (isVehicleInFront(otherVehicle, vehicle))
  {
    resultingDistance = otherVehicle.position.lonInterval.minimum - vehicle.position.lonInterval.maximum;
  }
  else
  {
    // The vehicles overlap
    // not needed, but more descriptive
    resultingDistance = 0.;
  }

  return resultingDistance;
}

Distance calculateLateralDistanceBetweenVehicles(lane::VehicleState const &vehicle,
                                                 lane::VehicleState const &otherVehicle) noexcept
{
  Distance resultingDistance = 0.;

  if (isVehicleLeft(vehicle, otherVehicle))
  {
    resultingDistance = otherVehicle.position.latInterval.minimum - vehicle.position.latInterval.maximum;
  }
  else if (isVehicleLeft(otherVehicle, vehicle))
  {
    resultingDistance = vehicle.position.latInterval.minimum - otherVehicle.position.latInterval.maximum;
  }
  else
  {
    // The vehicles overlap
    // not needed, but more descriptive
    resultingDistance = 0.;
  }

  return resultingDistance;
}

bool calculateDistanceAfterStatedBrakingPattern(Speed const currentSpeed,
                                                time::Duration const responseTime,
                                                Acceleration const acceleration,
                                                Acceleration const deceleration,
                                                Distance &coveredDistance) noexcept
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
                                                    Distance &safeDistance) noexcept
{
  if (!checkVehicleState(leadingVehicle) || !checkVehicleState(followingVehicle))
  {
    return false;
  }

  if (!checkVehicleLongitudinalVelocity(leadingVehicle.velocity)
      || !checkVehicleLongitudinalVelocity(followingVehicle.velocity))
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
                                                bool &isDistanceSafe) noexcept
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

bool calculateSafeLongitudinalDistanceOppositeDirection(bool considerCorrect,
                                                        VehicleState const &correctVehicle,
                                                        VehicleState const &oppositeVehicle,
                                                        Distance &safeDistance) noexcept
{
  bool result = false;

  if (!checkVehicleState(correctVehicle) || !checkVehicleState(oppositeVehicle))
  {
    return false;
  }

  if (!checkVehicleLongitudinalVelocity(correctVehicle.velocity)
      || !checkVehicleLongitudinalVelocity(oppositeVehicle.velocity))
  {
    return false;
  }

  Distance distanceStatedBrakingCorrect = 0.;

  double brakingAcceleration = 0.;
  if (considerCorrect)
  {
    brakingAcceleration = correctVehicle.dynamics.alphaLon.brakeMinCorrect;
  }
  else
  {
    brakingAcceleration = correctVehicle.dynamics.alphaLon.brakeMin;
  }

  result = calculateDistanceAfterStatedBrakingPattern(correctVehicle.velocity.speedLon,
                                                      correctVehicle.responseTime,
                                                      correctVehicle.dynamics.alphaLon.accelMax,
                                                      brakingAcceleration,
                                                      distanceStatedBrakingCorrect);

  Distance distanceStatedBrakingOpposite = 0.;

  if (result)
  {
    result = calculateDistanceAfterStatedBrakingPattern(oppositeVehicle.velocity.speedLon,
                                                        oppositeVehicle.responseTime,
                                                        oppositeVehicle.dynamics.alphaLon.accelMax,
                                                        oppositeVehicle.dynamics.alphaLon.brakeMin,
                                                        distanceStatedBrakingOpposite);
  }

  if (result)
  {
    safeDistance = distanceStatedBrakingCorrect + distanceStatedBrakingOpposite;
  }

  return result;
}

bool checkSafeLongitudinalDistanceOppositeDirection(bool considerCorrect,
                                                    VehicleState const &correctVehicle,
                                                    VehicleState const &oppositeVehicle,
                                                    bool &isDistanceSafe) noexcept
{
  bool result = false;

  isDistanceSafe = false;

  Distance vehicleDistance = calculateLongitudinalDistanceBetweenVehicles(correctVehicle, oppositeVehicle);

  /**
   * One of the vehicle states has negative speed. We assume that it's already checked that the vehicles have an
   * opposite direction
   */
  VehicleState correctVehicleState = correctVehicle;
  correctVehicleState.velocity.speedLon = fabs(correctVehicle.velocity.speedLon);

  VehicleState oppositeVehicleState = oppositeVehicle;
  oppositeVehicleState.velocity.speedLon = fabs(oppositeVehicle.velocity.speedLon);

  Distance safeLongitudinalDistance = 0.;
  result = calculateSafeLongitudinalDistanceOppositeDirection(
    considerCorrect, correctVehicleState, oppositeVehicleState, safeLongitudinalDistance);

  if (vehicleDistance > safeLongitudinalDistance)
  {
    isDistanceSafe = true;
  }

  return result;
}

bool calculateSafeLateralDistance(VehicleState const &vehicle,
                                  VehicleState const &otherVehicle,
                                  Distance &safeDistance) noexcept
{
  if (!checkVehicleState(vehicle) || !checkVehicleState(otherVehicle))
  {
    return false;
  }

  if (!checkVehicleLateralVelocity(vehicle.velocity) || !checkVehicleLateralVelocity(otherVehicle.velocity))
  {
    return false;
  }

  bool result = false;
  Distance distanceStatedBraking = 0.;
  Distance distanceStatedBrakingOther = 0.;

  result = calculateDistanceAfterStatedBrakingPattern(vehicle.velocity.speedLat,
                                                      vehicle.responseTime,
                                                      vehicle.dynamics.alphaLat.accelMax,
                                                      vehicle.dynamics.alphaLat.brakeMin,
                                                      distanceStatedBraking);

  result |= calculateDistanceAfterStatedBrakingPattern(otherVehicle.velocity.speedLat,
                                                       otherVehicle.responseTime,
                                                       otherVehicle.dynamics.alphaLat.accelMax,
                                                       otherVehicle.dynamics.alphaLat.brakeMin,
                                                       distanceStatedBrakingOther);

  if (result)
  {
    // safe distance is the sum of both distances
    // Note: The fluctuation margin is already considered in the vehicle bounding boxes
    safeDistance = distanceStatedBraking + distanceStatedBrakingOther;
    safeDistance = std::max(safeDistance, 0.);
  }
  return result;
}

bool checkSafeLateralDistance(VehicleState const &vehicle,
                              VehicleState const &otherVehicle,
                              bool &isDistanceSafe) noexcept
{
  bool result = false;

  isDistanceSafe = false;

  Distance vehicleDistance = calculateLateralDistanceBetweenVehicles(vehicle, otherVehicle);

  VehicleState vehicleState = vehicle;
  vehicleState.velocity.speedLat = std::fabs(vehicle.velocity.speedLat);

  VehicleState otherVehicleState = otherVehicle;
  otherVehicleState.velocity.speedLat = std::fabs(otherVehicle.velocity.speedLat);

  Distance safeLongitudinalDistance = 0.;
  result = calculateSafeLateralDistance(vehicleState, otherVehicleState, safeLongitudinalDistance);

  if (vehicleDistance > safeLongitudinalDistance)
  {
    isDistanceSafe = true;
  }

  return result;
}

} // namespace lane
} // namespace rss
