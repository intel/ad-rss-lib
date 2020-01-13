
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

#include "TrajectoryCommon.hpp"

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

Point getVehicleCorner(TrajectoryPoint const &point,
                       ad::physics::Dimension2D const &dimension,
                       VehicleCorner const corner)
{
  ad::rss::unstructured::Point resultPoint;
  auto const vehicleAngle = static_cast<double>(point.angle) - M_PI / 2.0;
  switch (corner)
  {
    case VehicleCorner::frontLeft:
      resultPoint = rotateAroundPoint(
        point.position, ad::rss::unstructured::Point(-dimension.width / 2.0, dimension.length / 2.0), vehicleAngle);
      break;
    case VehicleCorner::frontRight:
      resultPoint = rotateAroundPoint(
        point.position, ad::rss::unstructured::Point(dimension.width / 2.0, dimension.length / 2.0), vehicleAngle);
      break;
    case VehicleCorner::backLeft:
      resultPoint = rotateAroundPoint(
        point.position, ad::rss::unstructured::Point(-dimension.width / 2.0, -dimension.length / 2.0), vehicleAngle);
      break;
    case VehicleCorner::backRight:
      resultPoint = rotateAroundPoint(
        point.position, ad::rss::unstructured::Point(dimension.width / 2.0, -dimension.length / 2.0), vehicleAngle);
      break;
  }
  return resultPoint;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
