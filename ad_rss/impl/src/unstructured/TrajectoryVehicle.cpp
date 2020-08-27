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

  TrajectorySetStep frontSide;
  TrajectorySetStep backSide;
  std::vector<TrajectorySetStep> trajectorySetSteps;
  if (result)
  {
    result = getResponseTimeTrajectoryPoints(vehicleState, trajectorySetSteps, frontSide, backSide);
    if (!result)
    {
      spdlog::debug("TrajectoryVehicle::calculateTrajectorySets>> Could not calculate reponse time trajectory points.");
    }
    else
    {
      spdlog::trace(
        "Trajectory points at response time: front left {}, front right {}, back left {}, back right {}, steps {}",
        frontSide.left.size(),
        frontSide.right.size(),
        backSide.left.size(),
        backSide.right.size(),
        trajectorySetSteps.size());
    }
  }

  TrajectorySetStepVehicleLocation brakeMinVehicleLocations;
  auto timeAfterResponseTime = timeToStop - vehicleState.dynamics.responseTime;
  if (result)
  {
    result = calculateBrake(vehicleState,
                            timeAfterResponseTime,
                            trajectorySetSteps,
                            frontSide,
                            backSide,
                            brakePolygon,
                            brakeMinVehicleLocations);
    if (!result)
    {
      spdlog::warn("TrajectoryVehicle::calculateTrajectorySets>> calculateBrake() failed.");
    }
  }

  if (result)
  {
    result = calculateContinueForward(brakePolygon,
                                      frontSide,
                                      trajectorySetSteps,
                                      brakeMinVehicleLocations,
                                      vehicleState,
                                      timeAfterResponseTime,
                                      continueForwardPolygon);
    if (!result)
    {
      spdlog::warn("TrajectoryVehicle::calculateTrajectorySets>> calculateContinueForward() failed.");
    }
  }
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
  auto ratioDiffBack = physics::RatioValue(
    2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.vehicleBackIntermediateRatioSteps + 2.0));
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += ratioDiffBack)
  {
    auto accel = vehicleState.dynamics.alphaLon.brakeMax;
    TrajectoryPoint pt;
    result = getResponseTimeTrajectoryPoint(vehicleState, accel, ratioValue, pt);
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

  auto ratioDiffFront = physics::RatioValue(
    2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.vehicleFrontIntermediateRatioSteps + 2.0));
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += ratioDiffFront)
  {
    auto accel = vehicleState.dynamics.alphaLon.accelMax;
    TrajectoryPoint pt;
    result = getResponseTimeTrajectoryPoint(vehicleState, accel, ratioValue, pt);
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

  auto accelStepSize = (vehicleState.dynamics.alphaLon.accelMax - vehicleState.dynamics.alphaLon.brakeMax)
    / (1.0 + vehicleState.dynamics.unstructuredSettings.vehicleResponseTimeIntermediateAccelerationSteps);
  for (ad::physics::Acceleration accel = vehicleState.dynamics.alphaLon.brakeMax + accelStepSize;
       (accel < vehicleState.dynamics.alphaLon.accelMax) && result;
       accel += accelStepSize)
  {
    TrajectoryPoint right;
    TrajectoryPoint left;
    TrajectoryPoint center;
    result = getResponseTimeTrajectoryPoint(vehicleState, accel, physics::RatioValue(-1.0), right);
    if (result)
    {
      result = getResponseTimeTrajectoryPoint(vehicleState, accel, physics::RatioValue(1.0), left);
    }
    if (result)
    {
      result = getResponseTimeTrajectoryPoint(vehicleState, accel, physics::RatioValue(0.0), center);
    }
    trajectorySetSteps.push_back(TrajectorySetStep(left, right, center));
  }
  return result;
}

