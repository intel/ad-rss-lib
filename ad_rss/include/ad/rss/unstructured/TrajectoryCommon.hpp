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

#include <ad/geometry/GeometryOperation.hpp>
#include <ad/geometry/Types.hpp>
#include <ad/physics/Angle.hpp>
#include <ad/physics/Dimension2D.hpp>
#include <ad/physics/Distance.hpp>
#include "ad/rss/core/RelativeObjectState.hpp"

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

  enum class SpeedMode
  {
    Min,
    Max
  };

  explicit TrajectoryPoint(core::RelativeObjectState const &vehicleState, SpeedMode const speedMode)
  {
    position = ::ad::geometry::toPoint(vehicleState.unstructured_object_state.center_point);
    angle = vehicleState.unstructured_object_state.yaw;
    if (speedMode == SpeedMode::Min)
    {
      speed = vehicleState.unstructured_object_state.speed_range.minimum;
    }
    else
    {
      speed = vehicleState.unstructured_object_state.speed_range.maximum;
    }
    yaw_rate = vehicleState.unstructured_object_state.yaw_rate;
  }

  TrajectoryPoint(::ad::geometry::Point const &inPoint,
                  physics::Angle const &inAngle,
                  physics::Speed const &inSpeed,
                  physics::AngularVelocity const &inYawRate)
    : position(inPoint)
    , speed(inSpeed)
    , angle(inAngle)
    , yaw_rate(inYawRate)
  {
  }

  /*!
   * standard comparison operator
   */
  bool operator==(const TrajectoryPoint &other) const
  {
    return (position == other.position) && (speed == other.speed) && (angle == other.angle)
      && (yaw_rate == other.yaw_rate);
  }

  /*!
   * standard comparison operator
   */
  bool operator!=(const TrajectoryPoint &other) const
  {
    return !operator==(other);
  }

  /*!
   * The current position
   */
  ::ad::geometry::Point position;

  /*!
   * The current position
   */
  physics::Speed speed;

  /*!
   * The current heading angle
   */
  physics::Angle angle;

  /*!
   * The current yaw_rate
   */
  physics::AngularVelocity yaw_rate;
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

  /*!
   * standard comparison operator
   */
  bool operator==(const TrajectorySetStep &other) const
  {
    return (left == other.left) && (right == other.right) && (center == other.center);
  }

  /*!
   * standard comparison operator
   */
  bool operator!=(const TrajectorySetStep &other) const
  {
    return !operator==(other);
  }

  std::vector<TrajectoryPoint> left;  // with positive yaw rate ratio
  std::vector<TrajectoryPoint> right; // with negative yaw rate ratio
  TrajectoryPoint center;
};

/**
 * @brief get the point describing the corner of a vehicle
 *
 * @param[in] point            trajectory point
 * @param[in] vehicleState     vehicle state to be considered
 * @param[in] corner           which corner to calculate
 *
 * @returns corner point of the vehicle
 */
::ad::geometry::Point getVehicleCorner(TrajectoryPoint const &point,
                                       core::RelativeObjectState const &vehicleState,
                                       VehicleCorner const corner);

struct TrafficParticipantLocation
{
  TrafficParticipantLocation()
  {
  }

  TrafficParticipantLocation(TrajectoryPoint const &pt, core::RelativeObjectState const &vehicleState)
  {
    frontLeft = getVehicleCorner(pt, vehicleState, VehicleCorner::frontLeft);
    frontRight = getVehicleCorner(pt, vehicleState, VehicleCorner::frontRight);
    backLeft = getVehicleCorner(pt, vehicleState, VehicleCorner::backLeft);
    backRight = getVehicleCorner(pt, vehicleState, VehicleCorner::backRight);
  }

  ::ad::geometry::Polygon toPolygon() const
  {
    ::ad::geometry::Polygon vehiclePolygon;
    boost::geometry::append(vehiclePolygon, frontRight);
    boost::geometry::append(vehiclePolygon, frontLeft);
    boost::geometry::append(vehiclePolygon, backLeft);
    boost::geometry::append(vehiclePolygon, backRight);
    boost::geometry::append(vehiclePolygon, frontRight);
    return vehiclePolygon;
  }
  ::ad::geometry::MultiPoint toMultiPoint() const
  {
    ::ad::geometry::MultiPoint geometry;
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
  ::ad::geometry::Point frontLeft;
  ::ad::geometry::Point frontRight;
  ::ad::geometry::Point backLeft;
  ::ad::geometry::Point backRight;
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
bool calculateEstimationBetweenSteps(::ad::geometry::Polygon &polygon,
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
bool calculateStepPolygon(core::RelativeObjectState const &vehicleState,
                          TrajectorySetStep const &step,
                          std::string const &debugNamespace,
                          ::ad::geometry::Polygon &polygon,
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
bool calculateFrontAndSidePolygon(core::RelativeObjectState const &vehicleState,
                                  TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
                                  std::vector<TrajectorySetStep> const &sideSteps,
                                  TrajectorySetStep const &front,
                                  std::string const &debugNamespace,
                                  ::ad::geometry::Polygon &resultPolygon,
                                  TrajectorySetStepVehicleLocation &frontSideStepVehicleLocation);

/**
 * @brief Calculate a simple polygon spanning the current vehicle pose polygon and the provided
 * initialStepVehicleLocation and combine it with the given resultPolygon
 *
 * @param[in]  vehicleState                      current state of the vehicle
 * @param[in]  initialStepVehicleLocation        the vehicle locations for the initial calculation step
 * @param[in]  debugNamespace                    namespace for debugging purposes
 * @param[inout] resultPolygon                   the resulting polygon
 *
 * @returns false if a failure occurred during calculations, true otherwise
 */
bool calculateResponseTimePolygon(core::RelativeObjectState const &vehicleState,
                                  TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
                                  std::string const &debugNamespace,
                                  ::ad::geometry::Polygon &resultPolygon);
} // namespace unstructured
} // namespace rss
} // namespace ad
