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
#include <ad/physics/Operation.hpp>
#include <algorithm>
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

const ad::physics::Distance TrajectoryVehicle::maxRadius(1000.0);

bool TrajectoryVehicle::calculateTrajectorySets(situation::VehicleState const &vehicleState,
                                                Polygon &brakePolygon,
                                                Polygon &continueForwardPolygon)
{
  ad::physics::Duration timeToStop;
  auto result = situation::calculateTimeToStop(vehicleState.objectState.speed,
                                               vehicleState.dynamics.responseTime,
                                               vehicleState.dynamics.maxSpeed,
                                               vehicleState.dynamics.alphaLon.accelMax,
                                               vehicleState.dynamics.alphaLon.brakeMin,
                                               timeToStop);
  Polygon continueForwardPolygonPart;
  if (result)
  {
    // continue forward with vehicleState.dynamics.alphaLon.accelMax
    continueForwardPolygonPart
      = createTrajectorySet(vehicleState, timeToStop, vehicleState.dynamics.alphaLon.accelMax, "green");
    // brake with vehicleState.dynamics.alphaLon.brakeMin
    brakePolygon = createTrajectorySet(vehicleState, timeToStop, vehicleState.dynamics.alphaLon.brakeMin, "red");

    if (!checkAndFixPolygon(brakePolygon, "brake"))
    {
      result = false;
    }
  }

  // the continue forward polygon also contains the brakePolygon, therefore join them (if possible)
  if (result)
  {
    result = checkAndFixPolygon(continueForwardPolygonPart, "continueForward");
    if (result)
    {
      std::vector<Polygon> unionPolygons;
      boost::geometry::union_(brakePolygon.outer(), continueForwardPolygonPart.outer(), unionPolygons);
      if (unionPolygons.size() != 1)
      {
        spdlog::debug("Could not calculate final continue forward polygon. Expected 1 polygon after union, found {}",
                      unionPolygons.size());
        result = false;
      }
      else
      {
        continueForwardPolygon = unionPolygons[0];
      }
    }

    if (!result)
    {
      continueForwardPolygon = continueForwardPolygonPart;
      result = true;
    }
  }
  return result;
}

TrajectoryPoint TrajectoryVehicle::getFinalTrajectoryPoint(situation::VehicleState const &vehicleState,
                                                           ad::physics::Duration const &duration,
                                                           ad::physics::Acceleration const &aUntilResponseTime,
                                                           ad::physics::Acceleration const &aAfterResponseTime,
                                                           ad::physics::RatioValue const &yawRateChangeRatio,
                                                           std::string const &debugNamespace) const
{
  auto trajectory
    = createTrajectory(vehicleState, duration, aUntilResponseTime, aAfterResponseTime, yawRateChangeRatio);
#if DRAW_TRAJECTORIES
  Line linePts;
  for (auto const &pt : trajectory)
  {
    linePts.push_back(pt.position);
  }
  DEBUG_DRAWING_LINE(linePts, "orange", debugNamespace + "_trajectory");
#endif
#if DRAW_FINAL_POSITION
  drawFinalPosition(trajectory.back(), vehicleState.objectState.dimension, debugNamespace + "_vehicle_final_position");
#else
  (void)debugNamespace;
#endif
  return trajectory.back();
}