bool TrajectoryVehicle::getResponseTimeTrajectoryPoint(situation::VehicleState const &vehicleState,
                                                       ad::physics::Acceleration const &aUntilResponseTime,
                                                       ad::physics::RatioValue const &yawRateChangeRatio,
                                                       TrajectoryPoint &resultTrajectoryPoint) const
{
  auto result = true;
  TrajectoryPoint currentPoint(vehicleState);

  auto currentTime = ad::physics::Duration(0.0);

  ad::physics::Duration timeInMovementUntilResponseTime
    = vehicleState.dynamics.responseTime; // until this time, the yaw rate changes
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
        spdlog::warn("TrajectoryVehicle::getResponseTimeTrajectoryPoint>> Could not calculate time to stop for speed "
                     "{}, responseTime {}, acceleration {}",
                     vehicleState.objectState.speed,
                     vehicleState.dynamics.responseTime,
                     aUntilResponseTime);
      }
      timeInMovementUntilResponseTime = std::min(vehicleState.dynamics.responseTime, timeInMovementUntilResponseTime);
    }
  }

  while ((currentTime < vehicleState.dynamics.responseTime) && result)
  {
    auto timeStep = vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep;
    if (vehicleState.dynamics.responseTime
        > currentTime + vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)
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
                                                     bool afterResponseTime) const // TODO complete dynamics needed?
{
  ad::physics::Distance currentDistance;
  physics::Speed finalSpeed;
  auto result = situation::calculateAcceleratedLimitedMovement(
    currentPoint.speed, dynamics.maxSpeedOnAcceleration, acceleration, duration, finalSpeed, currentDistance);
  if (!result)
  {
    spdlog::warn("TrajectoryVehicle::calculateNextTrajectoryPoint>> calculateAcceleratedLimitedMovement() failed.");
  }

  auto currentRadius = dynamics.unstructuredSettings.vehicleMaxRadius;
  if (currentPoint.yawRate != physics::AngularVelocity(0.))
  {
    if (afterResponseTime)
    {
      currentRadius = ad::physics::Distance(1. / static_cast<double>(currentPoint.yawRate));
    }
    else
    {
      currentRadius
        = ad::physics::Distance(static_cast<double>(currentPoint.speed) / static_cast<double>(currentPoint.yawRate));
    }
    if (std::fabs(currentRadius) > dynamics.unstructuredSettings.vehicleMaxRadius)
    {
      if (currentRadius > physics::Distance(0.))
      {
        currentRadius = dynamics.unstructuredSettings.vehicleMaxRadius;
      }
      else
      {
        currentRadius = -dynamics.unstructuredSettings.vehicleMaxRadius;
      }
    }
  }

  // calculate position
  if (std::fabs(currentRadius) == dynamics.unstructuredSettings.vehicleMaxRadius)
  {
    // straight forward
    auto previousPosition = currentPoint.position;
    auto diff = toPoint(std::cos(currentPoint.angle) * currentDistance, std::sin(currentPoint.angle) * currentDistance);
    currentPoint.position = currentPoint.position + diff;
  }
  else
  {
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

    auto previousPosition = currentPoint.position;
    auto tmpAngle = currentPoint.angle - ad::physics::cPI_2;
    Point const circleOrigin = getCircleOrigin(currentPoint.position, currentRadius, tmpAngle);
    auto diffAngle = ad::physics::Angle(currentDistance / currentRadius);
    tmpAngle += diffAngle;
    currentPoint.position = getPointOnCircle(circleOrigin, currentRadius, tmpAngle);
    currentPoint.angle = tmpAngle + ad::physics::cPI_2;

    auto diff = currentPoint.position - previousPosition;
  }
  currentPoint.speed = finalSpeed;
  return true;
}

