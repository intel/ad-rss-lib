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

TEST(MathUnitTestsStoppingDistance, calculateDistanceOffset)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),     // currentTime
                          Speed(4.0),        // initialSpeed
                          Speed(36.0),       // maxSpeed
                          Acceleration(2.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(12.0));
}

TEST(MathUnitTestsStoppingDistance, calculateDistanceOffsetMaxSpeedReachedAtEnd)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),     // currentTime
                          Speed(4.0),        // initialSpeed
                          Speed(8.0),        // maxSpeed
                          Acceleration(2.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(12.0));
}

TEST(MathUnitTestsStoppingDistance, calculateDistanceOffsetMaxSpeedReachedBeforeEnd)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),     // currentTime
                          Speed(4.0),        // initialSpeed
                          Speed(6.0),        // maxSpeed
                          Acceleration(2.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(11.0));
}

TEST(MathUnitTestsStoppingDistance, calculateDistanceOffsetMaxSpeedReachedAtBeginning)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),     // currentTime
                          Speed(6.0),        // initialSpeed
                          Speed(6.0),        // maxSpeed
                          Acceleration(2.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(12.0));
}

TEST(MathUnitTestsStoppingDistance, calculateDistanceOffsetDecelerationToNonzeroSpeed)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),      // currentTime
                          Speed(6.0),         // initialSpeed
                          Speed(6.0),         // maxSpeed
                          Acceleration(-2.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(8.0));
}

TEST(MathUnitTestsStoppingDistance, calculateDistanceOffsetNoAccel)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),     // currentTime
                          Speed(4.0),        // initialSpeed
                          Speed(6.0),        // maxSpeed
                          Acceleration(0.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(8.0));
}

TEST(MathUnitTestsStoppingDistance, calculateDistanceOffsetDecelerationZeroSpeedAtEnd)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),      // currentTime
                          Speed(6.0),         // initialSpeed
                          Speed(6.0),         // maxSpeed
                          Acceleration(-3.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(6.0));
}

TEST(MathUnitTestsStoppingDistance, calculateDistanceOffsetDecelerationZeroSpeedBeforeEnd)
{
  Distance result;
  calculateDistanceOffset(Duration(3.0),      // currentTime
                          Speed(6.0),         // initialSpeed
                          Speed(6.0),         // maxSpeed
                          Acceleration(-3.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(6.0));
}

TEST(MathUnitTestsStoppingDistance, decelerationAfterResponseNotStoppedYet)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),      // currentTime
                          Speed(4.0),         // initialSpeed
                          Duration(1.0),      // responseTime
                          Speed(36.0),        // maxSpeed
                          Acceleration(2.0),  // aUntilResponseTime
                          Acceleration(-3.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(9.5));
}

TEST(MathUnitTestsStoppingDistance, decelerationAfterResponseStopped)
{
  Distance result;
  calculateDistanceOffset(Duration(5.0),      // currentTime
                          Speed(4.0),         // initialSpeed
                          Duration(1.0),      // responseTime
                          Speed(36.0),        // maxSpeed
                          Acceleration(2.0),  // aUntilResponseTime
                          Acceleration(-3.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(11.0));
}

TEST(MathUnitTestsStoppingDistance, accelerationAfterResponse)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),     // currentTime
                          Speed(4.0),        // initialSpeed
                          Duration(1.0),     // responseTime
                          Speed(36.0),       // maxSpeed
                          Acceleration(2.0), // aUntilResponseTime
                          Acceleration(2.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(12.0));
}

