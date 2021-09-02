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
 * @brief namespace unstructured
 */
namespace unstructured {

/**
 * @brief Calculates the trajectory sets of a pedestrian
 */
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
   * @brief Calculate all trajectory points at response time
   *
   * @param[in]  vehicleState current state of the vehicle
   * @param[out] frontSide the trajectory points defining the front
   * @param[out] backSide the trajectory points defining the back
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool getResponseTimeTrajectoryPoints(situation::VehicleState const &vehicleState,
                                       TrajectorySetStep &frontSide,
                                       TrajectorySetStep &backSide) const;

  /**
   * @brief Calculate a single trajectory point
   *
   * @param[inout] currentPoint     point to use for calculation
   * @param[in]  dynamics           current dynamics of the vehicle
   * @param[in]  duration           duration of movement
   * @param[in]  acceleration       acceleration to apply
   * @param[in]  yawRateChangeRatio heading change ratio
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectoryPoint(TrajectoryPoint &currentPoint,
                                world::RssDynamics const &dynamics,
                                physics::Duration const &duration,
                                ad::physics::Acceleration const &acceleration,
                                ad::physics::RatioValue const &yawRateChangeRatio) const;

  /**
   * @brief Calculate a single trajectory point
   *
   * @param[inout] currentPoint     point to use for calculation
   * @param[in]  dynamics           current dynamics of the vehicle
   * @param[in]  distance           distance to move
   * @param[in]  yawRateChangeRatio heading change ratio
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  void calculateTrajectoryPoint(TrajectoryPoint &currentPoint,
                                world::RssDynamics const &dynamics,
                                physics::Distance const &distance,
                                ad::physics::RatioValue const &angleChangeRatio) const;

  /**
   * @brief Calculate a point on a straight line
   *
   * @param[in]  currentPoint point at response time
   * @param[in]  distance     distance of the final point
   * @param[out] resultPoint  resulting point
   */
  void calculateTrajectoryPointStraight(TrajectoryPoint const &currentPoint,
                                        physics::Distance const &distance,
                                        TrajectoryPoint &resultPoint) const;

  /**
   * @brief Calculate points of trajectory set step on a straight line
   *
   * @param[in]  distance     distance of the final points
   * @param[in]  step         current step
   * @param[out] resultStep   resulting step
   */
  void calculateTrajectoryPointsStraight(physics::Distance const &distance,
                                         TrajectorySetStep const &step,
                                         TrajectorySetStep &resultStep) const;

  /**
   * @brief Calculate a side polygon
   *
   * @param[in]  vehicleState          current state of the vehicle
   * @param[in]  finalPointMin         minimal point
   * @param[in]  finalPointMax         maximum point
   *
   * @returns polygon describing the side
   */
  Polygon calculateSidePolygon(situation::VehicleState const &vehicleState,
                               TrajectoryPoint const &finalPointMin,
                               TrajectoryPoint const &finalPointMax) const;

  /**
   * @brief Calculate the trajectory sets if pedestrian stands still
   *
   * @param[in]  vehicleState           current state of the pedestrian
   * @param[in]  timeToStop             time to step with stated braking pattern
   * @param[out] brakePolygon           the trajectory set for braking behavior
   * @param[out] continueForwardPolygon the trajectory set for continue-forward behavior
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectorySetsStandingStill(situation::VehicleState const &vehicleState,
                                            physics::Duration const &timeToStop,
                                            Polygon &brakePolygon,
                                            Polygon &continueForwardPolygon) const;

  /**
   * @brief Calculate the trajectory sets if pedestrian is currently moving
   *
   * @param[in]  vehicleState           current state of the pedestrian
   * @param[in]  timeToStop             time to step with stated braking pattern
   * @param[out] brakePolygon           the trajectory set for braking behavior
   * @param[out] continueForwardPolygon the trajectory set for continue-forward behavior
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateTrajectorySetsMoving(situation::VehicleState const &vehicleState,
                                     physics::Duration const &timeToStop,
                                     Polygon &brakePolygon,
                                     Polygon &continueForwardPolygon) const;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
