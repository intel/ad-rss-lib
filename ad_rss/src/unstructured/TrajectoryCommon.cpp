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

#include "ad/rss/unstructured/TrajectoryCommon.hpp"
#include <ad/geometry/DebugDrawing.hpp>
#include <ad/physics/Operation.hpp>
#include "ad/rss/core/Logging.hpp"

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

::ad::geometry::Point getVehicleCorner(TrajectoryPoint const &point,
                                       core::RelativeObjectState const &vehicleState,
                                       VehicleCorner const corner)
{
  ::ad::geometry::Point resultPoint;
  auto const vehicleAngle = point.angle - physics::cPI_2;
  auto front_distance = vehicleState.unstructured_object_state.dimension.length / 2.0;
  if (vehicleState.object_type == world::ObjectType::EgoVehicle)
  {
    // in case of the ego vehicle we add the desired min safety distance to keep a minimum distance from others
    front_distance += vehicleState.dynamics.min_longitudinal_safety_distance;
  }
  switch (corner)
  {
    case VehicleCorner::frontLeft:
      resultPoint = ::ad::geometry::rotateAroundPoint(
        point.position,
        ::ad::geometry::toPoint(-vehicleState.unstructured_object_state.dimension.width / 2.0, front_distance),
        vehicleAngle);
      break;
    case VehicleCorner::frontRight:
      resultPoint = ::ad::geometry::rotateAroundPoint(
        point.position,
        ::ad::geometry::toPoint(vehicleState.unstructured_object_state.dimension.width / 2.0, front_distance),
        vehicleAngle);
      break;
    case VehicleCorner::backLeft:
      resultPoint = ::ad::geometry::rotateAroundPoint(
        point.position,
        ::ad::geometry::toPoint(-vehicleState.unstructured_object_state.dimension.width / 2.0,
                                -vehicleState.unstructured_object_state.dimension.length / 2.0),
        vehicleAngle);
      break;
    case VehicleCorner::backRight:
      resultPoint = ::ad::geometry::rotateAroundPoint(
        point.position,
        ::ad::geometry::toPoint(vehicleState.unstructured_object_state.dimension.width / 2.0,
                                -vehicleState.unstructured_object_state.dimension.length / 2.0),
        vehicleAngle);
      break;
    default:
      throw std::runtime_error("unstructured::getVehicleCorner>> invalid corner requested");
      break;
  }
  return resultPoint;
}

bool calculateStepPolygon(core::RelativeObjectState const &vehicleState,
                          TrajectorySetStep const &step,
                          std::string const &debugNamespace,
                          ::ad::geometry::Polygon &polygon,
                          TrajectorySetStepVehicleLocation &stepVehicleLocation)
{
  ::ad::geometry::MultiPoint frontPtsLeft;
  ::ad::geometry::MultiPoint frontPtsRight;

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

  ::ad::geometry::Polygon hullLeft;
  ::ad::geometry::Polygon hullRight;
  boost::geometry::convex_hull(frontPtsLeft, hullLeft);
  boost::geometry::convex_hull(frontPtsRight, hullRight);
  auto result = ::ad::geometry::combinePolygon(hullLeft, hullRight, polygon);
  return result;
}

