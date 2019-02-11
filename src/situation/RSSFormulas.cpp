// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "RSSFormulas.hpp"
#include <algorithm>
#include "Vehicle.hpp"
#include "physics/Math.hpp"

// make the code more readable
using namespace ad_rss::physics;

namespace ad_rss {
namespace situation {

bool calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis const axis,
                                                      Speed const currentSpeed,
                                                      Duration const responseTime,
                                                      Acceleration const acceleration,
                                                      Acceleration const deceleration,
                                                      Distance &distanceOffset)
{
  Speed resultingSpeed = 0.;
  bool result = calculateSpeedAfterResponseTime(axis, currentSpeed, acceleration, responseTime, resultingSpeed);

  Distance distanceOffsetAfterResponseTime = 0.;
  result = result && calculateDistanceOffsetAfterResponseTime(
                       axis, currentSpeed, acceleration, responseTime, distanceOffsetAfterResponseTime);

  Distance distanceToStop = 0.;
  if (std::signbit(resultingSpeed) == std::signbit(acceleration))
  {
    // if speed after stated braking pattern has the same direction as the acceleration
    // (always the case in longitudinal situation)
    // further braking to full stop in that moving direction has to be added
    result = result && calculateStoppingDistance(resultingSpeed, std::fabs(deceleration), distanceToStop);
  }

  if (result)
  {
    distanceOffset = distanceOffsetAfterResponseTime + distanceToStop;
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

  Distance distanceStatedBraking = 0.;

  bool result = calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Longitudinal,
                                                                 followingVehicle.velocity.speedLon,
                                                                 followingVehicle.responseTime,
                                                                 followingVehicle.dynamics.alphaLon.accelMax,
                                                                 followingVehicle.dynamics.alphaLon.brakeMin,
                                                                 distanceStatedBraking);
  Distance distanceMaxBrake = 0.;
  result = result && calculateStoppingDistance(
                       leadingVehicle.velocity.speedLon, leadingVehicle.dynamics.alphaLon.brakeMax, distanceMaxBrake);

  if (result)
  {
    safeDistance = distanceStatedBraking - distanceMaxBrake;
    safeDistance = std::max(safeDistance, Distance(0.));
  }

  return result;
}

bool checkSafeLongitudinalDistanceSameDirection(VehicleState const &leadingVehicle,
                                                VehicleState const &followingVehicle,
                                                Distance const &vehicleDistance,
                                                bool &isDistanceSafe)
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

bool calculateSafeLongitudinalDistanceOppositeDirection(VehicleState const &correctVehicle,
                                                        VehicleState const &oppositeVehicle,
                                                        Distance &safeDistance)
{
  if (!checkVehicleState(correctVehicle) || !checkVehicleState(oppositeVehicle))
  {
    return false;
  }

  Distance distanceStatedBrakingCorrect = 0.;

  bool result = calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Longitudinal,
                                                                 correctVehicle.velocity.speedLon,
                                                                 correctVehicle.responseTime,
                                                                 correctVehicle.dynamics.alphaLon.accelMax,
                                                                 correctVehicle.dynamics.alphaLon.brakeMinCorrect,
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

bool checkSafeLongitudinalDistanceOppositeDirection(VehicleState const &correctVehicle,
                                                    VehicleState const &oppositeVehicle,
                                                    Distance const &vehicleDistance,
                                                    bool &isDistanceSafe)
{
  if (vehicleDistance < 0.)
  {
    return false;
  }

  isDistanceSafe = false;

  Distance safeLongitudinalDistance = 0.;
  bool const result
    = calculateSafeLongitudinalDistanceOppositeDirection(correctVehicle, oppositeVehicle, safeLongitudinalDistance);

  if (vehicleDistance > safeLongitudinalDistance)
  {
    isDistanceSafe = true;
  }
  return result;
}

bool checkStopInFrontIntersection(VehicleState const &vehicle, bool &isDistanceSafe)
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
                                  Distance &safeDistance)
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

  result = result && calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Lateral,
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
    safeDistance = std::max(safeDistance, Distance(0.));
  }
  return result;
}

bool checkSafeLateralDistance(VehicleState const &leftVehicle,
                              VehicleState const &rightVehicle,
                              Distance const &vehicleDistance,
                              bool &isDistanceSafe)
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
} // namespace ad_rss
