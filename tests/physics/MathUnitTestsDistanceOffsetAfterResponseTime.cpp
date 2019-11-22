// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "physics/Math.hpp"

namespace ad_rss {
namespace physics {

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, longitudinal_negative_speed)
{
  Distance distanceOffset(0.);

  ASSERT_FALSE(calculateDistanceOffsetAfterResponseTime(
    CoordinateSystemAxis::Longitudinal, Speed(-10.), Acceleration(2), Duration(1), distanceOffset));
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, lateral_negative_speed_and_negative_acceleration)
{
  Distance distanceOffsetA(0.);
  Distance distanceOffsetB(0.);

  for (auto responseTime = 1; responseTime < 20; responseTime++)
  {
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      CoordinateSystemAxis::Lateral, Speed(-10.), Acceleration(2), Duration(responseTime), distanceOffsetA));
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      CoordinateSystemAxis::Lateral, Speed(10.), Acceleration(-2), Duration(responseTime), distanceOffsetB));

    ASSERT_NEAR(-static_cast<double>(distanceOffsetA), static_cast<double>(distanceOffsetB), cDoubleNear);

    Distance expectedResult(responseTime * responseTime - 10 * responseTime);
    ASSERT_NEAR(static_cast<double>(expectedResult), static_cast<double>(distanceOffsetA), cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, negative_time)
{
  Distance distanceOffset(0.);

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    EXPECT_FALSE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(1.), Acceleration(2.), Duration(-1.), distanceOffset));
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, deceleration_to_stop_equal_response_time_longitudinal)
{
  Distance distanceOffsetB(0.);
  ASSERT_TRUE(calculateStoppingDistance(Speed(4.), Acceleration(4.), distanceOffsetB));

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffsetA(0.);
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(4.), Acceleration(-4.), Duration(10.), distanceOffsetA));

    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(static_cast<double>(distanceOffsetA), static_cast<double>(distanceOffsetB), cDoubleNear);
    }
    else
    {
      ASSERT_GT(std::fabs(distanceOffsetA - distanceOffsetB), Distance(10.));
    }
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_zero_acceleration)
{
  Distance distanceOffset(0.);

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(4.), Acceleration(0.), Duration(1.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 4., cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_acceleration_time1s)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffset(0.);
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(4.), Acceleration(2.), Duration(1.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 5., cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_acceleration_time2s)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffset(0.);
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(4.), Acceleration(2.), Duration(2.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 12., cDoubleNear);
  }
}

} // namespace physics
} // namespace ad_rss
