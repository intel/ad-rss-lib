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
 * @brief namespace situation
 */
namespace unstructured {

class TrajectoryVehicle
{
public:
  static const ad::physics::Distance maxRadius;

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
   * @brief Get the final point of a trajectory
   *
   * @param[in] vehicleState       current state of the vehicle
   * @param[in] duration           duration to follow the trajectory
   * @param[in] aUntilResponseTime acceleration to apply until response time
   * @param[in] aAfterResponseTime acceleration to apply after response time
   * @param[in] yawRateRatio       change of yaw over time
   * @param[in] debugNamespace     namespace to use for debug drawings
   *
   * @returns final trajectory point
   */
  TrajectoryPoint getFinalTrajectoryPoint(ad::rss::situation::VehicleState const &vehicleState,
                                          ad::physics::Duration const &duration,
                                          ad::physics::Acceleration const &aUntilResponseTime,
                                          ad::physics::Acceleration const &aAfterResponseTime,
                                          ad::physics::RatioValue const &yawRateRatio,
                                          std::string const &debugNamespace) const;

  /**
   * @brief Create a trajectory set
   *
   * @param[in] vehicleState       current state of the vehicle
   * @param[in] duration           duration to follow the trajectory
   * @param[in] aAfterResponseTime acceleration to apply after response time
   * @param[in] debugNamespace     namespace to use for debug drawings
   *
   * @returns final trajectory point
   */
  Polygon createTrajectorySet(situation::VehicleState const &vehicleState,
                              ad::physics::Duration duration,
                              ad::physics::Acceleration aAfterResponseTime,
                              std::string const &debugNamespace);

  /**
   * @brief Create a trajectory
   *
   * @param[in] vehicleState       current state of the vehicle
   * @param[in] duration           duration to follow the trajectory
   * @param[in] aUntilResponseTime acceleration to apply until response time
   * @param[in] aAfterResponseTime acceleration to apply after response time
   * @param[in] yawRateChangeRatio yaw rate change ratio
   *
   * @returns calculated trajectory
   */
  Trajectory createTrajectory(situation::VehicleState const &vehicleState,
                              ad::physics::Duration const &duration,
                              ad::physics::Acceleration const &aUntilResponseTime,
                              ad::physics::Acceleration const &aAfterResponseTime,
                              ad::physics::RatioValue const &yawRateChangeRatio) const;

  /**
   * @brief Calculate the yaw rate after a duration
   *
   * @param[in] vehicleState     current state of the vehicle
   * @param[in] duration         duration of yaw rate change
   * @param[in] maxYawRateChange maximum yaw rate change per second
   * @param[in] ratio            yaw rate change ratio
   *
   * @returns yaw rate
   */
  ad::physics::AngularVelocity calculateYawRate(situation::VehicleState const &vehicleState,
                                                ad::physics::Duration const &duration,
                                                ad::physics::AngularAcceleration const &maxYawRateChange,
                                                ad::physics::RatioValue const &ratio) const;

  /**
   * @brief Calculate the side of a trajectory set polygon
   *
   * @param[in] finalTrajectoryPoints all final trajectory points relevant for side
   * @param[in] side                  side to calculate
   * @param[in] vehicleDimension      dimension of the vehicle
   *
   * @returns line describing the trajectory set side
   */
  Line calculateTrajectorySetSide(std::vector<TrajectoryPoint> const &finalTrajectoryPoints,
                                  TrajectoryHeading const side,
                                  ad::physics::Dimension2D const &vehicleDimension) const;

  /**
   * @brief get the heading of a trajectory
   *
   * @param[in] finalTrajectoryPoints trajectory points to use
   *
   * @returns the heading of the trajectory
   */
  TrajectoryHeading getTrajectoryHeading(std::vector<TrajectoryPoint> const &finalTrajectoryPoints) const;

  /**
   * @brief get the heading of a trajectory
   *
   * @param[in] finalTrajectoryPoints all final trajectory points relevant for front
   * @param[in] vehicleDimension      dimension of the vehicle
   *
   * @returns line describing the trajectory set front
   */
  Line calculateFrontWithDimension(std::vector<TrajectoryPoint> const &finalTrajectoryPoints,
                                   ad::physics::Dimension2D const &vehicleDimension);
};

} // namespace unstructured
} // namespace rss
} // namespace ad
