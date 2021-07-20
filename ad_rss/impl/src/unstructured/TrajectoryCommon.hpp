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

#include <ad/physics/Angle.hpp>
#include <ad/physics/Dimension2D.hpp>
#include <ad/physics/Distance.hpp>
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
 * @brief corner of a vehicle
 */
enum class VehicleCorner
{
  frontLeft,
  frontRight,
  backLeft,
  backRight
};

/**
 * @brief a point of a trajectory
 */
struct TrajectoryPoint
{
  TrajectoryPoint()
  {
  }

  TrajectoryPoint(situation::VehicleState const &vehicleState)
  {
    position = toPoint(vehicleState.objectState.centerPoint);
    angle = vehicleState.objectState.yaw;
    speed = vehicleState.objectState.speed;
    yawRate = vehicleState.objectState.yawRate;
  }

  TrajectoryPoint(Point const &inPoint,
                  ad::physics::Angle const &inAngle,
                  ad::physics::Speed const &inSpeed,
                  physics::AngularVelocity const &inYawRate)
    : position(inPoint)
    , speed(inSpeed)
    , angle(inAngle)
    , yawRate(inYawRate)
  {
  }

  /*!
   * The current position
   */
  Point position;

  /*!
   * The current position
   */
  ad::physics::Speed speed;

  /*!
   * The current heading angle
   */
  ad::physics::Angle angle;

  /*!
   * The current yawRate
   */
  physics::AngularVelocity yawRate;
};

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

/**
 * @brief get the point describing the corner of a vehicle
 *
 * @param[in] point            trajectory point
 * @param[in] vehicleDimension vehicle dimension
 * @param[in] corner           which corner to calculate
 *
 * @returns corner point of the vehicle
 */
Point getVehicleCorner(TrajectoryPoint const &point,
                       ad::physics::Dimension2D const &vehicleDimension,
                       VehicleCorner const corner);

struct TrafficParticipantLocation
{
  TrafficParticipantLocation()
  {
  }

  TrafficParticipantLocation(TrajectoryPoint const &pt, situation::VehicleState const &vehicleState)
  {
    frontLeft = getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::frontLeft);
    frontRight = getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::frontRight);
    backLeft = getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::backLeft);
    backRight = getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::backRight);
  }

  Polygon toPolygon() const
  {
    Polygon vehiclePolygon;
    boost::geometry::append(vehiclePolygon, frontRight);
    boost::geometry::append(vehiclePolygon, frontLeft);
    boost::geometry::append(vehiclePolygon, backLeft);
    boost::geometry::append(vehiclePolygon, backRight);
    boost::geometry::append(vehiclePolygon, frontRight);
    return vehiclePolygon;
  }
  MultiPoint toMultiPoint() const
  {
    MultiPoint geometry;
    boost::geometry::append(geometry, frontRight);
    boost::geometry::append(geometry, frontLeft);
    boost::geometry::append(geometry, backLeft);
    boost::geometry::append(geometry, backRight);
    boost::geometry::append(geometry, frontRight);
    return geometry;
  }

  bool operator==(TrafficParticipantLocation const &other) const
  {
    return (frontLeft == other.frontLeft) && (frontRight == other.frontRight) && (backLeft == other.backLeft)
      && (backRight == other.backRight);
  }
  bool operator!=(TrafficParticipantLocation const &other) const
  {
    return !(*this == other);
  }
  Point frontLeft;
  Point frontRight;
  Point backLeft;
  Point backRight;
};

/*!
 * a trajectory
 */
using Trajectory = std::vector<TrajectoryPoint>;

struct TrajectorySetStepVehicleLocation
{
  TrafficParticipantLocation left;
  TrafficParticipantLocation right;
  TrafficParticipantLocation center;

  bool operator==(TrajectorySetStepVehicleLocation const &other) const
  {
    return (left == other.left) && (right == other.right) && (center == other.center);
  }

  bool operator!=(TrajectorySetStepVehicleLocation const &other) const
  {
    return !(*this == other);
  }
};

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
                                     std::string const &debugNamespace);
/**
 * @brief Calculate a polygon for one step
 *
 * @param[in]  vehicleState          current state of the vehicle
 * @param[in]  step                  step to use for calculations
 * @param[in]  debugNamespace        namespace for debugging purposes
 * @param[out] polygon               the resulting polygon
 * @param[out] stepVehicleLocation   vehicle locations after calculation
 *
 * @returns false if a failure occurred during calculations, true otherwise
 */
bool calculateStepPolygon(situation::VehicleState const &vehicleState,
                          TrajectorySetStep const &step,
                          std::string const &debugNamespace,
                          Polygon &polygon,
                          TrajectorySetStepVehicleLocation &stepVehicleLocation);

/**
 * @brief Calculate the front and side polygon
 *
 * @param[in]  vehicleState                      current state of the vehicle
 * @param[in]  initialStepVehicleLocation        the vehicle locations for the initial calculation step
 * @param[in]  sideSteps                         trajectory set steps that define the sides of the polygon
 * @param[in]  front                             trajectory set step that define the front of the polygon
 * @param[in]  debugNamespace                    namespace for debugging purposes
 * @param[out] resultPolygon                     the resulting polygon
 * @param[out] frontSideStepVehicleLocation      vehicle locations of the front side
 *
 * @returns false if a failure occurred during calculations, true otherwise
 */
bool calculateFrontAndSidePolygon(situation::VehicleState const &vehicleState,
                                  TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
                                  std::vector<TrajectorySetStep> const &sideSteps,
                                  TrajectorySetStep const &front,
                                  std::string const &debugNamespace,
                                  Polygon &resultPolygon,
                                  TrajectorySetStepVehicleLocation &frontSideStepVehicleLocation);

} // namespace unstructured
} // namespace rss
} // namespace ad
