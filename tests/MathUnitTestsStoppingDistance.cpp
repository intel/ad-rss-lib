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

TEST(MathUnitTestsStoppingDistance, negative_velocity)
{
  rss_core::Distance stoppingDistance = 0.;
  ASSERT_FALSE(rss_core::calculateStoppingDistance(-10., 4., stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, negative_deceleration)
{
  rss_core::Distance stoppingDistance = 0.;
  ASSERT_FALSE(rss_core::calculateStoppingDistance(10., -4., stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, zero_deceleration)
{
  rss_core::Distance stoppingDistance = 0.;
  ASSERT_FALSE(rss_core::calculateStoppingDistance(10., 0., stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, deceleration_too_big)
{
  rss_core::Distance stoppingDistance = 0.;
  ASSERT_FALSE(rss_core::calculateStoppingDistance(10., rss_core::cMaximumAcceleration + 0.001, stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, deceleration_too_small)
{
  rss_core::Distance stoppingDistance = 0.;
  ASSERT_FALSE(
    rss_core::calculateStoppingDistance(10., rss_core::cMinimumBreakingDeceleleration - 0.001, stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, checks_100kmh)
{
  rss_core::Distance stoppingDistance = 0.;
  ASSERT_TRUE(rss_core::calculateStoppingDistance(kmhToMeterPerSec(100.), 6., stoppingDistance));
  ASSERT_NEAR(stoppingDistance, 64.3, cDoubleNear);
}

TEST(MathUnitTestsStoppingDistance, checks_0kmh)
{
  rss_core::Distance stoppingDistance = 0.;
  ASSERT_TRUE(rss_core::calculateStoppingDistance(kmhToMeterPerSec(0.), 6., stoppingDistance));
  ASSERT_NEAR(stoppingDistance, 0, cDoubleNear);
}
