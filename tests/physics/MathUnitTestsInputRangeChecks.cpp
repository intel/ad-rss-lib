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

Distance calculateDistanceOffsetInAccerlatedMovement(Speed const &speed,
                                                     Acceleration const &acceleration,
                                                     Duration const &duration);

bool calculateTimeForDistance(Speed const &currentSpeed,
                              Acceleration const &acceleration,
                              Distance const &distanceToCover,
                              Duration &requiredTime);

Speed calculateSpeedInAcceleratedMovement(Speed const &speed,
                                          Acceleration const &acceleration,
                                          Duration const &duration);

TEST(MathUnitTestsInputRangeChecks, negative_speed)
{
  Duration requiredTime(0.);
  EXPECT_FALSE(calculateTimeForDistance(Speed(-1.), Acceleration(0.), Distance(1.), requiredTime));
}

TEST(MathUnitTestsInputRangeChecks, speed_and_acceleration_zero)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeForDistance(Speed(0.), Acceleration(0.), Distance(1.), requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

TEST(MathUnitTestsInputRangeChecks, calculateDistanceOffsetInAccerlatedMovementThrows)
{
  EXPECT_THROW(calculateDistanceOffsetInAccerlatedMovement(Speed(), Acceleration(0), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAccerlatedMovement(Speed(0), Acceleration(), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAccerlatedMovement(Speed(0), Acceleration(0), Duration()), std::out_of_range);
}

TEST(MathUnitTestsInputRangeChecks, calculateSpeedInAcceleratedMovementThrows)
{
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(), Acceleration(0), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(0), Acceleration(), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(0), Acceleration(0), Duration()), std::out_of_range);
}

TEST(MathUnitTestsInputRangeChecks, calculateTimeToCoverDistanceThrows)
{
  Duration requiredTime(0.);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(),
                                            Duration(0.),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            Duration(),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            Duration(0.),
                                            Acceleration(),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(
    calculateTimeToCoverDistance(Speed(0.), Duration(0.), Acceleration(0.), Acceleration(), Distance(1.), requiredTime),
    std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            Duration(0.),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(),
                                            requiredTime),
               std::out_of_range);
}

} // namespace physics
} // namespace ad_rss