TEST(MathUnitTestsStoppingDistance, accelerationAfterResponseWithMaxSpeed)
{
  Distance result;
  calculateDistanceOffset(Duration(3.0),     // currentTime
                          Speed(4.0),        // initialSpeed
                          Duration(1.0),     // responseTime
                          Speed(8.0),        // maxSpeed
                          Acceleration(2.0), // aUntilResponseTime
                          Acceleration(2.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(20.0));
}

TEST(MathUnitTestsStoppingDistance, responseTimeNotReachedAccel)
{
  Distance result;
  calculateDistanceOffset(Duration(1.0),     // currentTime
                          Speed(4.0),        // initialSpeed
                          Duration(2.0),     // responseTime
                          Speed(8.0),        // maxSpeed
                          Acceleration(2.0), // aUntilResponseTime
                          Acceleration(0.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(5.0));
}

TEST(MathUnitTestsStoppingDistance, responseTimeNotReachedDecel)
{
  Distance result;
  calculateDistanceOffset(Duration(1.0),      // currentTime
                          Speed(4.0),         // initialSpeed
                          Duration(2.0),      // responseTime
                          Speed(8.0),         // maxSpeed
                          Acceleration(-2.0), // aUntilResponseTime
                          Acceleration(0.0),  // double acceleration
                          result);
  ASSERT_EQ(result, Distance(3.0));
}

TEST(MathUnitTestsStoppingDistance, responseTimeNotReachedAccelMaxSpeedReached)
{
  Distance result;
  calculateDistanceOffset(Duration(2.0),     // currentTime
                          Speed(4.0),        // initialSpeed
                          Duration(2.0),     // responseTime
                          Speed(6.0),        // maxSpeed
                          Acceleration(2.0), // aUntilResponseTime
                          Acceleration(0.0), // double acceleration
                          result);
  ASSERT_EQ(result, Distance(11.0));
}

TEST(MathUnitTestsStoppingDistance, maxTimeToStopInitialSpeedZero)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(0.),          // initialSpeed
                                  Duration(1.0),      // responseTime
                                  Speed(4.0),         // maxSpeed
                                  Acceleration(2.0),  // aUntilResponseTimeMax
                                  Acceleration(-2.0), // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(2.0));
}

TEST(MathUnitTestsStoppingDistance, maxTimeToStopInitialSpeedZeroDeceleration)
{
  Duration result;
  ASSERT_FALSE(calculateTimeToStop(Speed(0.),          // initialSpeed
                                   Duration(1.0),      // responseTime
                                   Speed(4.0),         // maxSpeed
                                   Acceleration(-2.0), // aUntilResponseTimeMax
                                   Acceleration(-2.0), // aAfterResponseTime
                                   result));
  ASSERT_EQ(result, Duration(0.0));
}

TEST(MathUnitTestsStoppingDistance, maxTimeToStopInitialSpeedDeceleration)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(2.),          // initialSpeed
                                  Duration(1.0),      // responseTime
                                  Speed(4.0),         // maxSpeed
                                  Acceleration(-1.0), // aUntilResponseTimeMax
                                  Acceleration(-2.0), // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(1.5));
}

TEST(MathUnitTestsStoppingDistance, maxTimeToStopInitialSpeedAccelZero)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(2.),          // initialSpeed
                                  Duration(1.0),      // responseTime
                                  Speed(4.0),         // maxSpeed
                                  Acceleration(0.0),  // aUntilResponseTimeMax
                                  Acceleration(-2.0), // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(2.0));
}

TEST(MathUnitTestsStoppingDistance, maxTimeToStopInitialSpeedAccelZeroZero)
{
  Duration result;
  ASSERT_FALSE(calculateTimeToStop(Speed(2.),         // initialSpeed
                                   Duration(1.0),     // responseTime
                                   Speed(4.0),        // maxSpeed
                                   Acceleration(0.0), // aUntilResponseTimeMax
                                   Acceleration(0.0), // aAfterResponseTime
                                   result));
  ASSERT_EQ(result, Duration(0.0));
}

TEST(MathUnitTestsStoppingDistance, maxTimeToStopInitialSpeedStopBeforeResponseTime)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(2.),          // initialSpeed
                                  Duration(1.0),      // responseTime
                                  Speed(4.0),         // maxSpeed
                                  Acceleration(-4.0), // aUntilResponseTimeMax
                                  Acceleration(0.0),  // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(0.5));
}

TEST(MathUnitTestsStoppingDistance, maxTimeToStopMaxSpeedReachedInResponseTime)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(2.),          // initialSpeed
                                  Duration(1.0),      // responseTime
                                  Speed(4.0),         // maxSpeed
                                  Acceleration(4.0),  // aUntilResponseTimeMax
                                  Acceleration(-2.0), // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(3.0));
}

} // namespace situation
} // namespace rss
} // namespace ad
