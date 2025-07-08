// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/core/Physics.hpp"

namespace ad {
namespace rss {
namespace core {

TEST(PhysicsUnitTestsSpeedAndDistanceOffset, decelerationAfterResponseNotStoppedYet)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(2.0),      // currentTime
                                              Speed(4.0),         // initialSpeed
                                              Duration(1.0),      // response_time
                                              Speed(36.0),        // max_speed_on_acceleration
                                              Acceleration(2.0),  // aUntilResponseTime
                                              Acceleration(-3.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(9.5));
  ASSERT_EQ(speed, Speed(3.));
}

TEST(PhysicsUnitTestsSpeedAndDistanceOffset, decelerationAfterResponseStopped)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(5.0),      // currentTime
                                              Speed(4.0),         // initialSpeed
                                              Duration(1.0),      // response_time
                                              Speed(36.0),        // max_speed_on_acceleration
                                              Acceleration(2.0),  // aUntilResponseTime
                                              Acceleration(-3.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(11.0));
  ASSERT_EQ(speed, Speed(0.));
}

TEST(PhysicsUnitTestsSpeedAndDistanceOffset, accelerationAfterResponse)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(2.0),     // currentTime
                                              Speed(4.0),        // initialSpeed
                                              Duration(1.0),     // response_time
                                              Speed(36.0),       // max_speed_on_acceleration
                                              Acceleration(2.0), // aUntilResponseTime
                                              Acceleration(2.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(12.0));
  ASSERT_EQ(speed, Speed(8.));
}

TEST(PhysicsUnitTestsSpeedAndDistanceOffset, accelerationAfterResponseWithMaxSpeedOnAcceleration)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(3.0),     // currentTime
                                              Speed(4.0),        // initialSpeed
                                              Duration(1.0),     // response_time
                                              Speed(8.0),        // max_speed_on_acceleration
                                              Acceleration(2.0), // aUntilResponseTime
                                              Acceleration(2.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(20.0));
  ASSERT_EQ(speed, Speed(8.));
}

TEST(PhysicsUnitTestsSpeedAndDistanceOffset, responseTimeNotReachedAccel)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(1.0),     // currentTime
                                              Speed(4.0),        // initialSpeed
                                              Duration(2.0),     // response_time
                                              Speed(8.0),        // max_speed_on_acceleration
                                              Acceleration(2.0), // aUntilResponseTime
                                              Acceleration(0.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(5.0));
  ASSERT_EQ(speed, Speed(6.));
}

TEST(PhysicsUnitTestsSpeedAndDistanceOffset, responseTimeNotReachedDecel)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(1.0),      // currentTime
                                              Speed(4.0),         // initialSpeed
                                              Duration(2.0),      // response_time
                                              Speed(8.0),         // max_speed_on_acceleration
                                              Acceleration(-2.0), // aUntilResponseTime
                                              Acceleration(0.0),  // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(3.0));
  ASSERT_EQ(speed, Speed(2.));
}

TEST(PhysicsUnitTestsSpeedAndDistanceOffset, responseTimeNotReachedAccelMaxSpeedOnAccelerationReached)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(2.0),     // currentTime
                                              Speed(4.0),        // initialSpeed
                                              Duration(2.0),     // response_time
                                              Speed(6.0),        // max_speed_on_acceleration
                                              Acceleration(2.0), // aUntilResponseTime
                                              Acceleration(0.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(11.0));
  ASSERT_EQ(speed, Speed(6.));
}

} // namespace core
} // namespace rss
} // namespace ad
