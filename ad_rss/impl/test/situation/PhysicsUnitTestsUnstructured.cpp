// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2019-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/situation/Physics.hpp"
#include "ad/rss/unstructured/Geometry.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(MathUnitTestsSpeedAndDistanceOffset, decelerationAfterResponseNotStoppedYet)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(2.0),      // currentTime
                                              Speed(4.0),         // initialSpeed
                                              Duration(1.0),      // responseTime
                                              Speed(36.0),        // maxSpeedOnAcceleration
                                              Acceleration(2.0),  // aUntilResponseTime
                                              Acceleration(-3.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(9.5));
  ASSERT_EQ(speed, Speed(3.));
}

TEST(MathUnitTestsSpeedAndDistanceOffset, decelerationAfterResponseStopped)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(5.0),      // currentTime
                                              Speed(4.0),         // initialSpeed
                                              Duration(1.0),      // responseTime
                                              Speed(36.0),        // maxSpeedOnAcceleration
                                              Acceleration(2.0),  // aUntilResponseTime
                                              Acceleration(-3.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(11.0));
  ASSERT_EQ(speed, Speed(0.));
}

TEST(MathUnitTestsSpeedAndDistanceOffset, accelerationAfterResponse)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(2.0),     // currentTime
                                              Speed(4.0),        // initialSpeed
                                              Duration(1.0),     // responseTime
                                              Speed(36.0),       // maxSpeedOnAcceleration
                                              Acceleration(2.0), // aUntilResponseTime
                                              Acceleration(2.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(12.0));
  ASSERT_EQ(speed, Speed(8.));
}

TEST(MathUnitTestsSpeedAndDistanceOffset, accelerationAfterResponseWithMaxSpeedOnAcceleration)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(3.0),     // currentTime
                                              Speed(4.0),        // initialSpeed
                                              Duration(1.0),     // responseTime
                                              Speed(8.0),        // maxSpeedOnAcceleration
                                              Acceleration(2.0), // aUntilResponseTime
                                              Acceleration(2.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(20.0));
  ASSERT_EQ(speed, Speed(8.));
}

TEST(MathUnitTestsSpeedAndDistanceOffset, responseTimeNotReachedAccel)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(1.0),     // currentTime
                                              Speed(4.0),        // initialSpeed
                                              Duration(2.0),     // responseTime
                                              Speed(8.0),        // maxSpeedOnAcceleration
                                              Acceleration(2.0), // aUntilResponseTime
                                              Acceleration(0.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(5.0));
  ASSERT_EQ(speed, Speed(6.));
}

TEST(MathUnitTestsSpeedAndDistanceOffset, responseTimeNotReachedDecel)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(1.0),      // currentTime
                                              Speed(4.0),         // initialSpeed
                                              Duration(2.0),      // responseTime
                                              Speed(8.0),         // maxSpeedOnAcceleration
                                              Acceleration(-2.0), // aUntilResponseTime
                                              Acceleration(0.0),  // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(3.0));
  ASSERT_EQ(speed, Speed(2.));
}

TEST(MathUnitTestsSpeedAndDistanceOffset, responseTimeNotReachedAccelMaxSpeedOnAccelerationReached)
{
  Speed speed;
  Distance distanceOffset;
  ASSERT_TRUE(calculateSpeedAndDistanceOffset(Duration(2.0),     // currentTime
                                              Speed(4.0),        // initialSpeed
                                              Duration(2.0),     // responseTime
                                              Speed(6.0),        // maxSpeedOnAcceleration
                                              Acceleration(2.0), // aUntilResponseTime
                                              Acceleration(0.0), // double acceleration
                                              speed,
                                              distanceOffset));
  ASSERT_EQ(distanceOffset, Distance(11.0));
  ASSERT_EQ(speed, Speed(6.));
}

} // namespace situation
} // namespace rss
} // namespace ad
