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

#include "ad/rss/unstructured/Geometry.hpp"
#include <algorithm>
#include <cmath>
#include <limits>

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

ad::rss::unstructured::Point rotateAroundPoint(ad::rss::unstructured::Point const &absoluteOrigin,
                                               ad::rss::unstructured::Point const &relativePoint,
                                               ad::physics::Angle const &angle)
{
  ad::rss::unstructured::Point resultPoint = relativePoint;

  boost::geometry::strategy::transform::rotate_transformer<boost::geometry::radian, double, 2, 2> rotate(
    static_cast<double>(-angle));
  boost::geometry::strategy::transform::translate_transformer<double, 2, 2> translate(absoluteOrigin.x(),
                                                                                      absoluteOrigin.y());
  boost::geometry::transform(resultPoint, resultPoint, rotate);
  boost::geometry::transform(resultPoint, resultPoint, translate);
  return resultPoint;
}

ad::rss::unstructured::Point getPointOnCircle(ad::rss::unstructured::Point const &origin,
                                              ad::physics::Distance const &radius,
                                              ad::physics::Angle const &angle)
{
  return ad::rss::unstructured::Point(origin.x() + static_cast<double>(radius) * cos(angle),
                                      origin.y() + static_cast<double>(radius) * sin(angle));
}
ad::rss::unstructured::Point getCircleOrigin(ad::rss::unstructured::Point const &point,
                                             ad::physics::Distance const &radius,
                                             ad::physics::Angle const &angle)
{
  return ad::rss::unstructured::Point(point.x() - static_cast<double>(radius) * cos(angle),
                                      point.y() - static_cast<double>(radius) * sin(angle));
}

ad::physics::Distance getDistance(ad::rss::unstructured::Point const &point1,
                                  ad::rss::unstructured::Point const &point2)
{
  return ad::physics::Distance(sqrt((point1.x() - point2.x()) * (point1.x() - point2.x())
                                    + (point1.y() - point2.y()) * (point1.y() - point2.y())));
}

bool getAllowedDrivingCorridorWhenBothStopped(ad::rss::unstructured::Point const &otherVehicleLocation,
                                              ad::rss::unstructured::Point const &startingPoint,
                                              ::ad::physics::Angle const &maxAllowedAngleWhenBothStopped,
                                              ::ad::physics::AngleRange &range)
{
  auto substractedLocationVector = ad::rss::unstructured::Point((startingPoint.x() - otherVehicleLocation.x()),
                                                                (startingPoint.y() - otherVehicleLocation.y()));

  // get vector angle
  double substractedLocationVectorAngle = std::atan2(static_cast<double>(substractedLocationVector.y()),
                                                     static_cast<double>(substractedLocationVector.x()));

  range.minimum
    = ad::rss::unstructured::normalizeAngle(substractedLocationVectorAngle - maxAllowedAngleWhenBothStopped);
  range.maximum
    = ad::rss::unstructured::normalizeAngle(substractedLocationVectorAngle + maxAllowedAngleWhenBothStopped);
  return true;
}

void convertTrajectorySet(ad::rss::world::UnstructuredTrajectorySet const &trajectorySet,
                          ad::rss::unstructured::Polygon &polygon)
{
  for (auto const &distance : trajectorySet)
  {
    ::boost::geometry::append(polygon, ad::rss::unstructured::toPoint(distance));
  }
}

bool collides(ad::rss::world::UnstructuredTrajectorySet area1, ad::rss::world::UnstructuredTrajectorySet area2)
{
  ad::rss::unstructured::Polygon polygon1, polygon2;
  convertTrajectorySet(area1, polygon1);
  convertTrajectorySet(area2, polygon2);
  auto result = !boost::geometry::disjoint(polygon1, polygon2);
  return result;
}

bool collides(ad::rss::unstructured::Polygon polygon1, ad::rss::unstructured::Point point)
{
  return boost::geometry::within(point, polygon1);
}

void splitLineAtIntersectionPoint(ad::rss::unstructured::Point intersectionPoint,
                                  ad::rss::unstructured::Line const &line,
                                  ad::rss::unstructured::Line &before,
                                  ad::rss::unstructured::Line &after)
{
  auto *currentSection = &before;
  for (auto it = line.begin(); it != line.end(); ++it)
  {
    auto const pt = *it;
    boost::geometry::append(*currentSection, *it);
    if (((it + 1) != line.end()) && (currentSection != &after))
    {
      auto const nextPt = *(it + 1);
      auto pt2intersection
        = ad::rss::unstructured::Point(intersectionPoint.x() - pt.x(), intersectionPoint.y() - pt.y());
      auto nextPt2intersection
        = ad::rss::unstructured::Point(intersectionPoint.x() - nextPt.x(), intersectionPoint.y() - nextPt.y());
      if (boost::geometry::dot_product(pt2intersection, nextPt2intersection) < 0)
      {
        currentSection = &after;
      }
    }
  }
}

