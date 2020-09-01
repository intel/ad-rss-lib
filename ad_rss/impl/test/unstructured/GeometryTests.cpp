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

TEST(GeometryTests, isInsideHeadingRange)
{
  state::HeadingRange range;
  range.begin = physics::cPI;
  range.end = physics::cPI;
  ASSERT_TRUE(isInsideHeadingRange(physics::cPI, range));
  ASSERT_FALSE(isInsideHeadingRange(3. / 2. * physics::cPI, range));

  range.begin = 1. / 4. * physics::cPI;
  range.end = 3. / 4. * physics::cPI;
  ASSERT_TRUE(isInsideHeadingRange(1. / 2. * physics::cPI, range));
  ASSERT_FALSE(isInsideHeadingRange(3. / 2. * physics::cPI, range));

  range.begin = 3. / 4. * physics::cPI;
  range.end = 1. / 4. * physics::cPI;
  ASSERT_FALSE(isInsideHeadingRange(1. / 2. * physics::cPI, range));
  ASSERT_TRUE(isInsideHeadingRange(3. / 2. * physics::cPI, range));
}

TEST(GeometryTests, getHeadingOverlap)
{
  ad::rss::state::HeadingRange a;
  ad::rss::state::HeadingRange b;
  std::vector<ad::rss::state::HeadingRange> overlapRanges;

  a.begin = ad::physics::Angle(0.0);
  a.end = ad::physics::cPI;
  b.begin = ad::physics::Angle(0.0);
  b.end = ad::physics::c2PI;
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(a, b, overlapRanges));
  ASSERT_EQ(1, overlapRanges.size());
  ASSERT_EQ(ad::physics::Angle(0.0), overlapRanges[0].begin);
  ASSERT_EQ(ad::physics::cPI, overlapRanges[0].end);

  a.begin = ad::physics::Angle(0.0);
  a.end = ad::physics::cPI;
  b.begin = ad::physics::cPI / 2.;
  b.end = ad::physics::cPI / 4.;
  overlapRanges.clear();
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(a, b, overlapRanges));
  ASSERT_EQ(2, overlapRanges.size());
  ASSERT_EQ(ad::physics::Angle(0.0), overlapRanges[0].begin);
  ASSERT_EQ(ad::physics::cPI / 4., overlapRanges[0].end);
  ASSERT_EQ(ad::physics::cPI / 2., overlapRanges[1].begin);
  ASSERT_EQ(ad::physics::cPI, overlapRanges[1].end);
}

