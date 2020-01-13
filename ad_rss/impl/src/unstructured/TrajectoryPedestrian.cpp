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

ad::rss::unstructured::Point
TrajectoryPedestrian::calculateIntersectionPoint(ad::rss::unstructured::Point const &straight,
                                                 ad::rss::unstructured::Point const &maxAccel,
                                                 ad::physics::Distance const &maxDistance,
                                                 ad::rss::unstructured::Point const &startingPoint)
{
  auto x0 = startingPoint.x();
  auto y0 = startingPoint.y();
  auto xA = straight.x();
  auto yA = straight.y();
  auto x1 = maxAccel.x();
  auto y1 = maxAccel.y();

  // 1. formula for line through mStartingPoint and ptMaxAccelLeft
  auto lineGradient = (y1 - y0) / (x1 - x0);
  auto lineYIntercept = y1 - lineGradient * x1;
  //    std::cout << "line formula (left): y = " <<lineGradient << " * x + " << lineYIntercept << std::endl;

  // 2. formula for tangent through ptMaxStraight
  //((xA - x0) * (x - x0)) + (yA - y0) * (y - y0) = maxDistance * maxDistance;
  // -> x = (maxDistance * maxDistance + x0 * (xA - x0) - (yA - y0) * (y - y0)) / (xA - x0);

  // find intersection between 1. and 2.
  auto xRes
    = (static_cast<double>(maxDistance) * static_cast<double>(maxDistance) + x0 * (xA - x0) - lineYIntercept * (yA - y0)
       + y0 * (yA - y0))
    / (xA - x0 + lineGradient * (yA - y0));

  double yRes;
  //    if (yA == y0)
  //    {
  yRes = lineGradient * xRes + lineYIntercept;
  //    }
  //    else
  //    {
  //      yRes = (maxDistance * maxDistance - xRes * (xA - x0) + x0 * (xA - x0) + y0 * (yA - y0))
  //      /
  //      (yA - y0);
  //    }
  return ad::rss::unstructured::Point(xRes, yRes);
}

void TrajectoryPedestrian::calculateTrajectorySetSimplified(ad::physics::Duration const &currentTime,
                                                            ad::rss::unstructured::Point const &startingPoint,
                                                            ad::physics::Angle const &startingAngle,
                                                            ad::physics::Speed const &initialSpeed,
                                                            ad::physics::Acceleration const &aAfterResponseTime,
                                                            ad::physics::Distance const &maxDistance,
                                                            ad::rss::world::RssDynamics const &rssDynamics,
                                                            ad::rss::unstructured::Polygon &trajectoryCorridor)
{
  // simplified corridor with isocele triangle
  boost::geometry::append(trajectoryCorridor, startingPoint);
  auto ptMaxAccelLeft = calculateTrajectoryEndPoint(
    currentTime, aAfterResponseTime, 1.0, startingPoint, startingAngle, initialSpeed, rssDynamics);
  auto ptMaxAccelRight = calculateTrajectoryEndPoint(
    currentTime, aAfterResponseTime, -1.0, startingPoint, startingAngle, initialSpeed, rssDynamics);
  auto ptMaxStraight
    = ad::rss::unstructured::Point(startingPoint.x() - static_cast<double>(maxDistance) * sin(startingAngle),
                                   startingPoint.y() + static_cast<double>(maxDistance) * cos(startingAngle));

  // find point that is on tangent in ptMaxStraight and on straight line through ptMaxAccelLeft
  auto leftMaxPt = calculateIntersectionPoint(ptMaxStraight, ptMaxAccelLeft, maxDistance, startingPoint);
  boost::geometry::append(trajectoryCorridor, leftMaxPt);

  // find point that is on tangent in ptMaxStraight and on straight line through ptMaxAccelRight
  auto rightMaxPt = calculateIntersectionPoint(ptMaxStraight, ptMaxAccelRight, maxDistance, startingPoint);
  boost::geometry::append(trajectoryCorridor, rightMaxPt);
}

