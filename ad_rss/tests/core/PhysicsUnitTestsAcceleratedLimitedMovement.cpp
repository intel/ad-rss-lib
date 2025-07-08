// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2020-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/Physics.hpp"

namespace ad {
namespace rss {
namespace core {

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, calculateDistanceOffset)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.0), Speed(36.0), Acceleration(2.0), Duration(2.0), resultingSpeed, distanceOffset));
  ASSERT_EQ(Distance(12.0), distanceOffset);
  ASSERT_EQ(Speed(8.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, maxSpeedOnAccelerationReachedAtEnd)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.0), Speed(8.0), Acceleration(2.0), Duration(2.0), resultingSpeed, distanceOffset));
  ASSERT_EQ(Distance(12.0), distanceOffset);
  ASSERT_EQ(Speed(8.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, maxSpeedOnAccelerationReachedBeforeEnd)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.0), Speed(6.0), Acceleration(2.0), Duration(2.0), resultingSpeed, distanceOffset));
  ASSERT_EQ(Distance(11.0), distanceOffset);
  ASSERT_EQ(Speed(6.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, maxSpeedOnAccelerationReachedAtBeginning)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(2.0), Duration(2.0), resultingSpeed, distanceOffset));
  ASSERT_EQ(Distance(12.0), distanceOffset);
  ASSERT_EQ(Speed(6.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, maxSpeedOnAccelerationReachedBeforeBeginning)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(6.0), Speed(4.0), Acceleration(2.0), Duration(2.0), resultingSpeed, distanceOffset));
  ASSERT_EQ(Distance(12.0), distanceOffset);
  ASSERT_EQ(Speed(6.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, decelerationToNonzeroSpeed)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-2.0), Duration(2.0), resultingSpeed, distanceOffset));
  ASSERT_EQ(Distance(8.0), distanceOffset);
  ASSERT_EQ(Speed(2.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, noAccel)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.0), Speed(6.0), Acceleration(0.0), Duration(2.0), resultingSpeed, distanceOffset));
  ASSERT_EQ(Distance(8.0), distanceOffset);
  ASSERT_EQ(Speed(4.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, decelerationZeroSpeedAtEnd)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-3.0), Duration(2.0), resultingSpeed, distanceOffset));
  ASSERT_EQ(Distance(6.0), distanceOffset);
  ASSERT_EQ(Speed(0.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, decelerationZeroSpeedBeforeEnd)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(6.0), Speed(6.0), Acceleration(-3.0), Duration(3.0), resultingSpeed, distanceOffset));

  ASSERT_EQ(Distance(6.0), distanceOffset);
  ASSERT_EQ(Speed(0.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, negative_duration)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_FALSE(calculateAcceleratedLimitedMovement(
    Speed(10.), cMaxSpeedOnAcceleration, Acceleration(2), Duration(-1), resultingSpeed, distanceOffset));

  ASSERT_FALSE(calculateDistanceOffsetInAcceleratedMovement(Speed(10.), Acceleration(2), Duration(-1), distanceOffset));
  ASSERT_FALSE(calculateSpeedInAcceleratedMovement(Speed(10.), Acceleration(2), Duration(-1), resultingSpeed));
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, negative_speed)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_FALSE(calculateAcceleratedLimitedMovement(
    Speed(-10.), cMaxSpeedOnAcceleration, Acceleration(2), Duration(1), resultingSpeed, distanceOffset));
}

