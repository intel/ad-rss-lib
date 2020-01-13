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

#include "TrajectoryVehicle.hpp"
#include <algorithm>

#define DRAW_FINAL_VEHICLE_POSITION 0
#define DRAW_TRAJECTORIES 0

#if defined(DRAW_TRAJECTORIES) || defined(DRAW_FINAL_VEHICLE_POSITION)
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

const double TrajectoryVehicle::maxRadius = 1000.0;

bool TrajectoryVehicle::getMaxTrajectory(::ad::rss::situation::VehicleState const &vehicleState,
                                         ad::rss::unstructured::Polygon &brakePolygon,
                                         ad::rss::unstructured::Polygon &continueForwardPolygon)
{
  ad::physics::Duration timeToStop;
  auto result = ad::rss::situation::calculateTimeToStop(vehicleState.objectState.speed,
                                                        vehicleState.dynamics.responseTime,
                                                        vehicleState.dynamics.maxSpeed,
                                                        vehicleState.dynamics.alphaLon.accelMax,
                                                        vehicleState.dynamics.alphaLon.brakeMin,
                                                        timeToStop);
  if (result)
  {
    // continue forward with vehicleState.dynamics.alphaLon.accelMax
    continueForwardPolygon
      = createTrajectorySet(vehicleState, timeToStop, vehicleState.dynamics.alphaLon.accelMax, "green");
    // brake with vehicleState.dynamics.alphaLon.brakeMin
    brakePolygon = createTrajectorySet(vehicleState, timeToStop, vehicleState.dynamics.alphaLon.brakeMin, "red");
  }
  return result;
}

TrajectoryVehicle::TrajectoryPoint
TrajectoryVehicle::getMaxTrajectoryPoint(ad::rss::situation::VehicleState const &vehicleState,
                                         ad::physics::Duration const &inputTime,
                                         ad::physics::Acceleration const &aUntilResponseTime,
                                         ad::physics::Acceleration const &aAfterResponseTime,
                                         ad::physics::RatioValue const &yawRateRatio,
                                         std::string const &ns) const
{
  auto trajectory = createTrajectory(vehicleState, inputTime, aUntilResponseTime, aAfterResponseTime, yawRateRatio, ns);
#if DRAW_TRAJECTORIES
  // Draw trajectory
  ad::rss::unstructured::Line linePts;
  for (auto const &pt : trajectory)
  {
    linePts.push_back(pt.position);
  }
  DEBUG_DRAWING_LINE(linePts, "orange", ns + "_trajectory");
#endif
#if DRAW_FINAL_VEHICLE_POSITION
  // draw final vehicle position
  ad::rss::unstructured::Polygon vehicle;
  auto firstPoint = getVehicleCorner(trajectory.back(), vehicleState.objectState.dimension, VehicleCorner::frontLeft);
  boost::geometry::append(vehicle, firstPoint);
  boost::geometry::append(
    vehicle, getVehicleCorner(trajectory.back(), vehicleState.objectState.dimension, VehicleCorner::frontRight));
  boost::geometry::append(
    vehicle, getVehicleCorner(trajectory.back(), vehicleState.objectState.dimension, VehicleCorner::backRight));
  boost::geometry::append(
    vehicle, getVehicleCorner(trajectory.back(), vehicleState.objectState.dimension, VehicleCorner::backLeft));
  boost::geometry::append(vehicle, firstPoint);
  DEBUG_DRAWING_POLYGON(vehicle, "yellow", ns + "_vehicle_final_position");
#endif
  return trajectory.back();
}

ad::rss::unstructured::Point TrajectoryVehicle::getVehicleCorner(TrajectoryVehicle::TrajectoryPoint const &point,
                                                                 ad::physics::Dimension2D const &dimension,
                                                                 VehicleCorner const corner) const
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

