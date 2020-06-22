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

Distance calculateDistanceOffsetInAcceleratedMovement(Speed const &speed,
                                                      Acceleration const &acceleration,
                                                      Duration const &duration);

bool calculateDistanceOffsetInAcceleratedLimitedMovement(Speed const &speed,
                                                         Speed const &maxSpeed,
                                                         Acceleration const &acceleration,
                                                         Duration const &duration,
                                                         Distance &distanceOffset);

bool calculateTimeForDistance(Speed const &currentSpeed,
                              Acceleration const &acceleration,
                              Distance const &distanceToCover,
                              Duration &requiredTime);

Speed calculateSpeedInAcceleratedMovement(Speed const &speed,
                                          Acceleration const &acceleration,
                                          Duration const &duration);

TEST(PhysicsUnitTestsInputRangeChecks, negative_speed)
{
  Duration requiredTime(0.);
  EXPECT_FALSE(calculateTimeForDistance(Speed(-1.), Acceleration(0.), Distance(1.), requiredTime));
}

TEST(PhysicsUnitTestsInputRangeChecks, speed_and_acceleration_zero)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeForDistance(Speed(0.), Acceleration(0.), Distance(1.), requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

#if INVALID_AD_PHYSICS_SPEED_THROWS_EXCEPTION && INVALID_AD_PHYSICS_ACCELERATION_THROWS_EXCEPTION                      \
  && INVALID_AD_PHYSICS_DURATION_THROWS_EXCEPTION && INVALID_AD_PHYSICS_DISTANCE_THROWS_EXCEPTION
TEST(PhysicsUnitTestsInputRangeChecks, calculateDistanceOffsetInAccerlatedMovementThrows)
{
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(), Acceleration(0), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(0), Acceleration(), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(0), Acceleration(0), Duration()), std::out_of_range);
}

TEST(PhysicsUnitTestsInputRangeChecks, calculateDistanceOffsetInAccerlatedLimitedMovementThrows)
{
  Distance result;
  EXPECT_THROW(
    calculateDistanceOffsetInAcceleratedLimitedMovement(Speed(), Speed(0), Acceleration(0), Duration(0), result),
    std::out_of_range);
  EXPECT_THROW(
    calculateDistanceOffsetInAcceleratedLimitedMovement(Speed(0), Speed(), Acceleration(0), Duration(0), result),
    std::out_of_range);
  EXPECT_THROW(
    calculateDistanceOffsetInAcceleratedLimitedMovement(Speed(0), Speed(0), Acceleration(), Duration(0), result),
    std::out_of_range);
  EXPECT_THROW(
    calculateDistanceOffsetInAcceleratedLimitedMovement(Speed(0), Speed(0), Acceleration(0), Duration(), result),
    std::out_of_range);
}

TEST(PhysicsUnitTestsInputRangeChecks, calculateSpeedInAcceleratedMovementThrows)
{
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(), Acceleration(0), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(0), Acceleration(), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(0), Acceleration(0), Duration()), std::out_of_range);
}

TEST(PhysicsUnitTestsInputRangeChecks, calculateTimeToCoverDistanceThrows)
{
  Duration requiredTime(0.);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(),
                                            cMaxSpeed,
                                            Duration(0.),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeed,
                                            Duration(),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeed,
                                            Duration(0.),
                                            Acceleration(),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(
                 Speed(0.), cMaxSpeed, Duration(0.), Acceleration(0.), Acceleration(), Distance(1.), requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeed,
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
