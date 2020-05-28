// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/unstructured/Geometry.hpp"

namespace ad {
namespace rss {
namespace unstructured {

TEST(GeometryTests, toPoint)
{
  ad::physics::Distance2D distance;
  distance.x = ad::physics::Distance(1.0);
  distance.y = ad::physics::Distance(2.0);
  auto point = toPoint(distance);
  ASSERT_EQ(1.0, point.x());
  ASSERT_EQ(2.0, point.y());

  point = toPoint(ad::physics::Distance(2.0), ad::physics::Distance(1.0));
  ASSERT_EQ(2.0, point.x());
  ASSERT_EQ(1.0, point.y());
}

TEST(GeometryTests, toDistance)
{
  ::ad::physics::Distance2D distance = toDistance(Point(1.0, 2.0));
  ASSERT_EQ(ad::physics::Distance(1.0), distance.x);
  ASSERT_EQ(ad::physics::Distance(2.0), distance.y);
}

TEST(GeometryTests, toPolygon)
{
  world::UnstructuredTrajectorySet trajectorySet;
  ::ad::physics::Distance2D pt;
  pt.x = ::ad::physics::Distance(1.0);
  pt.y = ::ad::physics::Distance(2.0);
  trajectorySet.push_back(pt);
  trajectorySet.push_back(pt);

  Polygon polygon;
  toPolygon(trajectorySet, polygon);
  ASSERT_EQ(1.0, polygon.outer()[0].x());
  ASSERT_EQ(2.0, polygon.outer()[0].y());
  ASSERT_EQ(1.0, polygon.outer()[1].x());
  ASSERT_EQ(2.0, polygon.outer()[1].y());
}

TEST(GeometryTests, toTrajectorySet)
{
  Polygon polygon;
  boost::geometry::append(polygon, Point(1.0, 2.0));
  boost::geometry::append(polygon, Point(1.0, 3.0));
  world::UnstructuredTrajectorySet trajectorySet;
  toTrajectorySet(polygon, trajectorySet);

  ASSERT_EQ(::ad::physics::Distance(1.0), trajectorySet[0].x);
  ASSERT_EQ(::ad::physics::Distance(2.0), trajectorySet[0].y);
  ASSERT_EQ(::ad::physics::Distance(1.0), trajectorySet[1].x);
  ASSERT_EQ(::ad::physics::Distance(3.0), trajectorySet[1].y);
}

TEST(GeometryTests, isInsideAngleRange)
{
  ::ad::physics::AngleRange range;
  range.minimum = physics::cPI;
  range.maximum = physics::cPI;
  ASSERT_TRUE(isInsideAngleRange(physics::cPI, range));
  ASSERT_FALSE(isInsideAngleRange(3. / 2. * physics::cPI, range));

  range.minimum = 1. / 4. * physics::cPI;
  range.maximum = 3. / 4. * physics::cPI;
  ASSERT_TRUE(isInsideAngleRange(1. / 2. * physics::cPI, range));
  ASSERT_FALSE(isInsideAngleRange(3. / 2. * physics::cPI, range));

  range.minimum = 3. / 4. * physics::cPI;
  range.maximum = 1. / 4. * physics::cPI;
  ASSERT_FALSE(isInsideAngleRange(1. / 2. * physics::cPI, range));
  ASSERT_TRUE(isInsideAngleRange(3. / 2. * physics::cPI, range));
}

TEST(GeometryTests, getHeadingOverlap_AngleRanges)
{
  //////////////////
  // outerRange only
  //////////////////
  ad::physics::AngleRange a;
  ad::physics::AngleRange b;
  state::HeadingRange overlapRange;
  a.minimum = 1. / 4. * physics::cPI;
  a.maximum = 3. / 4. * physics::cPI;
  b.minimum = 1. / 4. * physics::cPI;
  b.maximum = 3. / 4. * physics::cPI;
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRange.outerRange.minimum);
  ASSERT_EQ(3. / 4. * physics::cPI, overlapRange.outerRange.maximum);

  a.minimum = 1. / 4. * physics::cPI;
  a.maximum = 3. / 4. * physics::cPI;
  b.minimum = 1. / 4. * physics::cPI;
  b.maximum = 1. / 2. * physics::cPI;
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRange.outerRange.minimum);
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRange.outerRange.maximum);

