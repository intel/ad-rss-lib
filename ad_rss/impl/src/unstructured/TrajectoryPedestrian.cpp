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

#include "TrajectoryPedestrian.hpp"
#include <ad/physics/Operation.hpp>
#include "ad/rss/situation/Physics.hpp"
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

const ad::physics::Distance TrajectoryPedestrian::maxRadius(1000.);
const ad::physics::Angle TrajectoryPedestrian::circleStepWidth(physics::c2PI / 20.);

bool TrajectoryPedestrian::calculateTrajectorySets(situation::VehicleState const &vehicleState,
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

  if (DEBUG_DRAWING_IS_ENABLED())
  {
    auto vehicleLocation = TrafficParticipantLocation(TrajectoryPoint(vehicleState), vehicleState);
    DEBUG_DRAWING_POLYGON(vehicleLocation.toPolygon(), "black", "pedestrian_initial_position");
  }
  if (result)
  {
    if (vehicleState.objectState.speed == ad::physics::Speed(0.))
    {
      result = calculateTrajectorySetsStandingStill(vehicleState, timeToStop, brakePolygon, continueForwardPolygon);
    }
    else
    {
      result = calculateTrajectorySetsMoving(vehicleState, timeToStop, brakePolygon, continueForwardPolygon);
    }
  }
  DEBUG_DRAWING_POLYGON(brakePolygon, "red", "pedestrian_brake");
  DEBUG_DRAWING_POLYGON(continueForwardPolygon, "green", "pedestrian_continue_forward");
  return result;
}

