// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/situation/Physics.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(PhysicsUnitTestsDistanceOffsetAfterResponseTime, longitudinal_negative_speed)
{
  Distance distanceOffset(0.);

  ASSERT_FALSE(calculateDistanceOffsetAfterResponseTime(
    CoordinateSystemAxis::Longitudinal, Speed(-10.), cMaxSpeed, Acceleration(2), Duration(1), distanceOffset));
}

TEST(PhysicsUnitTestsDistanceOffsetAfterResponseTime, lateral_negative_speed_and_negative_acceleration)
{
  Distance distanceOffsetA(0.);
  Distance distanceOffsetB(0.);

  for (auto responseTime = 1; responseTime < 20; responseTime++)
  {
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      CoordinateSystemAxis::Lateral, Speed(-10.), cMaxSpeed, Acceleration(2), Duration(responseTime), distanceOffsetA));
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      CoordinateSystemAxis::Lateral, Speed(10.), cMaxSpeed, Acceleration(-2), Duration(responseTime), distanceOffsetB));

    ASSERT_NEAR(-static_cast<double>(distanceOffsetA), static_cast<double>(distanceOffsetB), cDoubleNear);

    Distance expectedResult(responseTime * responseTime - 10 * responseTime);
    ASSERT_NEAR(static_cast<double>(expectedResult), static_cast<double>(distanceOffsetA), cDoubleNear);
  }
}

TEST(PhysicsUnitTestsDistanceOffsetAfterResponseTime, negative_time)
{
  Distance distanceOffset(0.);

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    EXPECT_FALSE(calculateDistanceOffsetAfterResponseTime(
      axis, Speed(1.), cMaxSpeed, Acceleration(2.), Duration(-1.), distanceOffset));
  }
}

TEST(PhysicsUnitTestsDistanceOffsetAfterResponseTime, deceleration_to_stop_equal_response_time_longitudinal)
{
  Distance distanceOffsetB(0.);
  ASSERT_TRUE(calculateStoppingDistance(Speed(4.), Acceleration(4.), distanceOffsetB));

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffsetA(0.);
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      axis, Speed(4.), cMaxSpeed, Acceleration(-4.), Duration(10.), distanceOffsetA));

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

TEST(PhysicsUnitTestsDistanceOffsetAfterResponseTime, checks_zero_acceleration)
{
  Distance distanceOffset(0.);

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      axis, Speed(4.), cMaxSpeed, Acceleration(0.), Duration(1.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 4., cDoubleNear);
  }
}

TEST(PhysicsUnitTestsDistanceOffsetAfterResponseTime, checks_max_speed_lon_no_acceleration)
{
  Distance distanceOffset(0.);

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      axis, Speed(4.), Speed(4.), Acceleration(2.), Duration(1.), distanceOffset));
    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(static_cast<double>(distanceOffset), 4., cDoubleNear);
    }
    else
    {
      ASSERT_NEAR(static_cast<double>(distanceOffset), 5., cDoubleNear);
    }
  }
}

TEST(PhysicsUnitTestsDistanceOffsetAfterResponseTime, checks_acceleration_time1s)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffset(0.);
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      axis, Speed(4.), cMaxSpeed, Acceleration(2.), Duration(1.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 5., cDoubleNear);
  }
}

TEST(PhysicsUnitTestsDistanceOffsetAfterResponseTime, checks_acceleration_time2s)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffset(0.);
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      axis, Speed(4.), cMaxSpeed, Acceleration(2.), Duration(2.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 12., cDoubleNear);
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
