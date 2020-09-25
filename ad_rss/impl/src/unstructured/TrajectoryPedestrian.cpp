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
const ad::physics::Angle TrajectoryPedestrian::circleStepWidth(physics::c2PI/20.);


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
#if DEBUG_DRAWING
  DEBUG_DRAWING_POLYGON(brakePolygon, "red", "brake_pedestrian");
  DEBUG_DRAWING_POLYGON(continueForwardPolygon, "green", "continueForward_pedestrian");
#endif
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
    spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate reponse time trajectory points.");
  }
  else
  {
    spdlog::trace(
      "Trajectory points at response time: front left {}, front right {}, back left {}, back right {}",
      responseTimeFrontSide.left.size(),
      responseTimeFrontSide.right.size(),
      responseTimeBackSide.left.size(),
      responseTimeBackSide.right.size());
  }

  auto timeAfterResponseTime = timeToStop - vehicleState.dynamics.responseTime;

  auto timeToStopBrakeMax = physics::Duration(0.);
  if (responseTimeBackSide.center.speed > physics::Speed(0.))
  {
    result = situation::calculateTimeToStop(responseTimeBackSide.center.speed,
                                            timeAfterResponseTime, //this is the time to stop with brakemin, therefore sufficient here
                                            vehicleState.dynamics.maxSpeedOnAcceleration,
                                            vehicleState.dynamics.alphaLon.brakeMax,
                                            vehicleState.dynamics.alphaLon.brakeMax,
                                            timeToStopBrakeMax);
    if (!result)
    {
      spdlog::debug(
        "TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate time to stop. speed {}, timeAfterResponseTime {}",
        responseTimeBackSide.center.speed,
        timeAfterResponseTime);
    }
  }
  
  physics::Distance maxBrakeDistance = physics::Distance(0.);
  if (result)
  {
    physics::Speed speed;
    result = situation::calculateSpeedAndDistanceOffset(timeToStopBrakeMax,
                                              responseTimeBackSide.center.speed,
                                              timeToStopBrakeMax,
                                              vehicleState.dynamics.maxSpeedOnAcceleration,
                                              vehicleState.dynamics.alphaLon.brakeMax,
                                              vehicleState.dynamics.alphaLon.brakeMax,
                                              speed,
                                              maxBrakeDistance);
  }

  physics::Distance minBrakeDistance = physics::Distance(0.);
  if (result)
  {
    physics::Speed speed;
    result = situation::calculateSpeedAndDistanceOffset(timeAfterResponseTime,
                                              responseTimeFrontSide.center.speed,
                                              timeAfterResponseTime,
                                              vehicleState.dynamics.maxSpeedOnAcceleration,
                                              vehicleState.dynamics.alphaLon.brakeMin,
                                              vehicleState.dynamics.alphaLon.brakeMin,
                                              speed,
                                              minBrakeDistance);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate speed and distance offset for t={} and minBrake={}.", timeAfterResponseTime, vehicleState.dynamics.alphaLon.brakeMin);
    }
  }
  
  physics::Distance accelMaxDistance = physics::Distance(0.);
  if (result)
  {
    physics::Speed speed;
    result = situation::calculateSpeedAndDistanceOffset(timeAfterResponseTime,
                                              responseTimeFrontSide.center.speed,
                                              timeAfterResponseTime,
                                              vehicleState.dynamics.maxSpeedOnAcceleration,
                                              vehicleState.dynamics.alphaLon.accelMax,
                                              vehicleState.dynamics.alphaLon.accelMax,
                                              speed,
                                              accelMaxDistance);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate speed and distance offset for t={} and accelMax={}.", timeAfterResponseTime, vehicleState.dynamics.alphaLon.accelMax);
    }
  }

  auto finalRightMinBrakeDistance = calculateFinalPoint(responseTimeFrontSide.right.front(), minBrakeDistance);
  auto finalLeftMinBrakeDistance = calculateFinalPoint(responseTimeFrontSide.left.back(), minBrakeDistance);  
  auto finalRightMaxBrakeDistance = calculateFinalPoint(responseTimeBackSide.right.front(), maxBrakeDistance);
  auto finalLeftMaxBrakeDistance = calculateFinalPoint(responseTimeBackSide.left.back(), maxBrakeDistance);
  //=======================
  // calculate brakePolygon
  //=======================
  //-------------
  // brake front
  //-------------
  if (result)
  {
    result = calculateStepPolygon(vehicleState,
                                  minBrakeDistance,
                                  responseTimeFrontSide,
                                  "",//"brake_front",
                                  brakePolygon);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate brake max step polygon.");
    }
  }

  //-------------
  // brake sides
  //-------------
  Polygon brakeMaxBrakeMinLeftSidePolygon;
  Polygon brakeMaxBrakeMinRightSidePolygon;
  if (result)
  {    
    brakeMaxBrakeMinLeftSidePolygon = calculateSidePolygon(vehicleState,
      finalLeftMaxBrakeDistance,
      finalLeftMinBrakeDistance);
    result = combinePolygon(brakeMaxBrakeMinLeftSidePolygon, brakePolygon, brakePolygon);
  }
  if (result)
  {
    brakeMaxBrakeMinRightSidePolygon = calculateSidePolygon(vehicleState,
      finalRightMaxBrakeDistance,
      finalRightMinBrakeDistance);
    result = combinePolygon(brakeMaxBrakeMinRightSidePolygon, brakePolygon, brakePolygon);
  }

  //-------------
  // brake back
  //-------------
  Polygon maxBrakePolygon;
  if (result)
  {
    MultiPoint back;
    boost::geometry::append(back, getVehicleCorner(finalRightMaxBrakeDistance, vehicleState.objectState.dimension, VehicleCorner::backRight));
    boost::geometry::append(back, getVehicleCorner(finalRightMaxBrakeDistance, vehicleState.objectState.dimension, VehicleCorner::frontRight));
    boost::geometry::append(back, getVehicleCorner(finalLeftMaxBrakeDistance, vehicleState.objectState.dimension, VehicleCorner::backLeft));
    boost::geometry::append(back, getVehicleCorner(finalLeftMaxBrakeDistance, vehicleState.objectState.dimension, VehicleCorner::frontLeft));
    boost::geometry::convex_hull(back, maxBrakePolygon);
#if DEBUG_DRAWING
    DEBUG_DRAWING_POLYGON(maxBrakePolygon, "red", "brake_back");
#endif
    combinePolygon(maxBrakePolygon, brakePolygon, brakePolygon);
  }

  //=================================
  // calculate continueForwardPolygon
  //=================================
  //-------------
  // continueForward front
  //-------------
  if (result)
  {
    result = calculateStepPolygon(vehicleState,
                                  accelMaxDistance,
                                  responseTimeFrontSide,
                                  "continueForward_front",
                                  continueForwardPolygon);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate continueForward front polygon.");
    }
  }

  //-------------
  // continueForward sides
  //-------------
  if (result)
  {    
    auto accelMaxLeftSidePolygon = calculateSidePolygon(vehicleState,
      finalLeftMinBrakeDistance,
      calculateFinalPoint(responseTimeFrontSide.left.back(), accelMaxDistance));
    result = combinePolygon(accelMaxLeftSidePolygon, continueForwardPolygon, continueForwardPolygon);
  }
  if (result)
  {
     auto accelMaxRightSidePolygon = calculateSidePolygon(vehicleState,
      finalRightMinBrakeDistance,
      calculateFinalPoint(responseTimeFrontSide.right.front(), accelMaxDistance));
    result = combinePolygon(accelMaxRightSidePolygon, continueForwardPolygon, continueForwardPolygon);
  }
  if (result)
  {
    result = combinePolygon(brakeMaxBrakeMinLeftSidePolygon, continueForwardPolygon, continueForwardPolygon);
  }
  if (result)
  {
    result = combinePolygon(brakeMaxBrakeMinRightSidePolygon, continueForwardPolygon, continueForwardPolygon);
  }

  //---------------------
  // continueForward back
  //---------------------
  if (result)
  {
    combinePolygon(maxBrakePolygon, continueForwardPolygon, continueForwardPolygon);
    if (!result)
    {
      spdlog::debug("TrajectoryPedestrian::calculateTrajectorySets>> Error while combining back with continueForwardPolygon.");
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
    boost::geometry::append(side, getVehicleCorner(finalPointMax, vehicleState.objectState.dimension, VehicleCorner::frontRight)); 
    boost::geometry::append(side, getVehicleCorner(finalPointMax, vehicleState.objectState.dimension, VehicleCorner::frontLeft)); 
    boost::geometry::append(side, getVehicleCorner(finalPointMin, vehicleState.objectState.dimension, VehicleCorner::backLeft)); 
    boost::geometry::append(side, getVehicleCorner(finalPointMin, vehicleState.objectState.dimension, VehicleCorner::backRight));
    
    Polygon hull;
    boost::geometry::convex_hull(side, hull);
    return hull;
}

TrajectoryPoint TrajectoryPedestrian::calculateFinalPoint(TrajectoryPoint const &pointAfterResponseTime,
                                                physics::Distance const &distance) const
{
  if (distance > physics::Distance(0.))
  {
    auto finalPoint = pointAfterResponseTime;
    auto headingAngle = pointAfterResponseTime.angle - ad::physics::cPI_2;
    finalPoint.position = pointAfterResponseTime.position + toPoint(-std::sin(headingAngle) * distance, std::cos(headingAngle) * distance);
    return finalPoint;
  }
  else
  {
    return pointAfterResponseTime;
  }
}

bool TrajectoryPedestrian::calculateStepPolygon(situation::VehicleState const &vehicleState,
                                             physics::Distance const &distance,
                                             TrajectorySetStep const &step,
                                             std::string const &debugNamespace,
                                            Polygon &polygon) const
{
  auto result = true;

  //calculate final points
  TrajectorySetStep finalStep;
  if (distance > physics::Distance(0.))
  {
    for (auto const &left: step.left)
    {
      finalStep.left.push_back(calculateFinalPoint(left, distance));
    }
    for (auto const &right: step.right)
    {
      finalStep.right.push_back(calculateFinalPoint(right, distance));
    }
    finalStep.center = calculateFinalPoint(step.center, distance);
  }
  else
  {
    finalStep = step;
  }

  MultiPoint ptsLeft;
  MultiPoint ptsRight;

  auto finalCenterFrontLeft = getVehicleCorner(finalStep.center, vehicleState.objectState.dimension, VehicleCorner::frontLeft);
  auto finalCenterFrontRight = getVehicleCorner(finalStep.center, vehicleState.objectState.dimension, VehicleCorner::frontRight);

  //----
  //left
  //----
#if DEBUG_DRAWING
  int idx = 0;
#endif
  for (auto it = finalStep.left.begin(); (it != finalStep.left.end()) && result; ++it)
  {
#if DEBUG_DRAWING
    auto vehicleLocation = TrafficParticipantLocation(*it, vehicleState);
    DEBUG_DRAWING_POLYGON(vehicleLocation.toPolygon(), "black", debugNamespace + "_left_" + std::to_string(idx));
    ++idx;
#else
    (void)debugNamespace;
#endif
    boost::geometry::append(ptsLeft, getVehicleCorner(*it, vehicleState.objectState.dimension, VehicleCorner::frontRight));
    boost::geometry::append(ptsLeft, getVehicleCorner(*it, vehicleState.objectState.dimension, VehicleCorner::frontLeft));
  }
  boost::geometry::append(ptsLeft, finalCenterFrontLeft);
  boost::geometry::append(ptsLeft, finalCenterFrontRight);

  //-----
  //right
  //-----
#if DEBUG_DRAWING
  idx = 0;
#endif
  for (auto it = finalStep.right.begin(); (it != finalStep.right.end()) && result; ++it)
  {
#if DEBUG_DRAWING
    auto vehicleLocation = TrafficParticipantLocation(*it, vehicleState);
    DEBUG_DRAWING_POLYGON(vehicleLocation.toPolygon(), "black", debugNamespace + "_right_" + std::to_string(idx));
    ++idx;
#else
    (void)debugNamespace;
#endif
    boost::geometry::append(ptsRight, getVehicleCorner(*it, vehicleState.objectState.dimension, VehicleCorner::frontLeft));
    boost::geometry::append(ptsRight, getVehicleCorner(*it, vehicleState.objectState.dimension, VehicleCorner::frontRight));
  }
  boost::geometry::append(ptsRight, finalCenterFrontLeft);
  boost::geometry::append(ptsRight, finalCenterFrontRight);


  if (result)
  {
    Polygon hullLeft;
    Polygon hullRight;
    boost::geometry::convex_hull(ptsLeft, hullLeft);
    boost::geometry::convex_hull(ptsRight, hullRight);
    result = combinePolygon(hullLeft, hullRight, polygon);
  }
  return result;
}

bool TrajectoryPedestrian::getResponseTimeTrajectoryPoints(situation::VehicleState const &vehicleState,
                                                        TrajectorySetStep &frontSide,
                                                        TrajectorySetStep &backSide) const
{
  auto result = true;
  //-------------
  // back
  //-------------
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += physics::RatioValue(0.1))
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

  //-------------
  // front
  //-------------
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += physics::RatioValue(0.1))
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

  return result;
}

