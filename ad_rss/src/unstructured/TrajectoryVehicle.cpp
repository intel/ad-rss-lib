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
#include "ad/rss/unstructured/TrajectoryVehicle.hpp"
#include <ad/physics/Operation.hpp>
#include <algorithm>
#include "ad/rss/core/Logging.hpp"

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

bool TrajectoryVehicle::calculateTrajectorySets(core::RelativeObjectState const &vehicleState,
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

  TrajectorySetStep responseTimeFrontSide;
  TrajectorySetStep responseTimeBackSide;
  if (result)
  {
    result = getResponseTimeTrajectoryPoints(vehicleState, responseTimeFrontSide, responseTimeBackSide);
    if (!result)
    {
      core::getLogger()->debug(
        "TrajectoryVehicle::calculateTrajectorySets>> Could not calculate response time trajectory points.");
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
  }

  TrajectorySetStepVehicleLocation brakeMinStepVehicleLocations;
  auto const timeAfterResponseTimeSpeedMax
    = std::max(physics::Duration(0.), timeToStopSpeedMax - vehicleState.dynamics.response_time);
  if (result)
  {
    physics::Duration timeToStopSpeedMin;
    result = core::calculateTimeToStop(vehicleState.unstructured_object_state.speed_range.minimum,
                                       vehicleState.dynamics.response_time,
                                       vehicleState.dynamics.max_speed_on_acceleration,
                                       vehicleState.dynamics.alpha_lon.accel_max,
                                       vehicleState.dynamics.alpha_lon.brake_min,
                                       timeToStopSpeedMin);
    auto const timeAfterResponseTimeSpeedMin
      = std::max(physics::Duration(0.), timeToStopSpeedMin - vehicleState.dynamics.response_time);
    result = result
      && calculateBrake(vehicleState,
                        timeAfterResponseTimeSpeedMax,
                        responseTimeFrontSide,
                        timeAfterResponseTimeSpeedMin,
                        responseTimeBackSide,
                        brakePolygon,
                        brakeMinStepVehicleLocations);
    if (!result)
    {
      core::getLogger()->debug("TrajectoryVehicle::calculateTrajectorySets>> calculateBrake() failed.");
    }
  }

  if (result)
  {
    result = calculateContinueForward(vehicleState,
                                      timeAfterResponseTimeSpeedMax,
                                      responseTimeFrontSide,
                                      brakePolygon,
                                      brakeMinStepVehicleLocations,
                                      continueForwardPolygon);
    if (!result)
    {
      // fallback
      core::getLogger()->warn(
        "TrajectoryVehicle::calculateTrajectorySets>> calculateContinueForward() failed. Use brakePolygon "
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
TrajectoryVehicle::calculateYawRate(ad::physics::AngularVelocity const &yaw_rate,
                                    ad::physics::Duration const &timeInMovement,
                                    ad::physics::AngularAcceleration const &maxYawRateChange,
                                    ad::physics::RatioValue const &ratio) const
{
  return yaw_rate + maxYawRateChange * timeInMovement * ratio;
}

bool TrajectoryVehicle::getResponseTimeTrajectoryPoints(core::RelativeObjectState const &vehicleState,
                                                        TrajectorySetStep &frontSide,
                                                        TrajectorySetStep &backSide) const
{
  //-------------
  // back
  //-------------
  auto ratioDiffBack = physics::RatioValue(
    2.0
    / (2.0 * vehicleState.dynamics.unstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps + 2.0));
  backSide.left.reserve(
    vehicleState.dynamics.unstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps + 1);
  backSide.right.reserve(
    vehicleState.dynamics.unstructured_settings.vehicle_back_intermediate_yaw_rate_change_ratio_steps + 1);
  auto result = getResponseTimeTrajectoryPoints(
    vehicleState, vehicleState.dynamics.alpha_lon.brake_max, ratioDiffBack, TrajectoryPoint::SpeedMode::Min, backSide);

  //-------------
  // front
  //-------------
  if (result)
  {
    auto ratioDiffFront = physics::RatioValue(
      2.0
      / (2.0 * vehicleState.dynamics.unstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps
         + 2.0));
    frontSide.left.reserve(
      vehicleState.dynamics.unstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps + 1);
    frontSide.right.reserve(
      vehicleState.dynamics.unstructured_settings.vehicle_front_intermediate_yaw_rate_change_ratio_steps + 1);
    result = getResponseTimeTrajectoryPoints(vehicleState,
                                             vehicleState.dynamics.alpha_lon.accel_max,
                                             ratioDiffFront,
                                             TrajectoryPoint::SpeedMode::Max,
                                             frontSide);
  }
  return result;
}

bool TrajectoryVehicle::getResponseTimeTrajectoryPoints(core::RelativeObjectState const &vehicleState,
                                                        physics::Acceleration const &acceleration,
                                                        physics::RatioValue const &ratioDiff,
                                                        TrajectoryPoint::SpeedMode const &speedMode,
                                                        TrajectorySetStep &step) const
{
  physics::Duration timeInMovementUntilResponseTime = vehicleState.dynamics.response_time;
  bool result;
  if (TrajectoryPoint::SpeedMode::Min == speedMode)
  {
    result = getTimeInMovement(
      vehicleState.unstructured_object_state.speed_range.minimum, acceleration, timeInMovementUntilResponseTime);
  }
  else
  {
    result = getTimeInMovement(
      vehicleState.unstructured_object_state.speed_range.maximum, acceleration, timeInMovementUntilResponseTime);
  }

  // right
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue < physics::RatioValue(0.0)) && result;
       ratioValue += ratioDiff)
  {
    auto currentPoint = TrajectoryPoint(vehicleState, speedMode);
    TrajectoryPoint pt;
    result = calculateTrajectoryPoint(
      currentPoint, vehicleState.dynamics, timeInMovementUntilResponseTime, acceleration, ratioValue, pt);
    step.right.push_back(pt);
  }

  // left
  for (auto ratioValue = ratioDiff; (ratioValue <= physics::RatioValue(1.0)) && result; ratioValue += ratioDiff)
  {
    auto currentPoint = TrajectoryPoint(vehicleState, speedMode);
    TrajectoryPoint pt;
    result = calculateTrajectoryPoint(
      currentPoint, vehicleState.dynamics, timeInMovementUntilResponseTime, acceleration, ratioValue, pt);
    step.left.push_back(pt);
  }

  // center
  if (result)
  {
    result = calculateTrajectoryPoint(TrajectoryPoint(vehicleState, speedMode),
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
      result = core::calculateTimeToStop(speed, physics::Duration(0.), speed, acceleration, acceleration, timeToStop);

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

  auto currentTime = physics::Duration(0.0);

  while ((currentTime < duration) && result)
  {
    auto timeStep = dynamics.unstructured_settings.vehicle_trajectory_calculation_step;
    if (duration >= currentTime + dynamics.unstructured_settings.vehicle_trajectory_calculation_step)
    {
      currentTime += dynamics.unstructured_settings.vehicle_trajectory_calculation_step;
    }
    else
    {
      timeStep = duration - currentTime;
      currentTime = duration;
    }

    resultTrajectoryPoint.yaw_rate = calculateYawRate(
      currentPoint.yaw_rate, currentTime, dynamics.unstructured_settings.vehicle_yaw_rate_change, yawRateChangeRatio);

    result = calculateTrajectoryPointOnCircle(resultTrajectoryPoint, acceleration, timeStep, dynamics);
  }

  return result;
}

bool TrajectoryVehicle::calculateTrajectoryPointOnCircle(TrajectoryPoint &currentPoint,
                                                         physics::Acceleration const &acceleration,
                                                         physics::Duration const &duration,
                                                         ::ad::rss::world::RssDynamics const &dynamics) const
{
  physics::Distance current_distance;
  physics::Speed finalSpeed;

  if (duration == physics::Duration(0.))
  {
    return true;
  }

  auto result = core::calculateAcceleratedLimitedMovement(
    currentPoint.speed, dynamics.max_speed_on_acceleration, acceleration, duration, finalSpeed, current_distance);
  if (!result)
  {
    core::getLogger()->debug(
      "TrajectoryVehicle::calculateTrajectoryPointOnCircle>> calculateAcceleratedLimitedMovement() failed.");
  }

  auto currentRadius = physics::Distance::getMax();
  if (currentPoint.yaw_rate != physics::AngularVelocity(0.))
  {
    currentRadius = ad::physics::Distance(currentPoint.speed.mSpeed / currentPoint.yaw_rate.mAngularVelocity);
  }

  if (std::fabs(currentRadius) < dynamics.unstructured_settings.vehicle_min_radius)
  {
    if (currentRadius >= physics::Distance(0.))
    {
      currentRadius = dynamics.unstructured_settings.vehicle_min_radius;
    }
    else
    {
      currentRadius = -dynamics.unstructured_settings.vehicle_min_radius;
    }
  }

  ::ad::geometry::Point const circleOrigin
    = ::ad::geometry::getCircleOrigin(currentPoint.position, currentRadius, currentPoint.angle - physics::cPI_2);
  auto diffAngle = physics::Angle(current_distance / currentRadius);

  currentPoint.angle += diffAngle;
  currentPoint.position
    = ::ad::geometry::rotateAroundPoint(circleOrigin, currentPoint.position - circleOrigin, diffAngle);
  currentPoint.speed = finalSpeed;
  return result;
}

bool TrajectoryVehicle::calculateBrake(core::RelativeObjectState const &vehicleState,
                                       ad::physics::Duration const &timeAfterResponseTimeSpeedMax,
                                       TrajectorySetStep const &responseTimeFrontSide,
                                       ad::physics::Duration const &timeAfterResponseTimeSpeedMin,
                                       TrajectorySetStep const &responseTimeBackSide,
                                       ::ad::geometry::Polygon &resultPolygon,
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
    result = core::calculateTimeToStop(responseTimeBackSide.center.speed,
                                       timeAfterResponseTimeSpeedMin,
                                       vehicleState.dynamics.max_speed_on_acceleration,
                                       vehicleState.dynamics.alpha_lon.brake_max,
                                       vehicleState.dynamics.alpha_lon.brake_max,
                                       timeToStopBrakeMax);
    if (!result)
    {
      core::getLogger()->debug(
        "TrajectoryVehicle::calculateBrake>> Could not calculate time to stop. speed {}, timeAfterResponseTime {}",
        responseTimeBackSide.center.speed,
        timeAfterResponseTimeSpeedMin);
    }
  }
  auto backSide = responseTimeBackSide;
  if (result)
  {
    calculateTrajectorySetStepOnCircle(
      vehicleState, timeToStopBrakeMax, vehicleState.dynamics.alpha_lon.brake_max, backSide);
  }
  if (result)
  {
    result = calculateStepPolygon(
      vehicleState, backSide, "vehicle_brake_brake_max", resultPolygon, brakeMaxVehicleLocations);
    if (!result)
    {
      core::getLogger()->debug("TrajectoryVehicle::calculateBrake>> Could not calculate brake max step polygon.");
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
        vehicleState, timeAfterResponseTimeSpeedMax, vehicleState.dynamics.alpha_lon.brake_min, front);
    }

    // sides
    std::vector<physics::Acceleration> accelerations;
    auto accelStepSize = (-vehicleState.dynamics.alpha_lon.brake_max + vehicleState.dynamics.alpha_lon.brake_min)
      / (1.0 + vehicleState.dynamics.unstructured_settings.vehicle_brake_intermediate_acceleration_steps);
    for (auto acceleration = vehicleState.dynamics.alpha_lon.brake_max + accelStepSize;
         acceleration < vehicleState.dynamics.alpha_lon.brake_min;
         acceleration += accelStepSize)
    {
      accelerations.push_back(acceleration);
    }
    accelerations.push_back(vehicleState.dynamics.alpha_lon.brake_min);

    std::vector<TrajectorySetStep> sideSteps;
    for (auto itAcceleration = accelerations.cbegin(); (itAcceleration != accelerations.cend()) && result;
         ++itAcceleration)
    {
      physics::Duration calculationTime = timeAfterResponseTimeSpeedMax;
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
        core::getLogger()->debug(
          "TrajectoryVehicle::calculateFrontAndSidePolygon>> Could not calculate step polygon for "
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
      core::getLogger()->debug("TrajectoryVehicle::calculateBrake>> Could not calculate front and side polygon.");
    }
  }

  //-------------
  // Close gap between vehicle bounds and polygon:
  // Depending on speed and response time the polygon detaches from the vehicle
  // this simple method fills the space between the brake polygon and the vehicle without intermediate steps
  //-------------
  if (result)
  {
    result = calculateResponseTimePolygon(
      vehicleState, brakeMaxVehicleLocations, "vehicle_brake_response_time", resultPolygon);
    if (!result)
    {
      core::getLogger()->debug("TrajectoryVehicle::calculateBrake>> Could not calculate simple response time polygon.");
    }
  }

  return result;
}

bool TrajectoryVehicle::calculateContinueForward(core::RelativeObjectState const &vehicleState,
                                                 physics::Duration const &timeAfterResponseTime,
                                                 TrajectorySetStep const &responseTimeFrontSide,
                                                 ::ad::geometry::Polygon const &brakePolygon,
                                                 TrajectorySetStepVehicleLocation const &brakeMinStepVehicleLocation,
                                                 ::ad::geometry::Polygon &resultPolygon) const
{
  //-----------
  // Front
  //-----------
  auto ratioDiffFront = physics::RatioValue(
    2.0
    / (2.0
         * vehicleState.dynamics.unstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
       + 2.0));
  auto front = responseTimeFrontSide;
  // center-front, with no change of the current yaw rate
  auto result = calculateTrajectorySetStepOnCircle(
    vehicleState, timeAfterResponseTime, vehicleState.dynamics.alpha_lon.accel_max, front);
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
    + vehicleState.dynamics.unstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps
    + 1);
  for (auto ratioValue = ratioDiffFront; (ratioValue <= physics::RatioValue(1.0)) && result;
       ratioValue += ratioDiffFront)
  {
    TrajectoryPoint resultPt;
    result = calculateTrajectoryPoint(responseTimeFrontSide.left.back(),
                                      vehicleState.dynamics,
                                      timeAfterResponseTime,
                                      vehicleState.dynamics.alpha_lon.accel_max,
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
  right.reserve(
    vehicleState.dynamics.unstructured_settings.vehicle_continue_forward_intermediate_yaw_rate_change_ratio_steps + 1);
  for (auto ratioValue = physics::RatioValue(-1.0); (ratioValue < physics::RatioValue(0.0)) && result;
       ratioValue += ratioDiffFront)
  {
    TrajectoryPoint resultPt;
    result = calculateTrajectoryPoint(responseTimeFrontSide.right.front(),
                                      vehicleState.dynamics,
                                      timeAfterResponseTime,
                                      vehicleState.dynamics.alpha_lon.accel_max,
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
  auto accelStepSize = (vehicleState.dynamics.alpha_lon.accel_max - vehicleState.dynamics.alpha_lon.brake_min)
    / (1.0 + vehicleState.dynamics.unstructured_settings.vehicle_continue_forward_intermediate_acceleration_steps);
  for (auto acceleration = vehicleState.dynamics.alpha_lon.brake_min + accelStepSize;
       acceleration < vehicleState.dynamics.alpha_lon.accel_max;
       acceleration += accelStepSize)
  {
    accelerations.push_back(acceleration);
  }
  accelerations.push_back(vehicleState.dynamics.alpha_lon.accel_max);
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
    core::getLogger()->debug(
      "TrajectoryVehicle::calculateContinueForward>> Could not calculate front and side polygon.");
  }

  //-------------
  // Close gap between vehicle bounds and polygon:
  // Depending on speed and response time the polygon detaches from the vehicle
  // this simple method fills the space between the brake polygon and the vehicle without intermediate steps
  //-------------
  if (result)
  {
    result = calculateResponseTimePolygon(
      vehicleState, brakeMinStepVehicleLocation, "vehicle_continue_forward_response_time", resultPolygon);
    if (!result)
    {
      core::getLogger()->debug(
        "TrajectoryVehicle::calculateContinueForward>> Could not calculate simple response time polygon.");
    }
  }

  return result;
}

bool TrajectoryVehicle::calculateTrajectorySetStepOnCircle(core::RelativeObjectState const &vehicleState,
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
