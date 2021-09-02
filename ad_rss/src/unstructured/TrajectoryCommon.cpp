
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

#include "TrajectoryCommon.hpp"
#include <ad/physics/Operation.hpp>
#include "ad/rss/unstructured/DebugDrawing.hpp"

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

Point getVehicleCorner(TrajectoryPoint const &point,
                       ad::physics::Dimension2D const &vehicleDimension,
                       VehicleCorner const corner)
{
  Point resultPoint;
  auto const vehicleAngle = point.angle - ad::physics::cPI_2;
  switch (corner)
  {
    case VehicleCorner::frontLeft:
      resultPoint = rotateAroundPoint(
        point.position, toPoint(-vehicleDimension.width / 2.0, vehicleDimension.length / 2.0), vehicleAngle);
      break;
    case VehicleCorner::frontRight:
      resultPoint = rotateAroundPoint(
        point.position, toPoint(vehicleDimension.width / 2.0, vehicleDimension.length / 2.0), vehicleAngle);
      break;
    case VehicleCorner::backLeft:
      resultPoint = rotateAroundPoint(
        point.position, toPoint(-vehicleDimension.width / 2.0, -vehicleDimension.length / 2.0), vehicleAngle);
      break;
    case VehicleCorner::backRight:
      resultPoint = rotateAroundPoint(
        point.position, toPoint(vehicleDimension.width / 2.0, -vehicleDimension.length / 2.0), vehicleAngle);
      break;
    default:
      throw std::runtime_error("unstructured::getVehicleCorner>> invalid corner requested");
      break;
  }
  return resultPoint;
}

bool calculateStepPolygon(situation::VehicleState const &vehicleState,
                          TrajectorySetStep const &step,
                          std::string const &debugNamespace,
                          Polygon &polygon,
                          TrajectorySetStepVehicleLocation &stepVehicleLocation)
{
  MultiPoint frontPtsLeft;
  MultiPoint frontPtsRight;

  int idx = 0;
  for (auto it = step.left.cbegin(); it != step.left.cend(); ++it)
  {
    auto vehicleLocationLeft = TrafficParticipantLocation(*it, vehicleState);
    DEBUG_DRAWING_POLYGON(vehicleLocationLeft.toPolygon(), "blue", debugNamespace + "_left_" + std::to_string(idx));
    boost::geometry::append(frontPtsLeft, vehicleLocationLeft.toMultiPoint());
    if (it == step.left.end() - 1)
    {
      stepVehicleLocation.left = vehicleLocationLeft;
    }
    ++idx;
  }

  // center
  auto vehicleLocationCenter = TrafficParticipantLocation(step.center, vehicleState);
  DEBUG_DRAWING_POLYGON(vehicleLocationCenter.toPolygon(), "blue", debugNamespace + "_center");
  boost::geometry::append(frontPtsLeft, vehicleLocationCenter.toMultiPoint());
  stepVehicleLocation.center = vehicleLocationCenter;
  boost::geometry::append(frontPtsRight, vehicleLocationCenter.toMultiPoint());

  idx = 0;
  for (auto it = step.right.cbegin(); it != step.right.cend(); ++it)
  {
    auto vehicleLocationRight = TrafficParticipantLocation(*it, vehicleState);
    DEBUG_DRAWING_POLYGON(vehicleLocationRight.toPolygon(), "blue", debugNamespace + "_right_" + std::to_string(idx));
    boost::geometry::append(frontPtsRight, vehicleLocationRight.toMultiPoint());
    if (it == step.right.begin())
    {
      stepVehicleLocation.right = vehicleLocationRight;
    }
    ++idx;
  }

  Polygon hullLeft;
  Polygon hullRight;
  boost::geometry::convex_hull(frontPtsLeft, hullLeft);
  boost::geometry::convex_hull(frontPtsRight, hullRight);
  auto result = combinePolygon(hullLeft, hullRight, polygon);
  return result;
}