TEST(GeometryTests, overlapHeadingRange)
{
  ad::rss::state::HeadingRange headingRange;
  std::vector<ad::rss::state::HeadingRange> overlapRanges;

  headingRange.begin = ad::physics::Angle(0.0);
  headingRange.end = physics::cPI;
  ad::rss::state::HeadingRange resultRange;
  resultRange.begin = ad::physics::Angle(0.0);
  resultRange.end = ad::physics::Angle(0.0);
  overlapRanges.push_back(resultRange);
  resultRange.begin = 1. / 4. * physics::cPI;
  resultRange.end = 1. / 2. * physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(2, overlapRanges.size());
  ASSERT_EQ(ad::physics::Angle(0.0), overlapRanges[0].begin);
  ASSERT_EQ(ad::physics::Angle(0.0), overlapRanges[0].end);
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRanges[1].begin);
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRanges[1].end);

  // headingRange inside outer
  overlapRanges.clear();
  headingRange.begin = 1. / 4. * physics::cPI;
  headingRange.end = 1. / 2. * physics::cPI;
  resultRange.begin = ad::physics::Angle(0.0);
  resultRange.end = physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(1, overlapRanges.size());
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRanges[0].begin);
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRanges[0].end);

  // headingRange intersects with outer, is higher
  overlapRanges.clear();
  headingRange.begin = 1. / 2. * physics::cPI;
  headingRange.end = 3. / 2. * physics::cPI;
  resultRange.begin = ad::physics::Angle(0.0);
  resultRange.end = physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(1, overlapRanges.size());
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRanges[0].begin);
  ASSERT_EQ(physics::cPI, overlapRanges[0].end);

  // headingRange intersects with outer, is lower
  overlapRanges.clear();
  headingRange.begin = 1. / 2. * physics::cPI;
  headingRange.end = 3. / 2. * physics::cPI;
  resultRange.begin = physics::cPI;
  resultRange.end = ad::physics::Angle(0.0);
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(1, overlapRanges.size());
  ASSERT_EQ(physics::cPI, overlapRanges[0].begin);
  ASSERT_EQ(3. / 2. * physics::cPI, overlapRanges[0].end);

  // headingRange does not intersect
  overlapRanges.clear();
  headingRange.begin = ad::physics::Angle(0.0);
  headingRange.end = 1. / 4. * physics::cPI;
  resultRange.begin = 5. / 8. * physics::cPI;
  resultRange.end = 7. / 8. * physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_FALSE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(0, overlapRanges.size());

  // intersection, two ranges
  overlapRanges.clear();
  headingRange.begin = ad::physics::Angle(0.0);
  headingRange.end = physics::cPI;
  resultRange.begin = 3. / 4. * physics::cPI;
  resultRange.end = 1. / 4. * physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(2, overlapRanges.size());
  ASSERT_EQ(ad::physics::Angle(0.0), overlapRanges[0].begin);
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRanges[0].end);
  ASSERT_EQ(3. / 4. * physics::cPI, overlapRanges[1].begin);
  ASSERT_EQ(physics::cPI, overlapRanges[1].end);

  //-------------
  // with innerRange
  //-------------
  // no intersection
  overlapRanges.clear();
  headingRange.begin = 3. / 4. * physics::cPI;
  headingRange.end = physics::cPI;
  resultRange.begin = 1. / 4. * physics::cPI;
  resultRange.end = 1. / 2. * physics::cPI;
  overlapRanges.push_back(resultRange);
  resultRange.begin = 3. / 2. * physics::cPI;
  resultRange.end = 7. / 4. * physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_FALSE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(0, overlapRanges.size());

  // intersects, one resulting range (the lower one)
  overlapRanges.clear();
  headingRange.begin = ad::physics::Angle(0.0);
  headingRange.end = 1. / 4. * physics::cPI;
  resultRange.begin = ad::physics::Angle(0.0);
  resultRange.end = 1. / 4. * physics::cPI;
  overlapRanges.push_back(resultRange);
  resultRange.begin = 1. / 2. * physics::cPI;
  resultRange.end = physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(1, overlapRanges.size());
  ASSERT_EQ(ad::physics::Angle(0.0), overlapRanges[0].begin);
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRanges[0].end);

  // intersects, one resulting range (the upper one)
  overlapRanges.clear();
  headingRange.begin = 3. / 4. * physics::cPI;
  headingRange.end = 7. / 8. * physics::cPI;
  resultRange.begin = ad::physics::Angle(0.0);
  resultRange.end = 1. / 4. * physics::cPI;
  overlapRanges.push_back(resultRange);
  resultRange.begin = 1. / 2. * physics::cPI;
  resultRange.end = physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(1, overlapRanges.size());
  ASSERT_EQ(3. / 4. * physics::cPI, overlapRanges[0].begin);
  ASSERT_EQ(7. / 8. * physics::cPI, overlapRanges[0].end);

  // intersects, two resulting range
  overlapRanges.clear();
  headingRange.begin = 1. / 4. * physics::cPI;
  headingRange.end = 3. / 4. * physics::cPI;
  resultRange.begin = ad::physics::Angle(0.0);
  resultRange.end = 1. / 2. * physics::cPI;
  overlapRanges.push_back(resultRange);
  resultRange.begin = physics::cPI;
  resultRange.end = 3. / 2. * physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(1, overlapRanges.size());
  ASSERT_EQ(1. / 4. * physics::cPI, overlapRanges[0].begin);
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRanges[0].end);

  // negative
  overlapRanges.clear();
  headingRange.begin = -1. / 2. * physics::cPI;
  headingRange.end = physics::cPI;
  resultRange.begin = -1. / 4. * physics::cPI;
  resultRange.end = 1. / 2. * physics::cPI;
  overlapRanges.push_back(resultRange);
  ASSERT_TRUE(ad::rss::unstructured::getHeadingOverlap(headingRange, overlapRanges));
  ASSERT_EQ(1, overlapRanges.size());
  ASSERT_EQ(-1. / 4. * physics::cPI, overlapRanges[0].begin);
  ASSERT_EQ(1. / 2. * physics::cPI, overlapRanges[0].end);
}

