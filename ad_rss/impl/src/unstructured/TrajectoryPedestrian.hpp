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
   * @brief calculate step polygon
   *
   * @param[in] step              the front points
   * @param[in] vehicleDimension   vehicle dimension
   * @param[out] resultPolygon     polygon describing the front
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool calculateStepPolygon(situation::VehicleState const &vehicleState,
                                             physics::Distance const &distance,
                                             TrajectorySetStep const &step,
                                             std::string const &debugNamespace,
                                                          Polygon &polygon) const;
             
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
   * @brief Calculate a single trajectory point at response time
   *
   * @param[in]  vehicleState          current state of the vehicle
   * @param[in]  aUntilResponseTime    acceleration until response time
   * @param[in]  yawRateChangeRatio    yaw rate change ratio
   * @param[out] resultTrajectoryPoint resulting trajectory point
   *
   * @returns false if a failure occurred during calculations, true otherwise
   */
  bool getResponseTimeTrajectoryPoint(situation::VehicleState const &vehicleState,
                                      ad::physics::Acceleration const &aUntilResponseTime,
                                      ad::physics::RatioValue const &yawRateChangeRatio,
                                      TrajectoryPoint &resultTrajectoryPoint) const;
              
  /**
   * @brief Calculate the final point after response time
   *
   * @param[in]  pointAfterResponseTime point at response time
   * @param[in]  distance               distance of the final point
   *
   * @returns final point 
   */
  TrajectoryPoint calculateFinalPoint(TrajectoryPoint const &pointAfterResponseTime,
                                                  physics::Distance const &distance) const;
                     
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
