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

TEST(MathUnitTestsSpeedAfterResponseTime, longitudinal_negative_speed)
{
  Speed resultingSpeed(0.);
  ASSERT_FALSE(calculateSpeedAfterResponseTime(
    CoordinateSystemAxis::Longitudinal, Speed(-10.), Acceleration(1.), Duration(1.), resultingSpeed));
}

TEST(MathUnitTestsSpeedAfterResponseTime, lateral_negative_speed_and_negative_acceleration)
{
  Speed resultingSpeedA(0.);
  ASSERT_TRUE(calculateSpeedAfterResponseTime(
    CoordinateSystemAxis::Lateral, Speed(-10.), Acceleration(1.), Duration(1.), resultingSpeedA));
  Speed resultingSpeedB(0.);
  ASSERT_TRUE(calculateSpeedAfterResponseTime(
    CoordinateSystemAxis::Lateral, Speed(10.), Acceleration(-1.), Duration(1.), resultingSpeedB));
  ASSERT_NEAR(-static_cast<double>(resultingSpeedA), static_cast<double>(resultingSpeedB), cDoubleNear);
}

TEST(MathUnitTestsSpeedAfterResponseTime, zero_deceleration)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, Acceleration(0.), Duration(1.), resultingSpeed));
    ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_1sec)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 1), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_2sec)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, Acceleration(1.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 2.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, negative_acceleration)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, Acceleration(-1.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) - 2.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, negative_acceleration_till_stop)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, Acceleration(-1.), Duration(20.), resultingSpeed));
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

TEST(MathUnitTestsSpeedAfterResponseTime, acceleration_accel_max_2m_s2_50kmh)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = kmhToMeterPerSec(50);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, Acceleration(2.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 4.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

} // namespace physics
} // namespace ad_rss
