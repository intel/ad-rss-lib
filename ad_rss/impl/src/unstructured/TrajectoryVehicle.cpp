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

const ad::physics::Distance TrajectoryVehicle::maxRadius(400.0);
const int TrajectoryVehicle::frontIntermediateRatioSteps = 0;
const int TrajectoryVehicle::backIntermediateRatioSteps = 0;
const int TrajectoryVehicle::responseTimeIntermediateAccelerationSteps = 0;
const int TrajectoryVehicle::continueForwardIntermediateAccelerationSteps = 1;

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

  if (result)
  {
    auto start = std::chrono::high_resolution_clock::now();
    std::vector<TrajectorySetStep> trajectorySetSteps;
    TrajectorySetStep frontSide;
    TrajectorySetStep backSide;
    getResponseTimeTrajectoryPoints(vehicleState, trajectorySetSteps, frontSide, backSide);

    TrajectorySetStepVehicleLocation brakeMinVehicleLocations;
    
    auto timeAfterResponseTime = timeToStop - vehicleState.dynamics.responseTime;
    spdlog::warn("DEBUG () timeAfterResponseTime {}, front left {}, front right {}, steps {}",timeAfterResponseTime, frontSide.left.size(), frontSide.right.size(), trajectorySetSteps.size());
    
    // brake with vehicleState.dynamics.alphaLon.brakeMin
    calculateBrake(vehicleState, 
                  timeAfterResponseTime,
                  trajectorySetSteps,
                  frontSide,
                  backSide,
                  brakePolygon,
                  brakeMinVehicleLocations);

    // // continue forward with vehicleState.dynamics.alphaLon.accelMax
    // calculateContinueForward(brakePolygon,
    //                         frontSide,
    //                         trajectorySetSteps,
    //                         brakeMinVehicleLocations,
    //                         vehicleState,
    //                         timeAfterResponseTime,
    //                         continueForwardPolygon);

    auto finish = std::chrono::high_resolution_clock::now();
    auto dur1 = std::chrono::duration_cast<std::chrono::milliseconds>(finish-start);
    spdlog::warn("DEBUG Calculation Time for brake/ContinueForward {}ms", dur1.count());

    drawPolygon(brakePolygon);
    // drawPolygon(continueForwardPolygon);
  }


  spdlog::warn("PLOT NEXT");
  spdlog::warn("PLOT FLUSH");
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

