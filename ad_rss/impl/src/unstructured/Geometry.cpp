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
  return ad::physics::Distance(sqrt(boost::geometry::dot_product(directionalVector, directionalVector)));
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

bool isInsideHeadingRange(ad::physics::Angle const &angle, ad::rss::state::HeadingRange const &range)
{
  if (range.end >= range.begin)
  {
    return (angle >= range.begin) && (angle <= range.end);
  }
  else
  {
    return (angle >= range.begin) || (angle <= range.end);
  }
}

bool getHeadingOverlap(ad::rss::state::HeadingRange const &a,
                       ad::rss::state::HeadingRange const &b,
                       std::vector<ad::rss::state::HeadingRange> &overlapRanges)
{
  bool aStartsInB = isInsideHeadingRange(a.begin, b);
  bool aEndsInB = isInsideHeadingRange(a.end, b);
  bool bStartsInA = isInsideHeadingRange(b.begin, a);
  bool bEndsInA = isInsideHeadingRange(b.end, a);

  auto overlaps = aStartsInB || aEndsInB || bStartsInA || bEndsInA;

  if (overlaps)
  {
    ad::rss::state::HeadingRange range;
    if (aStartsInB && aEndsInB && bStartsInA && bEndsInA)
    {
      if (!((a.begin == b.begin) && (a.end == b.end)))
      {
        ad::rss::state::HeadingRange secondRange;
        secondRange.begin = a.begin;
        secondRange.end = b.end;
        overlapRanges.push_back(secondRange);
      }
      range.begin = b.begin;
      range.end = a.end;
    }
    else if (aStartsInB && aEndsInB)
    {
      range.begin = a.begin;
      range.end = a.end;
    }
    else if (bStartsInA && bEndsInA)
    {
      range.begin = b.begin;
      range.end = b.end;
    }
    else if (aStartsInB && !aEndsInB)
    {
      range.begin = a.begin;
      range.end = b.end;
    }
    else if (bStartsInA && !bEndsInA)
    {
      range.begin = b.begin;
      range.end = a.end;
    }
    overlapRanges.push_back(range);
    return true;
  }
  return false;
}

bool getHeadingOverlap(ad::rss::state::HeadingRange const &headingRange,
                       std::vector<ad::rss::state::HeadingRange> &overlapRanges)
{
  std::vector<ad::rss::state::HeadingRange> newOverlapRanges;
  if (overlapRanges.empty())
  {
    newOverlapRanges.push_back(headingRange);
  }
  else
  {
    for (auto const &range : overlapRanges)
    {
      getHeadingOverlap(headingRange, range, newOverlapRanges);
    }
  }
  overlapRanges = newOverlapRanges;
  return !overlapRanges.empty();
}

bool combinePolygon(Polygon const &a, Polygon const &b, Polygon &result)
{
  if (a.outer().empty() && !b.outer().empty())
  {
    result = b;
  }
  else if (!a.outer().empty() && b.outer().empty())
  {
    result = a;
  }
  else
  {
    std::vector<Polygon> unionPolygons;
    boost::geometry::union_(a.outer(), b.outer(), unionPolygons);
    if (unionPolygons.size() != 1)
    {
      spdlog::debug("Could not calculate combined polygon. Expected 1 polygon after union, found {}",
                    unionPolygons.size());
      return false;
    }
    else
    {
      result = std::move(unionPolygons[0]);
    }
  }
  return true;
}

} // namespace unstructured
} // namespace rss
} // namespace ad