bool TrajectoryPedestrian::getResponseTimeTrajectoryPoint(situation::VehicleState const &vehicleState,
                                                       ad::physics::Acceleration const &aUntilResponseTime,
                                                       ad::physics::RatioValue const &angleChangeRatio,
                                                       TrajectoryPoint &resultTrajectoryPoint) const
{
  auto result = true;
  auto startingAngle = vehicleState.objectState.yaw - ad::physics::cPI_2;
  auto startingPoint = toPoint(vehicleState.objectState.centerPoint);
  ad::physics::Speed speed;
  ad::physics::Distance maxDistance;
  situation::calculateSpeedAndDistanceOffset(vehicleState.dynamics.responseTime,
                                             vehicleState.objectState.speed,
                                             vehicleState.dynamics.responseTime,
                                             vehicleState.dynamics.maxSpeedOnAcceleration,
                                             aUntilResponseTime,
                                             aUntilResponseTime,
                                             speed,
                                             maxDistance);

#if DEBUG_DRAWING
  Line linePts;
  boost::geometry::append(linePts, startingPoint);
#endif

  TrajectoryPoint currentPoint(vehicleState);
  
  Point pointAfterResponseTime;
  auto angleChange = physics::Angle(0.);
  if (static_cast<double>(std::fabs(angleChangeRatio))
      > vehicleState.dynamics.unstructuredSettings.pedestrianTurningRadius / maxRadius)
  {
    //move on circle
    auto radius = vehicleState.dynamics.unstructuredSettings.pedestrianTurningRadius / angleChangeRatio;

    auto circleOrigin = getCircleOrigin(startingPoint, radius, startingAngle);
    ad::physics::Distance distanceUntilReponseTime;

    situation::calculateAcceleratedLimitedMovement(vehicleState.objectState.speed,
                                                    vehicleState.dynamics.maxSpeedOnAcceleration,
                                                    aUntilResponseTime,
                                                    vehicleState.dynamics.responseTime,
                                                    speed,
                                                    distanceUntilReponseTime);

    angleChange = ad::physics::Angle(distanceUntilReponseTime / radius);

    pointAfterResponseTime = getPointOnCircle(circleOrigin, radius, startingAngle + angleChange);
  }
  else
  {
    // straight line
    pointAfterResponseTime = startingPoint + toPoint(-std::sin(startingAngle) * maxDistance, std::cos(startingAngle) * maxDistance);
  }
#if DEBUG_DRAWING
  boost::geometry::append(linePts, pointAfterResponseTime);
#endif

  resultTrajectoryPoint = TrajectoryPoint(pointAfterResponseTime, vehicleState.objectState.yaw + angleChange, speed, physics::AngularVelocity(0.));
#if DEBUG_DRAWING
  DEBUG_DRAWING_LINE(linePts, "orange", std::to_string(aUntilResponseTime) + "_" + std::to_string(angleChangeRatio) + "_trajectory");
#endif
  return result;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
