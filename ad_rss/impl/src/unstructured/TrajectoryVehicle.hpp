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

#pragma once

#include <ad/physics/RatioValue.hpp>
#include <algorithm>
#include <vector>
#include "TrajectoryCommon.hpp"
#include "ad/rss/situation/Physics.hpp"
#include "ad/rss/situation/VehicleState.hpp"
#include "ad/rss/unstructured/Geometry.hpp"

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
  struct TrajectorySetStepVehicleLocation
  {
    TrafficParticipantLocation left;
    TrafficParticipantLocation right;
    TrafficParticipantLocation center;
  };

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
  bool calculateTrajectorySets(situation::VehicleState const &vehicleState,
                               Polygon &brakePolygon,
                               Polygon &continueForwardPolygon);

private:
  /**
   * @brief Calculate the yaw rate after a duration
   *
   * @param[in] vehicleState     current state of the vehicle
   * @param[in] timeInMovementUntilResponseTime         duration of yaw rate change
   * @param[in] maxYawRateChange maximum yaw rate change per second
   * @param[in] ratio            yaw rate change ratio
   *
   * @returns yaw rate
   */
  ad::physics::AngularVelocity calculateYawRate(situation::VehicleState const &vehicleState,
                                                ad::physics::Duration const &timeInMovementUntilResponseTime,
                                                ad::physics::AngularAcceleration const &maxYawRateChange,
                                                ad::physics::RatioValue const &ratio) const;

  /**
   * @brief Calculate all trajectory points at response time
   *
   * @param[in]  vehicleState current state of the vehicle
   * @param[out] trajectorySetSteps intermediate steps between back and front
   * @param[out] frontSide the trajectory points defining the front
   * @param[out] backSide the trajectory points defining the back
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool getResponseTimeTrajectoryPoints(situation::VehicleState const &vehicleState,
                                       std::vector<TrajectorySetStep> &trajectorySetSteps,
                                       TrajectorySetStep &frontSide,
                                       TrajectorySetStep &backSide) const;

  /**
   * @brief Calculate a single trajectory point at response time
   *
   * @param[in]  vehicleState          current state of the vehicle
   * @param[in]  timeInMovementUntilResponseTime time in movement until response time
   * @param[in]  aUntilResponseTime    acceleration until response time
   * @param[in]  yawRateChangeRatio    yaw rate change ratio
   * @param[out] resultTrajectoryPoint resulting trajectory point
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool getResponseTimeTrajectoryPoint(situation::VehicleState const &vehicleState,
                                      ad::physics::Duration const &timeInMovementUntilResponseTime,
                                      ad::physics::Acceleration const &aUntilResponseTime,
                                      ad::physics::RatioValue const &yawRateChangeRatio,
                                      TrajectoryPoint &resultTrajectoryPoint) const;

  /**
   * @brief Calculate a next trajectory point using a linear calculation
   *
   * @param[inout] currentPoint        trajectory point to use for calculation
   * @param[in]  acceleration          acceleration to use
   * @param[in]  duration              duration of accelerated movement
   * @param[in]  dynamics              dynamics to use
   * @param[in]  afterResponseTime     is the movement happening after response time (no more heading change)
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateNextTrajectoryPoint(TrajectoryPoint &currentPoint,
                                    physics::Acceleration const &acceleration,
                                    physics::Duration const &duration,
                                    ::ad::rss::world::RssDynamics const &dynamics,
                                    bool afterResponseTime) const;

  /**
   * @brief Calculate a time in movement until response time
   *
   * @param[in]  vehicleState                      current state of the vehicle
   * @param[in]  aUntilResponseTime          acceleration to use
   * @param[out]  timeInMovementUntilResponseTime   resulting time in movement
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool getTimeInMovementUntilResponse(situation::VehicleState const &vehicleState,
                                      ad::physics::Acceleration const &aUntilResponseTime,
                                      ad::physics::Duration &timeInMovementUntilResponseTime) const;

  /**
   * @brief Calculate the brake trajectory set
   *
   * @param[in]  vehicleState                      current state of the vehicle
   * @param[in]  timeAfterResponseTime             time after the response time to move
   * @param[in]  responseTimeTrajectorySetSteps    intermediate steps between back and front
   * @param[in]  responseTimeFrontSide             the trajectory points defining the front
   * @param[in]  responseTimeBackSide              the trajectory points defining the back
   * @param[out] resultPolygon                     the resulting brake polygon
   * @param[out] brakeMinStepVehicleLocation       the vehicle locations for brakeMin after response time
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateBrake(situation::VehicleState const &vehicleState,
                      ad::physics::Duration const &timeAfterResponseTime,
                      std::vector<TrajectorySetStep> const &responseTimeTrajectorySetSteps,
                      TrajectorySetStep const &responseTimeFrontSide,
                      TrajectorySetStep const &responseTimeBackSide,
                      Polygon &resultPolygon,
                      TrajectorySetStepVehicleLocation &brakeMinStepVehicleLocation) const;

  /**
   * @brief Calculate the continue forward trajectory set
   *
   * @param[in]  vehicleState                      current state of the vehicle
   * @param[in]  timeAfterResponseTime             time after the response time to move
   * @param[in]  responseTimeTrajectorySetSteps    intermediate steps between back and front
   * @param[in]  responseTimeFrontSide             the trajectory points defining the front
   * @param[in]  brakePolygon                      the polygon defining the brake trajectory set
   * @param[in]  brakeMinStepVehicleLocation       the vehicle locations for brakeMin after response time
   * @param[out] resultPolygon                     the resulting continue forward polygon
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateContinueForward(situation::VehicleState const &vehicleState,
                                physics::Duration const &timeAfterResponseTime,
                                std::vector<TrajectorySetStep> const &responseTimeTrajectorySetSteps,
                                TrajectorySetStep const &responseTimeFrontSide,
                                Polygon const &brakePolygon,
                                TrajectorySetStepVehicleLocation const &brakeMinStepVehicleLocation,
                                Polygon &resultPolygon) const;

  /**
   * @brief Calculate a trajectory set estimation between two steps
   *
   * @param[inout] polygon               polygon to work on
   * @param[in]  previousVehicleLocation the previous possible vehicle locations
   * @param[in]  currentVehicleLocation  the current possible vehicle locations
   * @param[in]  debugNamespace          namespace for debugging purposes
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateEstimationBetweenSteps(Polygon &polygon,
                                       TrajectorySetStepVehicleLocation const &previousVehicleLocation,
                                       TrajectorySetStepVehicleLocation const &currentVehicleLocation,
                                       std::string const &debugNamespace) const;

  /**
   * @brief Calculate a trajectory set for the front and the sides
   *
   * @param[in]  vehicleState                      current state of the vehicle
   * @param[in]  timeAfterResponseTime             time after the response time to move
   * @param[in]  responseTimeTrajectorySetSteps    intermediate steps between back and front
   * @param[in]  responseTimeFrontSide             the trajectory points defining the front
   * @param[in]  initialStepVehicleLocation        the vehicle locations for the initial calculation step
   * @param[in]  accelerations                     accelerations to calculate
   * @param[in]  debugNamespace                    namespace for debugging purposes
   * @param[out] resultPolygon                     the resulting polygon
   * @param[out] frontSideStepVehicleLocation      vehicle locations of the front side
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectorySetFrontAndSide(situation::VehicleState const &vehicleState,
                                          physics::Duration const &timeAfterResponseTime,
                                          std::vector<TrajectorySetStep> const &responseTimeTrajectorySetSteps,
                                          TrajectorySetStep const &responseTimeFrontSide,
                                          TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
                                          std::vector<physics::Acceleration> const &accelerations,
                                          std::string const &debugNamespace,
                                          Polygon &resultPolygon,
                                          TrajectorySetStepVehicleLocation &frontSideStepVehicleLocation) const;

  /**
   * @brief Calculate a polygon for one step
   *
   * @param[in]  vehicleState          current state of the vehicle
   * @param[in]  timeAfterResponseTime time after the response time to move
   * @param[in]  step                  step to use for calculations
   * @param[in]  acceleration          acceleration to use
   * @param[in]  debugNamespace        namespace for debugging purposes
   * @param[out] polygon               the resulting polygon
   * @param[out] stepVehicleLocation   vehicle locations after calculation
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateStepPolygon(situation::VehicleState const &vehicleState,
                            physics::Duration const &timeAfterResponseTime,
                            TrajectorySetStep const &step,
                            physics::Acceleration const &acceleration,
                            std::string const &debugNamespace,
                            Polygon &polygon,
                            TrajectorySetStepVehicleLocation &stepVehicleLocation) const;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
