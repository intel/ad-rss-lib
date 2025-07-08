// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------
/**
 * @file
 */

#include "ad/rss/unstructured/TrajectoryPedestrian.hpp"
#include <ad/geometry/DebugDrawing.hpp>
#include <ad/physics/Operation.hpp>
#include "ad/rss/core/Logging.hpp"
#include "ad/rss/core/Physics.hpp"

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

const physics::Distance TrajectoryPedestrian::maxRadius(1000.);
const physics::Angle TrajectoryPedestrian::circleStepWidth(physics::c2PI / 20.);

bool TrajectoryPedestrian::calculateTrajectorySets(core::RelativeObjectState const &vehicleState,
                                                   ::ad::geometry::Polygon &brakePolygon,
                                                   ::ad::geometry::Polygon &continueForwardPolygon)
{
  physics::Duration timeToStopSpeedMax;
  auto result = core::calculateTimeToStop(vehicleState.unstructured_object_state.speed_range.maximum,
                                          vehicleState.dynamics.response_time,
                                          vehicleState.dynamics.max_speed_on_acceleration,
                                          vehicleState.dynamics.alpha_lon.accel_max,
                                          vehicleState.dynamics.alpha_lon.brake_min,
                                          timeToStopSpeedMax);

  if (DEBUG_DRAWING_IS_ENABLED())
  {
    auto vehicleLocation
      = TrafficParticipantLocation(TrajectoryPoint(vehicleState, TrajectoryPoint::SpeedMode::Max), vehicleState);
    DEBUG_DRAWING_POLYGON(vehicleLocation.toPolygon(), "black", "pedestrian_initial_position");
  }
  if (result)
  {
    if (vehicleState.unstructured_object_state.speed_range.maximum == physics::Speed(0.))
    {
      result
        = calculateTrajectorySetsStandingStill(vehicleState, timeToStopSpeedMax, brakePolygon, continueForwardPolygon);
    }
    else
    {
      physics::Duration timeToStopSpeedMin;
      result = core::calculateTimeToStop(vehicleState.unstructured_object_state.speed_range.minimum,
                                         vehicleState.dynamics.response_time,
                                         vehicleState.dynamics.max_speed_on_acceleration,
                                         vehicleState.dynamics.alpha_lon.accel_max,
                                         vehicleState.dynamics.alpha_lon.brake_min,
                                         timeToStopSpeedMin);

      result = result
        && calculateTrajectorySetsMoving(
                 vehicleState, timeToStopSpeedMin, brakePolygon, timeToStopSpeedMax, continueForwardPolygon);
    }
  }
  DEBUG_DRAWING_POLYGON(brakePolygon, "red", "pedestrian_brake");
  DEBUG_DRAWING_POLYGON(continueForwardPolygon, "green", "pedestrian_continue_forward");
  return result;
}