bool calculateEstimationBetweenSteps(Polygon &polygon,
                                     TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                     TrajectorySetStepVehicleLocation const &currentStepVehicleLocation,
                                     std::string const &debugNamespace)
{
  // Fill potential gap between two calculation steps by using the previous and current step
  if (previousStepVehicleLocation == currentStepVehicleLocation)
  {
    return true;
  }

  Polygon hull;
  MultiPoint interimPtsLeft;
  boost::geometry::append(interimPtsLeft, previousStepVehicleLocation.left.toMultiPoint());
  boost::geometry::append(interimPtsLeft, previousStepVehicleLocation.center.toMultiPoint());
  boost::geometry::append(interimPtsLeft, currentStepVehicleLocation.left.toMultiPoint());
  boost::geometry::append(interimPtsLeft, currentStepVehicleLocation.center.toMultiPoint());
  Polygon hullLeft;
  boost::geometry::convex_hull(interimPtsLeft, hullLeft);

  MultiPoint interimPtsRight;
  boost::geometry::append(interimPtsRight, previousStepVehicleLocation.right.toMultiPoint());
  boost::geometry::append(interimPtsRight, previousStepVehicleLocation.center.toMultiPoint());
  boost::geometry::append(interimPtsRight, currentStepVehicleLocation.right.toMultiPoint());
  boost::geometry::append(interimPtsRight, currentStepVehicleLocation.center.toMultiPoint());
  Polygon hullRight;
  boost::geometry::convex_hull(interimPtsRight, hullRight);
  auto result = combinePolygon(hullRight, hullLeft, hull);
  if (!result)
  {
    spdlog::debug("unstructured::calculateEstimationBetweenSteps>> Could not create estimation polygon ({})."
                  "left {}, right {}",
                  debugNamespace,
                  std::to_string(hullLeft),
                  std::to_string(hullRight));
  }

  if (result)
  {
    DEBUG_DRAWING_POLYGON(hull, "yellow", debugNamespace + "_hull_front");
    result = combinePolygon(polygon, hull, polygon);
    if (!result)
    {
      spdlog::warn("unstructured::calculateEstimationBetweenSteps>> Could not combine front estimation polygon ({}) "
                   "with final polygon."
                   "polygon {}, hull {}",
                   debugNamespace,
                   std::to_string(polygon),
                   std::to_string(hull));
    }
  }
  return result;
}

bool calculateFrontAndSidePolygon(situation::VehicleState const &vehicleState,
                                  TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
                                  std::vector<TrajectorySetStep> const &sideSteps,
                                  TrajectorySetStep const &front,
                                  std::string const &debugNamespace,
                                  Polygon &resultPolygon,
                                  TrajectorySetStepVehicleLocation &frontSideStepVehicleLocation)
{
  auto result = true;
  auto previousStepVehicleLocation = initialStepVehicleLocation;
  //-------------
  // sides
  //-------------
  auto idx = 0;
  for (auto sideStepIt = sideSteps.cbegin(); (sideStepIt != sideSteps.cend()) && result; ++sideStepIt)
  {
    Polygon stepPolygon;
    TrajectorySetStepVehicleLocation currentStepVehicleLocation;
    result = calculateStepPolygon(
      vehicleState, *sideStepIt, debugNamespace + "_" + std::to_string(idx), stepPolygon, currentStepVehicleLocation);
    if (!result)
    {
      spdlog::debug("unstructured::calculateFrontAndSidePolygon>> Could not calculate step polygon");
    }
    if (result)
    {
      result = calculateEstimationBetweenSteps(resultPolygon,
                                               previousStepVehicleLocation,
                                               currentStepVehicleLocation,
                                               debugNamespace + "_step_estimation_" + std::to_string(idx));
      if (!result)
      {
        spdlog::debug("unstructured::calculateFrontAndSidePolygon>> Could not calculate between steps");
      }
      previousStepVehicleLocation = currentStepVehicleLocation;
    }

    if (result)
    {
      result = combinePolygon(resultPolygon, stepPolygon, resultPolygon);
    }
    idx++;
  }

  //-------------
  // front
  //-------------
  Polygon frontPolygon;
  if (result)
  {
    result = calculateStepPolygon(
      vehicleState, front, debugNamespace + "_front", frontPolygon, frontSideStepVehicleLocation);
  }
  if (result)
  {
    result = calculateEstimationBetweenSteps(
      resultPolygon, previousStepVehicleLocation, frontSideStepVehicleLocation, debugNamespace + "_front_estimation");
    if (!result)
    {
      spdlog::debug("unstructured::calculateFrontAndSidePolygon>> Could not calculate between last step and "
                    "front polygon.");
    }
  }
  if (result)
  {
    result = combinePolygon(resultPolygon, frontPolygon, resultPolygon);
  }
  return result;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
