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
  std::vector<TrajectorySetStep> responseTimeTrajectorySetSteps;
  if (result)
  {
    result = getResponseTimeTrajectoryPoints(
      vehicleState, responseTimeTrajectorySetSteps, responseTimeFrontSide, responseTimeBackSide);
    if (!result)
    {
      spdlog::debug("TrajectoryVehicle::calculateTrajectorySets>> Could not calculate reponse time trajectory points.");
    }
    else
    {
      spdlog::trace(
        "Trajectory points at response time: front left {}, front right {}, back left {}, back right {}, steps {}",
        responseTimeFrontSide.left.size(),
        responseTimeFrontSide.right.size(),
        responseTimeBackSide.left.size(),
        responseTimeBackSide.right.size(),
        responseTimeTrajectorySetSteps.size());
    }
  }

  TrajectorySetStepVehicleLocation brakeMinStepVehicleLocations;
  auto timeAfterResponseTime = timeToStop - vehicleState.dynamics.responseTime;
  if (result)
  {
    result = calculateBrake(vehicleState,
                            timeAfterResponseTime,
                            responseTimeTrajectorySetSteps,
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
                                      responseTimeTrajectorySetSteps,
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
#if DEBUG_DRAWING
  DEBUG_DRAWING_POLYGON(brakePolygon, "red", "brake");
  DEBUG_DRAWING_POLYGON(continueForwardPolygon, "green", "continueForward");
  spdlog::trace("DRAW DONE");
#endif
  return result;
}

ad::physics::AngularVelocity
TrajectoryVehicle::calculateYawRate(situation::VehicleState const &vehicleState,
                                    ad::physics::Duration const &timeInMovementUntilResponseTime,
                                    ad::physics::AngularAcceleration const &maxYawRateChange,
                                    ad::physics::RatioValue const &ratio) const
{
  return vehicleState.objectState.yawRate + maxYawRateChange * timeInMovementUntilResponseTime * ratio;
}

bool TrajectoryVehicle::getResponseTimeTrajectoryPoints(situation::VehicleState const &vehicleState,
                                                        std::vector<TrajectorySetStep> &trajectorySetSteps,
                                                        TrajectorySetStep &frontSide,
                                                        TrajectorySetStep &backSide) const
{
  auto result = true;
  //-------------
  // back
  //-------------
  {
    auto ratioDiffBack = physics::RatioValue(
      2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.vehicleBackIntermediateRatioSteps + 2.0));
    auto accel = vehicleState.dynamics.alphaLon.brakeMax;
    physics::Duration timeInMovementUntilResponseTime;
    result = getTimeInMovementUntilResponse(vehicleState, accel, timeInMovementUntilResponseTime);
    for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
         ratioValue += ratioDiffBack)
    {
      TrajectoryPoint pt;
      result = getResponseTimeTrajectoryPoint(vehicleState, timeInMovementUntilResponseTime, accel, ratioValue, pt);
      if (ratioValue == physics::RatioValue(0.))
      {
        backSide.center = pt;
      }
      else if (ratioValue > physics::RatioValue(0.))
      {
        backSide.left.push_back(pt);
      }
      else
      {
        backSide.right.push_back(pt);
      }
    }
  }

  //-------------
  // front
  //-------------
  {
    auto ratioDiffFront = physics::RatioValue(
      2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.vehicleFrontIntermediateRatioSteps + 2.0));

    auto accel = vehicleState.dynamics.alphaLon.accelMax;
    physics::Duration timeInMovementUntilResponseTime;
    result = getTimeInMovementUntilResponse(vehicleState, accel, timeInMovementUntilResponseTime);
    for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
         ratioValue += ratioDiffFront)
    {
      TrajectoryPoint pt;
      result = getResponseTimeTrajectoryPoint(vehicleState, timeInMovementUntilResponseTime, accel, ratioValue, pt);
      if (ratioValue == physics::RatioValue(0.))
      {
        frontSide.center = pt;
      }
      else if (ratioValue > physics::RatioValue(0.))
      {
        frontSide.left.push_back(pt);
      }
      else
      {
        frontSide.right.push_back(pt);
      }
    }
  }

  //-------------
  // sides
  //-------------
  auto accelStepSize = (vehicleState.dynamics.alphaLon.accelMax - vehicleState.dynamics.alphaLon.brakeMax)
    / (1.0 + vehicleState.dynamics.unstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps);
  for (ad::physics::Acceleration accel = vehicleState.dynamics.alphaLon.brakeMax + accelStepSize;
       (accel < vehicleState.dynamics.alphaLon.accelMax) && result;
       accel += accelStepSize)
  {
    TrajectoryPoint right;
    TrajectoryPoint left;
    TrajectoryPoint center;
    physics::Duration timeInMovementUntilResponseTime;
    result = getTimeInMovementUntilResponse(vehicleState, accel, timeInMovementUntilResponseTime);
    if (result)
    {
      result = getResponseTimeTrajectoryPoint(
        vehicleState, timeInMovementUntilResponseTime, accel, physics::RatioValue(-1.0), right);
    }
    if (result)
    {
      result = getResponseTimeTrajectoryPoint(
        vehicleState, timeInMovementUntilResponseTime, accel, physics::RatioValue(1.0), left);
    }
    if (result)
    {
      result = getResponseTimeTrajectoryPoint(
        vehicleState, timeInMovementUntilResponseTime, accel, physics::RatioValue(0.0), center);
    }
    trajectorySetSteps.push_back(TrajectorySetStep(left, right, center));
  }
  return result;
}