void TrajectoryVehicle::getResponseTimeTrajectoryPoints(
  situation::VehicleState const &vehicleState,
  std::vector<TrajectorySetStep> &trajectorySetSteps,
  TrajectorySetStep &frontSide,
  TrajectorySetStep &backSide) const
{  
  auto ratioDiffBack = physics::RatioValue(2.0 / (2.0 * backIntermediateRatioSteps + 2.0));
  for (auto ratioValue = physics::RatioValue(-1.0); ratioValue <= physics::RatioValue(1.0); ratioValue += ratioDiffBack)
  {
      auto accel = vehicleState.dynamics.alphaLon.brakeMax;
      auto pt = getResponseTimeTrajectoryPoint(vehicleState, accel, ratioValue);
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
  
  auto ratioDiffFront = physics::RatioValue(2.0 / (2.0 * frontIntermediateRatioSteps + 2.0));
  for (auto ratioValue = physics::RatioValue(-1.0); ratioValue <= physics::RatioValue(1.0); ratioValue += ratioDiffFront)
  {
      auto accel = vehicleState.dynamics.alphaLon.accelMax;
      auto pt = getResponseTimeTrajectoryPoint(vehicleState, accel, ratioValue);
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
  
  auto accelStepSize = (vehicleState.dynamics.alphaLon.accelMax - vehicleState.dynamics.alphaLon.brakeMax) / (1.0 + responseTimeIntermediateAccelerationSteps);
  for (ad::physics::Acceleration accel = vehicleState.dynamics.alphaLon.brakeMax + accelStepSize;
      accel < vehicleState.dynamics.alphaLon.accelMax;
      accel += accelStepSize)
  {
    auto right = getResponseTimeTrajectoryPoint(vehicleState, accel, physics::RatioValue(1.0));
    auto left = getResponseTimeTrajectoryPoint(vehicleState, accel, physics::RatioValue(-1.0));
    auto center = getResponseTimeTrajectoryPoint(vehicleState, accel, physics::RatioValue(0.0));
    trajectorySetSteps.push_back(TrajectorySetStep(left, right, center));
  }
}

TrajectoryPoint TrajectoryVehicle::getResponseTimeTrajectoryPoint(situation::VehicleState const &vehicleState,
                                               ad::physics::Acceleration const &aUntilResponseTime,
                                               ad::physics::RatioValue const &yawRateChangeRatio) const
{
  TrajectoryPoint currentPoint(vehicleState);

  auto currentTime = ad::physics::Duration(0.0);

  
  ad::physics::Duration timeInMovementUntilResponseTime = vehicleState.dynamics.responseTime; // until this time, the yaw rate changes
  if (aUntilResponseTime < physics::Acceleration(0.))
  {
  /*TODO result*/auto result = situation::calculateTimeToStop(vehicleState.objectState.speed,
                                               vehicleState.dynamics.responseTime,
                                               vehicleState.dynamics.maxSpeedOnAcceleration,
                                               aUntilResponseTime,
                                               aUntilResponseTime,
                                               timeInMovementUntilResponseTime);
    timeInMovementUntilResponseTime = std::min(vehicleState.dynamics.responseTime, timeInMovementUntilResponseTime);
  }
  
  while (currentTime < vehicleState.dynamics.responseTime)
  {
    auto timeStep = vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep;
    if (vehicleState.dynamics.responseTime > currentTime + vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)
    {
      currentTime += vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep;
    }
    else
    {
      currentTime = vehicleState.dynamics.responseTime;
      timeStep = physics::Duration(std::fmod(static_cast<double>(vehicleState.dynamics.responseTime), static_cast<double>(vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)));
    }

    currentPoint.yawRate = calculateYawRate(vehicleState,
                                      std::min(currentTime, timeInMovementUntilResponseTime),
                                      vehicleState.dynamics.unstructuredSettings.vehicleYawRateChange,
                                      yawRateChangeRatio);

    auto result = calculateNextTrajectoryPoint(currentPoint, //TODO result
                            aUntilResponseTime,
                            timeStep,
                            vehicleState.dynamics, false);
  }

  return currentPoint;
}

bool TrajectoryVehicle::calculateNextTrajectoryPoint(TrajectoryPoint &currentPoint,
                                                physics::Acceleration const &acceleration,
                                                physics::Duration const &duration,
                                                ::ad::rss::world::RssDynamics const &dynamics,
                                                bool afterResponseTime) const //TODO complete dynamics needed?
{
  ad::physics::Distance currentDistance;
  physics::Speed finalSpeed;
  auto result = situation::calculateAcceleratedLimitedMovement(currentPoint.speed,
                                                  dynamics.maxSpeedOnAcceleration,
                                                  acceleration,
                                                  duration,
                                                  finalSpeed,
                                                  currentDistance);
  
  
  auto currentRadius = TrajectoryVehicle::maxRadius;
  if (currentPoint.yawRate != physics::AngularVelocity(0.))
  {
    if (afterResponseTime)
    {
      currentRadius = ad::physics::Distance(1. / static_cast<double>(currentPoint.yawRate));
    }
    else
    {
      currentRadius = ad::physics::Distance(static_cast<double>(currentPoint.speed) / static_cast<double>(currentPoint.yawRate));
    }
    if (std::fabs(currentRadius) > TrajectoryVehicle::maxRadius)
    {
      if (currentRadius > physics::Distance(0.))
      {
        currentRadius = TrajectoryVehicle::maxRadius;
      }
      else
      {
        currentRadius = -TrajectoryVehicle::maxRadius;
      }
    }
  }

  // spdlog::warn("DEBUG next pt radius {:03.2f}, distance {:03.2f}, currentAngle {:03.2f}, currentYawRate {:03.2f}", static_cast<double>(currentRadius), static_cast<double>(currentDistance), static_cast<double>(currentPoint.angle), static_cast<double>(currentPoint.yawRate));
  //calculate position
  if (std::fabs(currentRadius) == TrajectoryVehicle::maxRadius)
  {
    //straight forward
    auto previousPosition = currentPoint.position;
    auto diff = toPoint(std::cos(currentPoint.angle) * currentDistance, std::sin(currentPoint.angle) * currentDistance);
    currentPoint.position = currentPoint.position + diff;
    // spdlog::warn("DEBUG    straight! {:03.2f}/{:03.2f} + {:03.2f}/{:03.2f} -> {:03.2f}/{:03.2f}", previousPosition.x(), previousPosition.y(), diff.x(), diff.y(), currentPoint.position.x(), currentPoint.position.y());
  }
  else
  {
    if (std::fabs(currentRadius) < dynamics.unstructuredSettings.vehicleMinRadius)
    {
      // spdlog::warn("DEBUG    set minimal radius!!!!!!!!!");
      if (currentRadius > physics::Distance(0.))
      {
        currentRadius = dynamics.unstructuredSettings.vehicleMinRadius;
      }
      else 
      {
        currentRadius = -dynamics.unstructuredSettings.vehicleMinRadius;
      }
      // spdlog::warn("DEBUG   use minimal radius {}", currentRadius);
    }
    //moving on a curve
    // Point const circleOrigin =  currentPoint - toPoint(std::sin(currentAngle) * currentRadius, std::cos(currentAngle) * currentRadius);
    // currentAngle += ad::physics::Angle(currentDistance / currentRadius);
    // currentPoint = circleOrigin - toPoint(std::sin(currentAngle) * currentRadius, std::cos(currentAngle) * currentRadius);
    
    auto previousPosition = currentPoint.position;
    auto tmpAngle = currentPoint.angle - ad::physics::cPI_2;
    Point const circleOrigin = getCircleOrigin(currentPoint.position, currentRadius, tmpAngle);
    auto diffAngle = ad::physics::Angle(currentDistance / currentRadius);
    tmpAngle += diffAngle;
    currentPoint.position = getPointOnCircle(circleOrigin, currentRadius, tmpAngle);
    currentPoint.angle = tmpAngle + ad::physics::cPI_2;
    
    auto diff = currentPoint.position - previousPosition;
    // spdlog::warn("DEBUG    curve   ! {:03.2f}/{:03.2f} + {:03.2f}/{:03.2f} -> {:03.2f}/{:03.2f} (diff {:3.2f})", previousPosition.x(), previousPosition.y(),diff.x(), diff.y(), currentPosition.x(), currentPosition.y(), static_cast<double>(diffAngle));
  }
  //  spdlog::warn("DEBUG  calculateNextTrajectoryPoint() duration {}, speed {}, angle {}, distance {}, radius {}, pt {}/{}", duration, currentSpeed, currentAngle, currentDistance, currentRadius, currentPoint.x(), currentPoint.y());
  currentPoint.speed = finalSpeed;
  return true;
}


void TrajectoryVehicle::calculateBrake(situation::VehicleState const &vehicleState,
                                               ad::physics::Duration const &timeAfterResponseTime,
  std::vector<TrajectorySetStep> const &trajectorySetSteps,
  TrajectorySetStep const &frontSide,
  TrajectorySetStep const &backSide,
  Polygon &resultPolygon,
  TrajectorySetStepVehicleLocation &brakeMinStepVehicleLocation) const
{
  //BACK
  physics::Duration timeToStopBrakeMax;
  TrajectorySetStepVehicleLocation brakeMaxVehicleLocations;
  auto result = situation::calculateTimeToStop(backSide.center.speed, //TODO result
                                              timeAfterResponseTime,
                                              vehicleState.dynamics.maxSpeedOnAcceleration,
                                              vehicleState.dynamics.alphaLon.brakeMax,
                                              vehicleState.dynamics.alphaLon.brakeMax,
                                              timeToStopBrakeMax);
                                              
  calculateStepPolygon(backSide, vehicleState, timeToStopBrakeMax, vehicleState.dynamics.alphaLon.brakeMax, resultPolygon, brakeMaxVehicleLocations);
  drawPolygon(brakeMaxVehicleLocations.left.toPolygon());
  
  std::vector<physics::Acceleration> accelerations;
  accelerations.push_back(vehicleState.dynamics.alphaLon.brakeMin);

  calculateTrajectorySetFrontAndSide(frontSide,
                                     trajectorySetSteps,
                                     brakeMaxVehicleLocations,
                                     vehicleState,
                                     timeAfterResponseTime,
                                     accelerations,
                                     resultPolygon,
                                     brakeMinStepVehicleLocation);
}



void TrajectoryVehicle::calculateContinueForward(Polygon const &brakePolygon,
                                                TrajectorySetStep const &frontSide,
                                                 std::vector<TrajectorySetStep> const &trajectorySetSteps,
                                                 TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                                 situation::VehicleState const &vehicleState,
                                                 physics::Duration const &timeAfterResponseTime,
                                                 Polygon &resultPolygon) const
{
  std::vector<physics::Acceleration> accelerationsContinueForward;
  auto accelStepSize = (vehicleState.dynamics.alphaLon.accelMax - vehicleState.dynamics.alphaLon.brakeMin) / (1.0 + continueForwardIntermediateAccelerationSteps);
  for (auto acceleration = vehicleState.dynamics.alphaLon.brakeMin + accelStepSize;
      acceleration < vehicleState.dynamics.alphaLon.accelMax;
      acceleration += accelStepSize)
  {
    accelerationsContinueForward.push_back(acceleration);
  }
  accelerationsContinueForward.push_back(vehicleState.dynamics.alphaLon.accelMax);

  resultPolygon = brakePolygon;
  TrajectorySetStepVehicleLocation frontSideStepVehicleLocation; //unused
  calculateTrajectorySetFrontAndSide(frontSide,
                           trajectorySetSteps,
                           previousStepVehicleLocation,
                           vehicleState,
                           timeAfterResponseTime,
                           accelerationsContinueForward,
                           resultPolygon,
                           frontSideStepVehicleLocation);
}

void TrajectoryVehicle::calculateTrajectorySetFrontAndSide(TrajectorySetStep const &frontSide,
                                                 std::vector<TrajectorySetStep> const &trajectorySetSteps,
                                                 TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                                 situation::VehicleState const &vehicleState,
                                                 physics::Duration const &timeAfterResponseTime,
                                                 std::vector<physics::Acceleration> const &accelerations,
                                                 Polygon &resultPolygon,
                                                 TrajectorySetStepVehicleLocation &frontSideStepVehicleLocation) const
{
  auto lastStepVehicleLocation = previousStepVehicleLocation;
  //SIDE
  spdlog::warn("DEBUG: accelerations.");
  for (auto acceleration: accelerations)
  {
  spdlog::warn("DEBUG:   {}.", acceleration);
    for (auto step: trajectorySetSteps)
    {  
      
      auto currentPointLeft = step.left[0];
      auto currentPointRight = step.right[0];

      physics::Duration calculationTime = timeAfterResponseTime;
      if (acceleration < physics::Acceleration(0.))
      {
        physics::Duration timeToStop;
        auto result = situation::calculateTimeToStop(currentPointLeft.speed, //TODO result
                                                    timeAfterResponseTime,
                                                    vehicleState.dynamics.maxSpeedOnAcceleration,
                                                    acceleration,
                                                    acceleration,
                                                    timeToStop);
        calculationTime = std::min(timeToStop, timeAfterResponseTime);
      }


      Polygon stepPolygon;      
      TrajectorySetStepVehicleLocation currentStepVehicleLocation;
      calculateStepPolygon(step, vehicleState, calculationTime, acceleration, stepPolygon, currentStepVehicleLocation);
      drawPolygon(currentStepVehicleLocation.left.toPolygon());

      calculateEstimationBetweenSteps(resultPolygon, lastStepVehicleLocation, currentStepVehicleLocation);
      lastStepVehicleLocation = currentStepVehicleLocation;

      resultPolygon = unionize(resultPolygon, stepPolygon);
    }
  }

  //FRONT
  Polygon frontPolygon;
  calculateStepPolygon(frontSide, 
                       vehicleState,
                       timeAfterResponseTime,
                       accelerations.back(),
                       frontPolygon,
                       frontSideStepVehicleLocation);

  calculateEstimationBetweenSteps(resultPolygon, previousStepVehicleLocation, frontSideStepVehicleLocation);
  drawPolygon(frontSideStepVehicleLocation.left.toPolygon());
  resultPolygon = unionize(resultPolygon, frontPolygon);
}

void TrajectoryVehicle::calculateStepPolygon(TrajectorySetStep const &step, 
                                             situation::VehicleState const &vehicleState,
                                             physics::Duration const &timeAfterResponseTime,
                                             physics::Acceleration const &acceleration,
                                             Polygon &polygon,
                                             TrajectorySetStepVehicleLocation &stepVehicleLocation) const
{
  MultiPoint frontPtsLeft;
  MultiPoint frontPtsRight;

  for (auto i = 0; i < step.left.size(); ++i)
  {  
    auto currentPointLeft = step.left[i];
    calculateNextTrajectoryPoint(currentPointLeft, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
    auto vehicleLocationLeft = VehicleLocation(currentPointLeft, vehicleState);
    boost::geometry::append(frontPtsLeft, vehicleLocationLeft.toMultiPoint());
    if (i == 0)
    {
      stepVehicleLocation.left = vehicleLocationLeft;
    }
  }

  //center
  auto currentPointCenter = step.center;
  calculateNextTrajectoryPoint(currentPointCenter, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
  auto vehicleLocationCenter = VehicleLocation(currentPointCenter, vehicleState);
  boost::geometry::append(frontPtsLeft, vehicleLocationCenter.toMultiPoint());
  stepVehicleLocation.center = vehicleLocationCenter;
  boost::geometry::append(frontPtsRight, vehicleLocationCenter.toMultiPoint());
  
  for (auto i = 0; i < step.right.size(); ++i)
  {  
    auto currentPointRight = step.right[i];
    calculateNextTrajectoryPoint(currentPointRight, acceleration, timeAfterResponseTime, vehicleState.dynamics, true);
    auto vehicleLocationRight = VehicleLocation(currentPointRight, vehicleState);
    boost::geometry::append(frontPtsRight, vehicleLocationRight.toMultiPoint()); 
    if (i == step.right.size() -1)
    {
      stepVehicleLocation.right = vehicleLocationRight;
    }
  }

  Polygon hullLeft;
  Polygon hullRight;
  boost::geometry::convex_hull(frontPtsLeft, hullLeft);
  boost::geometry::convex_hull(frontPtsRight, hullRight);
  polygon = hullLeft;
  polygon = unionize(polygon, hullRight);
  // drawPolygon(polygon);
}

void TrajectoryVehicle::calculateEstimationBetweenSteps(Polygon &polygon,
                                                        TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                                        TrajectorySetStepVehicleLocation const &currentStepVehicleLocation) const
{
  //Fill potential gap between two calculation steps by using the previous and current step
  //BACK
  
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
  hullBack = unionize(hullBackRight, hullBackLeft);
  polygon = unionize(polygon, hullBack);

  //FRONT
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
  Polygon hullFront;
  hullFront = unionize(hullFrontRight, hullFrontLeft);
  polygon = unionize(polygon, hullFront);
}

Polygon TrajectoryVehicle::unionize(Polygon const &a, Polygon const &b) const
{
  if (a.outer().empty() && !b.outer().empty())
  {
    return b;
  }
  else if (!a.outer().empty() && b.outer().empty())
  {
    return a;
  }
  else
  {
    std::vector<Polygon> unionPolygons;
    boost::geometry::union_(a.outer(), b.outer(), unionPolygons);
    if (unionPolygons.size() != 1)
    {
      spdlog::debug("Could not calculate final continue forward polygon. Expected 1 polygon after union, found {}",
                    unionPolygons.size());
      spdlog::warn("DEBUG WAAAA no union, found {}",
                    unionPolygons.size());
      return Polygon();
    }
    else
    {
      return unionPolygons[0];
    }
  }
}

void TrajectoryVehicle::drawPolygon(Polygon const &polygon) const
{
    spdlog::warn("[[");
    for (auto pt: polygon.outer())
    {
    spdlog::warn("[{},{}],", pt.x(), pt.y());
    }
    spdlog::warn("]]");
}

} // namespace unstructured
} // namespace rss
} // namespace ad
