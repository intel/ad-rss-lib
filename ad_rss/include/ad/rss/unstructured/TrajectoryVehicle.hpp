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

#pragma once

#include <ad/geometry/DebugDrawing.hpp>
#include <ad/geometry/GeometryOperation.hpp>
#include <ad/geometry/Types.hpp>
#include <ad/physics/RatioValue.hpp>
#include <algorithm>
#include <vector>
#include "ad/rss/core/Physics.hpp"
#include "ad/rss/core/RelativeObjectState.hpp"
#include "ad/rss/unstructured/TrajectoryCommon.hpp"

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

/**
 * @brief Calculates the trajectory sets of a vehicle
 */
class TrajectoryVehicle
{
public:
  TrajectoryVehicle()
  {
  }

  /**
   * @brief Calculate the trajectory sets for braking and continue forward behavior
   *
   * @param[in]  vehicleState current state of the vehicle
   * @param[out] brakePolygon the trajectory set for braking behavior
   * @param[out] continueForwardPolygon the trajectory set for continue-forward behavior
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectorySets(core::RelativeObjectState const &vehicleState,
                               ::ad::geometry::Polygon &brakePolygon,
                               ::ad::geometry::Polygon &continueForwardPolygon);

private:
  /**
   * @brief Calculate the yaw rate after a duration
   *
   * @param[in] yaw_rate     current yaw rate
   * @param[in] timeInMovementUntilResponseTime         duration of yaw rate change
   * @param[in] maxYawRateChange maximum yaw rate change per second
   * @param[in] ratio            yaw rate change ratio
   *
   * @returns yaw rate
   */
  ad::physics::AngularVelocity calculateYawRate(ad::physics::AngularVelocity const &yaw_rate,
                                                ad::physics::Duration const &timeInMovementUntilResponseTime,
                                                ad::physics::AngularAcceleration const &maxYawRateChange,
                                                ad::physics::RatioValue const &ratio) const;

  /**
   * @brief Calculate all trajectory points at response time
   *
   * @param[in]  vehicleState current state of the vehicle
   * @param[out] frontSide the trajectory points defining the front
   * @param[out] backSide the trajectory points defining the back
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool getResponseTimeTrajectoryPoints(core::RelativeObjectState const &vehicleState,
                                       TrajectorySetStep &frontSide,
                                       TrajectorySetStep &backSide) const;

  /**
   * @brief Calculate all trajectory points at response time
   *
   * @param[in]  vehicleState current state of the vehicle
   * @param[in]  acceleration acceleration to use
   * @param[in]  ratioDiff    yaw rate change ratio
   * @param[in]  speedMode    use min or max speed of the speed_range
   * @param[in]  step         resulting trajectory set step
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool getResponseTimeTrajectoryPoints(core::RelativeObjectState const &vehicleState,
                                       physics::Acceleration const &acceleration,
                                       physics::RatioValue const &ratioDiff,
                                       TrajectoryPoint::SpeedMode const &speedMode,
                                       TrajectorySetStep &step) const;

  /**
   * @brief Calculate a single trajectory point with changing radius
   *
   * @param[in] currentPoint           trajectory point to use for calculation
   * @param[in]  dynamics              dynamics to use
   * @param[in]  duration              time
   * @param[in]  acceleration          acceleration to use
   * @param[in]  yawRateChangeRatio    yaw rate change ratio
   * @param[out] resultTrajectoryPoint resulting trajectory point
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectoryPoint(TrajectoryPoint const &currentPoint,
                                world::RssDynamics const &dynamics,
                                ad::physics::Duration const &duration,
                                ad::physics::Acceleration const &acceleration,
                                ad::physics::RatioValue const &yawRateChangeRatio,
                                TrajectoryPoint &resultTrajectoryPoint) const;

  /**
   * @brief Calculate a next trajectory point on a circle
   *
   * @param[inout] currentPoint        trajectory point to use for calculation
   * @param[in]  acceleration          acceleration to use
   * @param[in]  duration              duration of accelerated movement
   * @param[in]  dynamics              dynamics to use
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectoryPointOnCircle(TrajectoryPoint &currentPoint,
                                        physics::Acceleration const &acceleration,
                                        physics::Duration const &duration,
                                        ::ad::rss::world::RssDynamics const &dynamics) const;

  /**
   * @brief Calculate a time in movement until response time
   *
   * @param[in]  speed                      speed of the vehicle
   * @param[in]  acceleration          acceleration to use
   * @param[inout]  timeInMovement   resulting time in movement
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool getTimeInMovement(ad::physics::Speed const &speed,
                         ad::physics::Acceleration const &acceleration,
                         ad::physics::Duration &timeInMovement) const;

  /**
   * @brief Calculate the brake trajectory set
   *
   * @param[in]  vehicleState                      current state of the vehicle
   * @param[in]  timeAfterResponseTimeSpeedMax     time after the response time to move with speed max
   * @param[in]  responseTimeFrontSide             the trajectory points defining the front
   * @param[in]  timeAfterResponseTimeSpeedMin     time after the response time to move with speed min
   * @param[in]  responseTimeBackSide              the trajectory points defining the back
   * @param[out] resultPolygon                     the resulting brake polygon
   * @param[out] brakeMinStepVehicleLocation       the vehicle locations for brake_min after response time
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateBrake(core::RelativeObjectState const &vehicleState,
                      ad::physics::Duration const &timeAfterResponseTimeSpeedMax,
                      TrajectorySetStep const &responseTimeFrontSide,
                      ad::physics::Duration const &timeAfterResponseTimeSpeedMin,
                      TrajectorySetStep const &responseTimeBackSide,
                      ::ad::geometry::Polygon &resultPolygon,
                      TrajectorySetStepVehicleLocation &brakeMinStepVehicleLocation) const;

  /**
   * @brief Calculate the continue forward trajectory set
   *
   * @param[in]  vehicleState                      current state of the vehicle
   * @param[in]  timeAfterResponseTime             time after the response time to move
   * @param[in]  responseTimeFrontSide             the trajectory points defining the front
   * @param[in]  brakePolygon                      the polygon defining the brake trajectory set
   * @param[in]  brakeMinStepVehicleLocation       the vehicle locations for brake_min after response time
   * @param[out] resultPolygon                     the resulting continue forward polygon
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateContinueForward(core::RelativeObjectState const &vehicleState,
                                physics::Duration const &timeAfterResponseTime,
                                TrajectorySetStep const &responseTimeFrontSide,
                                ::ad::geometry::Polygon const &brakePolygon,
                                TrajectorySetStepVehicleLocation const &brakeMinStepVehicleLocation,
                                ::ad::geometry::Polygon &resultPolygon) const;

  /**
   * @brief Calculate the trajectory set step for a movement on a circle
   *
   * @param[in]  vehicleState                      current state of the vehicle
   * @param[in]  timeAfterResponseTime             time after the response time to move
   * @param[in]  acceleration                      acceleration to apply
   * @param[in]  step                              resulting trajectory set step
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectorySetStepOnCircle(core::RelativeObjectState const &vehicleState,
                                          physics::Duration const &timeAfterResponseTime,
                                          physics::Acceleration const &acceleration,
                                          TrajectorySetStep &step) const;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