ad::rss::unstructured::Polygon
TrajectoryVehicle::createTrajectorySet(ad::rss::situation::VehicleState const &vehicleState,
                                       ad::physics::Duration currentTime,
                                       ad::physics::Acceleration aAfterResponseTime,
                                       std::string const &ns)
{
  // calculate left/right end points
  auto accelStepSize = (vehicleState.dynamics.alphaLon.accelMax - vehicleState.dynamics.alphaLon.brakeMax) / 20.0;
  std::vector<TrajectoryVehicle::TrajectoryPoint> rightTrajectoryMax;
  std::vector<TrajectoryVehicle::TrajectoryPoint> leftTrajectoryMax;
  {
    // max yaw-change-rate, brakeMax to accelMax in x steps
    int idx = 0;
    for (ad::physics::Acceleration accel = vehicleState.dynamics.alphaLon.brakeMax;
         accel <= vehicleState.dynamics.alphaLon.accelMax;
         accel += accelStepSize)
    {
      auto right = getMaxTrajectoryPoint(
        vehicleState, currentTime, accel, aAfterResponseTime, -1.0, ns + "_right" + std::to_string(idx));
      rightTrajectoryMax.push_back(right);

      auto left = getMaxTrajectoryPoint(
        vehicleState, currentTime, accel, aAfterResponseTime, 1.0, ns + "_left" + std::to_string(idx));
      leftTrajectoryMax.push_back(left);
      idx++;
    }
  }

  // calculate front end points
  std::vector<TrajectoryVehicle::TrajectoryPoint> frontTrajectoryMax;
  {
    int idx = 0;
    for (auto yawRateRatio = ad::physics::RatioValue(-0.9); yawRateRatio <= ad::physics::RatioValue(0.9);
         yawRateRatio += ad::physics::RatioValue(0.1))
    {
      auto pt = getMaxTrajectoryPoint(vehicleState,
                                      currentTime,
                                      vehicleState.dynamics.alphaLon.accelMax,
                                      aAfterResponseTime,
                                      yawRateRatio,
                                      ns + "_front" + std::to_string(idx));
      frontTrajectoryMax.push_back(pt);
      idx++;
    }
  }
  // at this point all relevant end points are calculated

  // Calculate sides with respect to vehicle dimensions
  auto leftBorder = calculateSide(
    leftTrajectoryMax, TrajectoryHeading::left, vehicleState.objectState.dimension, ns + "_left_with_dimension");
  auto rightBorder = calculateSide(
    rightTrajectoryMax, TrajectoryHeading::right, vehicleState.objectState.dimension, ns + "_right_with_dimension");

  // Calculate front side
  // Two modes can be active:
  //(1) the line through all frontLeft or the frontRight corners of a vehicle define the front
  //(2) the front is defined partially by the frontLeft corner line and the frontRight corner line.

  // create lines through frontLefts, frontRights, center
  // add special points at the beginning/ending of the left/right lines
  ad::rss::unstructured::Line frontLeftLine, frontRightLine, centerLine;
  boost::geometry::append(
    frontLeftLine,
    getVehicleCorner(rightTrajectoryMax.back(), vehicleState.objectState.dimension, VehicleCorner::frontLeft));
  for (auto const &pt : frontTrajectoryMax)
  {
    boost::geometry::append(centerLine, pt.position);
    boost::geometry::append(frontLeftLine,
                            getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::frontLeft));
    boost::geometry::append(frontRightLine,
                            getVehicleCorner(pt, vehicleState.objectState.dimension, VehicleCorner::frontRight));
  }
  boost::geometry::append(
    frontRightLine,
    getVehicleCorner(leftTrajectoryMax.back(), vehicleState.objectState.dimension, VehicleCorner::frontRight));

  std::vector<ad::rss::unstructured::Point> intersections;
  boost::geometry::intersection(frontLeftLine, frontRightLine, intersections);
  ad::rss::unstructured::Line frontBorder;
  if (intersections.empty())
  {
    //(1) no intersection, use more distant line as frontBorder
    auto const frontLeftToCenterDistance = boost::geometry::comparable_distance(frontLeftLine, centerLine);
    auto const frontRightToCenterDistance = boost::geometry::comparable_distance(frontRightLine, centerLine);
    if (frontLeftToCenterDistance > frontRightToCenterDistance)
    {
      frontBorder = frontLeftLine;
    }
    else
    {
      frontBorder = frontRightLine;
    }
  }
  else
  {
    //(2) intersection found, calculate front
    auto const &intersectionPoint = intersections.back();

    // split lines into pieces before and after the intersection point
    ad::rss::unstructured::Line leftBeforeSection;
    ad::rss::unstructured::Line leftAfterSection;
    splitLineAtIntersectionPoint(intersectionPoint, frontLeftLine, leftBeforeSection, leftAfterSection);

    ad::rss::unstructured::Line rightBeforeSection;
    ad::rss::unstructured::Line rightAfterSection;
    splitLineAtIntersectionPoint(intersectionPoint, frontRightLine, rightBeforeSection, rightAfterSection);

    // calculate if before or after part is more distant, append them accordingly
    auto leftBeforeDistance = boost::geometry::comparable_distance(leftBeforeSection, centerLine);
    auto rightBeforeDistance = boost::geometry::comparable_distance(rightBeforeSection, centerLine);
    if (leftBeforeDistance > rightBeforeDistance)
    {
      frontBorder = leftBeforeSection;
      boost::geometry::append(frontBorder, intersectionPoint);
      boost::geometry::append(frontBorder, rightAfterSection);
    }
    else
    {
      frontBorder = rightBeforeSection;
      boost::geometry::append(frontBorder, intersectionPoint);
      boost::geometry::append(frontBorder, leftAfterSection);
    }
  }

  // construct the resulting polygon
  ad::rss::unstructured::Polygon output;
  boost::geometry::append(output, rightBorder);
  boost::geometry::append(output, frontBorder);
  std::reverse(leftBorder.begin(), leftBorder.end());
  boost::geometry::append(output, leftBorder);
  boost::geometry::append(output, rightBorder.front());
  return output;
}

