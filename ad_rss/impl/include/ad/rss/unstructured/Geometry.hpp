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
#include "ad/physics/Angle.hpp"
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

typedef boost::geometry::model::linestring<Point> linestring_type;
typedef boost::geometry::model::linestring<Point> Line;
typedef boost::geometry::model::multi_linestring<linestring_type> MultiLineString;
typedef boost::geometry::model::polygon<Point> Polygon;
typedef boost::geometry::model::multi_point<Point> MultiPoint;
typedef boost::geometry::model::box<Point> Box;

inline Point toPoint(ad::physics::Distance2D const &distance)
{
  return Point(static_cast<double>(distance.x), static_cast<double>(distance.y));
}
inline ad::physics::Distance2D toDistance(Point const &point)
{
  ad::physics::Distance2D distance;
  distance.x = point.x();
  distance.y = point.y();
  return distance;
}

ad::physics::Angle normalizeAngle(ad::physics::Angle const &yaw);

bool isInsideAngleRange(ad::physics::Angle const &angle, ad::physics::AngleRange const &range);

bool getHeadingOverlap(ad::physics::AngleRange const &a,
                       ad::physics::AngleRange const &b,
                       ad::rss::state::HeadingRange &overlapRange);

bool getHeadingOverlap(ad::physics::AngleRange const &angleRange, ad::rss::state::HeadingRange &overlapRange);

ad::rss::unstructured::Point rotateAroundPoint(ad::rss::unstructured::Point const &absoluteOrigin,
                                               ad::rss::unstructured::Point const &relativePoint,
                                               ad::physics::Angle const &angle);

ad::rss::unstructured::Point getPointOnCircle(ad::rss::unstructured::Point const &origin,
                                              ad::physics::Distance const &radius,
                                              ad::physics::Angle const &angle);
ad::rss::unstructured::Point getCircleOrigin(ad::rss::unstructured::Point const &point,
                                             ad::physics::Distance const &radius,
                                             ad::physics::Angle const &angle);

ad::physics::Distance getDistance(ad::rss::unstructured::Point const &point1,
                                  ad::rss::unstructured::Point const &point2);

template <typename T>
void drawCirclePart(T &line,
                    ad::rss::unstructured::Point center,
                    ad::physics::Distance const &radius,
                    ad::physics::Angle const &from,
                    ad::physics::Angle const &delta,
                    bool const counterClockwise)
{
  ad::physics::Angle currentAngle = ad::rss::unstructured::normalizeAngle(from);
  ad::physics::Angle maxAngle;
  if (counterClockwise)
  {
    maxAngle = currentAngle + delta;
    while (currentAngle < maxAngle)
    {
      boost::geometry::append(line, getPointOnCircle(center, radius, currentAngle));
      currentAngle += 0.1;
    }
  }
  else
  {
    maxAngle = currentAngle - delta;
    while (currentAngle > maxAngle)
    {
      boost::geometry::append(line, getPointOnCircle(center, radius, currentAngle));
      currentAngle -= 0.1;
    }
  }
  if (currentAngle != maxAngle)
  {
    boost::geometry::append(line, getPointOnCircle(center, radius, maxAngle));
  }
}

bool getAllowedDrivingCorridorWhenBothStopped(ad::rss::unstructured::Point const &otherVehicleLocation,
                                              ad::rss::unstructured::Point const &startingPoint,
                                              ::ad::physics::Angle const &maxAllowedAngleWhenBothStopped,
                                              ::ad::physics::AngleRange &range);

void convertTrajectorySet(ad::rss::world::UnstructuredTrajectorySet const &trajectorySet,
                          ad::rss::unstructured::Polygon &polygon);

bool collides(ad::rss::world::UnstructuredTrajectorySet area1, ad::rss::world::UnstructuredTrajectorySet area2);

bool collides(ad::rss::unstructured::Polygon polygon1, ad::rss::unstructured::Point point);

void splitLineAtIntersectionPoint(ad::rss::unstructured::Point intersectionPoint,
                                  ad::rss::unstructured::Line const &line,
                                  ad::rss::unstructured::Line &before,
                                  ad::rss::unstructured::Line &after);

void removeSpikes(double const limitAngle, ad::rss::unstructured::Line &line);

} // namespace unstructured
} // namespace rss
} // namespace ad
