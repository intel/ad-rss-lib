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

#define DRAW_FINAL_POSITION 0
#define DRAW_TRAJECTORIES 0

#if defined(DRAW_TRAJECTORIES) || defined(DRAW_FINAL_POSITION)
#include "ad/rss/unstructured/DebugDrawing.hpp"
#endif

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

/*!
  * a trajectory
  */
using Trajectory = std::vector<TrajectoryPoint>;

} // namespace unstructured
} // namespace rss
} // namespace ad
