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

TEST(PhysicsUnitTestsSpeedAfterResponseTime, longitudinal_negative_speed)
{
  Speed resultingSpeed(0.);
  ASSERT_FALSE(calculateSpeedAfterAcceleration(
    CoordinateSystemAxis::Longitudinal, Speed(-10.), cMaxSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
}

TEST(PhysicsUnitTestsSpeedAfterResponseTime, lateral_negative_speed_and_negative_acceleration)
{
  Speed resultingSpeedA(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleration(
    CoordinateSystemAxis::Lateral, Speed(-10.), cMaxSpeed, Acceleration(1.), Duration(1.), resultingSpeedA));
  Speed resultingSpeedB(0.);
  ASSERT_TRUE(calculateSpeedAfterAcceleration(
    CoordinateSystemAxis::Lateral, Speed(10.), cMaxSpeed, Acceleration(-1.), Duration(1.), resultingSpeedB));
  ASSERT_NEAR(-static_cast<double>(resultingSpeedA), static_cast<double>(resultingSpeedB), cDoubleNear);
}

TEST(PhysicsUnitTestsSpeedAfterResponseTime, zero_deceleration)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterAcceleration(axis, startSpeed, cMaxSpeed, Acceleration(0.), Duration(1.), resultingSpeed));
    ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(PhysicsUnitTestsSpeedAfterResponseTime, checks_acceleration_1sec)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterAcceleration(axis, startSpeed, cMaxSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 1), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(PhysicsUnitTestsSpeedAfterResponseTime, checks_acceleration_2sec)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterAcceleration(axis, startSpeed, cMaxSpeed, Acceleration(1.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 2.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(PhysicsUnitTestsSpeedAfterResponseTime, checks_acceleration_maxSpeed)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterAcceleration(axis, startSpeed, startSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);
    }
    else
    {
      ASSERT_NEAR((static_cast<double>(startSpeed) + 1.), static_cast<double>(resultingSpeed), cDoubleNear);
    }
  }
}

TEST(PhysicsUnitTestsSpeedAfterResponseTime, negative_acceleration)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterAcceleration(axis, startSpeed, cMaxSpeed, Acceleration(-1.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) - 2.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(PhysicsUnitTestsSpeedAfterResponseTime, negative_acceleration_till_stop)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterAcceleration(axis, startSpeed, cMaxSpeed, Acceleration(-1.), Duration(20.), resultingSpeed));
    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(0., static_cast<double>(resultingSpeed), cDoubleNear);
    }
    else
    {
      ASSERT_LE(static_cast<double>(resultingSpeed), -10.);
    }
  }
}

TEST(PhysicsUnitTestsSpeedAfterResponseTime, acceleration_accel_max_2m_s2_50kmh)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = kmhToMeterPerSec(50);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterAcceleration(axis, startSpeed, cMaxSpeed, Acceleration(2.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 4.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