TEST(GeometryTests, rotateAroundPoint)
{
  auto point = rotateAroundPoint(Point(1., 1.), Point(1., 0.), ad::physics::cPI);
  ASSERT_DOUBLE_EQ(0., point.x());
  ASSERT_DOUBLE_EQ(1., point.y());
}

TEST(GeometryTests, getPointOnCircle)
{
  auto point = getPointOnCircle(Point(1., 1.), ad::physics::Distance(2.), ad::physics::cPI_2);
  ASSERT_DOUBLE_EQ(1., point.x());
  ASSERT_DOUBLE_EQ(3., point.y());
}

TEST(GeometryTests, getCircleOrigin)
{
  auto point = getCircleOrigin(Point(2., 1.), ad::physics::Distance(2.), ad::physics::cPI_2);
  ASSERT_DOUBLE_EQ(2., point.x());
  ASSERT_DOUBLE_EQ(-1., point.y());
}

TEST(GeometryTests, calculateCircleArc)
{
  Polygon polygon;
  calculateCircleArc(Point(0., 0.),
                     ad::physics::Distance(1.),
                     ad::physics::Angle(0.0),
                     3. / 2. * ad::physics::cPI,
                     ad::physics::cPI_2,
                     polygon);
  ASSERT_EQ(4, polygon.outer().size());
  auto epsilon = 1.e-5;
  ASSERT_NEAR(1., polygon.outer()[0].x(), epsilon);
  ASSERT_NEAR(0., polygon.outer()[0].y(), epsilon);
  ASSERT_NEAR(0., polygon.outer()[1].x(), epsilon);
  ASSERT_NEAR(1., polygon.outer()[1].y(), epsilon);
  ASSERT_NEAR(-1., polygon.outer()[2].x(), epsilon);
  ASSERT_NEAR(0., polygon.outer()[2].y(), epsilon);
  ASSERT_NEAR(0., polygon.outer()[3].x(), epsilon);
  ASSERT_NEAR(-1., polygon.outer()[3].y(), epsilon);
}

TEST(GeometryTests, collides)
{
  world::UnstructuredTrajectorySet set1;
  set1.push_back(toDistance(Point(0., 0.)));
  set1.push_back(toDistance(Point(0., 2.)));
  set1.push_back(toDistance(Point(2., 2.)));
  set1.push_back(toDistance(Point(2., 0.)));

  world::UnstructuredTrajectorySet set2;
  set2.push_back(toDistance(Point(1., 1.)));
  set2.push_back(toDistance(Point(1., 3.)));
  set2.push_back(toDistance(Point(3., 3.)));
  set2.push_back(toDistance(Point(3., 1.)));
  ASSERT_TRUE(collides(set1, set2));

  set2.clear();
  set2.push_back(toDistance(Point(3., 3.)));
  set2.push_back(toDistance(Point(3., 4.)));
  set2.push_back(toDistance(Point(4., 4.)));
  set2.push_back(toDistance(Point(4., 3.)));
  ASSERT_FALSE(collides(set1, set2));

  set2.clear();
  set2.push_back(toDistance(Point(2., 2.)));
  set2.push_back(toDistance(Point(2., 3.)));
  set2.push_back(toDistance(Point(3., 3.)));
  set2.push_back(toDistance(Point(3., 2.)));
  ASSERT_TRUE(collides(set1, set2));
}

} // namespace unstructured
} // namespace rss
} // namespace ad
