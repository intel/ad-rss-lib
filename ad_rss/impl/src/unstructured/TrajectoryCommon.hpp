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
    , angle(inAngle)
    , speed(inSpeed)
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

/*!
  * a trajectory
  */
using Trajectory = std::vector<TrajectoryPoint>;

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

/**
 * @brief check if a polygon is valid. If not, try to fix it
 *
 * @param[in] polygon      trajectory point
 * @param[in] description description for logging
 *
 * @returns true if valid, otherwise false
 */
bool checkAndFixPolygon(Polygon &polygon, std::string const &description);

#if defined(DRAW_TRAJECTORIES)
/**
 * @brief debug drawing of a vehicle on  apoint of trajectory
 *
 * @param[in] point            trajectory point
 * @param[in] vehicleDimension vehicle dimension
 * @param[in] debugNamespace   namespace to use for debug drawings
 *
 */
inline void drawFinalPosition(TrajectoryPoint const &point,
                              ad::physics::Dimension2D const &vehicleDimension,
                              std::string const &debugNamespace)
{
  // draw final vehicle position
  Polygon polygon;
  auto firstPoint = getVehicleCorner(point, vehicleDimension, VehicleCorner::frontLeft);
  boost::geometry::append(polygon, firstPoint);
  boost::geometry::append(polygon, getVehicleCorner(point, vehicleDimension, VehicleCorner::frontRight));
  boost::geometry::append(polygon, getVehicleCorner(point, vehicleDimension, VehicleCorner::backRight));
  boost::geometry::append(polygon, getVehicleCorner(point, vehicleDimension, VehicleCorner::backLeft));
  boost::geometry::append(polygon, firstPoint);
  DEBUG_DRAWING_POLYGON(polygon, "yellow", debugNamespace);
}
#endif

} // namespace unstructured
} // namespace rss
} // namespace ad
