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
#include "rss_core/RSSFormulas.hpp"
#include "rss_core/RSSParameters.hpp"

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBreakingPattern, negative_velocity)
{
  rss_core::Distance coveredDistance = 0.;

  ASSERT_FALSE(rss_core::calculateDistanceAfterStatedBreakingPattern(-10., 1, coveredDistance));
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBreakingPattern, negative_time)
{
  rss_core::Distance coveredDistance = 0.;

  ASSERT_FALSE(rss_core::calculateDistanceAfterStatedBreakingPattern(1., -1, coveredDistance));
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBreakingPatternOtherVehicle, checks_100kmh)
{
  rss_core::Distance coveredDistance = 0.;
  ASSERT_TRUE(
    rss_core::calculateDistanceAfterStatedBreakingPatternOtherVehicle(kmhToMeterPerSec(100), coveredDistance));
  ASSERT_NEAR(coveredDistance, 213.74, cDoubleNear);
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBreakingPatternEgoVehicle, checks_100kmh)
{
  rss_core::Distance coveredDistance = 0.;
  ASSERT_TRUE(rss_core::calculateDistanceAfterStatedBreakingPatternEgoVehicle(kmhToMeterPerSec(100), coveredDistance));
  ASSERT_NEAR(coveredDistance, 151.81, cDoubleNear);
}
