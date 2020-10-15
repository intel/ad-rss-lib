
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
  auto result = true;
  MultiPoint frontPtsLeft;
  MultiPoint frontPtsRight;

  int idx = 0;
  for (auto it = step.left.cbegin(); (it != step.left.cend()) && result; ++it)
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
  if (result)
  {
    auto vehicleLocationCenter = TrafficParticipantLocation(step.center, vehicleState);
    DEBUG_DRAWING_POLYGON(vehicleLocationCenter.toPolygon(), "blue", debugNamespace + "_center");
    boost::geometry::append(frontPtsLeft, vehicleLocationCenter.toMultiPoint());
    stepVehicleLocation.center = vehicleLocationCenter;
    boost::geometry::append(frontPtsRight, vehicleLocationCenter.toMultiPoint());
  }

  idx = 0;
  for (auto it = step.right.cbegin(); (it != step.right.cend()) && result; ++it)
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

  if (result)
  {
    Polygon hullLeft;
    Polygon hullRight;
    boost::geometry::convex_hull(frontPtsLeft, hullLeft);
    boost::geometry::convex_hull(frontPtsRight, hullRight);
    result = combinePolygon(hullLeft, hullRight, polygon);
  }
  return result;
}

bool calculateEstimationBetweenSteps(Polygon &polygon,
                                     TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                     TrajectorySetStepVehicleLocation const &currentStepVehicleLocation,
                                     std::string const &debugNamespace)
{
  // Fill potential gap between two calculation steps by using the previous and current step
  auto result = true;
  if (previousStepVehicleLocation == currentStepVehicleLocation)
  {
    return true;
  }
  //-------------
  // back
  //-------------
  Polygon hullBack;
  MultiPoint interimPtsBackLeft;
  boost::geometry::append(interimPtsBackLeft, previousStepVehicleLocation.left.toMultiPoint());
  boost::geometry::append(interimPtsBackLeft, previousStepVehicleLocation.center.toMultiPoint());
  boost::geometry::append(interimPtsBackLeft, currentStepVehicleLocation.left.toMultiPoint());
  boost::geometry::append(interimPtsBackLeft, currentStepVehicleLocation.center.toMultiPoint());
  Polygon hullBackLeft;
  boost::geometry::convex_hull(interimPtsBackLeft, hullBackLeft);

  MultiPoint interimPtsBackRight;
  boost::geometry::append(interimPtsBackRight, previousStepVehicleLocation.right.toMultiPoint());
  boost::geometry::append(interimPtsBackRight, previousStepVehicleLocation.center.toMultiPoint());
  boost::geometry::append(interimPtsBackRight, currentStepVehicleLocation.right.toMultiPoint());
  boost::geometry::append(interimPtsBackRight, currentStepVehicleLocation.center.toMultiPoint());
  Polygon hullBackRight;
  boost::geometry::convex_hull(interimPtsBackRight, hullBackRight);
  result = combinePolygon(hullBackRight, hullBackLeft, hullBack);
  if (!result)
  {
    spdlog::debug("unstructured::calculateEstimationBetweenSteps>> Could not create estimation polygon ({})."
                  "backLeft {}, backRight {}",
                  debugNamespace,
                  std::to_string(hullBackLeft),
                  std::to_string(hullBackRight));
  }

  if (result)
  {
    DEBUG_DRAWING_POLYGON(hullBack, "yellow", debugNamespace + "_hull_back");
    result = combinePolygon(polygon, hullBack, polygon);
    if (!result)
    {
      spdlog::debug("unstructured::calculateEstimationBetweenSteps>> Could not combine back estimation polygon ({}) "
                    "with final polygon."
                    "polygon {}, hullBack {}",
                    debugNamespace,
                    std::to_string(polygon),
                    std::to_string(hullBack));
    }
  }


  //-------------
  // front
  //-------------
  if (result)
  {
    Polygon hullFront;
    MultiPoint interimPtsFrontLeft;
    boost::geometry::append(interimPtsFrontLeft, previousStepVehicleLocation.left.toMultiPoint());
    boost::geometry::append(interimPtsFrontLeft, previousStepVehicleLocation.center.toMultiPoint());
    boost::geometry::append(interimPtsFrontLeft, currentStepVehicleLocation.left.toMultiPoint());
    boost::geometry::append(interimPtsFrontLeft, currentStepVehicleLocation.center.toMultiPoint());
    Polygon hullFrontLeft;
    boost::geometry::convex_hull(interimPtsFrontLeft, hullFrontLeft);

    MultiPoint interimPtsFrontRight;
    boost::geometry::append(interimPtsFrontRight, previousStepVehicleLocation.right.toMultiPoint());
    boost::geometry::append(interimPtsFrontRight, previousStepVehicleLocation.center.toMultiPoint());
    boost::geometry::append(interimPtsFrontRight, currentStepVehicleLocation.right.toMultiPoint());
    boost::geometry::append(interimPtsFrontRight, currentStepVehicleLocation.center.toMultiPoint());
    Polygon hullFrontRight;
    boost::geometry::convex_hull(interimPtsFrontRight, hullFrontRight);
    result = combinePolygon(hullFrontRight, hullFrontLeft, hullFront);
    if (!result)
    {
      spdlog::debug("unstructured::calculateEstimationBetweenSteps>> Could not create estimation polygon ({})."
                    "frontLeft {}, frontRight {}",
                    debugNamespace,
                    std::to_string(hullFrontLeft),
                    std::to_string(hullFrontRight));
    }

    if (result)
    {
      DEBUG_DRAWING_POLYGON(hullFront, "yellow", debugNamespace + "_hull_front");
      result = combinePolygon(polygon, hullFront, polygon);
      if (!result)
      {
        spdlog::warn("unstructured::calculateEstimationBetweenSteps>> Could not combine front estimation polygon ({}) "
                      "with final polygon."
                      "polygon {}, hullFront {}",
                      debugNamespace,
                      std::to_string(polygon),
                      std::to_string(hullFront));
      }
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