bool TrajectoryPedestrian::calculateTrajectorySetsMoving(situation::VehicleState const &vehicleState,
                                                         physics::Duration const &timeToStop,
                                                         Polygon &brakePolygon,
                                                         Polygon &continueForwardPolygon) const
{
  TrajectorySetStep responseTimeFrontSide;
  TrajectorySetStep responseTimeBackSide;
  auto result = getResponseTimeTrajectoryPoints(vehicleState, responseTimeFrontSide, responseTimeBackSide);
  if (!result)
  {
    spdlog::debug(
      "TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate reponse time trajectory points.");
  }
  else
  {
    spdlog::trace("Trajectory points at response time: front left {}, front right {}, back left {}, back right {}",
                  responseTimeFrontSide.left.size(),
                  responseTimeFrontSide.right.size(),
                  responseTimeBackSide.left.size(),
                  responseTimeBackSide.right.size());
  }

  auto timeAfterResponseTime = timeToStop - vehicleState.dynamics.responseTime;

  auto timeToStopBrakeMax = physics::Duration(0.);
  if (responseTimeBackSide.center.speed > physics::Speed(0.))
  {
    result = situation::calculateTimeToStop(
      responseTimeBackSide.center.speed,
      timeAfterResponseTime, // this is the time to stop with brakemin, therefore sufficient here
      vehicleState.dynamics.maxSpeedOnAcceleration,
      vehicleState.dynamics.alphaLon.brakeMax,
      vehicleState.dynamics.alphaLon.brakeMax,
      timeToStopBrakeMax);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate time to stop. speed {}, "
                    "timeAfterResponseTime {}",
                    responseTimeBackSide.center.speed,
                    timeAfterResponseTime);
    }
  }

  physics::Distance brakeMaxDistanceAfterResponseTime = physics::Distance(0.);
  if (result)
  {
    physics::Speed unusedSpeed;
    result = situation::calculateAcceleratedLimitedMovement(responseTimeBackSide.center.speed,
                                                            vehicleState.dynamics.maxSpeedOnAcceleration,
                                                            vehicleState.dynamics.alphaLon.brakeMax,
                                                            timeToStopBrakeMax,
                                                            unusedSpeed,
                                                            brakeMaxDistanceAfterResponseTime);
  }

  physics::Distance brakeMinDistanceAfterResponseTime = physics::Distance(0.);
  if (result)
  {
    physics::Speed unusedSpeed;
    result = situation::calculateAcceleratedLimitedMovement(responseTimeFrontSide.center.speed,
                                                            vehicleState.dynamics.maxSpeedOnAcceleration,
                                                            vehicleState.dynamics.alphaLon.brakeMin,
                                                            timeAfterResponseTime,
                                                            unusedSpeed,
                                                            brakeMinDistanceAfterResponseTime);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate speed and distance offset for "
                    "t={} and minBrake={}.",
                    timeAfterResponseTime,
                    vehicleState.dynamics.alphaLon.brakeMin);
    }
  }

  physics::Distance accelMaxDistanceAfterResponseTime = physics::Distance(0.);
  if (result)
  {
    physics::Speed unusedSpeed;
    result = situation::calculateAcceleratedLimitedMovement(responseTimeFrontSide.center.speed,
                                                            vehicleState.dynamics.maxSpeedOnAcceleration,
                                                            vehicleState.dynamics.alphaLon.accelMax,
                                                            timeAfterResponseTime,
                                                            unusedSpeed,
                                                            accelMaxDistanceAfterResponseTime);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate speed and distance offset for "
                    "t={} and accelMax={}.",
                    timeAfterResponseTime,
                    vehicleState.dynamics.alphaLon.accelMax);
    }
  }

  //=======================
  // calculate brakePolygon
  //=======================
  //-------------
  // brake front
  //-------------
  TrajectorySetStep brakeFront;
  calculateTrajectoryPointsStraight(brakeMinDistanceAfterResponseTime, responseTimeFrontSide, brakeFront);

  //-------------
  // brake sides
  //-------------
  std::vector<TrajectorySetStep> brakeSideSteps;
  physics::Speed unusedSpeed;
  physics::Distance accelMaxDistanceAtResponseTime;
  result = situation::calculateAcceleratedLimitedMovement(vehicleState.objectState.speed,
                                                          vehicleState.dynamics.maxSpeedOnAcceleration,
                                                          vehicleState.dynamics.alphaLon.accelMax,
                                                          vehicleState.dynamics.responseTime,
                                                          unusedSpeed,
                                                          accelMaxDistanceAtResponseTime);
  auto stepWidth = accelMaxDistanceAtResponseTime
    / (1 + vehicleState.dynamics.unstructuredSettings.pedestrianBrakeIntermediateAccelerationSteps);
  for (auto distance = stepWidth; distance < accelMaxDistanceAtResponseTime; distance += stepWidth)
  {
    auto left = TrajectoryPoint(vehicleState);
    auto right = left;
    auto center = left;
    calculateTrajectoryPoint(left, vehicleState.dynamics, distance, physics::RatioValue(1.0));
    calculateTrajectoryPoint(right, vehicleState.dynamics, distance, physics::RatioValue(-1.0));
    calculateTrajectoryPoint(center, vehicleState.dynamics, distance, physics::RatioValue(0.0));
    TrajectorySetStep step;
    step.left.push_back(left);
    step.right.push_back(right);
    step.center = center;
    brakeSideSteps.push_back(step);
  }

  //-------------
  // brake back
  //-------------
  TrajectorySetStepVehicleLocation brakeMaxStepVehicleLocation;
  if (result)
  {
    TrajectoryPoint finalRightMaxBrakeDistance;
    calculateTrajectoryPointStraight(
      responseTimeBackSide.right.front(), brakeMaxDistanceAfterResponseTime, finalRightMaxBrakeDistance);
    TrajectoryPoint finalLeftMaxBrakeDistance;
    calculateTrajectoryPointStraight(
      responseTimeBackSide.left.back(), brakeMaxDistanceAfterResponseTime, finalLeftMaxBrakeDistance);

    auto finalRightMaxBrakeDistanceLocation = TrafficParticipantLocation(finalRightMaxBrakeDistance, vehicleState);
    auto finalLeftMaxBrakeDistanceLocation = TrafficParticipantLocation(finalLeftMaxBrakeDistance, vehicleState);

    TrajectoryPoint finalCenterMaxBrakeDistance;
    calculateTrajectoryPointStraight(
      responseTimeBackSide.center, brakeMaxDistanceAfterResponseTime, finalCenterMaxBrakeDistance);
    brakeMaxStepVehicleLocation.center = TrafficParticipantLocation(finalCenterMaxBrakeDistance, vehicleState);
    brakeMaxStepVehicleLocation.left = finalLeftMaxBrakeDistanceLocation;
    brakeMaxStepVehicleLocation.right = finalRightMaxBrakeDistanceLocation;

    MultiPoint back;
    boost::geometry::append(back, finalRightMaxBrakeDistanceLocation.backRight);
    boost::geometry::append(back, finalRightMaxBrakeDistanceLocation.frontRight);
    boost::geometry::append(back, finalLeftMaxBrakeDistanceLocation.backLeft);
    boost::geometry::append(back, finalLeftMaxBrakeDistanceLocation.frontLeft);
    boost::geometry::convex_hull(back, brakePolygon);
  }

  if (result)
  {
    TrajectorySetStepVehicleLocation unusedStepVehicleLocation;
    result = calculateFrontAndSidePolygon(vehicleState,
                                          brakeMaxStepVehicleLocation,
                                          brakeSideSteps,
                                          brakeFront,
                                          "pedestrian_brake",
                                          brakePolygon,
                                          unusedStepVehicleLocation);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate continueForward polygon.");
    }
  }

  //=================================
  // calculate continueForwardPolygon
  //=================================
  continueForwardPolygon = brakePolygon;
  //-------------
  // continueForward front
  //-------------
  TrajectorySetStep continueForwardFront;
  if (result)
  {
    calculateTrajectoryPointsStraight(accelMaxDistanceAfterResponseTime, responseTimeFrontSide, continueForwardFront);

    // max left
    auto ratioDiff = physics::RatioValue(
      2.0
      / (2.0 * vehicleState.dynamics.unstructuredSettings.pedestrianContinueForwardIntermediateHeadingChangeRatioSteps
         + 2.0));
    for (auto ratioValue = ratioDiff; ratioValue <= physics::RatioValue(1.0); ratioValue += ratioDiff)
    {
      auto pt = responseTimeFrontSide.left.back();
      calculateTrajectoryPoint(pt, vehicleState.dynamics, accelMaxDistanceAfterResponseTime, ratioValue);
      continueForwardFront.left.push_back(pt);
    }

    // max right
    std::vector<TrajectoryPoint> right;
    for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue < physics::RatioValue(0.0)); ratioValue += ratioDiff)
    {
      auto pt = responseTimeFrontSide.right.front();
      calculateTrajectoryPoint(pt, vehicleState.dynamics, accelMaxDistanceAfterResponseTime, ratioValue);
      continueForwardFront.right.push_back(pt);
    }
    auto previousRight = std::move(continueForwardFront.right);
    continueForwardFront.right = right;
    continueForwardFront.right.insert(continueForwardFront.right.end(), previousRight.begin(), previousRight.end());
  }

  //-------------
  // continueForward sides
  //-------------
  std::vector<TrajectorySetStep> continueForwardSideSteps;
  if (result)
  {
    stepWidth = (accelMaxDistanceAfterResponseTime - brakeMaxDistanceAfterResponseTime)
      / (1 + vehicleState.dynamics.unstructuredSettings.pedestrianContinueForwardIntermediateAccelerationSteps);
    for (auto distance = brakeMaxDistanceAfterResponseTime; distance <= accelMaxDistanceAfterResponseTime;
         distance += stepWidth)
    {
      auto left = responseTimeFrontSide.left.back();
      auto right = responseTimeFrontSide.right.front();
      auto center = responseTimeFrontSide.center;
      calculateTrajectoryPoint(left, vehicleState.dynamics, distance, physics::RatioValue(1.0));
      calculateTrajectoryPoint(right, vehicleState.dynamics, distance, physics::RatioValue(-1.0));
      calculateTrajectoryPoint(center, vehicleState.dynamics, distance, physics::RatioValue(0.0));
      TrajectorySetStep step;
      step.left.push_back(left);
      step.right.push_back(right);
      step.center = center;
      continueForwardSideSteps.push_back(step);
    }
  }
  if (result)
  {
    TrajectorySetStepVehicleLocation unusedStepVehicleLocation;
    result = calculateFrontAndSidePolygon(vehicleState,
                                          brakeMaxStepVehicleLocation,
                                          continueForwardSideSteps,
                                          continueForwardFront,
                                          "pedestrian_continue_forward",
                                          continueForwardPolygon,
                                          unusedStepVehicleLocation);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate continueForward polygon.");
    }
  }

  return result;
}

