// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#include "TrajectoryVehicle.hpp"
#include <ad/physics/Operation.hpp>
#include <algorithm>
#include <chrono>
#include "ad/rss/unstructured/DebugDrawing.hpp"
/*!
 * @brief namespace ad
 */
namespace ad {
/*!
 * @brief namespace rss
 */
namespace rss {
/*!
 * @brief namespace unstructured
 */
namespace unstructured {

bool TrajectoryVehicle::calculateTrajectorySets(situation::VehicleState const &vehicleState,
                                                Polygon &brakePolygon,
                                                Polygon &continueForwardPolygon)
{
  ad::physics::Duration timeToStop;
  auto result = situation::calculateTimeToStop(vehicleState.objectState.speed,
                                               vehicleState.dynamics.responseTime,
                                               vehicleState.dynamics.maxSpeedOnAcceleration,
                                               vehicleState.dynamics.alphaLon.accelMax,
                                               vehicleState.dynamics.alphaLon.brakeMin,
                                               timeToStop);

  TrajectorySetStep responseTimeFrontSide;
  TrajectorySetStep responseTimeBackSide;
  if (result)
  {
    result = getResponseTimeTrajectoryPoints(vehicleState, responseTimeFrontSide, responseTimeBackSide);
    if (!result)
    {
      spdlog::debug("TrajectoryVehicle::calculateTrajectorySets>> Could not calculate reponse time trajectory points.");
    }
    else
    {
      spdlog::trace("Trajectory points at response time: front left {}, front right {}, back left {}, back right {}",
                    responseTimeFrontSide.left.size(),
                    responseTimeFrontSide.right.size(),
                    responseTimeBackSide.left.size(),
                    responseTimeBackSide.right.size());
    }
  }

  TrajectorySetStepVehicleLocation brakeMinStepVehicleLocations;
  auto timeAfterResponseTime = timeToStop - vehicleState.dynamics.responseTime;
  if (result)
  {
    result = calculateBrake(vehicleState,
                            timeAfterResponseTime,
                            responseTimeFrontSide,
                            responseTimeBackSide,
                            brakePolygon,
                            brakeMinStepVehicleLocations);
    if (!result)
    {
      spdlog::debug("TrajectoryVehicle::calculateTrajectorySets>> calculateBrake() failed.");
    }
  }

  if (result)
  {
    result = calculateContinueForward(vehicleState,
                                      timeAfterResponseTime,
                                      responseTimeFrontSide,
                                      brakePolygon,
                                      brakeMinStepVehicleLocations,
                                      continueForwardPolygon);
    if (!result)
    {
      // fallback
      spdlog::warn("TrajectoryVehicle::calculateTrajectorySets>> calculateContinueForward() failed. Use brakePolygon "
                   "as fallback.");
      result = true;
      continueForwardPolygon = brakePolygon;
    }
  }
  DEBUG_DRAWING_POLYGON(brakePolygon, "red", "vehicle_brake");
  DEBUG_DRAWING_POLYGON(continueForwardPolygon, "green", "vehicle_continue_forward");
  return result;
}

ad::physics::AngularVelocity
TrajectoryVehicle::calculateYawRate(ad::physics::AngularVelocity const &yawRate,
                                    ad::physics::Duration const &timeInMovement,
                                    ad::physics::AngularAcceleration const &maxYawRateChange,
                                    ad::physics::RatioValue const &ratio) const
{
  return yawRate + maxYawRateChange * timeInMovement * ratio;
}

bool TrajectoryVehicle::getResponseTimeTrajectoryPoints(situation::VehicleState const &vehicleState,
                                                        TrajectorySetStep &frontSide,
                                                        TrajectorySetStep &backSide) const
{
  //-------------
  // back
  //-------------
  auto ratioDiffBack = physics::RatioValue(
    2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps + 2.0));
  backSide.left.reserve(vehicleState.dynamics.unstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps + 1);
  backSide.right.reserve(vehicleState.dynamics.unstructuredSettings.vehicleBackIntermediateYawRateChangeRatioSteps + 1);
  auto result
    = getResponseTimeTrajectoryPoints(vehicleState, vehicleState.dynamics.alphaLon.accelMax, ratioDiffBack, backSide);