bool TrajectoryVehicle::getTimeInMovementUntilResponse(situation::VehicleState const &vehicleState,
                                                       ad::physics::Acceleration const &aUntilResponseTime,
                                                       ad::physics::Duration &timeInMovementUntilResponseTime) const
{
  auto result = true;
  timeInMovementUntilResponseTime = vehicleState.dynamics.responseTime; // until this time, the yaw rate changes
  if (aUntilResponseTime < physics::Acceleration(0.))
  {
    if (vehicleState.objectState.speed == physics::Speed(0.))
    {
      timeInMovementUntilResponseTime = physics::Duration(0.);
    }
    else
    {
      result = situation::calculateTimeToStop(vehicleState.objectState.speed,
                                              vehicleState.dynamics.responseTime,
                                              vehicleState.dynamics.maxSpeedOnAcceleration,
                                              aUntilResponseTime,
                                              aUntilResponseTime,
                                              timeInMovementUntilResponseTime);
      if (!result)
      {
        spdlog::debug("TrajectoryVehicle::getResponseTimeTrajectoryPoint>> Could not calculate time to stop for speed "
                      "{}, responseTime {}, acceleration {}",
                      vehicleState.objectState.speed,
                      vehicleState.dynamics.responseTime,
                      aUntilResponseTime);
      }
      timeInMovementUntilResponseTime = std::min(vehicleState.dynamics.responseTime, timeInMovementUntilResponseTime);
    }
  }
  return result;
}

bool TrajectoryVehicle::getResponseTimeTrajectoryPoint(situation::VehicleState const &vehicleState,
                                                       ad::physics::Duration const &timeInMovementUntilResponseTime,
                                                       ad::physics::Acceleration const &aUntilResponseTime,
                                                       ad::physics::RatioValue const &yawRateChangeRatio,
                                                       TrajectoryPoint &resultTrajectoryPoint) const
{
  auto result = true;
  TrajectoryPoint currentPoint(vehicleState);

  auto currentTime = ad::physics::Duration(0.0);

  while ((currentTime < vehicleState.dynamics.responseTime) && result)
  {
    auto timeStep = vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep;
    if (vehicleState.dynamics.responseTime
        >= currentTime + vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)
    {
      currentTime += vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep;
    }
    else
    {
      currentTime = vehicleState.dynamics.responseTime;
      timeStep = physics::Duration(
        std::fmod(static_cast<double>(vehicleState.dynamics.responseTime),
                  static_cast<double>(vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)));
    }

    currentPoint.yawRate = calculateYawRate(vehicleState,
                                            std::min(currentTime, timeInMovementUntilResponseTime),
                                            vehicleState.dynamics.unstructuredSettings.vehicleYawRateChange,
                                            yawRateChangeRatio);

    result = calculateNextTrajectoryPoint(currentPoint, aUntilResponseTime, timeStep, vehicleState.dynamics, false);
  }

  if (result)
  {
    resultTrajectoryPoint = currentPoint;
  }
  return result;
}