bool TrajectoryPedestrian::calculateTrajectorySetsStandingStill(situation::VehicleState const &vehicleState,
                                                                physics::Duration const &timeToStop,
                                                                Polygon &brakePolygon,
                                                                Polygon &continueForwardPolygon) const
{
  // If pedestrian is standing, he might start walking in any direction
  ad::physics::Speed speed;
  ad::physics::Distance brakeMinMaxDistance;
  auto result = situation::calculateSpeedAndDistanceOffset(timeToStop,
                                                           vehicleState.objectState.speed,
                                                           vehicleState.dynamics.responseTime,
                                                           vehicleState.dynamics.maxSpeedOnAcceleration,
                                                           vehicleState.dynamics.alphaLon.accelMax,
                                                           vehicleState.dynamics.alphaLon.brakeMin,
                                                           speed,
                                                           brakeMinMaxDistance);
  calculateCircleArc(toPoint(vehicleState.objectState.centerPoint),
                     brakeMinMaxDistance,
                     ad::physics::Angle(0.),
                     ad::physics::c2PI,
                     circleStepWidth,
                     brakePolygon);

  ad::physics::Distance accelMaxMaxDistance;
  if (result)
  {
    result = situation::calculateSpeedAndDistanceOffset(timeToStop,
                                                        vehicleState.objectState.speed,
                                                        vehicleState.dynamics.responseTime,
                                                        vehicleState.dynamics.maxSpeedOnAcceleration,
                                                        vehicleState.dynamics.alphaLon.accelMax,
                                                        vehicleState.dynamics.alphaLon.accelMax,
                                                        speed,
                                                        accelMaxMaxDistance);
    calculateCircleArc(toPoint(vehicleState.objectState.centerPoint),
                       accelMaxMaxDistance,
                       ad::physics::Angle(0.),
                       ad::physics::c2PI,
                       circleStepWidth,
                       continueForwardPolygon);
  }

  return result;
}