bool TrajectoryPedestrian::calculateTrajectorySetsMoving(core::RelativeObjectState const &vehicleState,
                                                         physics::Duration const &timeToStopSpeedMin,
                                                         ::ad::geometry::Polygon &brakePolygon,
                                                         physics::Duration const &timeToStopSpeedMax,
                                                         ::ad::geometry::Polygon &continueForwardPolygon) const
{
  TrajectorySetStep responseTimeFrontSide;
  TrajectorySetStep responseTimeBackSide;
  auto result = getResponseTimeTrajectoryPoints(vehicleState, responseTimeFrontSide, responseTimeBackSide);
  if (!result)
  {
    core::getLogger()->debug(
      "TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate reponse time trajectory points.");
  }
  else
  {
    core::getLogger()->trace(
      "Trajectory points at response time: front left {}, front right {}, back left {}, back right {}",
      responseTimeFrontSide.left.size(),
      responseTimeFrontSide.right.size(),
      responseTimeBackSide.left.size(),
      responseTimeBackSide.right.size());
  }

  auto timeToStopBrakeMax = physics::Duration(0.);
  if (responseTimeBackSide.center.speed > physics::Speed(0.))
  {
    auto const timeAfterResponseTimeSpeedMin
      = std::max(physics::Duration(0.), timeToStopSpeedMin - vehicleState.dynamics.response_time);
    result = core::calculateTimeToStop(
      responseTimeBackSide.center.speed,
      timeAfterResponseTimeSpeedMin, // this is the time to stop with brakemin, therefore sufficient here
      vehicleState.dynamics.max_speed_on_acceleration,
      vehicleState.dynamics.alpha_lon.brake_max,
      vehicleState.dynamics.alpha_lon.brake_max,
      timeToStopBrakeMax);
    if (!result)
    {
      core::getLogger()->debug(
        "TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate time to stop. speed {}, "
        "timeAfterResponseTime {}",
        responseTimeBackSide.center.speed,
        timeAfterResponseTimeSpeedMin);
    }
  }

  physics::Distance brakeMaxDistanceAfterResponseTime = physics::Distance(0.);
  if (result)
  {
    physics::Speed unusedSpeed;
    result = core::calculateAcceleratedLimitedMovement(responseTimeBackSide.center.speed,
                                                       vehicleState.dynamics.max_speed_on_acceleration,
                                                       vehicleState.dynamics.alpha_lon.brake_max,
                                                       timeToStopBrakeMax,
                                                       unusedSpeed,
                                                       brakeMaxDistanceAfterResponseTime);
  }

  auto const timeAfterResponseTimeSpeedMax
    = std::max(physics::Duration(0.), timeToStopSpeedMax - vehicleState.dynamics.response_time);
  physics::Distance brakeMinDistanceAfterResponseTime = physics::Distance(0.);
  if (result)
  {
    physics::Speed unusedSpeed;
    result = core::calculateAcceleratedLimitedMovement(responseTimeFrontSide.center.speed,
                                                       vehicleState.dynamics.max_speed_on_acceleration,
                                                       vehicleState.dynamics.alpha_lon.brake_min,
                                                       timeAfterResponseTimeSpeedMax,
                                                       unusedSpeed,
                                                       brakeMinDistanceAfterResponseTime);
    if (!result)
    {
      core::getLogger()->debug(
        "TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate speed and distance offset for "
        "t={} and minBrake={}.",
        timeAfterResponseTimeSpeedMax,
        vehicleState.dynamics.alpha_lon.brake_min);
    }
  }

  physics::Distance accelMaxDistanceAfterResponseTime = physics::Distance(0.);
  if (result)
  {
    physics::Speed unusedSpeed;
    result = core::calculateAcceleratedLimitedMovement(responseTimeFrontSide.center.speed,
                                                       vehicleState.dynamics.max_speed_on_acceleration,
                                                       vehicleState.dynamics.alpha_lon.accel_max,
                                                       timeAfterResponseTimeSpeedMax,
                                                       unusedSpeed,
                                                       accelMaxDistanceAfterResponseTime);
    if (!result)
    {
      core::getLogger()->debug(
        "TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate speed and distance offset for "
        "t={} and accel_max={}.",
        timeAfterResponseTimeSpeedMax,
        vehicleState.dynamics.alpha_lon.accel_max);
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
  result = core::calculateAcceleratedLimitedMovement(vehicleState.unstructured_object_state.speed_range.maximum,
                                                     vehicleState.dynamics.max_speed_on_acceleration,
                                                     vehicleState.dynamics.alpha_lon.accel_max,
                                                     vehicleState.dynamics.response_time,
                                                     unusedSpeed,
                                                     accelMaxDistanceAtResponseTime);
  auto stepWidth = accelMaxDistanceAtResponseTime
    / (1.0 + vehicleState.dynamics.unstructured_settings.pedestrian_brake_intermediate_acceleration_steps);
  for (auto distance = stepWidth; distance < accelMaxDistanceAtResponseTime; distance += stepWidth)
  {
    auto left = TrajectoryPoint(vehicleState, TrajectoryPoint::SpeedMode::Max);
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

    ::ad::geometry::MultiPoint back;
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
      core::getLogger()->debug(
        "TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate continueForward polygon.");
    }
  }

  //-------------
  // Close gap between pedestrian bounds and polygon:
  // Depending on speed and response time the polygon detaches from the pedestrian
  // this simple method fills the space between the brake polygon and the pedestrian without intermediate steps
  //-------------
  if (result)
  {
    result = calculateResponseTimePolygon(
      vehicleState, brakeMaxStepVehicleLocation, "pedestrian_brake_response_time", brakePolygon);
    if (!result)
    {
      core::getLogger()->debug("TrajectoryVehicle::calculateBrake>> Could not calculate simple response time polygon.");
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
    auto ratioDiff = physics::RatioValue(2.0
                                         / (2.0
                                              * vehicleState.dynamics.unstructured_settings
                                                  .pedestrian_continue_forward_intermediate_heading_change_ratio_steps
                                            + 2.0));
    for (auto ratioValue = ratioDiff; ratioValue <= physics::RatioValue(1.0); ratioValue += ratioDiff)
    {
      auto pt = responseTimeFrontSide.left.back();
      calculateTrajectoryPoint(pt, vehicleState.dynamics, accelMaxDistanceAfterResponseTime, ratioValue);
      continueForwardFront.left.push_back(pt);
    }

    // max right
    for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue < physics::RatioValue(0.0)); ratioValue += ratioDiff)
    {
      auto pt = responseTimeFrontSide.right.front();
      calculateTrajectoryPoint(pt, vehicleState.dynamics, accelMaxDistanceAfterResponseTime, ratioValue);
      continueForwardFront.right.push_back(pt);
    }
  }

  //-------------
  // continueForward sides
  //-------------
  std::vector<TrajectorySetStep> continueForwardSideSteps;
  if (result)
  {
    stepWidth = (accelMaxDistanceAfterResponseTime - brakeMaxDistanceAfterResponseTime)
      / (1.0 + vehicleState.dynamics.unstructured_settings.pedestrian_continue_forward_intermediate_acceleration_steps);
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
      core::getLogger()->debug(
        "TrajectoryPedestrian::calculateTrajectorySets>> Could not calculate continueForward polygon.");
    }
  }

  //-------------
  // Close gap between pedestrian bounds and polygon:
  // Depending on speed and response time the polygon detaches from the pedestrian
  // this simple method fills the space between the brake polygon and the pedestrian without intermediate steps
  //-------------
  // no need to add this here, because in pedestrian case this is identical with what was already added to the brake
  // polygon if (result)
  // {
  //   result = calculateResponseTimePolygon(
  //     vehicleState, brakeMaxStepVehicleLocation, "pedestrian_continue_forward_response_time",
  //     continueForwardPolygon);
  //   if (!result)
  //   {
  //     core::getLogger()->debug("TrajectoryVehicle::calculateBrake>> Could not calculate simple response time
  //     polygon.");
  //   }
  // }

  return result;
}