bool TrajectoryVehicle::calculateNextTrajectoryPoint(TrajectoryPoint &currentPoint,
                                                     physics::Acceleration const &acceleration,
                                                     physics::Duration const &duration,
                                                     ::ad::rss::world::RssDynamics const &dynamics,
                                                     bool afterResponseTime) const
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
    spdlog::debug("TrajectoryVehicle::calculateNextTrajectoryPoint>> calculateAcceleratedLimitedMovement() failed.");
  }

  auto currentRadius = physics::Distance::getMax();
  if (currentPoint.yawRate != physics::AngularVelocity(0.))
  {
    if (afterResponseTime)
    {
      currentRadius = physics::Distance(1.) / static_cast<double>(currentPoint.yawRate) * static_cast<double>(duration);
    }
    else
    {
      currentRadius
        = ad::physics::Distance(static_cast<double>(currentPoint.speed) / static_cast<double>(currentPoint.yawRate));
    }
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
                                       std::vector<TrajectorySetStep> const &responseTimeTrajectorySetSteps,
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

  if (result)
  {
    result = calculateStepPolygon(vehicleState,
                                  timeToStopBrakeMax,
                                  responseTimeBackSide,
                                  vehicleState.dynamics.alphaLon.brakeMax,
                                  "brake_brakeMax",
                                  resultPolygon,
                                  brakeMaxVehicleLocations);
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

    result = calculateTrajectorySetFrontAndSide(vehicleState,
                                                timeAfterResponseTime,
                                                responseTimeTrajectorySetSteps,
                                                responseTimeFrontSide,
                                                brakeMaxVehicleLocations,
                                                accelerations,
                                                "brake",
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
                                                 std::vector<TrajectorySetStep> const &responseTimeTrajectorySetSteps,
                                                 TrajectorySetStep const &responseTimeFrontSide,
                                                 Polygon const &brakePolygon,
                                                 TrajectorySetStepVehicleLocation const &brakeMinStepVehicleLocation,
                                                 Polygon &resultPolygon) const
{
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

  resultPolygon = brakePolygon;
  TrajectorySetStepVehicleLocation frontSideStepVehicleLocation; // unused
  auto result = calculateTrajectorySetFrontAndSide(vehicleState,
                                                   timeAfterResponseTime,
                                                   responseTimeTrajectorySetSteps,
                                                   responseTimeFrontSide,
                                                   brakeMinStepVehicleLocation,
                                                   accelerations,
                                                   "continueForward",
                                                   resultPolygon,
                                                   frontSideStepVehicleLocation);
  if (!result)
  {
    spdlog::debug("TrajectoryVehicle::calculateContinueForward>> Could not calculate front and side polygon.");
  }
  return result;
}

bool TrajectoryVehicle::calculateTrajectorySetFrontAndSide(
  situation::VehicleState const &vehicleState,
  physics::Duration const &timeAfterResponseTime,
  std::vector<TrajectorySetStep> const &responseTimeTrajectorySetSteps,
  TrajectorySetStep const &responseTimeFrontSide,
  TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
  std::vector<physics::Acceleration> const &accelerations,
  std::string const &debugNamespace,
  Polygon &resultPolygon,
  TrajectorySetStepVehicleLocation &frontSideStepVehicleLocation) const
{
  auto result = true;
  auto previousStepVehicleLocation = initialStepVehicleLocation;
  //-------------
  // sides
  //-------------
  for (auto itAcceleration = accelerations.begin(); (itAcceleration != accelerations.end()) && result; ++itAcceleration)
  {
    int idx = 0;
    for (auto itStep = responseTimeTrajectorySetSteps.begin();
         (itStep != responseTimeTrajectorySetSteps.end()) && result;
         ++itStep)
    {
      physics::Duration calculationTime = timeAfterResponseTime;
      if (*itAcceleration < physics::Acceleration(0.))
      {
        if (itStep->center.speed == physics::Speed(0.))
        {
          calculationTime = physics::Duration(0.);
        }
        else
        {
          physics::Duration timeToStop;
          result = situation::calculateTimeToStop(itStep->center.speed,
                                                  timeAfterResponseTime,
                                                  vehicleState.dynamics.maxSpeedOnAcceleration,
                                                  *itAcceleration,
                                                  *itAcceleration,
                                                  timeToStop);
          calculationTime = std::min(timeToStop, timeAfterResponseTime);
        }
      }

      Polygon stepPolygon;
      TrajectorySetStepVehicleLocation currentStepVehicleLocation;
      if (result)
      {
        result
          = calculateStepPolygon(vehicleState,
                                 calculationTime,
                                 *itStep,
                                 *itAcceleration,
                                 debugNamespace + "_" + std::to_string(*itAcceleration) + "_" + std::to_string(idx),
                                 stepPolygon,
                                 currentStepVehicleLocation);
        if (!result)
        {
          spdlog::debug("TrajectoryVehicle::calculateTrajectorySetFrontAndSide>> Could not calculate step polygon for "
                        "speed {}, acceleration {}, calcTime {}",
                        itStep->center.speed,
                        *itAcceleration,
                        calculationTime);
        }
      }
      if (result)
      {
        result = calculateEstimationBetweenSteps(
          resultPolygon, previousStepVehicleLocation, currentStepVehicleLocation, debugNamespace + "_step_estimation");
        if (!result)
        {
          spdlog::debug("TrajectoryVehicle::calculateTrajectorySetFrontAndSide>> Could not calculate between steps "
                        "polygon. Speed {}, acceleration {}, calcTime {}",
                        itStep->center.speed,
                        *itAcceleration,
                        calculationTime);
        }
        previousStepVehicleLocation = currentStepVehicleLocation;
      }

      if (result)
      {
        result = combinePolygon(resultPolygon, stepPolygon, resultPolygon);
      }
      ++idx;
    }
  }

  //-------------
  // front
  //-------------
  Polygon frontPolygon;
  if (result)
  {
    result = calculateStepPolygon(vehicleState,
                                  timeAfterResponseTime,
                                  responseTimeFrontSide,
                                  accelerations.back(),
                                  debugNamespace + "_front",
                                  frontPolygon,
                                  frontSideStepVehicleLocation);
  }
  if (result)
  {
    result = calculateEstimationBetweenSteps(
      resultPolygon, previousStepVehicleLocation, frontSideStepVehicleLocation, debugNamespace + "_front_estimation");
    if (!result)
    {
      spdlog::debug("TrajectoryVehicle::calculateTrajectorySetFrontAndSide>> Could not calculate between last step and "
                    "front polygon.");
    }
  }
  if (result)
  {
    result = combinePolygon(resultPolygon, frontPolygon, resultPolygon);
  }
  return result;
}

bool TrajectoryVehicle::calculateStepPolygon(situation::VehicleState const &vehicleState,
                                             physics::Duration const &timeAfterResponseTime,
                                             TrajectorySetStep const &step,
                                             physics::Acceleration const &acceleration,
                                             std::string const &debugNamespace,
                                             Polygon &polygon,
                                             TrajectorySetStepVehicleLocation &stepVehicleLocation) const
{
  auto result = true;
  MultiPoint frontPtsLeft;
  MultiPoint frontPtsRight;

  int idx = 0;
  for (auto it = step.left.begin(); (it != step.left.end()) && result; ++it)
  {
    auto currentPointLeft = *it;
    result = calculateNextTrajectoryPoint(
      currentPointLeft, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
    auto vehicleLocationLeft = TrafficParticipantLocation(currentPointLeft, vehicleState);
#if DEBUG_DRAWING
    DEBUG_DRAWING_POLYGON(vehicleLocationLeft.toPolygon(), "black", debugNamespace + "_left_" + std::to_string(idx));
#else
    (void)debugNamespace;
#endif
    boost::geometry::append(frontPtsLeft, vehicleLocationLeft.toMultiPoint());
    if (it == step.left.end() - 1)
    {
      stepVehicleLocation.left = vehicleLocationLeft;
    }
    ++idx;
  }

  // center
  if (result)
  {
    auto currentPointCenter = step.center;
    result = calculateNextTrajectoryPoint(
      currentPointCenter, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
    auto vehicleLocationCenter = TrafficParticipantLocation(currentPointCenter, vehicleState);
#if DEBUG_DRAWING
    DEBUG_DRAWING_POLYGON(vehicleLocationCenter.toPolygon(), "blue", debugNamespace + "_center");
#endif
    boost::geometry::append(frontPtsLeft, vehicleLocationCenter.toMultiPoint());
    stepVehicleLocation.center = vehicleLocationCenter;
    boost::geometry::append(frontPtsRight, vehicleLocationCenter.toMultiPoint());
  }

  idx = 0;
  for (auto it = step.right.begin(); (it != step.right.end()) && result; ++it)
  {
    auto currentPointRight = *it;
    result = calculateNextTrajectoryPoint(
      currentPointRight, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
    auto vehicleLocationRight = TrafficParticipantLocation(currentPointRight, vehicleState);
#if DEBUG_DRAWING
    DEBUG_DRAWING_POLYGON(vehicleLocationRight.toPolygon(), "blue", debugNamespace + "_right_" + std::to_string(idx));
#endif
    boost::geometry::append(frontPtsRight, vehicleLocationRight.toMultiPoint());
    if (it == step.right.begin())
    {
      stepVehicleLocation.right = vehicleLocationRight;
    }
    ++idx;
  }

  if (result)
  {
    Polygon hullLeft;
    Polygon hullRight;
    boost::geometry::convex_hull(frontPtsLeft, hullLeft);
    boost::geometry::convex_hull(frontPtsRight, hullRight);
    result = combinePolygon(hullLeft, hullRight, polygon);
  }
  return result;
}

bool TrajectoryVehicle::calculateEstimationBetweenSteps(
  Polygon &polygon,
  TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
  TrajectorySetStepVehicleLocation const &currentStepVehicleLocation,
  std::string const &debugNamespace) const
{
  // Fill potential gap between two calculation steps by using the previous and current step
  auto result = true;
  //-------------
  // back
  //-------------
  if ((previousStepVehicleLocation.left.backLeft != currentStepVehicleLocation.left.backLeft)
      || (previousStepVehicleLocation.left.backRight != currentStepVehicleLocation.left.backRight)
      || (previousStepVehicleLocation.center.backLeft != currentStepVehicleLocation.center.backLeft)
      || (previousStepVehicleLocation.center.backRight != currentStepVehicleLocation.center.backRight))
  {
    MultiPoint interimPtsBackLeft;
    boost::geometry::append(interimPtsBackLeft, previousStepVehicleLocation.left.backLeft);
    boost::geometry::append(interimPtsBackLeft, previousStepVehicleLocation.left.backRight);
    boost::geometry::append(interimPtsBackLeft, previousStepVehicleLocation.center.backLeft);
    boost::geometry::append(interimPtsBackLeft, previousStepVehicleLocation.center.backRight);
    boost::geometry::append(interimPtsBackLeft, currentStepVehicleLocation.left.backLeft);
    boost::geometry::append(interimPtsBackLeft, currentStepVehicleLocation.left.backRight);
    boost::geometry::append(interimPtsBackLeft, currentStepVehicleLocation.center.backLeft);
    boost::geometry::append(interimPtsBackLeft, currentStepVehicleLocation.center.backRight);
    Polygon hullBackLeft;
    boost::geometry::convex_hull(interimPtsBackLeft, hullBackLeft);

    MultiPoint interimPtsBackRight;
    boost::geometry::append(interimPtsBackRight, previousStepVehicleLocation.right.backLeft);
    boost::geometry::append(interimPtsBackRight, previousStepVehicleLocation.right.backRight);
    boost::geometry::append(interimPtsBackRight, previousStepVehicleLocation.center.backLeft);
    boost::geometry::append(interimPtsBackRight, previousStepVehicleLocation.center.backRight);
    boost::geometry::append(interimPtsBackRight, currentStepVehicleLocation.right.backLeft);
    boost::geometry::append(interimPtsBackRight, currentStepVehicleLocation.right.backRight);
    boost::geometry::append(interimPtsBackRight, currentStepVehicleLocation.center.backLeft);
    boost::geometry::append(interimPtsBackRight, currentStepVehicleLocation.center.backRight);
    Polygon hullBackRight;
    boost::geometry::convex_hull(interimPtsBackRight, hullBackRight);
    Polygon hullBack;
    result = combinePolygon(hullBackRight, hullBackLeft, hullBack);
    if (!result)
    {
      spdlog::debug("TrajectoryVehicle::calculateEstimationBetweenSteps>> Could not estimation polygon with points "
                    "backLeft {}, backRight {}",
                    std::to_string(hullBackLeft),
                    std::to_string(hullBackRight));
    }

    if (result)
    {
#if DEBUG_DRAWING
      DEBUG_DRAWING_POLYGON(hullBack, "yellow", debugNamespace + "_hull_back");
#else
      (void)debugNamespace;
#endif
      result = combinePolygon(polygon, hullBack, polygon);
    }
  }

  //-------------
  // front
  //-------------
  if ((previousStepVehicleLocation.left.frontLeft != currentStepVehicleLocation.left.frontLeft)
      || (previousStepVehicleLocation.left.frontRight != currentStepVehicleLocation.left.frontRight)
      || (previousStepVehicleLocation.center.frontLeft != currentStepVehicleLocation.center.frontLeft)
      || (previousStepVehicleLocation.center.frontRight != currentStepVehicleLocation.center.frontRight))
  {
    Polygon hullFront;
    if (result)
    {
      MultiPoint interimPtsFrontLeft;
      boost::geometry::append(interimPtsFrontLeft, previousStepVehicleLocation.left.frontLeft);
      boost::geometry::append(interimPtsFrontLeft, previousStepVehicleLocation.left.frontRight);
      boost::geometry::append(interimPtsFrontLeft, previousStepVehicleLocation.center.frontLeft);
      boost::geometry::append(interimPtsFrontLeft, previousStepVehicleLocation.center.frontRight);
      boost::geometry::append(interimPtsFrontLeft, currentStepVehicleLocation.left.frontLeft);
      boost::geometry::append(interimPtsFrontLeft, currentStepVehicleLocation.left.frontRight);
      boost::geometry::append(interimPtsFrontLeft, currentStepVehicleLocation.center.frontLeft);
      boost::geometry::append(interimPtsFrontLeft, currentStepVehicleLocation.center.frontRight);
      Polygon hullFrontLeft;
      boost::geometry::convex_hull(interimPtsFrontLeft, hullFrontLeft);

      MultiPoint interimPtsFrontRight;
      boost::geometry::append(interimPtsFrontRight, previousStepVehicleLocation.right.frontLeft);
      boost::geometry::append(interimPtsFrontRight, previousStepVehicleLocation.right.frontRight);
      boost::geometry::append(interimPtsFrontRight, previousStepVehicleLocation.center.frontLeft);
      boost::geometry::append(interimPtsFrontRight, previousStepVehicleLocation.center.frontRight);
      boost::geometry::append(interimPtsFrontRight, currentStepVehicleLocation.right.frontLeft);
      boost::geometry::append(interimPtsFrontRight, currentStepVehicleLocation.right.frontRight);
      boost::geometry::append(interimPtsFrontRight, currentStepVehicleLocation.center.frontLeft);
      boost::geometry::append(interimPtsFrontRight, currentStepVehicleLocation.center.frontRight);
      Polygon hullFrontRight;
      boost::geometry::convex_hull(interimPtsFrontRight, hullFrontRight);
      result = combinePolygon(hullFrontRight, hullFrontLeft, hullFront);
      if (!result)
      {
        spdlog::debug("TrajectoryVehicle::calculateEstimationBetweenSteps>> Could not estimation polygon with points "
                      "frontLeft {}, frontRight {}",
                      std::to_string(hullFrontLeft),
                      std::to_string(hullFrontRight));
      }
    }

    if (result)
    {
#if DEBUG_DRAWING
      DEBUG_DRAWING_POLYGON(hullFront, "yellow", debugNamespace + "_hull_front");
#endif
      result = combinePolygon(polygon, hullFront, polygon);
    }
  }
  return result;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
