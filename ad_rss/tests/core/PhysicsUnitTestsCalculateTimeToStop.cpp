
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

TEST(PhysicsUnitTestsCalculateTimeToStop, maxTimeToStopInitialSpeedZero)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(0.),          // initialSpeed
                                  Duration(1.0),      // response_time
                                  Speed(4.0),         // max_speed_on_acceleration
                                  Acceleration(2.0),  // aUntilResponseTimeMax
                                  Acceleration(-2.0), // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(2.0));
}

TEST(PhysicsUnitTestsCalculateTimeToStop, maxTimeToStopInitialSpeedZeroDeceleration)
{
  Duration result;
  ASSERT_FALSE(calculateTimeToStop(Speed(0.),          // initialSpeed
                                   Duration(1.0),      // response_time
                                   Speed(4.0),         // max_speed_on_acceleration
                                   Acceleration(-2.0), // aUntilResponseTimeMax
                                   Acceleration(-2.0), // aAfterResponseTime
                                   result));
  ASSERT_EQ(result, Duration(0.0));
}

TEST(PhysicsUnitTestsCalculateTimeToStop, maxTimeToStopInitialSpeedDeceleration)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(2.),          // initialSpeed
                                  Duration(1.0),      // response_time
                                  Speed(4.0),         // max_speed_on_acceleration
                                  Acceleration(-1.0), // aUntilResponseTimeMax
                                  Acceleration(-2.0), // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(1.5));
}

TEST(PhysicsUnitTestsCalculateTimeToStop, maxTimeToStopInitialSpeedAccelZero)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(2.),          // initialSpeed
                                  Duration(1.0),      // response_time
                                  Speed(4.0),         // max_speed_on_acceleration
                                  Acceleration(0.0),  // aUntilResponseTimeMax
                                  Acceleration(-2.0), // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(2.0));
}

TEST(PhysicsUnitTestsCalculateTimeToStop, maxTimeToStopInitialSpeedAccelZeroZero)
{
  Duration result;
  ASSERT_FALSE(calculateTimeToStop(Speed(2.),         // initialSpeed
                                   Duration(1.0),     // response_time
                                   Speed(4.0),        // max_speed_on_acceleration
                                   Acceleration(0.0), // aUntilResponseTimeMax
                                   Acceleration(0.0), // aAfterResponseTime
                                   result));
  ASSERT_EQ(result, Duration(0.0));
}

TEST(PhysicsUnitTestsCalculateTimeToStop, maxTimeToStopInitialSpeedStopBeforeResponseTime)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(2.),          // initialSpeed
                                  Duration(1.0),      // response_time
                                  Speed(4.0),         // max_speed_on_acceleration
                                  Acceleration(-4.0), // aUntilResponseTimeMax
                                  Acceleration(0.0),  // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(0.5));
}

TEST(PhysicsUnitTestsCalculateTimeToStop, maxTimeToStopMaxSpeedOnAccelerationReachedInResponseTime)
{
  Duration result;
  ASSERT_TRUE(calculateTimeToStop(Speed(2.),          // initialSpeed
                                  Duration(1.0),      // response_time
                                  Speed(4.0),         // max_speed_on_acceleration
                                  Acceleration(4.0),  // aUntilResponseTimeMax
                                  Acceleration(-2.0), // aAfterResponseTime
                                  result));
  ASSERT_EQ(result, Duration(3.0));
}

} // namespace core
} // namespace rss
} // namespace ad
