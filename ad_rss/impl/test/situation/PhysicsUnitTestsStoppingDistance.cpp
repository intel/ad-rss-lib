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

TEST(PhysicsUnitTestsStoppingDistance, negative_deceleration)
{
  Distance stoppingDistance(0.);
  ASSERT_FALSE(calculateStoppingDistance(Speed(10.), Acceleration(-4.), stoppingDistance));
}

TEST(PhysicsUnitTestsStoppingDistance, zero_deceleration)
{
  Distance stoppingDistance(0.);
  ASSERT_FALSE(calculateStoppingDistance(Speed(10.), Acceleration(0.), stoppingDistance));
}

TEST(PhysicsUnitTestsStoppingDistance, checks_100kmh)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(100.), Acceleration(6.), stoppingDistance));
  ASSERT_NEAR(static_cast<double>(stoppingDistance), 64.3, cDoubleNear);
}

TEST(PhysicsUnitTestsStoppingDistance, checks_negative_speed)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(-100.), Acceleration(6.), stoppingDistance));
  ASSERT_NEAR(static_cast<double>(stoppingDistance), -64.3, cDoubleNear);
}

TEST(PhysicsUnitTestsStoppingDistance, checks_0kmh)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(0.), Acceleration(6.), stoppingDistance));
  ASSERT_NEAR(static_cast<double>(stoppingDistance), 0., cDoubleNear);
}

TEST(PhysicsUnitTestsStoppingDistance, checks_value_range)
{
  Acceleration deceleration(2.);

  for (int i = -300; i < 300; i++)
  {
    Speed startVelocity = kmhToMeterPerSec(i);
    Distance resultingDistance = (startVelocity * std::fabs(startVelocity)) / (2. * deceleration);

    Distance stoppingDistance(0.);
    ASSERT_TRUE(calculateStoppingDistance(startVelocity, deceleration, stoppingDistance));
    ASSERT_NEAR(static_cast<double>(stoppingDistance), static_cast<double>(resultingDistance), cDoubleNear);
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