  //-------------
  // front
  //-------------
  if (result)
  {
    auto ratioDiffFront = physics::RatioValue(
      2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps + 2.0));
    frontSide.left.reserve(vehicleState.dynamics.unstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
                           + 1);
    frontSide.right.reserve(vehicleState.dynamics.unstructuredSettings.vehicleFrontIntermediateYawRateChangeRatioSteps
                            + 1);
    result = getResponseTimeTrajectoryPoints(
      vehicleState, vehicleState.dynamics.alphaLon.accelMax, ratioDiffFront, frontSide);
  }
  return result;
}

bool TrajectoryVehicle::getResponseTimeTrajectoryPoints(situation::VehicleState const &vehicleState,
                                                        physics::Acceleration const &acceleration,
                                                        physics::RatioValue const &ratioDiff,
                                                        TrajectorySetStep &step) const
{
  physics::Duration timeInMovementUntilResponseTime = vehicleState.dynamics.responseTime;
  auto result = getTimeInMovement(vehicleState.objectState.speed, acceleration, timeInMovementUntilResponseTime);

  // right
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue < physics::RatioValue(0.0)) && result;
       ratioValue += ratioDiff)
  {
    auto currentPoint = TrajectoryPoint(vehicleState);
    TrajectoryPoint pt;
    result = calculateTrajectoryPoint(
      currentPoint, vehicleState.dynamics, timeInMovementUntilResponseTime, acceleration, ratioValue, pt);
    step.right.push_back(pt);
  }

  // left
  for (auto ratioValue = ratioDiff; (ratioValue <= physics::RatioValue(1.0)) && result; ratioValue += ratioDiff)
  {
    auto currentPoint = TrajectoryPoint(vehicleState);
    TrajectoryPoint pt;
    result = calculateTrajectoryPoint(
      currentPoint, vehicleState.dynamics, timeInMovementUntilResponseTime, acceleration, ratioValue, pt);
    step.left.push_back(pt);
  }

  // center
  if (result)
  {
    result = calculateTrajectoryPoint(TrajectoryPoint(vehicleState),
                                      vehicleState.dynamics,
                                      timeInMovementUntilResponseTime,
                                      acceleration,
                                      physics::RatioValue(0.),
                                      step.center);
  }

  return result;
}

bool TrajectoryVehicle::getTimeInMovement(ad::physics::Speed const &speed,
                                          ad::physics::Acceleration const &acceleration,
                                          ad::physics::Duration &timeInMovement) const
{
  auto result = true;
  if (acceleration < physics::Acceleration(0.))
  {
    if (speed == physics::Speed(0.))
    {
      timeInMovement = physics::Duration(0.);
    }
    else
    {
      physics::Duration timeToStop;
      result
        = situation::calculateTimeToStop(speed, physics::Duration(0.), speed, acceleration, acceleration, timeToStop);

      timeInMovement = std::min(timeInMovement, timeToStop);
    }
  }
  return result;
}

bool TrajectoryVehicle::calculateTrajectoryPoint(TrajectoryPoint const &currentPoint,
                                                 world::RssDynamics const &dynamics,
                                                 ad::physics::Duration const &duration,
                                                 ad::physics::Acceleration const &acceleration,
                                                 ad::physics::RatioValue const &yawRateChangeRatio,
                                                 TrajectoryPoint &resultTrajectoryPoint) const
{
  auto result = true;
  resultTrajectoryPoint = currentPoint;

  auto currentTime = ad::physics::Duration(0.0);

  while ((currentTime < duration) && result)
  {
    auto timeStep = dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep;
    if (duration >= currentTime + dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)
    {
      currentTime += dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep;
    }
    else
    {
      currentTime = duration;
      timeStep = physics::Duration(
        std::fmod(static_cast<double>(duration),
                  static_cast<double>(dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)));
    }

    resultTrajectoryPoint.yawRate = calculateYawRate(
      currentPoint.yawRate, currentTime, dynamics.unstructuredSettings.vehicleYawRateChange, yawRateChangeRatio);

    result = calculateTrajectoryPointOnCircle(resultTrajectoryPoint, acceleration, timeStep, dynamics);
  }

  return result;
}