Polygon TrajectoryPedestrian::calculateSidePolygon(situation::VehicleState const &vehicleState,
                                                   TrajectoryPoint const &finalPointMin,
                                                   TrajectoryPoint const &finalPointMax) const
{
  MultiPoint side;
  boost::geometry::append(
    side, getVehicleCorner(finalPointMax, vehicleState.objectState.dimension, VehicleCorner::frontRight));
  boost::geometry::append(
    side, getVehicleCorner(finalPointMax, vehicleState.objectState.dimension, VehicleCorner::frontLeft));
  boost::geometry::append(side,
                          getVehicleCorner(finalPointMin, vehicleState.objectState.dimension, VehicleCorner::backLeft));
  boost::geometry::append(
    side, getVehicleCorner(finalPointMin, vehicleState.objectState.dimension, VehicleCorner::backRight));

  Polygon hull;
  boost::geometry::convex_hull(side, hull);
  return hull;
}

void TrajectoryPedestrian::calculateTrajectoryPointStraight(TrajectoryPoint const &currentPoint,
                                                            physics::Distance const &distance,
                                                            TrajectoryPoint &resultPoint) const
{
  resultPoint = currentPoint;
  if (distance > physics::Distance(0.))
  {
    resultPoint.position = currentPoint.position
      + toPoint(std::cos(currentPoint.angle) * distance, std::sin(currentPoint.angle) * distance);
  }
}

