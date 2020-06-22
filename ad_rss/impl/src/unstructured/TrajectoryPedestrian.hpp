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
#include "TrajectoryCommon.hpp"
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

class TrajectoryPedestrian
{
public:
  /**
   * @brief The maximum radius before assuming forward movement
   */
  static const ad::physics::Distance maxRadius;

  /**
   * @brief Step width while calculating points on circle
   */
  static const ad::physics::Angle circleStepWidth;

  TrajectoryPedestrian()
  {
  }

  /**
   * @brief Calculate the trajectory sets for braking and continue forward behavior
   *
   * @param[in]  vehicleState           current state of the pedestrian
   * @param[out] brakePolygon           the trajectory set for braking behavior
   * @param[out] continueForwardPolygon the trajectory set for continue-forward behavior
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectorySets(situation::VehicleState const &vehicleState,
                               Polygon &brakePolygon,
                               Polygon &continueForwardPolygon);

private:
  /**
   * @brief Create a trajectory set
   *
   * @param[in]  vehicleState       current state of the vehicle
   * @param[in]  duration           duration to follow the trajectory
   * @param[in]  aAfterResponseTime acceleration to apply after response time
   * @param[out] trajectorySet      resulting trajectory set
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool createTrajectorySet(situation::VehicleState const &vehicleState,
                           ad::physics::Duration const &duration,
                           ad::physics::Acceleration const &aAfterResponseTime,
                           Polygon &trajectorySet);

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
  TrajectoryPoint getFinalTrajectoryPoint(situation::VehicleState const &vehicleState,
                                          ad::physics::Duration const &duration,
                                          ad::physics::Acceleration const &aUntilResponseTime,
                                          ad::physics::Acceleration const &aAfterResponseTime,
                                          ad::physics::RatioValue const &yawRateRatio,
                                          std::string const &debugNamespace) const;

  /**
   * @brief calculate front of a trajectory set
   *
   * @param[in] vehicleState       current state of the vehicle
   * @param[in] vehicleDimension   vehicle dimension
   *
   * @returns polygon describing the front
   */
  Polygon calculateFrontWithDimension(Trajectory const &trajectory, ad::physics::Dimension2D const &vehicleDimension);

  /**
   * @brief calculate back of a trajectory set
   *
   * @param[in] vehicleState       current state of the vehicle
   * @param[in] vehicleDimension   vehicle dimension
   * @param[in] aAfterResponseTime acceleration to apply after response time
   *
   * @returns polygon describing the back
   */
  Polygon calculateBackWithDimension(situation::VehicleState const &vehicleState,
                                     ad::physics::Duration const &duration,
                                     ad::physics::Acceleration const &aAfterResponseTime);
};

} // namespace unstructured
} // namespace rss
} // namespace ad