bool TrajectoryVehicle::calculateTrajectoryPointOnCircle(TrajectoryPoint &currentPoint,
                                                         physics::Acceleration const &acceleration,
                                                         physics::Duration const &duration,
                                                         ::ad::rss::world::RssDynamics const &dynamics) const
{
  ad::physics::Distance currentDistance;
  physics::Speed finalSpeed;

  if (duration == physics::Duration(0.))
  {
    return true;
  }

  auto result = situation::calculateAcceleratedLimitedMovement(
    currentPoint.speed, dynamics.maxSpeedOnAcceleration, acceleration, duration, finalSpeed, currentDistance);
  if (!result)
  {
    spdlog::debug(
      "TrajectoryVehicle::calculateTrajectoryPointOnCircle>> calculateAcceleratedLimitedMovement() failed.");
  }

  auto currentRadius = physics::Distance::getMax();
  if (currentPoint.yawRate != physics::AngularVelocity(0.))
  {
    currentRadius
      = ad::physics::Distance(static_cast<double>(currentPoint.speed) / static_cast<double>(currentPoint.yawRate));
  }

  if (std::fabs(currentRadius) < dynamics.unstructuredSettings.vehicleMinRadius)
  {
    if (currentRadius > physics::Distance(0.))
    {
      currentRadius = dynamics.unstructuredSettings.vehicleMinRadius;
    }
    else
    {
      currentRadius = -dynamics.unstructuredSettings.vehicleMinRadius;
    }
  }

  Point const circleOrigin
    = getCircleOrigin(currentPoint.position, currentRadius, currentPoint.angle - ad::physics::cPI_2);
  auto diffAngle = physics::Angle(currentDistance / currentRadius);

  currentPoint.angle += diffAngle;
  currentPoint.position = rotateAroundPoint(circleOrigin, currentPoint.position - circleOrigin, diffAngle);
  currentPoint.speed = finalSpeed;
  return result;
}

bool TrajectoryVehicle::calculateBrake(situation::VehicleState const &vehicleState,
                                       ad::physics::Duration const &timeAfterResponseTime,
                                       TrajectorySetStep const &responseTimeFrontSide,
                                       TrajectorySetStep const &responseTimeBackSide,
                                       Polygon &resultPolygon,
                                       TrajectorySetStepVehicleLocation &brakeMinStepVehicleLocation) const
{
  //-------------
  // back
  //-------------
  auto timeToStopBrakeMax = physics::Duration(0.);
  TrajectorySetStepVehicleLocation brakeMaxVehicleLocations;
  auto result = true;

  if (responseTimeBackSide.center.speed > physics::Speed(0.))
  {
    result = situation::calculateTimeToStop(responseTimeBackSide.center.speed,
                                            timeAfterResponseTime,
                                            vehicleState.dynamics.maxSpeedOnAcceleration,
                                            vehicleState.dynamics.alphaLon.brakeMax,
                                            vehicleState.dynamics.alphaLon.brakeMax,
                                            timeToStopBrakeMax);
    if (!result)
    {
      spdlog::debug(
        "TrajectoryVehicle::calculateBrake>> Could not calculate time to stop. speed {}, timeAfterResponseTime {}",
        responseTimeBackSide.center.speed,
        timeAfterResponseTime);
    }
  }
  auto backSide = responseTimeBackSide;
  if (result)
  {
    calculateTrajectorySetStepOnCircle(
      vehicleState, timeToStopBrakeMax, vehicleState.dynamics.alphaLon.brakeMax, backSide);
  }
  if (result)
  {
    result
      = calculateStepPolygon(vehicleState, backSide, "vehicle_brake_brakeMax", resultPolygon, brakeMaxVehicleLocations);
    if (!result)
    {
      spdlog::debug("TrajectoryVehicle::calculateBrake>> Could not calculate brake max step polygon.");
    }
  }

  //-------------
  // front + sides
  //-------------
  if (result)
  {
    // front
    auto front = responseTimeFrontSide;
    if (result)
    {
      result = calculateTrajectorySetStepOnCircle(
        vehicleState, timeAfterResponseTime, vehicleState.dynamics.alphaLon.brakeMin, front);
    }

    // sides
    std::vector<physics::Acceleration> accelerations;
    auto accelStepSize = (-vehicleState.dynamics.alphaLon.brakeMax + vehicleState.dynamics.alphaLon.brakeMin)
      / (1.0 + vehicleState.dynamics.unstructuredSettings.vehicleBrakeIntermediateAccelerationSteps);
    for (auto acceleration = vehicleState.dynamics.alphaLon.brakeMax + accelStepSize;
         acceleration < vehicleState.dynamics.alphaLon.brakeMin;
         acceleration += accelStepSize)
    {
      accelerations.push_back(acceleration);
    }
    accelerations.push_back(vehicleState.dynamics.alphaLon.brakeMin);

    std::vector<TrajectorySetStep> sideSteps;
    for (auto itAcceleration = accelerations.cbegin(); (itAcceleration != accelerations.cend()) && result;
         ++itAcceleration)
    {
      physics::Duration calculationTime = timeAfterResponseTime;
      result = getTimeInMovement(responseTimeFrontSide.center.speed, *itAcceleration, calculationTime);

      if (result)
      {
        TrajectorySetStep sideStep;
        sideStep.center = responseTimeFrontSide.center;
        sideStep.left.push_back(responseTimeFrontSide.left.back());
        sideStep.right.push_back(responseTimeFrontSide.right.front());

        result = calculateTrajectorySetStepOnCircle(vehicleState, calculationTime, *itAcceleration, sideStep);
        sideSteps.push_back(sideStep);
      }
      if (!result)
      {
        spdlog::debug("TrajectoryVehicle::calculateFrontAndSidePolygon>> Could not calculate step polygon for "
                      "speed {}, acceleration {}, calcTime {}",
                      responseTimeFrontSide.center.speed,
                      *itAcceleration,
                      calculationTime);
      }
    }

    result = calculateFrontAndSidePolygon(vehicleState,
                                          brakeMaxVehicleLocations,
                                          sideSteps,
                                          front,
                                          "vehicle_brake",
                                          resultPolygon,
                                          brakeMinStepVehicleLocation);
    if (!result)
    {
      spdlog::debug("TrajectoryVehicle::calculateBrake>> Could not calculate front and side polygon.");
    }
  }
  return result;
}