TEST(PhysicsUnitTestsDistanceOffsetInAcceleratedMovement, negative_speed_and_negative_acceleration)
{
  for (auto response_time = 1; response_time < 20; response_time++)
  {
    Distance distanceOffsetA;
    ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(
      Speed(-10.), Acceleration(2), Duration(response_time), distanceOffsetA));

    Speed resultingSpeedA;
    ASSERT_TRUE(
      calculateSpeedInAcceleratedMovement(Speed(-10.), Acceleration(2), Duration(response_time), resultingSpeedA));

    Distance distanceOffsetB;
    ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(
      Speed(10.), Acceleration(-2), Duration(response_time), distanceOffsetB));

    Speed resultingSpeedB;
    ASSERT_TRUE(
      calculateSpeedInAcceleratedMovement(Speed(10.), Acceleration(-2), Duration(response_time), resultingSpeedB));

    ASSERT_NEAR(-distanceOffsetA.mDistance, distanceOffsetB.mDistance, cDoubleNear);
    ASSERT_NEAR(-resultingSpeedA.mSpeed, resultingSpeedB.mSpeed, cDoubleNear);

    Distance expectedDistance(response_time * response_time - 10 * response_time);
    ASSERT_NEAR(expectedDistance.mDistance, distanceOffsetA.mDistance, cDoubleNear);

    Speed expectedSpeed(-10. + 2. * response_time);
    ASSERT_NEAR(expectedSpeed.mSpeed, resultingSpeedA.mSpeed, cDoubleNear);
  }
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, deceleration_to_stop_equal_response_time)
{
  Distance distanceOffsetA;
  ASSERT_TRUE(calculateStoppingDistance(Speed(4.), Acceleration(-4.), distanceOffsetA));

  Speed resultingSpeedB;
  Distance distanceOffsetB;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.), cMaxSpeedOnAcceleration, Acceleration(-4.), Duration(10.), resultingSpeedB, distanceOffsetB));

  ASSERT_NEAR(distanceOffsetA.mDistance, distanceOffsetB.mDistance, cDoubleNear);
  ASSERT_EQ(Speed(0.), resultingSpeedB);

  ASSERT_TRUE(
    calculateDistanceOffsetInAcceleratedMovement(Speed(4.), Acceleration(-4.), Duration(10.), distanceOffsetA));
  ASSERT_GT(std::fabs(distanceOffsetA - distanceOffsetB), Distance(10.));
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, checks_zero_acceleration)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.), cMaxSpeedOnAcceleration, Acceleration(0.), Duration(1.), resultingSpeed, distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 4., cDoubleNear);
  ASSERT_EQ(Speed(4.), resultingSpeed);

  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(Speed(4.), Acceleration(0.), Duration(1.), distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 4., cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(Speed(4.), Acceleration(0.), Duration(1.), resultingSpeed));
  ASSERT_EQ(Speed(4.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, checks_max_speed_no_acceleration)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.), Speed(4.), Acceleration(2.), Duration(1.), resultingSpeed, distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 4., cDoubleNear);
  ASSERT_EQ(Speed(4.), resultingSpeed);

  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(10.), Speed(4.), Acceleration(2.), Duration(1.), resultingSpeed, distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 10., cDoubleNear);
  ASSERT_EQ(Speed(10.), resultingSpeed);

  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(Speed(4.), Acceleration(2.), Duration(1.), distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 5., cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(Speed(4.), Acceleration(2.), Duration(1.), resultingSpeed));
  ASSERT_EQ(Speed(6.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, checks_acceleration_time1s)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.), cMaxSpeedOnAcceleration, Acceleration(2.), Duration(1.), resultingSpeed, distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 5., cDoubleNear);
  ASSERT_EQ(Speed(6.), resultingSpeed);

  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(Speed(4.), Acceleration(2.), Duration(1.), distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 5., cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(Speed(4.), Acceleration(2.), Duration(1.), resultingSpeed));
  ASSERT_EQ(Speed(6.), resultingSpeed);
}

TEST(PhysicsUnitTestsAcceleratedLimitedMovement, checks_acceleration_time2s)
{
  Speed resultingSpeed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateAcceleratedLimitedMovement(
    Speed(4.), cMaxSpeedOnAcceleration, Acceleration(2.), Duration(2.), resultingSpeed, distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 12., cDoubleNear);
  ASSERT_EQ(Speed(8.), resultingSpeed);

  ASSERT_TRUE(calculateDistanceOffsetInAcceleratedMovement(Speed(4.), Acceleration(2.), Duration(2.), distanceOffset));
  ASSERT_NEAR(distanceOffset.mDistance, 12., cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(Speed(4.), Acceleration(2.), Duration(2.), resultingSpeed));
  ASSERT_EQ(Speed(8.), resultingSpeed);
}

} // namespace core
} // namespace rss
} // namespace ad