void removeSpikes(double const limitAngle, ad::rss::unstructured::Line &line)
{
  // remove spikes
  double lastAngle;
  auto it = line.begin();
  while (it != line.end())
  {
    auto pointRemoved = true;
    while ((it != line.begin()) && pointRemoved && ((it + 1) != line.end()))
    {
      auto const predecessor = it - 1;
      auto const current = it;
      auto const successor = it + 1;

      // calculate angle between predecessor, current and successor. If it's smaller than a threshold, the point is
      // removed
      // using Law of cosines
      auto a = sqrt((predecessor->x() - current->x()) * (predecessor->x() - current->x())
                    + (predecessor->y() - current->y())
                      * (predecessor->y() - current->y())); // distance between predecessor and current
      auto b = sqrt((current->x() - successor->x()) * (current->x() - successor->x())
                    + (current->y() - successor->y())
                      * (current->y() - successor->y())); // distance between current and successor
      auto c = sqrt((successor->x() - predecessor->x()) * (successor->x() - predecessor->x())
                    + (successor->y() - predecessor->y())
                      * (successor->y() - predecessor->y())); // distance between successor and predecessor

      auto angle = std::acos((a * a + b * b - c * c) / (2 * a * b));
      if (angle < limitAngle)
      {
        it = line.erase(it);
      }
      else
      {
        pointRemoved = false;
      }
    }
    it++;
  }
}

ad::physics::Angle normalizeAngle(ad::physics::Angle const &yaw)
{
  return ad::physics::Angle(std::fmod(std::fmod(static_cast<double>(yaw), 2 * M_PI) + 2 * M_PI, 2 * M_PI));
}

bool isInsideAngleRange(ad::physics::Angle const &angle, ad::physics::AngleRange const &range)
{
  if (range.maximum >= range.minimum)
  {
    return (angle >= range.minimum) && (angle <= range.maximum);
  }
  else
  {
    return (angle >= range.minimum) || (angle <= range.maximum);
  }
}

bool getHeadingOverlap(ad::physics::AngleRange const &a,
                       ad::physics::AngleRange const &b,
                       ad::rss::state::HeadingRange &overlapRange)
{
  bool aStartsInB = isInsideAngleRange(a.minimum, b);
  bool aEndsInB = isInsideAngleRange(a.maximum, b);
  bool bStartsInA = isInsideAngleRange(b.minimum, a);
  bool bEndsInA = isInsideAngleRange(b.maximum, a);

  auto overlaps = aStartsInB || aEndsInB || bStartsInA || bEndsInA;

  overlapRange.innerRange.minimum = ad::physics::Angle(0.0);
  overlapRange.innerRange.maximum = ad::physics::Angle(0.0);
  if (overlaps)
  {
    if (aStartsInB && aEndsInB && bStartsInA && bEndsInA)
    {
      if (!((a.minimum == b.minimum) && (a.maximum == b.maximum)))
      {
        overlapRange.innerRange.minimum = b.minimum;
        overlapRange.innerRange.maximum = b.maximum;
      }
      overlapRange.outerRange.minimum = a.minimum;
      overlapRange.outerRange.maximum = a.maximum;
    }
    else if (aStartsInB && aEndsInB)
    {
      overlapRange.outerRange.minimum = a.minimum;
      overlapRange.outerRange.maximum = a.maximum;
    }
    else if (bStartsInA && bEndsInA)
    {
      overlapRange.outerRange.minimum = b.minimum;
      overlapRange.outerRange.maximum = b.maximum;
    }
    else if (aStartsInB && !aEndsInB) // at max, a overlaps b
    {
      overlapRange.outerRange.minimum = a.minimum;
      overlapRange.outerRange.maximum = b.maximum;
    }
    else if (bStartsInA && !bEndsInA) // at max, b overlaps a
    {
      overlapRange.outerRange.minimum = b.minimum;
      overlapRange.outerRange.maximum = a.maximum;
    }
    return true;
  }
  return false;
}

bool getHeadingOverlap(ad::physics::AngleRange const &angleRange, ad::rss::state::HeadingRange &overlapRange)
{
  bool result = false;
  if (overlapRange.innerRange.minimum == overlapRange.innerRange.maximum)
  {
    // no inner range
    result = getHeadingOverlap(angleRange, overlapRange.outerRange, overlapRange);
  }
  else
  {
    // inner range exists
    ad::physics::AngleRange maxRange;
    maxRange.minimum = overlapRange.innerRange.maximum;
    maxRange.maximum = overlapRange.outerRange.maximum;
    ad::physics::AngleRange minRange;
    minRange.minimum = overlapRange.outerRange.minimum;
    minRange.maximum = overlapRange.innerRange.minimum;

    ad::rss::state::HeadingRange minOverlapRange;
    ad::rss::state::HeadingRange maxOverlapRange;

    auto maxResult = getHeadingOverlap(angleRange, maxRange, maxOverlapRange);
    auto minResult = getHeadingOverlap(angleRange, minRange, minOverlapRange);

    if (minResult && maxResult)
    {
      overlapRange.innerRange.maximum = maxOverlapRange.outerRange.minimum;
      overlapRange.outerRange.maximum = maxOverlapRange.outerRange.maximum;
      overlapRange.innerRange.minimum = minOverlapRange.innerRange.minimum;
      overlapRange.outerRange.minimum = minOverlapRange.innerRange.maximum;
      result = true;
    }
    else if (minResult)
    {
      overlapRange = minOverlapRange;
      result = true;
    }
    else if (maxResult)
    {
      overlapRange = maxOverlapRange;
      result = true;
    }
    else
    {
      result = false;
    }
  }
  return result;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
