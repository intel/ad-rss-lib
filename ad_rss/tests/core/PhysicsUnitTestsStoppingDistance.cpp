// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/Physics.hpp"

namespace ad {
namespace rss {
namespace core {

TEST(PhysicsUnitTestsStoppingDistance, positive_deceleration)
{
  Distance stoppingDistance(0.);
  ASSERT_FALSE(calculateStoppingDistance(Speed(10.), Acceleration(4.), stoppingDistance));
}

TEST(PhysicsUnitTestsStoppingDistance, zero_deceleration)
{
  Distance stoppingDistance(0.);
  ASSERT_FALSE(calculateStoppingDistance(Speed(10.), Acceleration(0.), stoppingDistance));
}

TEST(PhysicsUnitTestsStoppingDistance, acceleration_positive_speed)
{
  Distance stoppingDistance(0.);
  ASSERT_FALSE(calculateStoppingDistance(Speed(10.), Acceleration(1.), stoppingDistance));
}

TEST(PhysicsUnitTestsStoppingDistance, deceleration_negative_speed)
{
  Distance stoppingDistance(0.);
  ASSERT_FALSE(calculateStoppingDistance(Speed(-10.), Acceleration(-1.), stoppingDistance));
}

TEST(PhysicsUnitTestsStoppingDistance, checks_100kmh)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(100.), Acceleration(-6.), stoppingDistance));
  ASSERT_NEAR(stoppingDistance.mDistance, 64.3, cDoubleNear);
}

TEST(PhysicsUnitTestsStoppingDistance, checks_negative_speed)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(-100.), Acceleration(6.), stoppingDistance));
  ASSERT_NEAR(stoppingDistance.mDistance, -64.3, cDoubleNear);
}

TEST(PhysicsUnitTestsStoppingDistance, checks_0kmh)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(0.), Acceleration(-6.), stoppingDistance));
  ASSERT_NEAR(stoppingDistance.mDistance, 0., cDoubleNear);
}

TEST(PhysicsUnitTestsStoppingDistance, checks_value_range)
{
  for (int i = -300; i < 300; i++)
  {
    Acceleration deceleration;
    if (i < 0)
    {
      deceleration = Acceleration(2.);
    }
    else
    {
      deceleration = Acceleration(-2.);
    }

    Speed startVelocity = kmhToMeterPerSec(i);
    Distance resultingDistance = (startVelocity * startVelocity) / (2. * -deceleration);

    Distance stoppingDistance(0.);
    ASSERT_TRUE(calculateStoppingDistance(startVelocity, deceleration, stoppingDistance));
    ASSERT_NEAR(stoppingDistance.mDistance, resultingDistance.mDistance, cDoubleNear);
  }
}

} // namespace core
} // namespace rss
} // namespace ad