bool TrajectoryVehicle::calculateBrake(situation::VehicleState const &vehicleState,
                                       ad::physics::Duration const &timeAfterResponseTime,
                                       std::vector<TrajectorySetStep> const &trajectorySetSteps,
                                       TrajectorySetStep const &frontSide,
                                       TrajectorySetStep const &backSide,
                                       Polygon &resultPolygon,
                                       TrajectorySetStepVehicleLocation &brakeMinStepVehicleLocation) const
{
  //-------------
  // back
  //-------------
  auto timeToStopBrakeMax = physics::Duration(0.);
  TrajectorySetStepVehicleLocation brakeMaxVehicleLocations;
  auto result = true;

  if (backSide.center.speed > physics::Speed(0.))
  {
    result = situation::calculateTimeToStop(backSide.center.speed,
                                            timeAfterResponseTime,
                                            vehicleState.dynamics.maxSpeedOnAcceleration,
                                            vehicleState.dynamics.alphaLon.brakeMax,
                                            vehicleState.dynamics.alphaLon.brakeMax,
                                            timeToStopBrakeMax);
    if (!result)
    {
      spdlog::warn(
        "TrajectoryVehicle::calculateBrake>> Could not calculate time to stop. speed {}, timeAfterResponseTime {}",
        backSide.center.speed,
        timeAfterResponseTime);
    }
  }

  if (result)
  {
    result = calculateStepPolygon(backSide,
                                  vehicleState,
                                  timeToStopBrakeMax,
                                  vehicleState.dynamics.alphaLon.brakeMax,
                                  resultPolygon,
                                  brakeMaxVehicleLocations);
    if (!result)
    {
      spdlog::warn("TrajectoryVehicle::calculateBrake>> Could not calculate brake max step polygon.");
    }
  }

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

    result = calculateTrajectorySetFrontAndSide(frontSide,
                                                trajectorySetSteps,
                                                brakeMaxVehicleLocations,
                                                vehicleState,
                                                timeAfterResponseTime,
                                                accelerations,
                                                resultPolygon,
                                                brakeMinStepVehicleLocation);
    if (!result)
    {
      spdlog::warn("TrajectoryVehicle::calculateBrake>> Could not calculate front and side polygon.");
    }
  }
  return result;
}

bool TrajectoryVehicle::calculateContinueForward(Polygon const &brakePolygon,
                                                 TrajectorySetStep const &frontSide,
                                                 std::vector<TrajectorySetStep> const &trajectorySetSteps,
                                                 TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                                 situation::VehicleState const &vehicleState,
                                                 physics::Duration const &timeAfterResponseTime,
                                                 Polygon &resultPolygon) const
{
  std::vector<physics::Acceleration> accelerationsContinueForward;
  auto accelStepSize = (vehicleState.dynamics.alphaLon.accelMax - vehicleState.dynamics.alphaLon.brakeMin)
    / (1.0 + vehicleState.dynamics.unstructuredSettings.vehicleContinueForwardIntermediateAccelerationSteps);
  for (auto acceleration = vehicleState.dynamics.alphaLon.brakeMin + accelStepSize;
       acceleration < vehicleState.dynamics.alphaLon.accelMax;
       acceleration += accelStepSize)
  {
    accelerationsContinueForward.push_back(acceleration);
  }
  accelerationsContinueForward.push_back(vehicleState.dynamics.alphaLon.accelMax);

  resultPolygon = brakePolygon;
  TrajectorySetStepVehicleLocation frontSideStepVehicleLocation; // unused
  auto result = calculateTrajectorySetFrontAndSide(frontSide,
                                                   trajectorySetSteps,
                                                   previousStepVehicleLocation,
                                                   vehicleState,
                                                   timeAfterResponseTime,
                                                   accelerationsContinueForward,
                                                   resultPolygon,
                                                   frontSideStepVehicleLocation);
  if (!result)
  {
    spdlog::warn("TrajectoryVehicle::calculateContinueForward>> Could not calculate front and side polygon.");
  }
  return result;
}

