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

TEST(MathUnitTestsStoppingDistance, decelerationAfterResponseNotStoppedYet)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffset(Duration(2.0),      // currentTime
                                      Speed(4.0),         // initialSpeed
                                      Duration(1.0),      // responseTime
                                      Speed(36.0),        // maxSpeed
                                      Acceleration(2.0),  // aUntilResponseTime
                                      Acceleration(-3.0), // double acceleration
                                      result));
  ASSERT_EQ(result, Distance(9.5));
}

TEST(MathUnitTestsStoppingDistance, decelerationAfterResponseStopped)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffset(Duration(5.0),      // currentTime
                                      Speed(4.0),         // initialSpeed
                                      Duration(1.0),      // responseTime
                                      Speed(36.0),        // maxSpeed
                                      Acceleration(2.0),  // aUntilResponseTime
                                      Acceleration(-3.0), // double acceleration
                                      result));
  ASSERT_EQ(result, Distance(11.0));
}

TEST(MathUnitTestsStoppingDistance, accelerationAfterResponse)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffset(Duration(2.0),     // currentTime
                                      Speed(4.0),        // initialSpeed
                                      Duration(1.0),     // responseTime
                                      Speed(36.0),       // maxSpeed
                                      Acceleration(2.0), // aUntilResponseTime
                                      Acceleration(2.0), // double acceleration
                                      result));
  ASSERT_EQ(result, Distance(12.0));
}

TEST(MathUnitTestsStoppingDistance, accelerationAfterResponseWithMaxSpeed)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffset(Duration(3.0),     // currentTime
                                      Speed(4.0),        // initialSpeed
                                      Duration(1.0),     // responseTime
                                      Speed(8.0),        // maxSpeed
                                      Acceleration(2.0), // aUntilResponseTime
                                      Acceleration(2.0), // double acceleration
                                      result));
  ASSERT_EQ(result, Distance(20.0));
}

TEST(MathUnitTestsStoppingDistance, responseTimeNotReachedAccel)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffset(Duration(1.0),     // currentTime
                                      Speed(4.0),        // initialSpeed
                                      Duration(2.0),     // responseTime
                                      Speed(8.0),        // maxSpeed
                                      Acceleration(2.0), // aUntilResponseTime
                                      Acceleration(0.0), // double acceleration
                                      result));
  ASSERT_EQ(result, Distance(5.0));
}

TEST(MathUnitTestsStoppingDistance, responseTimeNotReachedDecel)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffset(Duration(1.0),      // currentTime
                                      Speed(4.0),         // initialSpeed
                                      Duration(2.0),      // responseTime
                                      Speed(8.0),         // maxSpeed
                                      Acceleration(-2.0), // aUntilResponseTime
                                      Acceleration(0.0),  // double acceleration
                                      result));
  ASSERT_EQ(result, Distance(3.0));
}

TEST(MathUnitTestsStoppingDistance, responseTimeNotReachedAccelMaxSpeedReached)
{
  Distance result;
  ASSERT_TRUE(calculateDistanceOffset(Duration(2.0),     // currentTime
                                      Speed(4.0),        // initialSpeed
                                      Duration(2.0),     // responseTime
                                      Speed(6.0),        // maxSpeed
                                      Acceleration(2.0), // aUntilResponseTime
                                      Acceleration(0.0), // double acceleration
                                      result));
  ASSERT_EQ(result, Distance(11.0));
}

} // namespace situation
} // namespace rss
} // namespace ad