bool calculateEstimationBetweenSteps(::ad::geometry::Polygon &polygon,
                                     TrajectorySetStepVehicleLocation const &previousStepVehicleLocation,
                                     TrajectorySetStepVehicleLocation const &currentStepVehicleLocation,
                                     std::string const &debugNamespace)
{
  // Fill potential gap between two calculation steps by using the previous and current step
  if (previousStepVehicleLocation == currentStepVehicleLocation)
  {
    return true;
  }

  ::ad::geometry::Polygon hull;
  ::ad::geometry::MultiPoint interimPtsLeft;
  boost::geometry::append(interimPtsLeft, previousStepVehicleLocation.left.toMultiPoint());
  boost::geometry::append(interimPtsLeft, previousStepVehicleLocation.center.toMultiPoint());
  boost::geometry::append(interimPtsLeft, currentStepVehicleLocation.left.toMultiPoint());
  boost::geometry::append(interimPtsLeft, currentStepVehicleLocation.center.toMultiPoint());
  ::ad::geometry::Polygon hullLeft;
  boost::geometry::convex_hull(interimPtsLeft, hullLeft);

  ::ad::geometry::MultiPoint interimPtsRight;
  boost::geometry::append(interimPtsRight, previousStepVehicleLocation.right.toMultiPoint());
  boost::geometry::append(interimPtsRight, previousStepVehicleLocation.center.toMultiPoint());
  boost::geometry::append(interimPtsRight, currentStepVehicleLocation.right.toMultiPoint());
  boost::geometry::append(interimPtsRight, currentStepVehicleLocation.center.toMultiPoint());
  ::ad::geometry::Polygon hullRight;
  boost::geometry::convex_hull(interimPtsRight, hullRight);
  auto result = ::ad::geometry::combinePolygon(hullRight, hullLeft, hull);
  if (!result)
  {
    core::getLogger()->debug("unstructured::calculateEstimationBetweenSteps>> Could not create estimation polygon ({})."
                             "left {}, right {}",
                             debugNamespace,
                             std::to_string(hullLeft),
                             std::to_string(hullRight));
  }

  if (result)
  {
    DEBUG_DRAWING_POLYGON(hull, "yellow", debugNamespace + "_hull_front");
    result = ::ad::geometry::combinePolygon(polygon, hull, polygon);
    if (!result)
    {
      core::getLogger()->warn(
        "unstructured::calculateEstimationBetweenSteps>> Could not combine front estimation polygon ({}) "
        "with final polygon."
        "polygon {}, hull {}",
        debugNamespace,
        std::to_string(polygon),
        std::to_string(hull));
    }
  }
  return result;
}

bool calculateFrontAndSidePolygon(core::RelativeObjectState const &vehicleState,
                                  TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
                                  std::vector<TrajectorySetStep> const &sideSteps,
                                  TrajectorySetStep const &front,
                                  std::string const &debugNamespace,
                                  ::ad::geometry::Polygon &resultPolygon,
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
    ::ad::geometry::Polygon stepPolygon;
    TrajectorySetStepVehicleLocation currentStepVehicleLocation;
    result = calculateStepPolygon(
      vehicleState, *sideStepIt, debugNamespace + "_" + std::to_string(idx), stepPolygon, currentStepVehicleLocation);
    if (!result)
    {
      core::getLogger()->debug("unstructured::calculateFrontAndSidePolygon>> Could not calculate step polygon");
    }
    if (result)
    {
      result = calculateEstimationBetweenSteps(resultPolygon,
                                               previousStepVehicleLocation,
                                               currentStepVehicleLocation,
                                               debugNamespace + "_step_estimation_" + std::to_string(idx));
      if (!result)
      {
        core::getLogger()->debug("unstructured::calculateFrontAndSidePolygon>> Could not calculate between steps");
      }
      previousStepVehicleLocation = currentStepVehicleLocation;
    }

    if (result)
    {
      result = ::ad::geometry::combinePolygon(resultPolygon, stepPolygon, resultPolygon);
    }
    idx++;
  }

  //-------------
  // front
  //-------------
  ::ad::geometry::Polygon frontPolygon;
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
      core::getLogger()->debug("unstructured::calculateFrontAndSidePolygon>> Could not calculate between last step and "
                               "front polygon.");
    }
  }
  if (result)
  {
    result = ::ad::geometry::combinePolygon(resultPolygon, frontPolygon, resultPolygon);
  }
  return result;
}

bool calculateResponseTimePolygon(core::RelativeObjectState const &vehicleState,
                                  TrajectorySetStepVehicleLocation const &initialStepVehicleLocation,
                                  std::string const &debugNamespace,
                                  ::ad::geometry::Polygon &resultPolygon)
{
  ::ad::geometry::MultiPoint pts;
  boost::geometry::append(pts, initialStepVehicleLocation.left.toMultiPoint());
  boost::geometry::append(pts, initialStepVehicleLocation.center.toMultiPoint());
  boost::geometry::append(pts, initialStepVehicleLocation.right.toMultiPoint());
  TrajectoryPoint currentTrajectoryPoint(vehicleState, TrajectoryPoint::SpeedMode::Min);
  TrafficParticipantLocation currentLocation(currentTrajectoryPoint, vehicleState);
  boost::geometry::append(pts, currentLocation.toMultiPoint());
  ::ad::geometry::Polygon hull;
  boost::geometry::convex_hull(pts, hull);

  auto result = ::ad::geometry::combinePolygon(resultPolygon, hull, resultPolygon);
  if (!result)
  {
    core::getLogger()->debug("unstructured::calculateResponseTimePolygon>> Could not create combined polygon ({})."
                             "hull {}",
                             debugNamespace,
                             std::to_string(hull));
  }
  return result;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
