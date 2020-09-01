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

#include "TrajectoryPedestrian.hpp"
#include <ad/physics/Operation.hpp>
#include "ad/rss/situation/Physics.hpp"

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

const ad::physics::Distance TrajectoryPedestrian::maxRadius(1000.);
const ad::physics::Angle TrajectoryPedestrian::circleStepWidth(0.1);

bool TrajectoryPedestrian::calculateTrajectorySets(situation::VehicleState const &vehicleState,
                                                   Polygon &brakePolygon,
                                                   Polygon &continueForwardPolygon)
{
  ad::physics::Duration timeToStop;
  auto result = situation::calculateTimeToStop(vehicleState.objectState.speed,
                                               vehicleState.dynamics.responseTime,
                                               vehicleState.dynamics.maxSpeedOnAcceleration,
                                               vehicleState.dynamics.alphaLon.accelMax,
                                               vehicleState.dynamics.alphaLon.brakeMax,
                                               timeToStop);
  if (result)
  {
    result = createTrajectorySet(vehicleState, timeToStop, vehicleState.dynamics.alphaLon.brakeMin, brakePolygon);
  }
  if (result)
  {
    result
      = createTrajectorySet(vehicleState, timeToStop, vehicleState.dynamics.alphaLon.accelMax, continueForwardPolygon);
  }
  return result;
}

bool TrajectoryPedestrian::createTrajectorySet(situation::VehicleState const &vehicleState,
                                               ad::physics::Duration const &duration,
                                               ad::physics::Acceleration const &aAfterResponseTime,
                                               Polygon &trajectorySet)
{
  auto result = true;
  if (vehicleState.objectState.speed != ad::physics::Speed(0.))
  {
    Trajectory frontPts;
    for (auto i = ad::physics::RatioValue(1.0); i >= ad::physics::RatioValue(-1.0); i -= ad::physics::RatioValue(0.1))
    {
      auto endPt = getFinalTrajectoryPoint(vehicleState,
                                           duration,
                                           vehicleState.dynamics.alphaLon.accelMax,
                                           aAfterResponseTime,
                                           i,
                                           std::to_string(aAfterResponseTime) + "_" + std::to_string(i));
      frontPts.push_back(endPt);
#if DEBUG_DRAWING
      DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(endPt, vehicleState).toPolygon(),
                            "yellow",
                            std::to_string(aAfterResponseTime) + "_" + std::to_string(i) + "_vehicle_final_position");
#endif
    }
    auto frontPolygon = calculateFrontWithDimension(frontPts, vehicleState.objectState.dimension);
    auto backPolygon = calculateBackWithDimension(vehicleState, duration, aAfterResponseTime);
    std::vector<Polygon> unionPolygons;
    boost::geometry::union_(frontPolygon.outer(), backPolygon.outer(), unionPolygons);
    if (unionPolygons.size() != 1)
    {
      return false;
    }
    else
    {
      trajectorySet = unionPolygons[0];
    }
  }
  else
  {
    // If pedestrian is standing, he might start walking in any direction
    ad::physics::Speed speed;
    ad::physics::Distance maxDistance;
    result = situation::calculateSpeedAndDistanceOffset(duration,
                                                        vehicleState.objectState.speed,
                                                        vehicleState.dynamics.responseTime,
                                                        vehicleState.dynamics.maxSpeedOnAcceleration,
                                                        vehicleState.dynamics.alphaLon.accelMax,
                                                        aAfterResponseTime,
                                                        speed,
                                                        maxDistance);
    calculateCircleArc(toPoint(vehicleState.objectState.centerPoint),
                       maxDistance,
                       ad::physics::Angle(0.),
                       ad::physics::c2PI,
                       circleStepWidth,
                       trajectorySet);
  }
  return result;
}

TrajectoryPoint TrajectoryPedestrian::getFinalTrajectoryPoint(situation::VehicleState const &vehicleState,
                                                              ad::physics::Duration const &duration,
                                                              ad::physics::Acceleration const &aUntilResponseTime,
                                                              ad::physics::Acceleration const &aAfterResponseTime,
                                                              ad::physics::RatioValue const &angleChangeRatio,
                                                              std::string const &debugNamespace) const
{
  auto startingAngle = vehicleState.objectState.yaw - ad::physics::cPI_2;
  auto startingPoint = toPoint(vehicleState.objectState.centerPoint);
  ad::physics::Speed speed;
  ad::physics::Distance maxDistance;
  situation::calculateSpeedAndDistanceOffset(duration,
                                             vehicleState.objectState.speed,
                                             vehicleState.dynamics.responseTime,
                                             vehicleState.dynamics.maxSpeedOnAcceleration,
                                             aUntilResponseTime,
                                             aAfterResponseTime,
                                             speed,
                                             maxDistance);

#if DEBUG_DRAWING
  Line linePts;
  boost::geometry::append(linePts, startingPoint);
#endif
  Point finalPoint;
  ad::physics::Angle finalAngle = vehicleState.objectState.yaw;

  if (static_cast<double>(std::fabs(angleChangeRatio))
      > vehicleState.dynamics.unstructuredSettings.pedestrianTurningRadius / maxRadius)
  {
    auto radius = vehicleState.dynamics.unstructuredSettings.pedestrianTurningRadius / angleChangeRatio;

    auto circleOrigin = getCircleOrigin(startingPoint, radius, startingAngle);
    ad::physics::Distance distanceUntilReponseTime;

    situation::calculateAcceleratedLimitedMovement(vehicleState.objectState.speed,
                                                   vehicleState.dynamics.maxSpeedOnAcceleration,
                                                   aUntilResponseTime,
                                                   vehicleState.dynamics.responseTime,
                                                   speed,
                                                   distanceUntilReponseTime);

    auto angleChange = ad::physics::Angle(distanceUntilReponseTime / radius);

    auto pointAfterResponseTime = getPointOnCircle(circleOrigin, radius, startingAngle + angleChange);
#if DEBUG_DRAWING
    boost::geometry::append(linePts, pointAfterResponseTime);
#endif

    auto remainingDistance = maxDistance - distanceUntilReponseTime;
    ad::physics::Angle const deltaAngle = ad::physics::cPI_2 - angleChange - startingAngle;
    // after response time continue on a straight line
    finalPoint = pointAfterResponseTime
      + toPoint(-std::cos(deltaAngle) * remainingDistance, std::sin(deltaAngle) * remainingDistance);
#if DEBUG_DRAWING
    boost::geometry::append(linePts, finalPoint);
#endif
    finalAngle = vehicleState.objectState.yaw + angleChange;
  }
  else
  {
    // straight line
    finalPoint = startingPoint + toPoint(-std::sin(startingAngle) * maxDistance, std::cos(startingAngle) * maxDistance);
#if DEBUG_DRAWING
    boost::geometry::append(linePts, startingPoint);
    boost::geometry::append(linePts, finalPoint);
#endif
  }

#if DEBUG_DRAWING
  DEBUG_DRAWING_LINE(linePts, "orange", debugNamespace + "trajectory");
#else
  (void)debugNamespace;
#endif

  return TrajectoryPoint(finalPoint, finalAngle, speed, physics::AngularVelocity(0.));
}

