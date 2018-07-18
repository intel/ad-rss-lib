// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// INTEL CONFIDENTIAL
//
// Copyright (c) 2018 Intel Corporation
//
// This software and the related documents are Intel copyrighted materials, and
// your use of them is governed by the express license under which they were
// provided to you (License). Unless the License provides otherwise, you may not
// use, modify, copy, publish, distribute, disclose or transmit this software or
// the related documents without Intel's prior written permission.
//
// This software and the related documents are provided as is, with no express or
// implied warranties, other than those that are expressly stated in the License.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include <gtest/gtest.h>
#include "TestSupport.hpp"
#include "rss_core/Math.hpp"
#include "rss_core/RSSParameters.hpp"

TEST(MathUnitTestsSpeedAfterResponseTime, negative_speed)
{
  rss_core::Speed resultingSpeed = 0.;
  ASSERT_FALSE(rss_core::calculateSpeedAfterResponseTime(-10., 1., 1., resultingSpeed));
}

TEST(MathUnitTestsSpeedAfterResponseTime, acceleration_too_big)
{
  rss_core::Speed resultingSpeed = 0.;
  ASSERT_FALSE(
    rss_core::calculateSpeedAfterResponseTime(10., rss_core::cMaximumAcceleration + 0.1, 1., resultingSpeed));
}

TEST(MathUnitTestsSpeedAfterResponseTime, acceleration_too_small)
{
  rss_core::Speed resultingSpeed = 0.;
  ASSERT_FALSE(
    rss_core::calculateSpeedAfterResponseTime(10., -1.1 * rss_core::cMaximumBreakingDeceleleration, 1, resultingSpeed));
}

TEST(MathUnitTestsSpeedAfterResponseTime, zero_deceleration)
{
  rss_core::Speed startSpeed = 10.;
  rss_core::Speed resultingSpeed = 0.;
  ASSERT_TRUE(rss_core::calculateSpeedAfterResponseTime(startSpeed, 0., 1., resultingSpeed));
  ASSERT_NEAR(startSpeed, resultingSpeed, cDoubleNear);
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_1sec)
{
  rss_core::Speed startSpeed = 10.;
  rss_core::Speed resultingSpeed = 0.;
  ASSERT_TRUE(rss_core::calculateSpeedAfterResponseTime(startSpeed, 1., 1., resultingSpeed));
  ASSERT_NEAR(startSpeed + 1, resultingSpeed, cDoubleNear);
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_2sec)
{
  rss_core::Speed startSpeed = 10.;
  rss_core::Speed resultingSpeed = 0.;
  ASSERT_TRUE(rss_core::calculateSpeedAfterResponseTime(startSpeed, 1., 2., resultingSpeed));
  ASSERT_NEAR(startSpeed + 2., resultingSpeed, cDoubleNear);
}

TEST(MathUnitTestsSpeedAfterResponseTime, negative_acceleration)
{
  rss_core::Speed startSpeed = 10.;
  rss_core::Speed resultingSpeed = 0.;
  ASSERT_TRUE(rss_core::calculateSpeedAfterResponseTime(startSpeed, -1., 2., resultingSpeed));
  ASSERT_NEAR(startSpeed - 2., resultingSpeed, cDoubleNear);
}

TEST(MathUnitTestsSpeedAfterResponseTime, negative_acceleration_till_stop)
{
  rss_core::Speed startSpeed = 10.;
  rss_core::Speed resultingSpeed = 0.;
  ASSERT_TRUE(rss_core::calculateSpeedAfterResponseTime(startSpeed, -1., 20., resultingSpeed));
  ASSERT_NEAR(0., resultingSpeed, cDoubleNear);
}