ad::rss::unstructured::Line
TrajectoryVehicle::calculateSide(std::vector<TrajectoryVehicle::TrajectoryPoint> const &sidePts,
                                 TrajectoryHeading const side,
                                 ad::physics::Dimension2D const &dimension,
                                 std::string const &ns) const
{
  TrajectoryHeading headingToTest;
  VehicleCorner cornerBack;
  VehicleCorner cornerFront;
  if (side == TrajectoryHeading::left)
  {
    headingToTest = TrajectoryHeading::right;
    cornerBack = VehicleCorner::backLeft;
    cornerFront = VehicleCorner::frontLeft;
  }
  else
  {
    headingToTest = TrajectoryHeading::left;
    cornerBack = VehicleCorner::backRight;
    cornerFront = VehicleCorner::frontRight;
  }
  TrajectoryHeading heading = getTrajectoryHeading(sidePts);

  ad::rss::unstructured::Line lastVehicleSideLine;

  ad::rss::unstructured::Line maxLine;
  if (heading != headingToTest)
  {
    auto vehiclePt = getVehicleCorner(sidePts.front(), dimension, cornerBack);
    boost::geometry::append(maxLine, vehiclePt);
    // DebugDrawer::getInstance()->drawPoint(vehiclePt.x(), vehiclePt.y(), "red", ns + "first");
  }
  int idx = 0;
  for (std::vector<TrajectoryVehicle::TrajectoryPoint>::const_iterator it = sidePts.begin(); it != sidePts.end(); ++it)
  {
    auto const &pt = *it;
    ad::rss::unstructured::Point vehiclePt;

    bool addPoint = true;
    if (heading == headingToTest)
    {
      vehiclePt = getVehicleCorner(pt, dimension, cornerBack);
    }
    else
    {
      ad::rss::unstructured::Line vehicleSideLine;
      boost::geometry::append(vehicleSideLine, getVehicleCorner(pt, dimension, cornerFront));
      boost::geometry::append(vehicleSideLine, getVehicleCorner(pt, dimension, cornerBack));

      std::vector<ad::rss::unstructured::Point> intersections;
      boost::geometry::intersection(lastVehicleSideLine, vehicleSideLine, intersections);
      if (!intersections.empty())
      {
        vehiclePt = intersections.front();
      }
      else
      {
        vehiclePt = getVehicleCorner(pt, dimension, cornerFront);
      }
      lastVehicleSideLine = vehicleSideLine;
    }
    if (addPoint)
    {
      boost::geometry::append(maxLine, vehiclePt);
      // DebugDrawer::getInstance()->drawPoint(vehiclePt.x(), vehiclePt.y(), "red", ns + "x" + std::to_string(idx));
    }
    idx++;
  }

  if (heading == headingToTest)
  {
    auto vehiclePt = getVehicleCorner(sidePts.back(), dimension, cornerFront);
    boost::geometry::append(maxLine, vehiclePt);
    // DebugDrawer::getInstance()->drawPoint(vehiclePt.x(), vehiclePt.y(), "red", ns + "last");
  }

  // remove similar points
  auto it = maxLine.begin();
  auto epsilon = ad::physics::Distance(0.01);
  while (it != maxLine.end())
  {
    // remove odd numbers
    if ((it != maxLine.begin()) && (fabs((it - 1)->x() - it->x()) < epsilon)
        && (fabs((it - 1)->y() - it->y()) < epsilon))
    {
      it = maxLine.erase(it);
    }
    else
    {
      ++it;
    }
  }

  removeSpikes(0.7, maxLine);
  return maxLine;
}

