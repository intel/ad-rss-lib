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
  pt.x = 1.0;
  pt.y = 2.0;
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

TEST(GeometryTests, normalizeAngle)
{
  ASSERT_EQ(::ad::physics::Angle(M_PI), normalizeAngle(ad::physics::Angle(M_PI)));
  ASSERT_EQ(::ad::physics::Angle(0.0), normalizeAngle(ad::physics::Angle(2 * M_PI)));
  ASSERT_EQ(::ad::physics::Angle(M_PI), normalizeAngle(ad::physics::Angle(-5 * M_PI)));
  ASSERT_EQ(::ad::physics::Angle(0.0), normalizeAngle(ad::physics::Angle(6 * M_PI)));
}

TEST(GeometryTests, isInsideAngleRange)
{
  ::ad::physics::AngleRange range;
  range.minimum = ::ad::physics::Angle(M_PI);
  range.maximum = ::ad::physics::Angle(M_PI);
  ASSERT_TRUE(isInsideAngleRange(ad::physics::Angle(M_PI), range));
  ASSERT_FALSE(isInsideAngleRange(ad::physics::Angle(3. / 2. * M_PI), range));

  range.minimum = ::ad::physics::Angle(1. / 4. * M_PI);
  range.maximum = ::ad::physics::Angle(3. / 4. * M_PI);
  ASSERT_TRUE(isInsideAngleRange(ad::physics::Angle(1. / 2. * M_PI), range));
  ASSERT_FALSE(isInsideAngleRange(ad::physics::Angle(3. / 2. * M_PI), range));

  range.minimum = ::ad::physics::Angle(3. / 4. * M_PI);
  range.maximum = ::ad::physics::Angle(1. / 4. * M_PI);
  ASSERT_FALSE(isInsideAngleRange(ad::physics::Angle(1. / 2. * M_PI), range));
  ASSERT_TRUE(isInsideAngleRange(ad::physics::Angle(3. / 2. * M_PI), range));
}

TEST(GeometryTests, getHeadingOverlap_AngleRanges)
{
  //////////////////
  // outerRange only
  //////////////////
  ad::physics::AngleRange a;
  ad::physics::AngleRange b;
  state::HeadingRange overlapRange;
  a.minimum = ::ad::physics::Angle(1. / 4. * M_PI);
  a.maximum = ::ad::physics::Angle(3. / 4. * M_PI);
  b.minimum = ::ad::physics::Angle(1. / 4. * M_PI);
  b.maximum = ::ad::physics::Angle(3. / 4. * M_PI);
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(1. / 4. * M_PI), overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(3. / 4. * M_PI), overlapRange.outerRange.maximum);

  a.minimum = ::ad::physics::Angle(1. / 4. * M_PI);
  a.maximum = ::ad::physics::Angle(3. / 4. * M_PI);
  b.minimum = ::ad::physics::Angle(1. / 4. * M_PI);
  b.maximum = ::ad::physics::Angle(1. / 2. * M_PI);
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(1. / 4. * M_PI), overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(1. / 2. * M_PI), overlapRange.outerRange.maximum);

  a.minimum = ::ad::physics::Angle(1. / 2. * M_PI);
  a.maximum = ::ad::physics::Angle(3. / 4. * M_PI);
  b.minimum = ::ad::physics::Angle(1. / 4. * M_PI);
  b.maximum = ::ad::physics::Angle(3. / 4. * M_PI);
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(1. / 2. * M_PI), overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(3. / 4. * M_PI), overlapRange.outerRange.maximum);

  a.minimum = ::ad::physics::Angle(1. / 2. * M_PI);
  a.maximum = ::ad::physics::Angle(3. / 4. * M_PI);
  b.minimum = ::ad::physics::Angle(1. / 4. * M_PI);
  b.maximum = ::ad::physics::Angle(1. / 2. * M_PI);
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(1. / 2. * M_PI), overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(1. / 2. * M_PI), overlapRange.outerRange.maximum);

  a.minimum = ::ad::physics::Angle(1. / 2. * M_PI);
  a.maximum = ::ad::physics::Angle(3. / 4. * M_PI);
  b.minimum = ::ad::physics::Angle(0.0);
  b.maximum = ::ad::physics::Angle(1. / 4. * M_PI);
  ASSERT_FALSE(getHeadingOverlap(a, b, overlapRange));

  // 1. maximum < minimum
  // 2. minimum > maximum
  a.minimum = ::ad::physics::Angle(3. / 2. * M_PI);
  a.maximum = ::ad::physics::Angle(1. / 2. * M_PI);
  b.minimum = ::ad::physics::Angle(1. / 4. * M_PI);
  b.maximum = ::ad::physics::Angle(1. / 2. * M_PI);
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(1. / 4. * M_PI), overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(1. / 2. * M_PI), overlapRange.outerRange.maximum);

  a.minimum = ::ad::physics::Angle(3. / 2. * M_PI);
  a.maximum = ::ad::physics::Angle(1. / 2. * M_PI);
  b.minimum = ::ad::physics::Angle(3. / 4. * M_PI);
  b.maximum = ::ad::physics::Angle(M_PI);
  ASSERT_FALSE(getHeadingOverlap(a, b, overlapRange));

  // 1. maximum < minimum
  // 2. minimum < maximum
  a.minimum = ::ad::physics::Angle(3. / 2. * M_PI);
  a.maximum = ::ad::physics::Angle(1. / 2. * M_PI);
  b.minimum = ::ad::physics::Angle(3. / 4. * M_PI);
  b.maximum = ::ad::physics::Angle(0.0 * M_PI);
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(3. / 2. * M_PI), overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(0.0), overlapRange.outerRange.maximum);

  //////////////////
  // outerRange + innerRange
  //////////////////
  a.minimum = ::ad::physics::Angle(0.0);
  a.maximum = ::ad::physics::Angle(M_PI);
  b.minimum = ::ad::physics::Angle(3. / 4. * M_PI);
  b.maximum = ::ad::physics::Angle(1. / 4. * M_PI);
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(0.0), overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(M_PI), overlapRange.outerRange.maximum);
  ASSERT_EQ(::ad::physics::Angle(1. / 4. * M_PI), overlapRange.innerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(3. / 4. * M_PI), overlapRange.innerRange.maximum);

  a.minimum = ::ad::physics::Angle(3. / 4. * M_PI);
  a.maximum = ::ad::physics::Angle(1. / 4. * M_PI);
  b.minimum = ::ad::physics::Angle(0.0);
  b.maximum = ::ad::physics::Angle(M_PI);
  ASSERT_TRUE(getHeadingOverlap(a, b, overlapRange));
  ASSERT_EQ(::ad::physics::Angle(3. / 4. * M_PI), overlapRange.outerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(1. / 4. * M_PI), overlapRange.outerRange.maximum);
  ASSERT_EQ(::ad::physics::Angle(0.0), overlapRange.innerRange.minimum);
  ASSERT_EQ(::ad::physics::Angle(M_PI), overlapRange.innerRange.maximum);
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