  a.minimum = 1. / 2. * physics::cPI;
  a.maximum = 3. / 4. * physics::cPI;
  b.minimum = 1. / 4. * physics::cPI;
  b.maximum = 3. / 4. * physics::cPI;
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRange.outerRange.minimum);
  ASSERT_EQ(3. / 4. * physics::cPI, overlapRange.outerRange.maximum);

  a.minimum = 1. / 2. * physics::cPI;
  a.maximum = 3. / 4. * physics::cPI;
  b.minimum = 1. / 4. * physics::cPI;
  b.maximum = 1. / 2. * physics::cPI;
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRange.outerRange.minimum);
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRange.outerRange.maximum);

  a.minimum = 1. / 2. * physics::cPI;
  a.maximum = 3. / 4. * physics::cPI;
  b.minimum = ::ad::physics::Angle(0.0);
  b.maximum = 1. / 4. * physics::cPI;
  ASSERT_FALSE(getHeadingOverlap(a, b, overlapRange));

  // 1. maximum < minimum
  // 2. minimum > maximum
  a.minimum = 3. / 2. * physics::cPI;
  a.maximum = 1. / 2. * physics::cPI;
  b.minimum = 1. / 4. * physics::cPI;
  b.maximum = 1. / 2. * physics::cPI;
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRange.outerRange.minimum);
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRange.outerRange.maximum);

  a.minimum = 3. / 2. * physics::cPI;
  a.maximum = 1. / 2. * physics::cPI;
  b.minimum = 3. / 4. * physics::cPI;
  b.maximum = physics::cPI;
  ASSERT_FALSE(getHeadingOverlap(a, b, overlapRange));

  // 1. maximum < minimum
  // 2. minimum < maximum
  a.minimum = 3. / 2. * physics::cPI;
  a.maximum = 1. / 2. * physics::cPI;
  b.minimum = 3. / 4. * physics::cPI;
  b.maximum = 0.0 * physics::cPI;
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(3. / 2. * physics::cPI, overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(0.0), overlapRange.outerRange.maximum);

  //////////////////
  // outerRange + innerRange
  //////////////////
  a.minimum = ::ad::physics::Angle(0.0);
  a.maximum = physics::cPI;
  b.minimum = 3. / 4. * physics::cPI;
  b.maximum = 1. / 4. * physics::cPI;
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(0.0), overlapRange.outerRange.minimum);
  ASSERT_EQ(physics::cPI, overlapRange.outerRange.maximum);
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRange.innerRange.minimum);
  ASSERT_EQ(3. / 4. * physics::cPI, overlapRange.innerRange.maximum);

  a.minimum = 3. / 4. * physics::cPI;
  a.maximum = 1. / 4. * physics::cPI;
  b.minimum = ::ad::physics::Angle(0.0);
  b.maximum = physics::cPI;
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(3. / 4. * physics::cPI, overlapRange.outerRange.minimum);
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRange.outerRange.maximum);
  ASSERT_EQ(::ad::physics::Angle(0.0), overlapRange.innerRange.minimum);
  ASSERT_EQ(physics::cPI, overlapRange.innerRange.maximum);
}

TEST(GeometryTests, getHeadingOverlap)
{
  // bool getHeadingOverlap(ad::physics::AngleRange const &angleRange, state::HeadingRange &overlapRange);
}

TEST(GeometryTests, rotateAroundPoint)
{
  // Point rotateAroundPoint(Point const &origin, Point const &relativePoint, ad::physics::Angle const &angle);
}

TEST(GeometryTests, getPointOnCircle)
{
  // Point getPointOnCircle(Point const &origin, ad::physics::Distance const &radius, ad::physics::Angle const &angle)
}

TEST(GeometryTests, getCircleOrigin)
{
  // Point getCircleOrigin(Point const &point, ad::physics::Distance const &radius, ad::physics::Angle const &angle);
}

TEST(GeometryTests, calculateCircleArc)
{
  // void calculateCircleArc(Point origin,
  //                         ad::physics::Distance const &radius,
  //                         ad::physics::Angle const &from,
  //                         ad::physics::Angle const &delta,
  //                         bool const counterClockwise,
  //                         T &geometry)
}

TEST(GeometryTests, collides)
{
  // bool collides(world::UnstructuredTrajectorySet const &trajectorySet1,
  //               world::UnstructuredTrajectorySet const &trajectorySet2);
}

TEST(GeometryTests, splitLineAtIntersectionPoint)
{
  // void splitLineAtIntersectionPoint(Point const &intersectionPoint, Line const &line, Line &before, Line &after);
}

} // namespace unstructured
} // namespace rss
} // namespace ad
