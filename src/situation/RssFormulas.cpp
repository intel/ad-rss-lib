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

#include "RssFormulas.hpp"
#include <algorithm>
#include "Math.hpp"
#include "ad/rss/situation/VehicleStateValidInputRange.hpp"

namespace ad {

namespace rss {
namespace situation {

// make the code more readable
using physics::Acceleration;
using physics::Distance;
using physics::Duration;
using physics::Speed;
using situation::CoordinateSystemAxis;
using situation::calculateStoppingDistance;

inline bool vehicleStateWithinVaildInputRange(VehicleState const &vehicleState)
{
  if (!withinValidInputRange(vehicleState))
  {
    return false;
  }
  if (vehicleState.velocity.speedLon.minimum < Speed(0.))
  {
    return false;
  }
  return true;
}

bool calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis const &axis,
                                                      Speed const &currentSpeed,
                                                      Duration const &responseTime,
                                                      Acceleration const &acceleration,
                                                      Acceleration const &deceleration,
                                                      Distance &distanceOffset)
{
  Speed resultingSpeed = Speed(0.);
  bool result = calculateSpeedAfterResponseTime(axis, currentSpeed, acceleration, responseTime, resultingSpeed);

  Distance distanceOffsetAfterResponseTime = Distance(0.);
  result = result && calculateDistanceOffsetAfterResponseTime(
                       axis, currentSpeed, acceleration, responseTime, distanceOffsetAfterResponseTime);

  Distance distanceToStop = Distance(0.);
  if (std::signbit(static_cast<double>(resultingSpeed)) == std::signbit(static_cast<double>(acceleration)))
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
  if (!vehicleStateWithinVaildInputRange(leadingVehicle) || !vehicleStateWithinVaildInputRange(followingVehicle))
  {
    return false;
  }

  Distance distanceStatedBraking = Distance(0.);

  bool result = calculateDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
    CoordinateSystemAxis::Longitudinal,
    followingVehicle.velocity.speedLon.maximum,
    followingVehicle.dynamics.responseTime,
    followingVehicle.dynamics.alphaLon.accelMax,
    followingVehicle.dynamics.alphaLon.brakeMin,
    distanceStatedBraking);
  Distance distanceMaxBrake = Distance(0.);
  result = result && calculateStoppingDistance(leadingVehicle.velocity.speedLon.minimum,
                                               leadingVehicle.dynamics.alphaLon.brakeMax,
                                               distanceMaxBrake);

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
                                                Distance &safeDistance,
                                                bool &isDistanceSafe)
{
  if (vehicleDistance < Distance(0.))
  {
    return false;
  }

  isDistanceSafe = false;
  safeDistance = std::numeric_limits<physics::Distance>::max();

  bool const result = calculateSafeLongitudinalDistanceSameDirection(leadingVehicle, followingVehicle, safeDistance);

  if (vehicleDistance > safeDistance)
  {
    isDistanceSafe = true;
  }
  return result;
}

bool calculateSafeLongitudinalDistanceOppositeDirection(VehicleState const &correctVehicle,
                                                        VehicleState const &oppositeVehicle,
                                                        Distance &safeDistance)
{
  if (!vehicleStateWithinVaildInputRange(correctVehicle) || !vehicleStateWithinVaildInputRange(oppositeVehicle))
  {
    return false;
  }

  Distance distanceStatedBrakingCorrect = Distance(0.);

  bool result = calculateDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
    CoordinateSystemAxis::Longitudinal,
    correctVehicle.velocity.speedLon.maximum,
    correctVehicle.dynamics.responseTime,
    correctVehicle.dynamics.alphaLon.accelMax,
    correctVehicle.dynamics.alphaLon.brakeMinCorrect,
    distanceStatedBrakingCorrect);

  Distance distanceStatedBrakingOpposite = Distance(0.);

  if (result)
  {
    result = calculateDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
      CoordinateSystemAxis::Longitudinal,
      oppositeVehicle.velocity.speedLon.maximum,
      oppositeVehicle.dynamics.responseTime,
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
                                                    Distance &safeDistance,
                                                    bool &isDistanceSafe)
{
  if (vehicleDistance < Distance(0.))
  {
    return false;
  }

  isDistanceSafe = false;
  safeDistance = std::numeric_limits<physics::Distance>::max();
  bool const result = calculateSafeLongitudinalDistanceOppositeDirection(correctVehicle, oppositeVehicle, safeDistance);

  if (vehicleDistance > safeDistance)
  {
    isDistanceSafe = true;
  }
  return result;
}

bool checkStopInFrontIntersection(VehicleState const &vehicle, Distance &safeDistance, bool &isDistanceSafe)
{
  if (!vehicleStateWithinVaildInputRange(vehicle))
  {
    return false;
  }

  isDistanceSafe = false;

  safeDistance = Distance(0.);
  bool result = calculateDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
    CoordinateSystemAxis::Longitudinal,
    vehicle.velocity.speedLon.maximum,
    vehicle.dynamics.responseTime,
    vehicle.dynamics.alphaLon.accelMax,
    vehicle.dynamics.alphaLon.brakeMin,
    safeDistance);

  if (safeDistance < vehicle.distanceToEnterIntersection)
  {
    isDistanceSafe = true;
  }

  return result;
}

bool calculateSafeLateralDistance(VehicleState const &leftVehicle,
                                  VehicleState const &rightVehicle,
                                  Distance &safeDistance)
{
  if (!vehicleStateWithinVaildInputRange(leftVehicle) || !vehicleStateWithinVaildInputRange(rightVehicle))
  {
    return false;
  }

  bool result = false;
  Distance distanceOffsetStatedBrakingLeft = Distance(0.);
  Distance distanceOffsetStatedBrakingRight = Distance(0.);

  result = calculateDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
    CoordinateSystemAxis::Lateral,
    leftVehicle.velocity.speedLat.maximum,
    leftVehicle.dynamics.responseTime,
    leftVehicle.dynamics.alphaLat.accelMax,
    leftVehicle.dynamics.alphaLat.brakeMin,
    distanceOffsetStatedBrakingLeft);

  result = result && calculateDistanceOffsetAfterStatedBrakingPattern( // LCOV_EXCL_LINE: wrong detection
                       CoordinateSystemAxis::Lateral,
                       rightVehicle.velocity.speedLat.minimum,
                       rightVehicle.dynamics.responseTime,
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
                              Distance &safeDistance,
                              bool &isDistanceSafe)
{
  if (vehicleDistance < Distance(0.))
  {
    return false;
  }

  isDistanceSafe = false;
  safeDistance = std::numeric_limits<physics::Distance>::max();
  bool const result = calculateSafeLateralDistance(leftVehicle, rightVehicle, safeDistance);

  if (vehicleDistance > safeDistance)
  {
    isDistanceSafe = true;
  }

  return result;
}

} // namespace situation
} // namespace rss
} // namespace ad
