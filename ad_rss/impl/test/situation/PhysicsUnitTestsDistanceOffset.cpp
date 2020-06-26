// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/situation/Physics.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, calculateDistanceOffset)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.0), Speed(36.0), Acceleration(2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(12.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, calculateDistanceOffsetMaxSpeedReachedAtEnd)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.0), Speed(8.0), Acceleration(2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(12.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, calculateDistanceOffsetMaxSpeedReachedBeforeEnd)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.0), Speed(6.0), Acceleration(2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(11.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, calculateDistanceOffsetMaxSpeedReachedAtBeginning)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(12.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, calculateDistanceOffsetDecelerationToNonzeroSpeed)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-2.0), Duration(2.0), result));
  ASSERT_EQ(Distance(8.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, calculateDistanceOffsetNoAccel)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.0), Speed(6.0), Acceleration(0.0), Duration(2.0), result));
  ASSERT_EQ(Distance(8.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, calculateDistanceOffsetDecelerationZeroSpeedAtEnd)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-3.0), Duration(2.0), result));
  ASSERT_EQ(Distance(6.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement,
     calculateDistanceOffsetDecelerationZeroSpeedBeforeEnd)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-3.0), Duration(3.0), result));

  ASSERT_EQ(Distance(6.0), result);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, negative_duration)
{
  Distance distanceOffset(0.);
  ASSERT_FALSE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(10.), cMaxSpeed, Acceleration(2), Duration(-1), distanceOffset));

  ASSERT_FALSE(calculateDistanceOffsetInAcceleratedMovement(Speed(10.), Acceleration(2), Duration(-1), distanceOffset));
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, negative_speed)
{
  Distance distanceOffset(0.);
  ASSERT_FALSE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(-10.), cMaxSpeed, Acceleration(2), Duration(1), distanceOffset));
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedMovement, negative_speed_and_negative_acceleration)
{
  for (auto responseTime = 1; responseTime < 20; responseTime++)
  {
    Distance distanceOffsetA;
    ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(
      Speed(-10.), Acceleration(2), Duration(responseTime), distanceOffsetA));

    Distance distanceOffsetB;
    ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(
      Speed(10.), Acceleration(-2), Duration(responseTime), distanceOffsetB));

    ASSERT_NEAR(-static_cast<double>(distanceOffsetA), static_cast<double>(distanceOffsetB), cDoubleNear);

    Distance expectedResult(responseTime * responseTime - 10 * responseTime);
    ASSERT_NEAR(static_cast<double>(expectedResult), static_cast<double>(distanceOffsetA), cDoubleNear);
  }
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, negative_time)
{
  Distance distanceOffset(0.);

  EXPECT_FALSE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(1.), cMaxSpeed, Acceleration(2.), Duration(-1.), distanceOffset));
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, deceleration_to_stop_equal_response_time)
{
  Distance distanceOffsetB(0.);
  ASSERT_TRUE(calculateStoppingDistance(Speed(4.), Acceleration(-4.), distanceOffsetB));

  Distance distanceOffsetA(0.);
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.), cMaxSpeed, Acceleration(-4.), Duration(10.), distanceOffsetA));

  ASSERT_NEAR(static_cast<double>(distanceOffsetA), static_cast<double>(distanceOffsetB), cDoubleNear);

  ASSERT_TRUE(
    calculateDistanceOffsetInAcceleratedMovement(Speed(4.), Acceleration(-4.), Duration(10.), distanceOffsetA));
  ASSERT_GT(std::fabs(distanceOffsetA - distanceOffsetB), Distance(10.));
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, checks_zero_acceleration)
{
  Distance distanceOffset(0.);
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.), cMaxSpeed, Acceleration(0.), Duration(1.), distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 4., cDoubleNear);

  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(Speed(4.), Acceleration(0.), Duration(1.), distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 4., cDoubleNear);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, checks_max_speed_lon_no_acceleration)
{
  Distance distanceOffset(0.);
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.), Speed(4.), Acceleration(2.), Duration(1.), distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 4., cDoubleNear);

  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(10.), Speed(4.), Acceleration(2.), Duration(1.), distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 10., cDoubleNear);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, checks_acceleration_time1s)
{
  Distance distanceOffset(0.);
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.), cMaxSpeed, Acceleration(2.), Duration(1.), distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 5., cDoubleNear);
}

TEST(PhysicsUnitTestsDistanceOffsetAfterAcceleratedLimitedMovement, checks_acceleration_time2s)
{
  Distance distanceOffset(0.);
  ASSERT_TRUE(calculateDistanceOffsetAfterAcceleratedLimitedMovement(
    Speed(4.), cMaxSpeed, Acceleration(2.), Duration(2.), distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 12., cDoubleNear);
}

} // namespace situation
} // namespace rss
} // namespace ad
