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

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, negative_duration)
{
  Speed resultingSpeed(0.);
  ASSERT_FALSE(calculateSpeedAfterAcceleratedLimitedMovement(
    Speed(10.), cMaxSpeed, Acceleration(1.), Duration(-1.), resultingSpeed));
  ASSERT_FALSE(calculateSpeedInAcceleratedMovement(Speed(10.), Acceleration(1.), Duration(-1.), resultingSpeed));
}

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, negative_speed)
{
  Speed resultingSpeed(0.);
  ASSERT_FALSE(calculateSpeedAfterAcceleratedLimitedMovement(
    Speed(-10.), cMaxSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
}

TEST(PhysicsUnitTestsSpeedInAcceleratedMovement, negative_speed_and_negative_acceleration)
{
  Speed resultingSpeedA;
  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(Speed(-10.), Acceleration(1.), Duration(1.), resultingSpeedA));

  Speed resultingSpeedB;
  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(Speed(10.), Acceleration(-1.), Duration(1.), resultingSpeedB));

  ASSERT_NEAR(-static_cast<double>(resultingSpeedA), static_cast<double>(resultingSpeedB), cDoubleNear);
}

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, zero_deceleration)
{
  Speed startSpeed(10.);
  Speed resultingSpeed(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleratedLimitedMovement(
    startSpeed, cMaxSpeed, Acceleration(0.), Duration(1.), resultingSpeed));
  ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(startSpeed, Acceleration(0.), Duration(1.), resultingSpeed));
  ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);
}

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, checks_acceleration_1sec)
{
  Speed startSpeed(10.);
  Speed resultingSpeed(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleratedLimitedMovement(
    startSpeed, cMaxSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) + 1), static_cast<double>(resultingSpeed), cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(startSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) + 1), static_cast<double>(resultingSpeed), cDoubleNear);
}

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, checks_acceleration_2sec)
{
  Speed startSpeed(10.);
  Speed resultingSpeed(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleratedLimitedMovement(
    startSpeed, cMaxSpeed, Acceleration(1.), Duration(2.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) + 2.), static_cast<double>(resultingSpeed), cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(startSpeed, Acceleration(1.), Duration(2.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) + 2.), static_cast<double>(resultingSpeed), cDoubleNear);
}

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, checks_acceleration_maxSpeed)
{
  Speed startSpeed(10.);
  Speed resultingSpeed(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleratedLimitedMovement(
    startSpeed, startSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
  ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);

  ASSERT_TRUE(calculateSpeedAfterAcceleratedLimitedMovement(
    startSpeed, startSpeed / 2., Acceleration(1.), Duration(1.), resultingSpeed));
  ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(startSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) + 1.), static_cast<double>(resultingSpeed), cDoubleNear);
}

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, negative_acceleration)
{
  Speed startSpeed(10.);
  Speed resultingSpeed(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleratedLimitedMovement(
    startSpeed, cMaxSpeed, Acceleration(-1.), Duration(2.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) - 2.), static_cast<double>(resultingSpeed), cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(startSpeed, Acceleration(-1.), Duration(2.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) - 2.), static_cast<double>(resultingSpeed), cDoubleNear);
}

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, negative_acceleration_till_stop)
{
  Speed startSpeed(10.);
  Speed resultingSpeed(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleratedLimitedMovement(
    startSpeed, cMaxSpeed, Acceleration(-1.), Duration(20.), resultingSpeed));
  ASSERT_NEAR(0., static_cast<double>(resultingSpeed), cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(startSpeed, Acceleration(-1.), Duration(20.), resultingSpeed));
  ASSERT_LE(static_cast<double>(resultingSpeed), -10.);
}

TEST(PhysicsUnitTestsSpeedAfterAcceleratedLimitedMovement, acceleration_accel_max_2m_s2_50kmh)
{
  Speed startSpeed = kmhToMeterPerSec(50);
  Speed resultingSpeed(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleratedLimitedMovement(
    startSpeed, cMaxSpeed, Acceleration(2.), Duration(2.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) + 4.), static_cast<double>(resultingSpeed), cDoubleNear);

  ASSERT_TRUE(calculateSpeedInAcceleratedMovement(startSpeed, Acceleration(2.), Duration(2.), resultingSpeed));
  ASSERT_NEAR((static_cast<double>(startSpeed) + 4.), static_cast<double>(resultingSpeed), cDoubleNear);
}

} // namespace situation
} // namespace rss
} // namespace ad
