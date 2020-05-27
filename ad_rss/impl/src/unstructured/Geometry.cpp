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
#include <ad/physics/Operation.hpp>
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

ad::rss::unstructured::Point rotateAroundPoint(ad::rss::unstructured::Point const &origin,
                                               ad::rss::unstructured::Point const &relativePoint,
                                               ad::physics::Angle const &angle)
{
  ad::rss::unstructured::Point resultPoint = relativePoint;

  boost::geometry::strategy::transform::rotate_transformer<boost::geometry::radian, double, 2, 2> rotate(
    static_cast<double>(-angle));
  boost::geometry::strategy::transform::translate_transformer<double, 2, 2> translate(origin.x(), origin.y());
  boost::geometry::transform(resultPoint, resultPoint, rotate);
  boost::geometry::transform(resultPoint, resultPoint, translate);
  return resultPoint;
}

ad::rss::unstructured::Point getPointOnCircle(ad::rss::unstructured::Point const &origin,
                                              ad::physics::Distance const &radius,
                                              ad::physics::Angle const &angle)
{
  return origin + toPoint(std::cos(angle) * radius, std::sin(angle) * radius);
}

ad::rss::unstructured::Point getCircleOrigin(ad::rss::unstructured::Point const &point,
                                             ad::physics::Distance const &radius,
                                             ad::physics::Angle const &angle)
{
  return point - toPoint(std::cos(angle) * radius, std::sin(angle) * radius);
}

ad::physics::Distance getDistance(ad::rss::unstructured::Point const &point1,
                                  ad::rss::unstructured::Point const &point2)
{
  auto const directionalVector = point1 - point2;
  return sqrt(boost::geometry::dot_product(directionalVector, directionalVector));
}

void toPolygon(ad::rss::world::UnstructuredTrajectorySet const &trajectorySet, ad::rss::unstructured::Polygon &polygon)
{
  for (auto const &distance : trajectorySet)
  {
    ::boost::geometry::append(polygon, toPoint(distance));
  }
}

void toTrajectorySet(unstructured::Polygon const &polygon, world::UnstructuredTrajectorySet &trajectorySet)
{
  for (auto const &point : polygon.outer())
  {
    trajectorySet.push_back(toDistance(point));
  }
}

bool collides(ad::rss::world::UnstructuredTrajectorySet const &trajectorySet1,
              ad::rss::world::UnstructuredTrajectorySet const &trajectorySet2)
{
  ad::rss::unstructured::Polygon polygon1;
  ad::rss::unstructured::Polygon polygon2;
  toPolygon(trajectorySet1, polygon1);
  toPolygon(trajectorySet2, polygon2);
  return !boost::geometry::disjoint(polygon1, polygon2);
}

void splitLineAtIntersectionPoint(ad::rss::unstructured::Point const &intersectionPoint,
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
      auto const pt2intersection = intersectionPoint - pt;
      auto const nextPt2intersection = intersectionPoint - nextPt;
      if (boost::geometry::dot_product(pt2intersection, nextPt2intersection) < 0.)
      {
        currentSection = &after;
      }
    }
  }
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
        if (b.maximum < b.minimum)
        {
          overlapRange.innerRange.minimum = b.maximum;
          overlapRange.innerRange.maximum = b.minimum;
        }
        else
        {
          overlapRange.innerRange.minimum = b.minimum;
          overlapRange.innerRange.maximum = b.maximum;
        }
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
