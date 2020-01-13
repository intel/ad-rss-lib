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
 * @brief namespace situation
 */
namespace unstructured {

const double TrajectoryPedestrian::maxRadius = 1000.;

bool TrajectoryPedestrian::calculateTrajectorySet(ad::physics::Duration const &currentTime,
                                                  ad::physics::Acceleration const &aAfterResponseTime,
                                                  ad::rss::situation::VehicleState const &vehicleState,
                                                  ad::rss::unstructured::Polygon &trajectorySet)
{
  auto idx = 0;
  Trajectory frontPts;
  for (auto i = ad::physics::RatioValue(1.0); i >= ad::physics::RatioValue(-1.0); i -= ad::physics::RatioValue(0.1))
  {
    auto endPt = calculateTrajectoryEndPoint(currentTime,
                                             vehicleState.dynamics.alphaLon.accelMax,
                                             aAfterResponseTime,
                                             i,
                                             vehicleState,
                                             std::to_string(idx) + std::to_string(aAfterResponseTime));

    frontPts.push_back(endPt);
#if DRAW_FINAL_POSITION
    drawFinalPosition(endPt,
                      vehicleState.objectState.dimension,
                      std::to_string(idx) + "_" + std::to_string(aAfterResponseTime) + "_vehicle_final_position");
#endif
    idx++;
  }

  auto frontPolygon = calculateFrontWithDimension(frontPts, vehicleState.objectState.dimension);
  auto backPolygon = calculateBackWithDimension(currentTime, aAfterResponseTime, vehicleState);

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
  return true;
}

ad::rss::unstructured::Polygon TrajectoryPedestrian::generate(ad::physics::Duration const &currentTime,
                                                              ad::physics::Acceleration const &aAfterResponseTime,
                                                              ad::rss::situation::VehicleState const &vehicleState)
{
  ad::rss::unstructured::Polygon trajectoryCorridor;
  ad::physics::Distance maxDistance;
  ad::rss::situation::calculateDistanceOffset(currentTime,
                                              vehicleState.objectState.speed,
                                              vehicleState.dynamics.responseTime,
                                              vehicleState.dynamics.maxSpeed,
                                              vehicleState.dynamics.alphaLon.accelMax,
                                              aAfterResponseTime,
                                              maxDistance);

  if (vehicleState.objectState.speed != ad::physics::Speed(0.))
  {
    calculateTrajectorySet(currentTime, aAfterResponseTime, vehicleState, trajectoryCorridor);
  }
  else
  {
    // If pedestrian is standing, he might start walking in any direction
    drawCirclePart(trajectoryCorridor,
                   Point(vehicleState.objectState.centerPoint.x, vehicleState.objectState.centerPoint.y),
                   static_cast<double>(maxDistance),
                   0,
                   2 * M_PI,
                   true);
  }

  // boost expects the polygon to be closed with the initial point.
  // Otherwise is_valid returns false and collides() is not working as expected (especially if polygon is within other
  // polygon)
  boost::geometry::append(trajectoryCorridor, trajectoryCorridor.outer().at(0));

  return trajectoryCorridor;
}

TrajectoryPoint TrajectoryPedestrian::calculateTrajectoryEndPoint(ad::physics::Duration const &currentTime,
                                                                  ad::physics::Acceleration const &aUntilResponseTime,
                                                                  ad::physics::Acceleration const &aAfterResponseTime,
                                                                  ad::physics::RatioValue const &angleChangeRatio,
                                                                  ad::rss::situation::VehicleState const &vehicleState,
                                                                  std::string const &ns) const
{
  auto startingAngle = vehicleState.objectState.yaw - ad::physics::Angle(M_PI / 2.);
  auto startingPoint = Point(vehicleState.objectState.centerPoint.x, vehicleState.objectState.centerPoint.y);
  ad::physics::Distance maxDistance;
  ad::rss::situation::calculateDistanceOffset(currentTime,
                                              vehicleState.objectState.speed,
                                              vehicleState.dynamics.responseTime,
                                              vehicleState.dynamics.maxSpeed,
                                              aUntilResponseTime,
                                              aAfterResponseTime,
                                              maxDistance);

#if DRAW_TRAJECTORIES
  ad::rss::unstructured::Line linePts;
  boost::geometry::append(linePts, startingPoint);
#endif
  Point finalPoint;
  ad::physics::Angle finalAngle = vehicleState.objectState.yaw;
  TrajectoryHeading heading;

  if (std::abs(angleChangeRatio) > vehicleState.dynamics.unstructuredSettings.pedestrianTurningRadius / maxRadius)
  {
    auto radius = vehicleState.dynamics.unstructuredSettings.pedestrianTurningRadius / angleChangeRatio;

    auto circleOrigin = getCircleOrigin(startingPoint, radius, startingAngle);
    ad::physics::Distance distanceUntilReponseTime;
    ad::rss::situation::calculateDistanceOffset(vehicleState.dynamics.responseTime,
                                                vehicleState.objectState.speed,
                                                vehicleState.dynamics.responseTime,
                                                vehicleState.dynamics.maxSpeed,
                                                aUntilResponseTime,
                                                ad::physics::Acceleration(0.),
                                                distanceUntilReponseTime);
    auto angleChange = ad::physics::Angle(static_cast<double>(distanceUntilReponseTime) / radius);
    heading = (radius > ad::physics::Distance(0.)) ? TrajectoryHeading::left : TrajectoryHeading::right;

    auto pointAfterResponseTime
      = getPointOnCircle(circleOrigin, static_cast<double>(radius), startingAngle + angleChange);
#if DRAW_TRAJECTORIES
    // todo: draw circle part
    boost::geometry::append(linePts, pointAfterResponseTime);
#endif

    auto remainingDistance = maxDistance - distanceUntilReponseTime;
    // after response time continue on a straight line
    finalPoint = ad::rss::unstructured::Point(
      pointAfterResponseTime.x() - static_cast<double>(remainingDistance) * cos(M_PI / 2 - angleChange - startingAngle),
      pointAfterResponseTime.y()
        + static_cast<double>(remainingDistance) * sin(M_PI / 2 - angleChange - startingAngle));
#if DRAW_TRAJECTORIES
    boost::geometry::append(linePts, finalPoint);
#endif
    finalAngle = vehicleState.objectState.yaw + angleChange;
  }
  else
  {
    // straight line
    finalPoint
      = ad::rss::unstructured::Point(startingPoint.x() - static_cast<double>(maxDistance) * sin(startingAngle),
                                     startingPoint.y() + static_cast<double>(maxDistance) * cos(startingAngle));
#if DRAW_TRAJECTORIES
    boost::geometry::append(linePts, startingPoint);
    boost::geometry::append(linePts, finalPoint);
#endif
    heading = TrajectoryHeading::straight;
  }

#if DRAW_TRAJECTORIES
  DEBUG_DRAWING_LINE(linePts, "orange", ns + "trajectory");
#endif

  return TrajectoryPoint(finalPoint, finalAngle, heading);
}

bool TrajectoryPedestrian::getMaxTrajectory(::ad::rss::situation::VehicleState const &vehicleState,
                                            ad::rss::unstructured::Polygon &brakePolygon,
                                            ad::rss::unstructured::Polygon &continueForwardPolygon)
{
  ad::physics::Duration timeToStop;
  auto result = ad::rss::situation::calculateTimeToStop(vehicleState.objectState.speed,
                                                        vehicleState.dynamics.responseTime,
                                                        vehicleState.dynamics.maxSpeed,
                                                        vehicleState.dynamics.alphaLon.accelMax,
                                                        vehicleState.dynamics.alphaLon.brakeMax,
                                                        timeToStop);
  if (result)
  {
    brakePolygon = generate(timeToStop, vehicleState.dynamics.alphaLon.brakeMin, vehicleState);

    continueForwardPolygon = generate(timeToStop, vehicleState.dynamics.alphaLon.accelMax, vehicleState);
  }
  return result;
}

Polygon TrajectoryPedestrian::calculateFrontWithDimension(Trajectory const &trajectory,
                                                          ad::physics::Dimension2D const &dimension)
{
  // create lines through lefts, rights, centers
  Polygon frontPts;
  for (auto const &pt : trajectory)
  {
    boost::geometry::append(frontPts, getVehicleCorner(pt, dimension, VehicleCorner::frontLeft));
    boost::geometry::append(frontPts, getVehicleCorner(pt, dimension, VehicleCorner::frontRight));
  }
  Polygon frontPolygon;
  boost::geometry::convex_hull(frontPts, frontPolygon);
  return frontPolygon;
}

Polygon TrajectoryPedestrian::calculateBackWithDimension(ad::physics::Duration const &currentTime,
                                                         ad::physics::Acceleration const &aAfterResponseTime,
                                                         situation::VehicleState const &vehicleState)
{
  int idx = 0;
  Polygon backPolygon;
  // the polygon contains of the vehicle corners for max brake and aAfterResponseTime with max left and max right

  auto accelLeft = calculateTrajectoryEndPoint(currentTime,
                                               vehicleState.dynamics.alphaLon.accelMax,
                                               aAfterResponseTime,
                                               ad::physics::RatioValue(-1.0),
                                               vehicleState,
                                               std::to_string(idx) + std::to_string(aAfterResponseTime));

  boost::geometry::append(backPolygon,
                          getVehicleCorner(accelLeft, vehicleState.objectState.dimension, VehicleCorner::frontRight));
#if DRAW_FINAL_POSITION
  drawFinalPosition(accelLeft,
                    vehicleState.objectState.dimension,
                    std::to_string(idx) + "_" + std::to_string(aAfterResponseTime) + "_vehicle_final_position_right");
#endif
  idx++;

  auto accelRight = calculateTrajectoryEndPoint(currentTime,
                                                vehicleState.dynamics.alphaLon.accelMax,
                                                aAfterResponseTime,
                                                ad::physics::RatioValue(1.0),
                                                vehicleState,
                                                std::to_string(idx) + std::to_string(aAfterResponseTime));

  boost::geometry::append(backPolygon,
                          getVehicleCorner(accelRight, vehicleState.objectState.dimension, VehicleCorner::frontLeft));
#if DRAW_FINAL_POSITION
  drawFinalPosition(accelRight,
                    vehicleState.objectState.dimension,
                    std::to_string(idx) + "_" + std::to_string(aAfterResponseTime) + "_vehicle_final_position_right");
#endif
  idx++;
  auto brakeMaxRight = calculateTrajectoryEndPoint(currentTime,
                                                   vehicleState.dynamics.alphaLon.brakeMax,
                                                   vehicleState.dynamics.alphaLon.brakeMax,
                                                   ad::physics::RatioValue(1.0),
                                                   vehicleState,
                                                   std::to_string(idx) + std::to_string(aAfterResponseTime));

  boost::geometry::append(backPolygon,
                          getVehicleCorner(brakeMaxRight, vehicleState.objectState.dimension, VehicleCorner::backLeft));
#if DRAW_FINAL_POSITION
  drawFinalPosition(brakeMaxRight,
                    vehicleState.objectState.dimension,
                    std::to_string(idx) + "_" + std::to_string(aAfterResponseTime) + "_vehicle_final_position_right");
#endif
  idx++;
  auto brakeMaxLeft = calculateTrajectoryEndPoint(currentTime,
                                                  vehicleState.dynamics.alphaLon.brakeMax,
                                                  vehicleState.dynamics.alphaLon.brakeMax,
                                                  ad::physics::RatioValue(-1.0),
                                                  vehicleState,
                                                  std::to_string(idx) + std::to_string(aAfterResponseTime));

  boost::geometry::append(backPolygon,
                          getVehicleCorner(brakeMaxLeft, vehicleState.objectState.dimension, VehicleCorner::backRight));
#if DRAW_FINAL_POSITION
  drawFinalPosition(brakeMaxLeft,
                    vehicleState.objectState.dimension,
                    std::to_string(idx) + "_" + std::to_string(aAfterResponseTime) + "_vehicle_final_position_left");
#endif

  boost::geometry::append(backPolygon, backPolygon.outer().front());
  return backPolygon;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
