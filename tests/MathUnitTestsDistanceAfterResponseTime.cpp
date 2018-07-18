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

TEST(MathUnitTestsDistanceAfterResponseTime, negative_speed)
{
  rss_core::Distance coveredDistance = 0.;

  ASSERT_FALSE(rss_core::calculateDistanceAfterResponseTime(-10., 2, 1, coveredDistance));
}

TEST(MathUnitTestsDistanceAfterResponseTime, negative_time)
{
  rss_core::Distance coveredDistance = 0.;

  ASSERT_FALSE(rss_core::calculateDistanceAfterResponseTime(1., 2, -1, coveredDistance));
}

TEST(MathUnitTestsDistanceAfterResponseTime, acceleration_too_big)
{
  rss_core::Distance coveredDistance = 0.;

  ASSERT_FALSE(
    rss_core::calculateDistanceAfterResponseTime(1., rss_core::cMaximumAcceleration + 0.1, 1, coveredDistance));
}

TEST(MathUnitTestsDistanceAfterResponseTime, deceleration_too_small)
{
  rss_core::Distance coveredDistance = 0.;
  ASSERT_FALSE(rss_core::calculateDistanceAfterResponseTime(
    10., -1.1 * rss_core::cMaximumBreakingDeceleleration, 1, coveredDistance));
}

TEST(MathUnitTestsDistanceAfterResponseTime, deceleration_to_stop_equal_response_time)
{
  rss_core::Distance coveredDistanceA = 0.;
  ASSERT_TRUE(rss_core::calculateDistanceAfterResponseTime(4., -4., 1., coveredDistanceA));

  rss_core::Distance coveredDistanceB = 0.;
  ASSERT_TRUE(rss_core::calculateStoppingDistance(4., 4., coveredDistanceB));
  ASSERT_NEAR(coveredDistanceA, coveredDistanceB, cDoubleNear);
}

TEST(MathUnitTestsDistanceAfterResponseTime, checks_zero_acceleration)
{
  rss_core::Distance coveredDistance = 0.;
  ASSERT_TRUE(rss_core::calculateDistanceAfterResponseTime(4., 0., 1., coveredDistance));
  ASSERT_NEAR(coveredDistance, 4., cDoubleNear);
}

TEST(MathUnitTestsDistanceAfterResponseTime, checks_acceleration_time1s)
{
  rss_core::Distance coveredDistance = 0.;
  ASSERT_TRUE(rss_core::calculateDistanceAfterResponseTime(4., 2., 1., coveredDistance));
  ASSERT_NEAR(coveredDistance, 5., cDoubleNear);
}

TEST(MathUnitTestsDistanceAfterResponseTime, checks_acceleration_time2s)
{
  rss_core::Distance coveredDistance = 0.;
  ASSERT_TRUE(rss_core::calculateDistanceAfterResponseTime(4., 2., 2., coveredDistance));
  ASSERT_NEAR(coveredDistance, 12., cDoubleNear);
}