bool TrajectoryVehicle::calculateContinueForward(situation::VehicleState const &vehicleState,
                                                 physics::Duration const &timeAfterResponseTime,
                                                 TrajectorySetStep const &responseTimeFrontSide,
                                                 Polygon const &brakePolygon,
                                                 TrajectorySetStepVehicleLocation const &brakeMinStepVehicleLocation,
                                                 Polygon &resultPolygon) const
{
  //-----------
  // Front
  //-----------
  auto ratioDiffFront = physics::RatioValue(
    2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
           + 2.0));
  auto front = responseTimeFrontSide;
  // center-front, with no change of the current yaw rate
  auto result = calculateTrajectorySetStepOnCircle(
    vehicleState, timeAfterResponseTime, vehicleState.dynamics.alphaLon.accelMax, front);
  if (DEBUG_DRAWING_IS_ENABLED())
  {
    int idx = 0;
    for (auto const &pt : front.left)
    {
      DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(pt, vehicleState).toPolygon(),
                            "blue",
                            "vehicle_continue_forward_front_left_" + std::to_string(idx));
      idx++;
    }
    idx = 0;
    for (auto const &pt : front.right)
    {
      DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(pt, vehicleState).toPolygon(),
                            "blue",
                            "vehicle_continue_forward_front_right_" + std::to_string(idx));
      idx++;
    }
    DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(front.center, vehicleState).toPolygon(),
                          "blue",
                          "vehicle_continue_forward_front_center");
  }

  // center-left, with maximum changing of the yaw rate
  front.left.reserve(
    front.left.size()
    + vehicleState.dynamics.unstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
    + 1);
  for (auto ratioValue = ratioDiffFront; (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += ratioDiffFront)
  {
    TrajectoryPoint resultPt;
    result = calculateTrajectoryPoint(responseTimeFrontSide.left.back(),
                                      vehicleState.dynamics,
                                      timeAfterResponseTime,
                                      vehicleState.dynamics.alphaLon.accelMax,
                                      ratioValue,
                                      resultPt);
    front.left.push_back(resultPt);
    if (DEBUG_DRAWING_IS_ENABLED())
    {
      DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(resultPt, vehicleState).toPolygon(),
                            "pink",
                            "vehicle_continue_forward_maxLeft_" + std::to_string(ratioValue));
    }
  }

  // center-right, with maximum changing of the yaw rate
  std::vector<TrajectoryPoint> right;
  right.reserve(vehicleState.dynamics.unstructuredSettings.vehicleContinueForwardIntermediateYawRateChangeRatioSteps
                + 1);
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue < physics::RatioValue(0.0)) && result;
       ratioValue += ratioDiffFront)
  {
    TrajectoryPoint resultPt;
    result = calculateTrajectoryPoint(responseTimeFrontSide.right.front(),
                                      vehicleState.dynamics,
                                      timeAfterResponseTime,
                                      vehicleState.dynamics.alphaLon.accelMax,
                                      ratioValue,
                                      resultPt);
    right.push_back(resultPt);
    if (DEBUG_DRAWING_IS_ENABLED())
    {
      DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(resultPt, vehicleState).toPolygon(),
                            "pink",
                            std::string("vehicle_continue_forward_maxRight_" + std::to_string(ratioValue)));
    }
  }
  auto previousRight = std::move(front.right);
  front.right = right;
  front.right.insert(front.right.end(), previousRight.begin(), previousRight.end());

  //-----------
  // Sides
  //-----------
  std::vector<physics::Acceleration> accelerations;
  auto accelStepSize = (vehicleState.dynamics.alphaLon.accelMax - vehicleState.dynamics.alphaLon.brakeMin)
    / (1.0 + vehicleState.dynamics.unstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps);
  for (auto acceleration = vehicleState.dynamics.alphaLon.brakeMin + accelStepSize;
       acceleration < vehicleState.dynamics.alphaLon.accelMax;
       acceleration += accelStepSize)
  {
    accelerations.push_back(acceleration);
  }
  accelerations.push_back(vehicleState.dynamics.alphaLon.accelMax);
  std::vector<TrajectorySetStep> sideSteps;
  for (auto itAcceleration = accelerations.begin(); (itAcceleration != accelerations.end()) && result; ++itAcceleration)
  {
    physics::Duration calculationTime = timeAfterResponseTime;
    result = getTimeInMovement(responseTimeFrontSide.center.speed, *itAcceleration, calculationTime);

    TrajectorySetStep sideStep;
    if (result)
    {
      // left
      TrajectoryPoint resultPt;
      result = calculateTrajectoryPoint(responseTimeFrontSide.left.back(),
                                        vehicleState.dynamics,
                                        calculationTime,
                                        *itAcceleration,
                                        physics::RatioValue(1.0),
                                        resultPt);
      sideStep.left.push_back(resultPt);
      if (DEBUG_DRAWING_IS_ENABLED())
      {
        DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(resultPt, vehicleState).toPolygon(),
                              "pink",
                              "vehicle_continue_forward_final_location_intermediate_left_"
                                + std::to_string(*itAcceleration));
      }
    }

    // center
    if (result)
    {
      sideStep.center = responseTimeFrontSide.center;
      result
        = calculateTrajectoryPointOnCircle(sideStep.center, *itAcceleration, calculationTime, vehicleState.dynamics);
    }

    // right
    if (result)
    {
      TrajectoryPoint resultPt;
      result = calculateTrajectoryPoint(responseTimeFrontSide.right.front(),
                                        vehicleState.dynamics,
                                        calculationTime,
                                        *itAcceleration,
                                        physics::RatioValue(-1.0),
                                        resultPt);
      sideStep.right.push_back(resultPt);
      if (DEBUG_DRAWING_IS_ENABLED())
      {
        DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(resultPt, vehicleState).toPolygon(),
                              "pink",
                              "vehicle_continue_forward_final_location_intermediate_right_"
                                + std::to_string(*itAcceleration));
      }
    }
    sideSteps.push_back(sideStep);
  }

  resultPolygon = brakePolygon;
  TrajectorySetStepVehicleLocation unusedStepVehicleLocation;
  result = calculateFrontAndSidePolygon(vehicleState,
                                        brakeMinStepVehicleLocation,
                                        sideSteps,
                                        front,
                                        "vehicle_continue_forward",
                                        resultPolygon,
                                        unusedStepVehicleLocation);
  if (!result)
  {
    spdlog::debug("TrajectoryVehicle::calculateContinueForward>> Could not calculate front and side polygon.");
  }
  return result;
}

bool TrajectoryVehicle::calculateTrajectorySetStepOnCircle(situation::VehicleState const &vehicleState,
                                                           physics::Duration const &timeAfterResponseTime,
                                                           physics::Acceleration const &acceleration,
                                                           TrajectorySetStep &step) const
{
  auto result = true;

  // left
  for (auto it = step.left.begin(); (it != step.left.end()) && result; ++it)
  {
    result = calculateTrajectoryPointOnCircle(*it, acceleration, timeAfterResponseTime, vehicleState.dynamics);
  }

  // center
  if (result)
  {
    result = calculateTrajectoryPointOnCircle(step.center, acceleration, timeAfterResponseTime, vehicleState.dynamics);
  }

  // right
  for (auto it = step.right.begin(); (it != step.right.end()) && result; ++it)
  {
    result = calculateTrajectoryPointOnCircle(*it, acceleration, timeAfterResponseTime, vehicleState.dynamics);
  }

  return result;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
