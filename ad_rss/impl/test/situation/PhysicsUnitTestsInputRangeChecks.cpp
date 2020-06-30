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

bool calculateTimeForDistance(Speed const currentSpeed,
                              Speed const maxSpeedOnAcceleration,
                              Acceleration const acceleration,
                              Distance const distanceToCover,
                              Duration &requiredTime);

TEST(PhysicsUnitTestsInputRangeChecks, negative_speed)
{
  Duration requiredTime(0.);
  EXPECT_FALSE(calculateTimeForDistance(Speed(-1.), Speed(2.), Acceleration(0.), Distance(1.), requiredTime));
}

TEST(PhysicsUnitTestsInputRangeChecks, speed_and_acceleration_zero)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeForDistance(Speed(0.), Speed(2.), Acceleration(0.), Distance(1.), requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

#if INVALID_AD_PHYSICS_SPEED_THROWS_EXCEPTION && INVALID_AD_PHYSICS_ACCELERATION_THROWS_EXCEPTION                      \
  && INVALID_AD_PHYSICS_DURATION_THROWS_EXCEPTION && INVALID_AD_PHYSICS_DISTANCE_THROWS_EXCEPTION
TEST(PhysicsUnitTestsInputRangeChecks, calculateDistanceOffsetInAccerlatedMovementThrows)
{
  Distance distanceOffset;
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(), Acceleration(0), Duration(0), distanceOffset),
               std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(0), Acceleration(), Duration(0), distanceOffset),
               std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(0), Acceleration(0), Duration(), distanceOffset),
               std::out_of_range);
}

TEST(PhysicsUnitTestsInputRangeChecks, calculateAcceleratedLimitedMovementThrows)
{
  Speed speed;
  Distance distanceOffset;
  EXPECT_THROW(
    calculateAcceleratedLimitedMovement(Speed(), Speed(0), Acceleration(0), Duration(0), speed, distanceOffset),
    std::out_of_range);
  EXPECT_THROW(
    calculateAcceleratedLimitedMovement(Speed(0), Speed(), Acceleration(0), Duration(0), speed, distanceOffset),
    std::out_of_range);
  EXPECT_THROW(
    calculateAcceleratedLimitedMovement(Speed(0), Speed(0), Acceleration(), Duration(0), speed, distanceOffset),
    std::out_of_range);
  EXPECT_THROW(
    calculateAcceleratedLimitedMovement(Speed(0), Speed(0), Acceleration(0), Duration(), speed, distanceOffset),
    std::out_of_range);
}

TEST(PhysicsUnitTestsInputRangeChecks, calculateSpeedInAcceleratedMovementThrows)
{
  Speed speed;
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(), Acceleration(0), Duration(0), speed), std::out_of_range);
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(0), Acceleration(), Duration(0), speed), std::out_of_range);
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(0), Acceleration(0), Duration(), speed), std::out_of_range);
}

TEST(PhysicsUnitTestsInputRangeChecks, calculateTimeToCoverDistanceThrows)
{
  Duration requiredTime(0.);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(),
                                            cMaxSpeedOnAcceleration,
                                            Duration(0.),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeedOnAcceleration,
                                            Duration(),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeedOnAcceleration,
                                            Duration(0.),
                                            Acceleration(),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(
    calculateTimeToCoverDistance(
      Speed(0.), cMaxSpeedOnAcceleration, Duration(0.), Acceleration(0.), Acceleration(), Distance(1.), requiredTime),
    std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeedOnAcceleration,
                                            Duration(0.),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(),
                                            requiredTime),
               std::out_of_range);
}
#endif

} // namespace situation
} // namespace rss
} // namespace ad