bool TrajectoryPedestrian::calculateTrajectorySetsStandingStill(core::RelativeObjectState const &vehicleState,
                                                                physics::Duration const &timeToStop,
                                                                ::ad::geometry::Polygon &brakePolygon,
                                                                ::ad::geometry::Polygon &continueForwardPolygon) const
{
  // If pedestrian is standing, he might start walking in any direction
  physics::Speed speed;
  physics::Distance brakeMinMaxDistance;
  auto result = core::calculateSpeedAndDistanceOffset(timeToStop,
                                                      vehicleState.unstructured_object_state.speed_range.maximum,
                                                      vehicleState.dynamics.response_time,
                                                      vehicleState.dynamics.max_speed_on_acceleration,
                                                      vehicleState.dynamics.alpha_lon.accel_max,
                                                      vehicleState.dynamics.alpha_lon.brake_min,
                                                      speed,
                                                      brakeMinMaxDistance);
  ::ad::geometry::calculateCircleArc(::ad::geometry::toPoint(vehicleState.unstructured_object_state.center_point),
                                     brakeMinMaxDistance,
                                     physics::Angle(0.),
                                     physics::c2PI,
                                     circleStepWidth,
                                     brakePolygon);

  physics::Distance accelMaxMaxDistance;
  if (result)
  {
    result = core::calculateSpeedAndDistanceOffset(timeToStop,
                                                   vehicleState.unstructured_object_state.speed_range.maximum,
                                                   vehicleState.dynamics.response_time,
                                                   vehicleState.dynamics.max_speed_on_acceleration,
                                                   vehicleState.dynamics.alpha_lon.accel_max,
                                                   vehicleState.dynamics.alpha_lon.accel_max,
                                                   speed,
                                                   accelMaxMaxDistance);
    ::ad::geometry::calculateCircleArc(::ad::geometry::toPoint(vehicleState.unstructured_object_state.center_point),
                                       accelMaxMaxDistance,
                                       physics::Angle(0.),
                                       physics::c2PI,
                                       circleStepWidth,
                                       continueForwardPolygon);
  }

  return result;
}