Polygon TrajectoryPedestrian::calculateFrontWithDimension(Trajectory const &trajectory,
                                                          ad::physics::Dimension2D const &vehicleDimension)
{
  // create lines through lefts, rights, centers
  Polygon frontPts;
  for (auto const &pt : trajectory)
  {
    boost::geometry::append(frontPts, getVehicleCorner(pt, vehicleDimension, VehicleCorner::frontLeft));
    boost::geometry::append(frontPts, getVehicleCorner(pt, vehicleDimension, VehicleCorner::frontRight));
  }
  Polygon frontPolygon;
  boost::geometry::convex_hull(frontPts, frontPolygon);
  return frontPolygon;
}

Polygon TrajectoryPedestrian::calculateBackWithDimension(situation::VehicleState const &vehicleState,
                                                         ad::physics::Duration const &duration,
                                                         ad::physics::Acceleration const &aAfterResponseTime)
{
  Polygon backPolygon;
  // the polygon contains of the vehicle corners for max brake and aAfterResponseTime with max left and max right

  auto accelLeft = getFinalTrajectoryPoint(vehicleState,
                                           duration,
                                           vehicleState.dynamics.alphaLon.accelMax,
                                           aAfterResponseTime,
                                           ad::physics::RatioValue(-1.0),
                                           std::to_string(aAfterResponseTime) + "_back_accelLeft_");

  boost::geometry::append(backPolygon,
                          getVehicleCorner(accelLeft, vehicleState.objectState.dimension, VehicleCorner::frontRight));
#if DEBUG_DRAWING
  DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(accelLeft, vehicleState).toPolygon(),
                        "yellow",
                        std::to_string(aAfterResponseTime) + "_back_accelLeft_vehicle_final_position_right");
#endif

  auto accelRight = getFinalTrajectoryPoint(vehicleState,
                                            duration,
                                            vehicleState.dynamics.alphaLon.accelMax,
                                            aAfterResponseTime,
                                            ad::physics::RatioValue(1.0),
                                            std::to_string(aAfterResponseTime) + "_back_accelRight_");

  boost::geometry::append(backPolygon,
                          getVehicleCorner(accelRight, vehicleState.objectState.dimension, VehicleCorner::frontLeft));
#if DEBUG_DRAWING
  DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(accelRight, vehicleState).toPolygon(),
                        "yellow",
                        std::to_string(aAfterResponseTime) + "_back_accelRight_vehicle_final_position_right");
#endif
  auto brakeMaxRight = getFinalTrajectoryPoint(vehicleState,
                                               duration,
                                               vehicleState.dynamics.alphaLon.brakeMax,
                                               vehicleState.dynamics.alphaLon.brakeMax,
                                               ad::physics::RatioValue(1.0),
                                               std::to_string(aAfterResponseTime) + "_back_brakeMaxRight_");

  boost::geometry::append(backPolygon,
                          getVehicleCorner(brakeMaxRight, vehicleState.objectState.dimension, VehicleCorner::backLeft));
#if DEBUG_DRAWING
  DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(brakeMaxRight, vehicleState).toPolygon(),
                        "yellow",
                        std::to_string(aAfterResponseTime) + "_back_brakeMaxRight_vehicle_final_position_right");
#endif
  auto brakeMaxLeft = getFinalTrajectoryPoint(vehicleState,
                                              duration,
                                              vehicleState.dynamics.alphaLon.brakeMax,
                                              vehicleState.dynamics.alphaLon.brakeMax,
                                              ad::physics::RatioValue(-1.0),
                                              std::to_string(aAfterResponseTime) + "_back_brakeMaxLeft_");

  boost::geometry::append(backPolygon,
                          getVehicleCorner(brakeMaxLeft, vehicleState.objectState.dimension, VehicleCorner::backRight));
#if DEBUG_DRAWING
  DEBUG_DRAWING_POLYGON(TrafficParticipantLocation(brakeMaxLeft, vehicleState).toPolygon(),
                        "yellow",
                        std::to_string(aAfterResponseTime) + "_back_brakeMaxLeft_vehicle_final_position_left");
#endif

  boost::geometry::append(backPolygon, backPolygon.outer().front());
  return backPolygon;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