void TrajectoryPedestrian::calculateTrajectorySetPrecise(ad::physics::Duration const &currentTime,
                                                         ad::rss::unstructured::Point const &startingPoint,
                                                         ad::physics::Angle const &startingAngle,
                                                         ad::physics::Speed const &initialSpeed,
                                                         ad::physics::Acceleration const &aAfterResponseTime,
                                                         ad::rss::world::RssDynamics const &rssDynamics,
                                                         ad::rss::unstructured::Polygon &trajectoryCorridor)
{
  // precise corridor calculation
  ad::rss::unstructured::Line left;
  calculateMaxAngleTrajectory(left,
                              currentTime,
                              rssDynamics.alphaLon.brakeMax,
                              rssDynamics.alphaLon.accelMax,
                              1.0,
                              startingPoint,
                              startingAngle,
                              initialSpeed,
                              rssDynamics);
  boost::geometry::append(trajectoryCorridor, left);

  for (auto i = ad::physics::RatioValue(0.9); i > ad::physics::RatioValue(-1.0); i -= ad::physics::RatioValue(0.1))
  {
    auto endPt = calculateTrajectoryEndPoint(
      currentTime, rssDynamics.alphaLon.accelMax, i, startingPoint, startingAngle, initialSpeed, rssDynamics);
    boost::geometry::append(trajectoryCorridor, endPt);
  }

  ad::rss::unstructured::Line tmpTrajectory;
  calculateMaxAngleTrajectory(tmpTrajectory,
                              currentTime,
                              rssDynamics.alphaLon.brakeMax,
                              rssDynamics.alphaLon.accelMax,
                              -1.0,
                              startingPoint,
                              startingAngle,
                              initialSpeed,
                              rssDynamics);
  boost::geometry::reverse(tmpTrajectory);
  for (auto const &pt : tmpTrajectory)
  {
    boost::geometry::append(trajectoryCorridor, pt);
  }

  // add brake-max to polygon
  for (auto i = ad::physics::RatioValue(-1.0); i < ad::physics::RatioValue(1.0); i += ad::physics::RatioValue(0.1))
  {
    auto endPt = calculateTrajectoryEndPoint(
      currentTime, rssDynamics.alphaLon.brakeMax, i, startingPoint, startingAngle, initialSpeed, rssDynamics);
    boost::geometry::append(trajectoryCorridor, endPt);
  }
}

ad::rss::unstructured::Polygon TrajectoryPedestrian::generate(ad::physics::Duration const &currentTime,
                                                              ad::rss::unstructured::Point const &startingPoint,
                                                              ad::physics::Angle const &startingAngle,
                                                              ad::physics::Speed const &initialSpeed,
                                                              ad::physics::Acceleration const &aAfterResponseTime,
                                                              ad::rss::world::RssDynamics const &rssDynamics,
                                                              bool const preciseTrajectoryCalculation)
{
  ad::rss::unstructured::Polygon trajectoryCorridor;
  ad::physics::Distance maxDistance;
  ad::rss::situation::calculateDistanceOffset(currentTime,
                                              initialSpeed,
                                              rssDynamics.responseTime,
                                              rssDynamics.maxSpeed,
                                              rssDynamics.alphaLon.accelMax,
                                              aAfterResponseTime,
                                              maxDistance);

  if (initialSpeed != ad::physics::Speed(0.))
  {
    if (preciseTrajectoryCalculation)
    {
      calculateTrajectorySetPrecise(
        currentTime, startingPoint, startingAngle, initialSpeed, aAfterResponseTime, rssDynamics, trajectoryCorridor);
    }
    else
    {
      calculateTrajectorySetSimplified(currentTime,
                                       startingPoint,
                                       startingAngle,
                                       initialSpeed,
                                       aAfterResponseTime,
                                       maxDistance,
                                       rssDynamics,
                                       trajectoryCorridor);
    }
  }
  else
  {
    // If pedestrian is standing, he might start walking in any direction
    drawCirclePart(trajectoryCorridor, startingPoint, static_cast<double>(maxDistance), 0, 2 * M_PI, true);
  }

  // boost expects the polygon to be closed with the initial point.
  // Otherwise is_valid returns false and collides() is not working as expected (especially if polygon is within other
  // polygon)
  boost::geometry::append(trajectoryCorridor, trajectoryCorridor.outer().at(0));

  return trajectoryCorridor;
}