void TrajectoryPedestrian::calculateTrajectoryPointsStraight(physics::Distance const &distance,
                                                             TrajectorySetStep const &step,
                                                             TrajectorySetStep &resultStep) const
{
  if (distance > physics::Distance(0.))
  {
    for (auto const &left : step.left)
    {
      TrajectoryPoint pt;
      calculateTrajectoryPointStraight(left, distance, pt);
      resultStep.left.push_back(pt);
    }
    for (auto const &right : step.right)
    {
      TrajectoryPoint pt;
      calculateTrajectoryPointStraight(right, distance, pt);
      resultStep.right.push_back(pt);
    }
    calculateTrajectoryPointStraight(step.center, distance, resultStep.center);
  }
  else
  {
    resultStep = step;
  }
}

bool TrajectoryPedestrian::getResponseTimeTrajectoryPoints(situation::VehicleState const &vehicleState,
                                                           TrajectorySetStep &frontSide,
                                                           TrajectorySetStep &backSide) const
{
  auto result = true;
  //-------------
  // back
  //-------------
  auto ratioDiffBack = physics::RatioValue(
    2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.pedestrianBackIntermediateHeadingChangeRatioSteps + 2.0));
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += ratioDiffBack)
  {
    TrajectoryPoint pt(vehicleState);
    result = calculateTrajectoryPoint(pt,
                                      vehicleState.dynamics,
                                      vehicleState.dynamics.responseTime,
                                      vehicleState.dynamics.alphaLon.brakeMax,
                                      ratioValue);
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

  //-------------
  // front
  //-------------
  auto ratioDiffFront = physics::RatioValue(
    2.0 / (2.0 * vehicleState.dynamics.unstructuredSettings.pedestrianFrontIntermediateHeadingChangeRatioSteps + 2.0));
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += ratioDiffFront)
  {
    TrajectoryPoint pt(vehicleState);
    result = calculateTrajectoryPoint(pt,
                                      vehicleState.dynamics,
                                      vehicleState.dynamics.responseTime,
                                      vehicleState.dynamics.alphaLon.accelMax,
                                      ratioValue);
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

  return result;
}

bool TrajectoryPedestrian::calculateTrajectoryPoint(TrajectoryPoint &currentPoint,
                                                    world::RssDynamics const &dynamics,
                                                    physics::Duration const &duration,
                                                    ad::physics::Acceleration const &acceleration,
                                                    ad::physics::RatioValue const &angleChangeRatio) const
{
  ad::physics::Distance distance;
  auto result = situation::calculateAcceleratedLimitedMovement(
    currentPoint.speed, dynamics.maxSpeedOnAcceleration, acceleration, duration, currentPoint.speed, distance);

  calculateTrajectoryPoint(currentPoint, dynamics, distance, angleChangeRatio);
  return result;
}

void TrajectoryPedestrian::calculateTrajectoryPoint(TrajectoryPoint &currentPoint,
                                                    world::RssDynamics const &dynamics,
                                                    physics::Distance const &distance,
                                                    ad::physics::RatioValue const &angleChangeRatio) const
{
  if (distance == physics::Distance(0.))
  {
    return;
  }

  if (static_cast<double>(std::fabs(angleChangeRatio))
      > dynamics.unstructuredSettings.pedestrianTurningRadius / maxRadius)
  {
    // move on circle
    auto radius = dynamics.unstructuredSettings.pedestrianTurningRadius / angleChangeRatio;

    auto startingAngle = currentPoint.angle - ad::physics::cPI_2;
    auto circleOrigin = getCircleOrigin(currentPoint.position, radius, startingAngle);

    auto angleChange = ad::physics::Angle(distance / radius);

    currentPoint.position = getPointOnCircle(circleOrigin, radius, startingAngle + angleChange);
    currentPoint.angle += angleChange;
  }
  else
  {
    // straight line
    currentPoint.position = currentPoint.position
      + toPoint(std::cos(currentPoint.angle) * distance, std::sin(currentPoint.angle) * distance);
  }
}

} // namespace unstructured
} // namespace rss
} // namespace ad