bool TrajectoryVehicle::calculateTrajectorySetFrontAndSide(
  TrajectorySetStep const &frontSide,
  std::vector<TrajectorySetStep> const &trajectorySetSteps,
  TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
  situation::VehicleState const &vehicleState,
  physics::Duration const &timeAfterResponseTime,
  std::vector<physics::Acceleration> const &accelerations,
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
    for (auto itStep = trajectorySetSteps.begin(); (itStep != trajectorySetSteps.end()) && result; ++itStep)
    {
      auto currentPointLeft = itStep->left[0];
      auto currentPointRight = itStep->right[0];

      physics::Duration calculationTime = timeAfterResponseTime;
      if (*itAcceleration < physics::Acceleration(0.))
      {
        if (currentPointLeft.speed == physics::Speed(0.))
        {
          calculationTime = physics::Duration(0.);
        }
        else
        {
          physics::Duration timeToStop;
          result = situation::calculateTimeToStop(currentPointLeft.speed,
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
        result = calculateStepPolygon(
          *itStep, vehicleState, calculationTime, *itAcceleration, stepPolygon, currentStepVehicleLocation);
        if (!result)
        {
          spdlog::warn("TrajectoryVehicle::calculateTrajectorySetFrontAndSide>> Could not calculate step polygon.");
        }
      }
      if (result)
      {
        result
          = calculateEstimationBetweenSteps(resultPolygon, previousStepVehicleLocation, currentStepVehicleLocation);
        if (!result)
        {
          spdlog::warn(
            "TrajectoryVehicle::calculateTrajectorySetFrontAndSide>> Could not calculate between steps polygon.");
        }
        previousStepVehicleLocation = currentStepVehicleLocation;
      }

      if (result)
      {
        result = combinePolygon(resultPolygon, stepPolygon, resultPolygon);
      }
    }
  }

  //-------------
  // front
  //-------------
  Polygon frontPolygon;
  if (result)
  {
    result = calculateStepPolygon(
      frontSide, vehicleState, timeAfterResponseTime, accelerations.back(), frontPolygon, frontSideStepVehicleLocation);
  }
  if (result)
  {
    result = calculateEstimationBetweenSteps(resultPolygon, previousStepVehicleLocation, frontSideStepVehicleLocation);
  }
  if (result)
  {
    result = combinePolygon(resultPolygon, frontPolygon, resultPolygon);
  }
  return result;
}

bool TrajectoryVehicle::calculateStepPolygon(TrajectorySetStep const &step,
                                             situation::VehicleState const &vehicleState,
                                             physics::Duration const &timeAfterResponseTime,
                                             physics::Acceleration const &acceleration,
                                             Polygon &polygon,
                                             TrajectorySetStepVehicleLocation &stepVehicleLocation) const
{
  auto result = true;
  MultiPoint frontPtsLeft;
  MultiPoint frontPtsRight;

  for (auto i = 0; (i < step.left.size()) && result; ++i)
  {
    auto currentPointLeft = step.left[i];
    result = calculateNextTrajectoryPoint(
      currentPointLeft, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
    auto vehicleLocationLeft = VehicleLocation(currentPointLeft, vehicleState);
    boost::geometry::append(frontPtsLeft, vehicleLocationLeft.toMultiPoint());
    if (i == 0)
    {
      stepVehicleLocation.left = vehicleLocationLeft;
    }
  }

  // center
  if (result)
  {
    auto currentPointCenter = step.center;
    result = calculateNextTrajectoryPoint(
      currentPointCenter, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
    auto vehicleLocationCenter = VehicleLocation(currentPointCenter, vehicleState);
    boost::geometry::append(frontPtsLeft, vehicleLocationCenter.toMultiPoint());
    stepVehicleLocation.center = vehicleLocationCenter;
    boost::geometry::append(frontPtsRight, vehicleLocationCenter.toMultiPoint());
  }

  for (auto i = 0; (i < step.right.size()) && result; ++i)
  {
    auto currentPointRight = step.right[i];
    result = calculateNextTrajectoryPoint(
      currentPointRight, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
    auto vehicleLocationRight = VehicleLocation(currentPointRight, vehicleState);
    boost::geometry::append(frontPtsRight, vehicleLocationRight.toMultiPoint());
    if (i == step.right.size() - 1)
    {
      stepVehicleLocation.right = vehicleLocationRight;
    }
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
  TrajectorySetStepVehicleLocation const &currentStepVehicleLocation) const
{
  // Fill potential gap between two calculation steps by using the previous and current step

  //-------------
  // back
  //-------------
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
  auto result = combinePolygon(hullBackRight, hullBackLeft, hullBack);

  if (result)
  {
    result = combinePolygon(polygon, hullBack, polygon);
  }

  //-------------
  // front
  //-------------
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
  }

  if (result)
  {
    result = combinePolygon(polygon, hullFront, polygon);
  }
  return result;
}

bool TrajectoryVehicle::combinePolygon(Polygon const &a, Polygon const &b, Polygon &result) const
{
  if (a.outer().empty() && !b.outer().empty())
  {
    result = b;
  }
  else if (!a.outer().empty() && b.outer().empty())
  {
    result = a;
  }
  else
  {
    std::vector<Polygon> unionPolygons;
    boost::geometry::union_(a.outer(), b.outer(), unionPolygons);
    if (unionPolygons.size() != 1)
    {
      spdlog::warn("Could not calculate combined polygon. Expected 1 polygon after union, found {}",
                   unionPolygons.size());
      return false;
    }
    else
    {
      result = std::move(unionPolygons[0]);
    }
  }
  return true;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