Polygon TrajectoryVehicle::createTrajectorySet(situation::VehicleState const &vehicleState,
                                               ad::physics::Duration duration,
                                               ad::physics::Acceleration aAfterResponseTime,
                                               std::string const &debugNamespace)
{
  // calculate left/right end points
  auto accelStepSize = (vehicleState.dynamics.alphaLon.accelMax - vehicleState.dynamics.alphaLon.brakeMax) / 20.0;
  Trajectory rightTrajectoryMax;
  Trajectory leftTrajectoryMax;
  // max yaw-change-rate, brakeMax to accelMax in x steps
  for (ad::physics::Acceleration accel = vehicleState.dynamics.alphaLon.brakeMax;
       accel <= vehicleState.dynamics.alphaLon.accelMax;
       accel += accelStepSize)
  {
    auto right = getFinalTrajectoryPoint(vehicleState,
                                         duration,
                                         accel,
                                         aAfterResponseTime,
                                         ad::physics::RatioValue(-1.0),
                                         debugNamespace + "_right_" + std::to_string(accel));
    rightTrajectoryMax.push_back(right);

    auto left = getFinalTrajectoryPoint(vehicleState,
                                        duration,
                                        accel,
                                        aAfterResponseTime,
                                        ad::physics::RatioValue(1.0),
                                        debugNamespace + "_left_" + std::to_string(accel));
    leftTrajectoryMax.push_back(left);
  }

  // calculate front end points
  Trajectory frontTrajectoryMax;
  for (auto yawRateChangeRatio = ad::physics::RatioValue(-1.0); yawRateChangeRatio <= ad::physics::RatioValue(1.0);
       yawRateChangeRatio += ad::physics::RatioValue(0.1))
  {
    auto pt = getFinalTrajectoryPoint(vehicleState,
                                      duration,
                                      vehicleState.dynamics.alphaLon.accelMax,
                                      aAfterResponseTime,
                                      yawRateChangeRatio,
                                      debugNamespace + "_front_" + std::to_string(yawRateChangeRatio));
    frontTrajectoryMax.push_back(pt);
  }
  // at this point all relevant end points are calculated

  // Calculate sides with respect to vehicle dimensions
  auto leftBorder
    = calculateTrajectorySetSide(leftTrajectoryMax, TrajectoryHeading::left, vehicleState.objectState.dimension);
  auto rightBorder
    = calculateTrajectorySetSide(rightTrajectoryMax, TrajectoryHeading::right, vehicleState.objectState.dimension);

  // Calculate front side
  // Two modes can be active:
  //(1) the line through all frontLeft or the frontRight corners of a vehicle define the front
  //(2) the front is defined partially by the frontLeft corner line and the frontRight corner line.
  auto frontBorder = calculateFrontWithDimension(frontTrajectoryMax, vehicleState.objectState.dimension);

  // construct the resulting polygon
  Polygon output;
  boost::geometry::append(output, rightBorder);
  boost::geometry::append(output, frontBorder);
  std::reverse(leftBorder.begin(), leftBorder.end());
  boost::geometry::append(output, leftBorder);
  boost::geometry::append(output, rightBorder.front());
  return output;
}

