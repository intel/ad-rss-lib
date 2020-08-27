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
  struct TrajectorySetStep
  {
    TrajectorySetStep()
    {
    }

    TrajectorySetStep(TrajectoryPoint const &inLeft, TrajectoryPoint const &inRight, TrajectoryPoint const &inCenter)
      : center(inCenter)
    {
      left.push_back(inLeft);
      right.push_back(inRight);
    }
    std::vector<TrajectoryPoint> left;  // with positive yaw rate ratio
    std::vector<TrajectoryPoint> right; // with negative yaw rate ratio
    TrajectoryPoint center;
  };

  struct VehicleLocation
  {
    VehicleLocation()
    {
    }

    VehicleLocation(TrajectoryPoint const &pt, situation::VehicleState const &vehicleState)
    {
      frontLeft = getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::frontLeft);
      frontRight = getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::frontRight);
      backLeft = getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::backLeft);
      backRight = getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::backRight);
    }

    Polygon toPolygon()
    {
      Polygon vehiclePolygon;
      boost::geometry::append(vehiclePolygon, frontRight);
      boost::geometry::append(vehiclePolygon, frontLeft);
      boost::geometry::append(vehiclePolygon, backLeft);
      boost::geometry::append(vehiclePolygon, backRight);
      boost::geometry::append(vehiclePolygon, frontRight);
      return vehiclePolygon;
    }
    MultiPoint toMultiPoint()
    {
      MultiPoint geometry;
      boost::geometry::append(geometry, frontRight);
      boost::geometry::append(geometry, frontLeft);
      boost::geometry::append(geometry, backLeft);
      boost::geometry::append(geometry, backRight);
      boost::geometry::append(geometry, frontRight);
      return geometry;
    }

    Point frontLeft;
    Point frontRight;
    Point backLeft;
    Point backRight;
  };

  struct TrajectorySetStepVehicleLocation
  {
    VehicleLocation left;
    VehicleLocation right;
    VehicleLocation center;
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
   * @param[in] duration         duration of yaw rate change
   * @param[in] maxYawRateChange maximum yaw rate change per second
   * @param[in] ratio            yaw rate change ratio
   * TODO
   *
   * @returns yaw rate
   */
  ad::physics::AngularVelocity calculateYawRate(situation::VehicleState const &vehicleState,
                                                ad::physics::Duration const &timeInMovementUntilResponseTime,
                                                ad::physics::AngularAcceleration const &maxYawRateChange,
                                                ad::physics::RatioValue const &ratio) const;

  bool getResponseTimeTrajectoryPoints(situation::VehicleState const &vehicleState,
                                       std::vector<TrajectorySetStep> &trajectorySetSteps,
                                       TrajectorySetStep &frontSide,
                                       TrajectorySetStep &backSide) const;

  bool getResponseTimeTrajectoryPoint(situation::VehicleState const &vehicleState,
                                      ad::physics::Acceleration const &aUntilResponseTime,
                                      ad::physics::RatioValue const &yawRateChangeRatio,
                                      TrajectoryPoint &resultTrajectoryPoint) const;

  bool calculateNextTrajectoryPoint(TrajectoryPoint &currentPoint,
                                    physics::Acceleration const &acceleration,
                                    physics::Duration const &duration,
                                    ::ad::rss::world::RssDynamics const &dynamics,
                                    bool afterResponseTime) const; // TODO complete dynamics needed?

  bool calculateBrake(situation::VehicleState const &vehicleState,
                      ad::physics::Duration const &timeAfterResponseTime,
                      std::vector<TrajectorySetStep> const &trajectorySetSteps,
                      TrajectorySetStep const &frontSide,
                      TrajectorySetStep const &backSide,
                      Polygon &resultPolygon,
                      TrajectorySetStepVehicleLocation &brakeMinStepVehicleLocation) const;

  bool calculateContinueForward(Polygon const &brakePolygon,
                                TrajectorySetStep const &frontSide,
                                std::vector<TrajectorySetStep> const &trajectorySetSteps,
                                TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                situation::VehicleState const &vehicleState,
                                physics::Duration const &timeAfterResponseTime,
                                Polygon &resultPolygon) const;

  bool combinePolygon(Polygon const &a, Polygon const &b, Polygon &result) const;

  bool calculateEstimationBetweenSteps(Polygon &polygon,
                                       TrajectorySetStepVehicleLocation const &previousVehicleLocation,
                                       TrajectorySetStepVehicleLocation const &currentVehicleLocation) const;

  bool calculateTrajectorySetFrontAndSide(TrajectorySetStep const &frontSide,
                                          std::vector<TrajectorySetStep> const &trajectorySetSteps,
                                          TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                          situation::VehicleState const &vehicleState,
                                          physics::Duration const &timeAfterResponseTime,
                                          std::vector<physics::Acceleration> const &accelerations,
                                          Polygon &resultPolygon,
                                          TrajectorySetStepVehicleLocation &frontSideStepVehicleLocation) const;

  bool calculateStepPolygon(TrajectorySetStep const &step,
                            situation::VehicleState const &vehicleState,
                            physics::Duration const &timeAfterResponseTime,
                            physics::Acceleration const &acceleration,
                            Polygon &polygon,
                            TrajectorySetStepVehicleLocation &stepVehicleLocation) const;
};

} // namespace unstructured
} // namespace rss
} // namespace ad
