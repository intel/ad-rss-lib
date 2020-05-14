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
 * @brief namespace situation
 */
namespace unstructured {

enum class TrajectoryHeading
{
  left,
  right,
  straight
};

enum class VehicleCorner
{
  frontLeft,
  frontRight,
  backLeft,
  backRight
};

struct TrajectoryPoint
{
  TrajectoryPoint(ad::rss::unstructured::Point const &inPoint,
                  ad::physics::Angle const &inAngle,
                  TrajectoryHeading const &inHeading)
    : position(inPoint)
    , angle(inAngle)
    , heading(inHeading)
  {
  }
  ad::rss::unstructured::Point position;
  ad::physics::Angle angle;
  TrajectoryHeading heading;
};

using Trajectory = std::vector<TrajectoryPoint>;

Point getVehicleCorner(TrajectoryPoint const &point,
                       ad::physics::Dimension2D const &dimension,
                       VehicleCorner const corner);

bool checkAndFixPolygon(Polygon &polygon, std::string const &description);

#if defined(DRAW_TRAJECTORIES)

inline void
drawFinalPosition(TrajectoryPoint const &pt, ad::physics::Dimension2D const &dimension, std::string const &ns)
{
  // draw final vehicle position
  ad::rss::unstructured::Polygon polygon;
  auto firstPoint = getVehicleCorner(pt, dimension, VehicleCorner::frontLeft);
  boost::geometry::append(polygon, firstPoint);
  boost::geometry::append(polygon, getVehicleCorner(pt, dimension, VehicleCorner::frontRight));
  boost::geometry::append(polygon, getVehicleCorner(pt, dimension, VehicleCorner::backRight));
  boost::geometry::append(polygon, getVehicleCorner(pt, dimension, VehicleCorner::backLeft));
  boost::geometry::append(polygon, firstPoint);
  DEBUG_DRAWING_POLYGON(polygon, "yellow", ns);
}
#endif

} // namespace unstructured
} // namespace rss
} // namespace ad