Trajectory TrajectoryVehicle::createTrajectory(situation::VehicleState const &vehicleState,
                                               ad::physics::Duration const &duration,
                                               ad::physics::Acceleration const &aUntilResponseTime,
                                               ad::physics::Acceleration const &aAfterResponseTime,
                                               ad::physics::RatioValue const &yawRateChangeRatio) const
{
  Trajectory trajectory;
  std::vector<Point> points;

  auto currentPoint = toPoint(vehicleState.objectState.centerPoint);
  auto currentAngle = vehicleState.objectState.yaw - ad::physics::cPI_2;
  ad::physics::Speed currentSpeed;
  ad::physics::Distance distanceSoFar = ad::physics::Distance(0.0);

  // during trajectory calculation, the heading might change once from:
  // left -> straight -> right
  // right -> straight -> left
  for (auto currentTime = ad::physics::Duration(0.0); currentTime <= duration;
       currentTime += vehicleState.dynamics.unstructuredSettings.vehicleTrajectoryCalculationStep)
  {
    situation::calculateSpeed(currentTime,
                              vehicleState.objectState.speed,
                              vehicleState.dynamics.responseTime,
                              vehicleState.dynamics.maxSpeed,
                              aUntilResponseTime,
                              aAfterResponseTime,
                              currentSpeed);

    if ((currentTime == ad::physics::Duration(0.0)) || (currentSpeed > ad::physics::Speed::getPrecision()))
    {
      //-- calculate radius --
      // until response time, it changes depending on the yawRate and speed
      // after response time, it's fixed
      ad::physics::Distance currentRadius;
      if (currentTime < vehicleState.dynamics.responseTime)
      {
        auto currentYawRate = calculateYawRate(vehicleState,
                                               currentTime,
                                               vehicleState.dynamics.unstructuredSettings.vehicleYawRateChange,
                                               yawRateChangeRatio);
        if (currentYawRate == ad::physics::AngularVelocity(0.))
        {
          currentRadius = ad::physics::Distance(TrajectoryVehicle::maxRadius);
        }
        else
        {
          currentRadius
            = std::min(ad::physics::Distance(static_cast<double>(currentSpeed) / static_cast<double>(currentYawRate)),
                       TrajectoryVehicle::maxRadius);
        }
      }
      else
      {
        auto yawRateResponseTime = calculateYawRate(vehicleState,
                                                    vehicleState.dynamics.responseTime,
                                                    vehicleState.dynamics.unstructuredSettings.vehicleYawRateChange,
                                                    yawRateChangeRatio);
        ad::physics::Speed speedAtResponseTime;
        situation::calculateSpeed(vehicleState.dynamics.responseTime,
                                  vehicleState.objectState.speed,
                                  vehicleState.dynamics.responseTime,
                                  vehicleState.dynamics.maxSpeed,
                                  aUntilResponseTime,
                                  aAfterResponseTime,
                                  speedAtResponseTime);
        currentRadius = ad::physics::Distance(static_cast<double>(speedAtResponseTime)
                                              / static_cast<double>(yawRateResponseTime)); // TODO limit
        if (std::fabs(currentRadius) < vehicleState.dynamics.unstructuredSettings.vehicleMinRadius)
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
      situation::calculateDistanceOffset(currentTime,
                                         vehicleState.objectState.speed,
                                         vehicleState.dynamics.responseTime,
                                         vehicleState.dynamics.maxSpeed,
                                         aUntilResponseTime,
                                         aAfterResponseTime,
                                         currentDistance);
      auto distanceToNextPoint = currentDistance - distanceSoFar;
      distanceSoFar = currentDistance;

      auto heading = TrajectoryHeading::straight;
      if (std::fabs(currentRadius) <= maxRadius)
      {
        if (std::fabs(currentRadius) < vehicleState.dynamics.unstructuredSettings.vehicleMinRadius)
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
        Point const circleOrigin = getCircleOrigin(currentPoint, currentRadius, currentAngle);

        currentAngle += ad::physics::Angle(distanceToNextPoint / currentRadius);

        currentPoint = getPointOnCircle(circleOrigin, currentRadius, currentAngle);
      }
      else
      {
        // go straight
        currentAngle += ad::physics::Angle(distanceToNextPoint / currentRadius);
        currentPoint = getPointOnCircle(currentPoint, distanceToNextPoint, currentAngle + ad::physics::cPI_2);
      }
      points.push_back(currentPoint);

      trajectory.push_back(TrajectoryPoint(currentPoint, currentAngle + ad::physics::cPI_2, heading));
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
TrajectoryVehicle::calculateYawRate(situation::VehicleState const &vehicleState,
                                    ad::physics::Duration const &duration,
                                    ad::physics::AngularAcceleration const &maxYawRateChange,
                                    ad::physics::RatioValue const &ratio) const
{
  auto calcTime = duration;
  if (calcTime > vehicleState.dynamics.responseTime)
  {
    calcTime = vehicleState.dynamics.responseTime;
  }

  return vehicleState.objectState.yawRate + maxYawRateChange * calcTime * ratio;
}

Line TrajectoryVehicle::calculateTrajectorySetSide(std::vector<TrajectoryPoint> const &finalTrajectoryPoints,
                                                   TrajectoryHeading const side,
                                                   ad::physics::Dimension2D const &vehicleDimension) const
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
  TrajectoryHeading heading = getTrajectoryHeading(finalTrajectoryPoints);

  Line lastVehicleSideLine;

  Line maxLine;
  if (heading != headingToTest)
  {
    auto vehiclePt = getVehicleCorner(finalTrajectoryPoints.front(), vehicleDimension, cornerBack);
    boost::geometry::append(maxLine, vehiclePt);
  }

  for (Trajectory::const_iterator it = finalTrajectoryPoints.begin(); it != finalTrajectoryPoints.end(); ++it)
  {
    auto const &pt = *it;
    Point vehiclePt;

    bool addPoint = true;
    if (heading == headingToTest)
    {
      vehiclePt = getVehicleCorner(pt, vehicleDimension, cornerBack);
    }
    else
    {
      Line vehicleSideLine;
      boost::geometry::append(vehicleSideLine, getVehicleCorner(pt, vehicleDimension, cornerFront));
      boost::geometry::append(vehicleSideLine, getVehicleCorner(pt, vehicleDimension, cornerBack));
      vehiclePt = getVehicleCorner(pt, vehicleDimension, cornerFront);
      lastVehicleSideLine = vehicleSideLine;
    }
    if (addPoint)
    {
      boost::geometry::append(maxLine, vehiclePt);
    }
  }

  if (heading == headingToTest)
  {
    auto vehiclePt = getVehicleCorner(finalTrajectoryPoints.back(), vehicleDimension, cornerFront);
    boost::geometry::append(maxLine, vehiclePt);
  }

  // remove similar points
  auto it = maxLine.begin();
  auto const epsilon(0.01);
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
  return maxLine;
}

TrajectoryHeading
TrajectoryVehicle::getTrajectoryHeading(std::vector<TrajectoryPoint> const &finalTrajectoryPoints) const
{
  // majority of headings decide (imprecise if heading changes)
  auto headingVote = 0; // negative means right
  for (auto const &pt : finalTrajectoryPoints)
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
      default:
        throw std::runtime_error("TrajectoryVehicle::getTrajectoryHeading>> invalid trajectory heading");
        break;
    }
  }

  TrajectoryHeading heading;
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

Line TrajectoryVehicle::calculateFrontWithDimension(std::vector<TrajectoryPoint> const &finalTrajectoryPoints,
                                                    ad::physics::Dimension2D const &vehicleDimension)
{
  // create lines through lefts, rights, centers
  Line leftLine, rightLine, centerLine;
  for (auto const &pt : finalTrajectoryPoints)
  {
    boost::geometry::append(centerLine, pt.position);
    boost::geometry::append(leftLine, getVehicleCorner(pt, vehicleDimension, VehicleCorner::frontLeft));
    boost::geometry::append(rightLine, getVehicleCorner(pt, vehicleDimension, VehicleCorner::frontRight));
  }

  std::vector<Point> intersections;
  boost::geometry::intersection(leftLine, rightLine, intersections);
  Line resultBorder;
  if (intersections.empty())
  {
    //(1) no intersection, use more distant line as resultBorder
    auto const frontLeftToCenterDistance = boost::geometry::comparable_distance(leftLine, centerLine);
    auto const frontRightToCenterDistance = boost::geometry::comparable_distance(rightLine, centerLine);
    if (frontLeftToCenterDistance > frontRightToCenterDistance)
    {
      resultBorder = leftLine;
    }
    else
    {
      resultBorder = rightLine;
    }
  }
  else
  {
    //(2) intersection found, calculate front
    auto const &intersectionPoint = intersections.back();

    // split lines into pieces before and after the intersection point
    Line leftBeforeSection;
    Line leftAfterSection;
    splitLineAtIntersectionPoint(intersectionPoint, leftLine, leftBeforeSection, leftAfterSection);

    Line rightBeforeSection;
    Line rightAfterSection;
    splitLineAtIntersectionPoint(intersectionPoint, rightLine, rightBeforeSection, rightAfterSection);

    // calculate if before or after part is more distant, append them accordingly
    auto leftBeforeDistance = boost::geometry::comparable_distance(leftBeforeSection, centerLine);
    auto rightBeforeDistance = boost::geometry::comparable_distance(rightBeforeSection, centerLine);
    if (leftBeforeDistance > rightBeforeDistance)
    {
      resultBorder = leftBeforeSection;
      boost::geometry::append(resultBorder, intersectionPoint);
      boost::geometry::append(resultBorder, rightAfterSection);
    }
    else
    {
      resultBorder = rightBeforeSection;
      boost::geometry::append(resultBorder, intersectionPoint);
      boost::geometry::append(resultBorder, leftAfterSection);
    }
  }
  return resultBorder;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