::ad::geometry::Polygon TrajectoryPedestrian::calculateSidePolygon(core::RelativeObjectState const &vehicleState,
                                                                   TrajectoryPoint const &finalPointMin,
                                                                   TrajectoryPoint const &finalPointMax) const
{
  ::ad::geometry::MultiPoint side;
  boost::geometry::append(side, getVehicleCorner(finalPointMax, vehicleState, VehicleCorner::frontRight));
  boost::geometry::append(side, getVehicleCorner(finalPointMax, vehicleState, VehicleCorner::frontLeft));
  boost::geometry::append(side, getVehicleCorner(finalPointMin, vehicleState, VehicleCorner::backLeft));
  boost::geometry::append(side, getVehicleCorner(finalPointMin, vehicleState, VehicleCorner::backRight));

  ::ad::geometry::Polygon hull;
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
      + ::ad::geometry::toPoint(std::cos(currentPoint.angle) * distance, std::sin(currentPoint.angle) * distance);
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

bool TrajectoryPedestrian::getResponseTimeTrajectoryPoints(core::RelativeObjectState const &vehicleState,
                                                           TrajectorySetStep &frontSide,
                                                           TrajectorySetStep &backSide) const
{
  auto result = true;
  //-------------
  // back
  //-------------
  auto ratioDiffBack = physics::RatioValue(
    2.0
    / (2.0 * vehicleState.dynamics.unstructured_settings.pedestrian_back_intermediate_heading_change_ratio_steps
       + 2.0));
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += ratioDiffBack)
  {
    TrajectoryPoint pt(vehicleState, TrajectoryPoint::SpeedMode::Min);
    result = calculateTrajectoryPoint(pt,
                                      vehicleState.dynamics,
                                      vehicleState.dynamics.response_time,
                                      vehicleState.dynamics.alpha_lon.brake_max,
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
    2.0
    / (2.0 * vehicleState.dynamics.unstructured_settings.pedestrian_front_intermediate_heading_change_ratio_steps
       + 2.0));
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += ratioDiffFront)
  {
    TrajectoryPoint pt(vehicleState, TrajectoryPoint::SpeedMode::Max);
    result = calculateTrajectoryPoint(pt,
                                      vehicleState.dynamics,
                                      vehicleState.dynamics.response_time,
                                      vehicleState.dynamics.alpha_lon.accel_max,
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
  auto result = core::calculateAcceleratedLimitedMovement(
    currentPoint.speed, dynamics.max_speed_on_acceleration, acceleration, duration, currentPoint.speed, distance);

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

  if (std::fabs(angleChangeRatio.mRatioValue) > dynamics.unstructured_settings.pedestrian_turning_radius / maxRadius)
  {
    // move on circle
    auto radius = dynamics.unstructured_settings.pedestrian_turning_radius / angleChangeRatio;

    auto startingAngle = currentPoint.angle - ad::physics::cPI_2;
    auto circleOrigin = ::ad::geometry::getCircleOrigin(currentPoint.position, radius, startingAngle);

    auto angleChange = ad::physics::Angle(distance / radius);

    currentPoint.position = ::ad::geometry::getPointOnCircle(circleOrigin, radius, startingAngle + angleChange);
    currentPoint.angle += angleChange;
  }
  else
  {
    // straight line
    currentPoint.position = currentPoint.position
      + ::ad::geometry::toPoint(std::cos(currentPoint.angle) * distance, std::sin(currentPoint.angle) * distance);
  }
}

} // namespace unstructured
} // namespace rss
} // namespace ad
