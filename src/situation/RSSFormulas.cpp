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
#include "Vehicle.hpp"

namespace rss {
namespace situation {

bool calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis const axis,
                                                      Speed const currentSpeed,
                                                      time::Duration const responseTime,
                                                      Acceleration const acceleration,
                                                      Acceleration const deceleration,
                                                      Distance &distanceOffset) noexcept
{
  Speed resultingSpeed = 0.;
  bool result = calculateSpeedAfterResponseTime(axis, currentSpeed, acceleration, responseTime, resultingSpeed);

  Distance distanceOffsetAfterResponseTime = 0.;
  result &= calculateDistanceOffsetAfterResponseTime(
    axis, currentSpeed, acceleration, responseTime, distanceOffsetAfterResponseTime);

  Distance distanceToStop = 0.;
  if (std::signbit(resultingSpeed) == std::signbit(acceleration))
  {
    // if speed after stated braking pattern has the same direction than the acceleration
    // (always the case in longitudinal situation)
    // further braking to full stop in that moving direction has to be added
    result &= calculateStoppingDistance(resultingSpeed, std::fabs(deceleration), distanceToStop);
  }

  if (result)
  {
    distanceOffset = distanceOffsetAfterResponseTime + distanceToStop;
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

  Distance distanceStatedBraking = 0.;

  bool result = calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Longitudinal,
                                                                 followingVehicle.velocity.speedLon,
                                                                 followingVehicle.responseTime,
                                                                 followingVehicle.dynamics.alphaLon.accelMax,
                                                                 followingVehicle.dynamics.alphaLon.brakeMin,
                                                                 distanceStatedBraking);
  Distance distanceMaxBrake = 0.;
  result &= calculateStoppingDistance(
    leadingVehicle.velocity.speedLon, leadingVehicle.dynamics.alphaLon.brakeMax, distanceMaxBrake);

  if (result)
  {
    safeDistance = distanceStatedBraking - distanceMaxBrake;
    safeDistance = std::max(safeDistance, 0.);
  }

  return result;
}

bool checkSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                VehicleState const &followingVehicle,
                                                Distance const &vehicleDistance,
                                                bool &isDistanceSafe) noexcept
{
  if (vehicleDistance < 0.)
  {
    return false;
  }

  isDistanceSafe = false;

  Distance safeLongitudinalDistance = 0.;
  bool const result
    = calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeLongitudinalDistance);

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
  if (!checkVehicleState(correctVehicle) || !checkVehicleState(oppositeVehicle))
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

  bool result = calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Longitudinal,
                                                                 correctVehicle.velocity.speedLon,
                                                                 correctVehicle.responseTime,
                                                                 correctVehicle.dynamics.alphaLon.accelMax,
                                                                 brakingAcceleration,
                                                                 distanceStatedBrakingCorrect);

  Distance distanceStatedBrakingOpposite = 0.;

  if (result)
  {
    result = calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Longitudinal,
                                                              oppositeVehicle.velocity.speedLon,
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
                                                    Distance const &vehicleDistance,
                                                    bool &isDistanceSafe) noexcept
{
  if (vehicleDistance < 0.)
  {
    return false;
  }

  isDistanceSafe = false;

  Distance safeLongitudinalDistance = 0.;
  bool const result = calculateSafeLongitudinalDistanceOppositeDirection(
    considerCorrect, correctVehicle, oppositeVehicle, safeLongitudinalDistance);

  if (vehicleDistance > safeLongitudinalDistance)
  {
    isDistanceSafe = true;
  }
  return result;
}

bool checkStopInFrontIntersection(VehicleState const &vehicle, bool &isDistanceSafe) noexcept
{
  if (!checkVehicleState(vehicle))
  {
    return false;
  }

  isDistanceSafe = false;

  Distance distanceStatedBraking = 0.;
  bool result = calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Longitudinal,
                                                                 vehicle.velocity.speedLon,
                                                                 vehicle.responseTime,
                                                                 vehicle.dynamics.alphaLon.accelMax,
                                                                 vehicle.dynamics.alphaLon.brakeMin,
                                                                 distanceStatedBraking);

  if (distanceStatedBraking < vehicle.distanceToEnterIntersection)
  {
    isDistanceSafe = true;
  }

  return result;
}

bool calculateSafeLateralDistance(VehicleState const &leftVehicle,
                                  VehicleState const &rightVehicle,
                                  Distance &safeDistance) noexcept
{
  if (!checkVehicleState(leftVehicle) || !checkVehicleState(rightVehicle))
  {
    return false;
  }

  bool result = false;
  Distance distanceOffsetStatedBrakingLeft = 0.;
  Distance distanceOffsetStatedBrakingRight = 0.;

  result = calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Lateral,
                                                            leftVehicle.velocity.speedLat,
                                                            leftVehicle.responseTime,
                                                            leftVehicle.dynamics.alphaLat.accelMax,
                                                            leftVehicle.dynamics.alphaLat.brakeMin,
                                                            distanceOffsetStatedBrakingLeft);

  result &= calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Lateral,
                                                             rightVehicle.velocity.speedLat,
                                                             rightVehicle.responseTime,
                                                             -rightVehicle.dynamics.alphaLat.accelMax,
                                                             -rightVehicle.dynamics.alphaLat.brakeMin,
                                                             distanceOffsetStatedBrakingRight);

  if (result)
  {
    // safe distance is the difference of both distances
    // Note: The fluctuation margin is already considered in the vehicle bounding boxes
    safeDistance = distanceOffsetStatedBrakingLeft - distanceOffsetStatedBrakingRight;
    safeDistance = std::max(safeDistance, 0.);
  }
  return result;
}

bool checkSafeLateralDistance(VehicleState const &leftVehicle,
                              VehicleState const &rightVehicle,
                              Distance const &vehicleDistance,
                              bool &isDistanceSafe) noexcept
{
  if (vehicleDistance < 0.)
  {
    return false;
  }

  isDistanceSafe = false;

  Distance safeLongitudinalDistance = 0.;
  bool const result = calculateSafeLateralDistance(leftVehicle, rightVehicle, safeLongitudinalDistance);

  if (vehicleDistance > safeLongitudinalDistance)
  {
    isDistanceSafe = true;
  }

  return result;
}

} // namespace situation
} // namespace rss
