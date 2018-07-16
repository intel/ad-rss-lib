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

TEST(MathUnitTestsVelocityAfterResponseTime, negative_velocity)
{
  rss_core::Velocity resultingVelocity = 0.;
  ASSERT_FALSE(rss_core::calculateVelocityAfterResponseTime(-10., 1., 1., resultingVelocity));
}

TEST(MathUnitTestsVelocityAfterResponseTime, acceleration_too_big)
{
  rss_core::Velocity resultingVelocity = 0.;
  ASSERT_FALSE(
    rss_core::calculateVelocityAfterResponseTime(10., rss_core::cMaximumAcceleration + 0.1, 1., resultingVelocity));
}

TEST(MathUnitTestsVelocityAfterResponseTime, acceleration_too_small)
{
  rss_core::Velocity resultingVelocity = 0.;
  ASSERT_FALSE(rss_core::calculateVelocityAfterResponseTime(
    10., -1.1 * rss_core::cMaximumBreakingDeceleleration, 1, resultingVelocity));
}

TEST(MathUnitTestsVelocityAfterResponseTime, zero_deceleration)
{
  rss_core::Velocity startVelocity = 10.;
  rss_core::Velocity resultingVelocity = 0.;
  ASSERT_TRUE(rss_core::calculateVelocityAfterResponseTime(startVelocity, 0., 1., resultingVelocity));
  ASSERT_NEAR(startVelocity, resultingVelocity, cDoubleNear);
}

TEST(MathUnitTestsVelocityAfterResponseTime, checks_acceleration_1sec)
{
  rss_core::Velocity startVelocity = 10.;
  rss_core::Velocity resultingVelocity = 0.;
  ASSERT_TRUE(rss_core::calculateVelocityAfterResponseTime(startVelocity, 1., 1., resultingVelocity));
  ASSERT_NEAR(startVelocity + 1, resultingVelocity, cDoubleNear);
}

TEST(MathUnitTestsVelocityAfterResponseTime, checks_acceleration_2sec)
{
  rss_core::Velocity startVelocity = 10.;
  rss_core::Velocity resultingVelocity = 0.;
  ASSERT_TRUE(rss_core::calculateVelocityAfterResponseTime(startVelocity, 1., 2., resultingVelocity));
  ASSERT_NEAR(startVelocity + 2., resultingVelocity, cDoubleNear);
}

TEST(MathUnitTestsVelocityAfterResponseTime, negative_acceleration)
{
  rss_core::Velocity startVelocity = 10.;
  rss_core::Velocity resultingVelocity = 0.;
  ASSERT_TRUE(rss_core::calculateVelocityAfterResponseTime(startVelocity, -1., 2., resultingVelocity));
  ASSERT_NEAR(startVelocity - 2., resultingVelocity, cDoubleNear);
}

TEST(MathUnitTestsVelocityAfterResponseTime, negative_acceleration_till_stop)
{
  rss_core::Velocity startVelocity = 10.;
  rss_core::Velocity resultingVelocity = 0.;
  ASSERT_TRUE(rss_core::calculateVelocityAfterResponseTime(startVelocity, -1., 20., resultingVelocity));
  ASSERT_NEAR(0., resultingVelocity, cDoubleNear);
}