TrajectoryVehicle::TrajectoryHeading
TrajectoryVehicle::getTrajectoryHeading(std::vector<TrajectoryVehicle::TrajectoryPoint> const &trajectoryPoints) const
{
  // majority of headings decide (imprecise if heading changes)
  auto headingVote = 0; // negative means right
  for (auto const &pt : trajectoryPoints)
  {
    switch (pt.heading)
    {
      case TrajectoryHeading::right:
        headingVote -= 1;
        break;
      case TrajectoryHeading::left:
        headingVote += 1;
        break;
      case TrajectoryHeading::straight:
        break;
    }
  }

  TrajectoryVehicle::TrajectoryHeading heading;
  if (headingVote < 0)
  {
    heading = TrajectoryHeading::right;
  }
  else
  {
    heading = TrajectoryHeading::left;
  }
  return heading;
}

TrajectoryVehicle::Trajectory TrajectoryVehicle::createTrajectory(ad::rss::situation::VehicleState const &vehicleState,
                                                                  ad::physics::Duration const &inputTime,
                                                                  ad::physics::Acceleration const &aUntilResponseTime,
                                                                  ad::physics::Acceleration const &aAfterResponseTime,
                                                                  ad::physics::RatioValue const &yawRateRatio,
                                                                  std::string const &ns) const
{
  Trajectory trajectory;
  std::vector<ad::rss::unstructured::Point> points;

  auto currentPoint
    = ad::rss::unstructured::Point(vehicleState.objectState.centerPoint.x, vehicleState.objectState.centerPoint.y);
  auto currentAngle = vehicleState.objectState.yaw - ad::physics::Angle(M_PI / 2.0);
  ad::physics::Speed currentSpeed;
  ad::physics::Distance distanceSoFar = ad::physics::Distance(0.0);

  // during trajectory calculation, the heading might change once from:
  // left -> straight -> right
  // right -> straight -> left
  auto headingChangedLeftToStraight = false;
  auto headingChangedStraightToRight = false;
  for (auto currentTime = ad::physics::Duration(0.0); currentTime <= inputTime;
       currentTime += vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)
  {
    ad::rss::situation::calculateSpeed(currentTime,
                                       vehicleState.objectState.speed,
                                       vehicleState.dynamics.responseTime,
                                       vehicleState.dynamics.maxSpeed,
                                       aUntilResponseTime,
                                       aAfterResponseTime,
                                       currentSpeed);

    if ((currentTime == ad::physics::Duration(0.0)) || (currentSpeed > ad::physics::Speed::getPrecision()))
    {
      //-- calculate radius --
      // until response time, it changes depending on the yawRate
      // after response time, it's fixed
      ad::physics::Distance currentRadius;
      if (currentTime < vehicleState.dynamics.responseTime)
      {
        auto currentYawRate = calculateYawRate(currentTime,
                                               vehicleState,
                                               vehicleState.dynamics.unstructuredSettings.vehicleYawRateChangePerSecond,
                                               yawRateRatio);
        if (currentYawRate == ad::physics::AngularVelocity(0.))
        {
          currentRadius = ad::physics::Distance(TrajectoryVehicle::maxRadius);
        }
        else
        {
          currentRadius = std::min(static_cast<double>(currentSpeed) / currentYawRate, TrajectoryVehicle::maxRadius);
        }
      }
      else
      {
        auto yawRateResponseTime
          = calculateYawRate(vehicleState.dynamics.responseTime,
                             vehicleState,
                             vehicleState.dynamics.unstructuredSettings.vehicleYawRateChangePerSecond,
                             yawRateRatio);
        ad::physics::Speed speedAtResponseTime;
        ad::rss::situation::calculateSpeed(vehicleState.dynamics.responseTime,
                                           vehicleState.objectState.speed,
                                           vehicleState.dynamics.responseTime,
                                           vehicleState.dynamics.maxSpeed,
                                           aUntilResponseTime,
                                           aAfterResponseTime,
                                           speedAtResponseTime);
        currentRadius = static_cast<double>(speedAtResponseTime) / yawRateResponseTime; // TODO limit
        if (std::abs(currentRadius) < vehicleState.dynamics.unstructuredSettings.vehicleMinRadius)
        {
          if (yawRateResponseTime > ad::physics::AngularVelocity(0.0))
          {
            currentRadius = vehicleState.dynamics.unstructuredSettings.vehicleMinRadius;
          }
          else
          {
            currentRadius = -vehicleState.dynamics.unstructuredSettings.vehicleMinRadius;
          }
        }
      }

      ad::physics::Distance currentDistance;
      ad::rss::situation::calculateDistanceOffset(currentTime,
                                                  vehicleState.objectState.speed,
                                                  vehicleState.dynamics.responseTime,
                                                  vehicleState.dynamics.maxSpeed,
                                                  aUntilResponseTime,
                                                  aAfterResponseTime,
                                                  currentDistance);
      auto distanceToNextPoint = currentDistance - distanceSoFar;
      distanceSoFar = currentDistance;

      auto heading = TrajectoryHeading::straight;
      if (std::abs(currentRadius) <= 200)
      {
        if (std::abs(currentRadius) < vehicleState.dynamics.unstructuredSettings.vehicleMinRadius)
        {
          if (currentRadius > ad::physics::Distance(0.0))
          {
            currentRadius = vehicleState.dynamics.unstructuredSettings.vehicleMinRadius;
          }
          else if (currentRadius == ad::physics::Distance(0.0))
          {
            std::cout << "Invalid radius " << std::endl;
          }
          else
          {
            currentRadius = -vehicleState.dynamics.unstructuredSettings.vehicleMinRadius;
          }
        }
        if (currentRadius > ad::physics::Distance(0.0))
        {
          heading = TrajectoryHeading::left;
        }
        else
        {
          heading = TrajectoryHeading::right;
        }
        ad::rss::unstructured::Point circleOrigin = ad::rss::unstructured::Point(
          currentPoint.x() - currentRadius * cos(currentAngle), currentPoint.y() - currentRadius * sin(currentAngle));

        currentAngle += static_cast<double>(distanceToNextPoint) / currentRadius;

        currentPoint = getPointOnCircle(circleOrigin, currentRadius, currentAngle);
      }
      else
      {
        // go straight
        currentAngle += static_cast<double>(distanceToNextPoint) / currentRadius;
        currentPoint = ad::rss::unstructured::Point(
          currentPoint.x() + distanceToNextPoint * cos(static_cast<double>(currentAngle) + M_PI / 2.0),
          currentPoint.y() + distanceToNextPoint * sin(static_cast<double>(currentAngle) + M_PI / 2.0));
      }
      if (!trajectory.empty())
      {
        if (heading == TrajectoryHeading::left)
        {
          if (trajectory.back().heading == TrajectoryHeading::straight)
          {
            headingChangedLeftToStraight = true;
          }
          else if (trajectory.back().heading == TrajectoryHeading::right)
          {
            headingChangedLeftToStraight = true;
            headingChangedStraightToRight = true;
          }
        }
        else if (heading == TrajectoryHeading::right)
        {
          if (trajectory.back().heading == TrajectoryHeading::straight)
          {
            headingChangedStraightToRight = true;
          }
          else if (trajectory.back().heading == TrajectoryHeading::left)
          {
            headingChangedLeftToStraight = true;
            headingChangedStraightToRight = true;
          }
        }
      }
      points.push_back(currentPoint);

      trajectory.push_back(
        TrajectoryVehicle::TrajectoryPoint(currentPoint, static_cast<double>(currentAngle) + M_PI / 2.0, heading));
    }
    else
    {
      if ((aUntilResponseTime < ad::physics::Acceleration(0.0)) && (currentTime < vehicleState.dynamics.responseTime))
      {
        currentTime = vehicleState.dynamics.responseTime;
      }
    }
  }
  return trajectory;
}

ad::physics::AngularVelocity
TrajectoryVehicle::calculateYawRate(ad::physics::Duration const &currentTime,
                                    ad::rss::situation::VehicleState const &vehicleState,
                                    ad::physics::ParametricValue const &yawRateDiffPerSecond,
                                    ad::physics::RatioValue const &yawRateRatio) const
{
  auto calcTime = currentTime;
  if (calcTime > vehicleState.dynamics.responseTime)
  {
    calcTime = vehicleState.dynamics.responseTime;
  }

  return vehicleState.objectState.yawRate
    + yawRateDiffPerSecond * static_cast<double>(calcTime) * static_cast<double>(yawRateRatio);
}

} // namespace unstructured
} // namespace rss
} // namespace ad