void TrajectoryPedestrian::calculateMaxAngleTrajectory(ad::rss::unstructured::Line &geometry,
                                                       ad::physics::Duration const &currentTime,
                                                       ad::physics::Acceleration const &aUntilResponseTimeMin,
                                                       ad::physics::Acceleration const &aUntilResponseTimeMax,
                                                       ad::physics::RatioValue const &angleChangeRatio,
                                                       ad::rss::unstructured::Point const &startingPoint,
                                                       ad::physics::Angle const &startingAngle,
                                                       ad::physics::Speed const &initialSpeed,
                                                       ad::rss::world::RssDynamics const &rssDynamics)
{
  ad::physics::Distance maxDistance;
  ad::rss::situation::calculateDistanceOffset(currentTime,
                                              initialSpeed,
                                              rssDynamics.responseTime,
                                              rssDynamics.maxSpeed,
                                              ad::physics::Acceleration(aUntilResponseTimeMax),
                                              ad::physics::Acceleration(0.),
                                              maxDistance);
  ad::physics::Distance minDistance;
  ad::rss::situation::calculateDistanceOffset(currentTime,
                                              initialSpeed,
                                              rssDynamics.responseTime,
                                              rssDynamics.maxSpeed,
                                              ad::physics::Acceleration(aUntilResponseTimeMin),
                                              ad::physics::Acceleration(0.),
                                              minDistance);
  auto radius = rssDynamics.unstructuredSettings.pedestrianTurningRadius / static_cast<double>(angleChangeRatio);
  if (abs(radius) < maxRadius)
  {
    auto circleOrigin = getCircleOrigin(startingPoint, radius, startingAngle);
    ad::physics::Distance distanceMaxUntilReponseTime;
    ad::rss::situation::calculateDistanceOffset(std::min(rssDynamics.responseTime, currentTime),
                                                initialSpeed,
                                                rssDynamics.responseTime,
                                                rssDynamics.maxSpeed,
                                                aUntilResponseTimeMax,
                                                ad::physics::Acceleration(0.),
                                                distanceMaxUntilReponseTime);
    ad::physics::Distance distanceMinUntilReponseTime;
    ad::rss::situation::calculateDistanceOffset(std::min(rssDynamics.responseTime, currentTime),
                                                initialSpeed,
                                                rssDynamics.responseTime,
                                                rssDynamics.maxSpeed,
                                                aUntilResponseTimeMin,
                                                ad::physics::Acceleration(0.),
                                                distanceMinUntilReponseTime);
    auto angleMax = ad::physics::Angle(distanceMaxUntilReponseTime / radius);
    auto angleMin = ad::physics::Angle(distanceMinUntilReponseTime / radius);
    // TODO: for optimization, only calculate in-between points if needed (left/right border)
    if (radius > ad::physics::Distance(0.0))
    {
      drawCirclePart(geometry, circleOrigin, radius, startingAngle + angleMin, angleMax - angleMin, true);
    }
    else
    {
      drawCirclePart(geometry,
                     circleOrigin,
                     abs(radius),
                     startingAngle + ad::physics::Angle(M_PI) + angleMin,
                     abs(angleMax) - abs(angleMin),
                     false);
    }
    auto lastPoint = geometry.back();

    auto remainingDistanceMax = maxDistance - distanceMaxUntilReponseTime;
    if (remainingDistanceMax > ad::physics::Distance(0.))
    {
      // after response time continue on a line
      lastPoint = ad::rss::unstructured::Point(
        lastPoint.x() - static_cast<double>(remainingDistanceMax) * cos(M_PI / 2 - angleMax - startingAngle),
        lastPoint.y() + static_cast<double>(remainingDistanceMax) * sin(M_PI / 2 - angleMax - startingAngle));
      boost::geometry::append(geometry, lastPoint);
    }
  }
  else
  {
    // straight line
    auto firstPoint
      = ad::rss::unstructured::Point(startingPoint.x() - static_cast<double>(minDistance) * sin(startingAngle),
                                     startingPoint.y() + static_cast<double>(minDistance) * cos(startingAngle));
    boost::geometry::append(geometry, firstPoint);
    auto lastPoint
      = ad::rss::unstructured::Point(startingPoint.x() - static_cast<double>(maxDistance) * sin(startingAngle),
                                     startingPoint.y() + static_cast<double>(maxDistance) * cos(startingAngle));
    boost::geometry::append(geometry, lastPoint);
  }
}

