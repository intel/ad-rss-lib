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

#pragma once

#include <boost/geometry.hpp>
#include <boost/geometry/geometries/geometries.hpp>
#include <boost/geometry/geometries/point_xy.hpp>
#include <boost/geometry/geometries/polygon.hpp>
#include "ad/physics/AngleOperation.hpp"
#include "ad/physics/Distance.hpp"
#include "ad/rss/state/HeadingRange.hpp"
#include "ad/rss/world/UnstructuredTrajectorySet.hpp"

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

// Specify the basic type
typedef boost::geometry::model::d2::point_xy<double> Point;
typedef boost::geometry::model::linestring<Point> Line;
typedef boost::geometry::model::multi_linestring<Line> MultiLine;
typedef boost::geometry::model::polygon<Point, false> Polygon; // counterclockwise
typedef boost::geometry::model::multi_point<Point> MultiPoint;
typedef boost::geometry::model::box<Point> Box;

/**
 * @brief create a Point from a Distance2D
 *
 * @param[in] distance distance to convert
 *
 * @returns point
 */
inline Point toPoint(ad::physics::Distance2D const &distance)
{
  return Point(static_cast<double>(distance.x), static_cast<double>(distance.y));
}

/**
 * @brief create a Point from two Distance components
 *
 * @param[in] distanceX x component of distance
 * @param[in] distanceY y component of distance
 *
 * @returns point
 */
inline Point toPoint(ad::physics::Distance const &distanceX, ad::physics::Distance const &distanceY)
{
  return Point(static_cast<double>(distanceX), static_cast<double>(distanceY));
}

/**
 * @brief convert a Point to a Distance2D
 *
 * @param[in] point point to convert
 *
 * @returns distance
 */
inline ad::physics::Distance2D toDistance(Point const &point)
{
  ad::physics::Distance2D distance;
  distance.x = ad::physics::Distance(point.x());
  distance.y = ad::physics::Distance(point.y());
  return distance;
}

/**
 * @brief convert a trajectory set to a polygon
 *
 * @param[in] trajectorySet trajectory set to convert
 * @param[out] polygon converted polygon
 */
void toPolygon(world::UnstructuredTrajectorySet const &trajectorySet, Polygon &polygon);

/**
 * @brief convert a polygon to a trajectory set
 *
 * @param[in] polygon polygon to convert
 * @param[out] trajectorySet converted trajectory set
 */
void toTrajectorySet(Polygon const &polygon, world::UnstructuredTrajectorySet &trajectorySet);

/**
 * @brief check if an angle is within a range
 *
 * @param[in] angle angle to check
 * @param[in] range angle range
 *
 * @returns true if inside angle range, otherwise false
 */
bool isInsideAngleRange(ad::physics::Angle const &angle, ad::physics::AngleRange const &range);

/**
 * @brief get the overlap between two angle ranges
 *
 * @param[in]  a            first angle range
 * @param[in]  b            second angle range
 * @param[out] overlapRange overlapping heading range
 *
 * @returns true if overlap exists, otherwise false
 */
bool getHeadingOverlap(ad::physics::AngleRange const &a,
                       ad::physics::AngleRange const &b,
                       state::HeadingRange &overlapRange);

/**
 * @brief get the overlap between an angle range and a heading range
 *
 * @param[in]    a            angle range
 * @param[inout] overlapRange overlapping heading range
 *
 * @returns true if overlap exists, otherwise false
 */
bool getHeadingOverlap(ad::physics::AngleRange const &angleRange, state::HeadingRange &overlapRange);

/**
 * @brief rotate a point around another point
 *
 * @param[in] origin         absolute origin
 * @param[in] relativePoint  point to rotate, relative to origin
 * @param[in] angle          angle to rotate the point
 *
 * @returns rotated point
 */
Point rotateAroundPoint(Point const &origin, Point const &relativePoint, ad::physics::Angle const &angle);

/**
 * @brief calculate a point on a circle
 *
 * @param[in] origin absolute origin
 * @param[in] radius radius of circle
 * @param[in] angle  angle to rotate the point
 *
 * @returns resulting point
 */
Point getPointOnCircle(Point const &origin, ad::physics::Distance const &radius, ad::physics::Angle const &angle);

/**
 * @brief calculate the circle origin
 *
 * @param[in] point  point on circle
 * @param[in] radius radius of circle
 * @param[in] angle  circle angle for point
 *
 * @returns circle origin
 */
Point getCircleOrigin(Point const &point, ad::physics::Distance const &radius, ad::physics::Angle const &angle);

/**
 * @brief calculate points on a circle arc
 *
 * @param[in]  origin           absolute origin
 * @param[in]  radius           radius of circle
 * @param[in]  from             starting angle
 * @param[in]  delta            angle of the arc
 * @param[in]  counterClockwise direction of the arc
 * @param[out] geometry         geometry the calculated points are added to
 */
template <typename T>
void calculateCircleArc(Point origin,
                        ad::physics::Distance const &radius,
                        ad::physics::Angle const &from,
                        ad::physics::Angle const &delta,
                        bool const counterClockwise,
                        T &geometry)
{
  ad::physics::Angle currentAngle = physics::normalizeAngle(from);
  ad::physics::Angle maxAngle;
  if (counterClockwise)
  {
    maxAngle = currentAngle + delta;
    while (currentAngle < maxAngle)
    {
      boost::geometry::append(geometry, getPointOnCircle(origin, radius, currentAngle));
      currentAngle += ad::physics::Angle(0.1);
    }
  }
  else
  {
    maxAngle = currentAngle - delta;
    while (currentAngle > maxAngle)
    {
      boost::geometry::append(geometry, getPointOnCircle(origin, radius, currentAngle));
      currentAngle -= ad::physics::Angle(0.1);
    }
  }
  if (currentAngle != maxAngle)
  {
    boost::geometry::append(geometry, getPointOnCircle(origin, radius, maxAngle));
  }
}

/**
 * @brief check if two trajectory sets collide
 *
 * @param[in]  trajectorySet1 first trajectory set
 * @param[in]  trajectorySet2 second trajectory set
 *
 * @returns true if trajectory sets collide, otherwise false
 */
bool collides(world::UnstructuredTrajectorySet const &trajectorySet1,
              world::UnstructuredTrajectorySet const &trajectorySet2);

/**
 * @brief split a line at an intersection point
 *
 * @param[in]  intersectionPoint point to split a line at
 * @param[in]  line              line to split
 * @param[out] before            line before the intersection point
 * @param[out] after             line after the intersection point
 */
void splitLineAtIntersectionPoint(Point const &intersectionPoint, Line const &line, Line &before, Line &after);

} // namespace unstructured
} // namespace rss
} // namespace ad

/*!
 * @brief Point operation: vector addition
 *
 * @param[in] a point a
 * @param[in] b point b
 *
 * @returns c = a + b
 */
inline ad::rss::unstructured::Point operator+(ad::rss::unstructured::Point const &a,
                                              ad::rss::unstructured::Point const &b)
{
  auto result = a;
  boost::geometry::add_point(result, b);
  return result;
}

/*!
 * @brief Point operation: vector subtraction
 *
 * @param[in] a point a
 * @param[in] b point b
 *
 * @returns c = a - b
 */
inline ad::rss::unstructured::Point operator-(ad::rss::unstructured::Point const &a,
                                              ad::rss::unstructured::Point const &b)
{
  auto result = a;
  boost::geometry::subtract_point(result, b);
  return result;
}
