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

TEST(PhysicsUnitTestsTimeToCoverDistance, no_brake_required_2_brake_required_is_continuous)
{
  for (size_t i = 0; i <= 10u; ++i)
  {
    Speed speed(1 - (static_cast<double>(i) - 5.) * 0.01);
    Duration requiredTime(0.);
    double expectedDuration = 1. / static_cast<double>(speed);
    EXPECT_TRUE(calculateTimeToCoverDistance(
      speed, cMaxSpeed, Duration(1.), Acceleration(0.), Acceleration(-1.), Distance(1.), requiredTime));
    EXPECT_NEAR(expectedDuration, static_cast<double>(requiredTime), cDoubleNear);
  }
}

TEST(PhysicsUnitTestsTimeToCoverDistance, no_brake_required_zero_acceleration_zero_speed)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeToCoverDistance(
    Speed(0.), cMaxSpeed, Duration(1.), Acceleration(0.), Acceleration(-1.), Distance(1.), requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

TEST(PhysicsUnitTestsTimeToCoverDistance, no_brake_required_zero_acceleration_is_continous)
{
  for (size_t i = 0; i < 10u; ++i)
  {
    Acceleration acceleration(
      (static_cast<double>(i) - 5.) * static_cast<double>(std::numeric_limits<Acceleration>::epsilon()) * 0.9);
    Duration requiredTime(0.);
    EXPECT_TRUE(calculateTimeToCoverDistance(
      Speed(2.), cMaxSpeed, Duration(1.), acceleration, Acceleration(-1.), Distance(1.), requiredTime));
    EXPECT_NEAR(.5, static_cast<double>(requiredTime), cDoubleNear);
  }
}

TEST(PhysicsUnitTestsTimeToCoverDistance, brake_required_negative_or_zero_deceleration)
{
  Acceleration decelerationValue(1.);
  Duration requiredTime(0.);
  for (size_t i = 0u; i < 10u; ++i)
  {
    decelerationValue = decelerationValue * 0.1;
    EXPECT_TRUE(calculateTimeToCoverDistance(
      Speed(0.), cMaxSpeed, Duration(0.), Acceleration(0.), decelerationValue, Distance(1.), requiredTime));
    EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
  }
  EXPECT_TRUE(calculateTimeToCoverDistance(
    Speed(0.), cMaxSpeed, Duration(0.), Acceleration(0.), Acceleration(0.), Distance(1.), requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
  EXPECT_TRUE(calculateTimeToCoverDistance(Speed(0.),
                                           cMaxSpeed,
                                           Duration(0.),
                                           Acceleration(0.),
                                           std::numeric_limits<Acceleration>::epsilon() * 0.99,
                                           Distance(1.),
                                           requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

TEST(PhysicsUnitTestsTimeToCoverDistance, brake_required_positive_deceleration)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeToCoverDistance(Speed(0.),
                                           cMaxSpeed,
                                           Duration(0.),
                                           Acceleration(0.),
                                           -std::numeric_limits<Acceleration>::epsilon(),
                                           Distance(1.),
                                           requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

TEST(PhysicsUnitTestsTimeToCoverDistance, test_zero_distance)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeToCoverDistance(
    Speed(1.), cMaxSpeed, Duration(1.), Acceleration(1.), Acceleration(-1.), Distance(0.), requiredTime));
  EXPECT_EQ(requiredTime, Duration(0.));
}

} // namespace situation
} // namespace rss
} // namespace ad