ad::rss::unstructured::Point
TrajectoryPedestrian::calculateTrajectoryEndPoint(ad::physics::Duration const &currentTime,
                                                  ad::physics::Acceleration const &aUntilResponseTime,
                                                  ad::physics::RatioValue const &angleChangeRatio,
                                                  ad::rss::unstructured::Point const &startingPoint,
                                                  ad::physics::Angle const &startingAngle,
                                                  ad::physics::Speed const &initialSpeed,
                                                  ad::rss::world::RssDynamics const &rssDynamics) const
{
  ad::physics::Distance maxDistance;
  ad::rss::situation::calculateDistanceOffset(currentTime,
                                              initialSpeed,
                                              rssDynamics.responseTime,
                                              rssDynamics.maxSpeed,
                                              aUntilResponseTime,
                                              ad::physics::Acceleration(0.),
                                              maxDistance);

  auto radius = rssDynamics.unstructuredSettings.pedestrianTurningRadius / angleChangeRatio;
  auto lastPoint = startingPoint;
  if (abs(radius) < maxRadius)
  {
    auto circleOrigin = getCircleOrigin(startingPoint, radius, startingAngle);
    ad::physics::Distance distanceUntilReponseTime;
    ad::rss::situation::calculateDistanceOffset(std::min(rssDynamics.responseTime, currentTime),
                                                initialSpeed,
                                                rssDynamics.responseTime,
                                                rssDynamics.maxSpeed,
                                                aUntilResponseTime,
                                                ad::physics::Acceleration(0.),
                                                distanceUntilReponseTime);
    auto angle = ad::physics::Angle(static_cast<double>(distanceUntilReponseTime) / radius);

    lastPoint = getPointOnCircle(circleOrigin, static_cast<double>(radius), startingAngle + angle);

    auto remainingDistance = maxDistance - distanceUntilReponseTime;
    if (remainingDistance > ad::physics::Distance(0.))
    {
      // after response time continue on a line
      lastPoint = ad::rss::unstructured::Point(
        lastPoint.x() - static_cast<double>(remainingDistance) * cos(M_PI / 2 - angle - startingAngle),
        lastPoint.y() + static_cast<double>(remainingDistance) * sin(M_PI / 2 - angle - startingAngle));
    }
  }
  else
  {
    // straight line
    lastPoint = ad::rss::unstructured::Point(startingPoint.x() - static_cast<double>(maxDistance) * sin(startingAngle),
                                             startingPoint.y() + static_cast<double>(maxDistance) * cos(startingAngle));
  }
  //    drawPoint(lastPoint);
  return lastPoint;
}

bool TrajectoryPedestrian::getMaxTrajectory(::ad::rss::situation::VehicleState const &vehicleState,
                                            ad::rss::unstructured::Polygon &brakePolygon,
                                            ad::rss::unstructured::Polygon &continueForwardPolygon)
{
  auto startingAngle = vehicleState.objectState.yaw - ad::physics::Angle(M_PI / 2.); // todo get rid of m_pi/2
  auto startingPoint
    = ad::rss::unstructured::Point(vehicleState.objectState.centerPoint.x, vehicleState.objectState.centerPoint.y);
  ad::physics::Duration timeToStop;
  auto result = ad::rss::situation::calculateTimeToStop(vehicleState.objectState.speed,
                                                        vehicleState.dynamics.responseTime,
                                                        vehicleState.dynamics.maxSpeed,
                                                        vehicleState.dynamics.alphaLon.accelMax,
                                                        vehicleState.dynamics.alphaLon.brakeMax,
                                                        timeToStop);
  if (result)
  {
    brakePolygon = generate(timeToStop,
                            startingPoint,
                            startingAngle,
                            vehicleState.objectState.speed,
                            vehicleState.dynamics.alphaLon.brakeMin,
                            vehicleState.dynamics,
                            vehicleState.dynamics.unstructuredSettings.pedestrianPreciseTrajectoryCalculation);

    continueForwardPolygon
      = generate(timeToStop,
                 startingPoint,
                 startingAngle,
                 vehicleState.objectState.speed,
                 ad::physics::Acceleration(0.),
                 vehicleState.dynamics,
                 vehicleState.dynamics.unstructuredSettings.pedestrianPreciseTrajectoryCalculation);
  }
  return result;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
