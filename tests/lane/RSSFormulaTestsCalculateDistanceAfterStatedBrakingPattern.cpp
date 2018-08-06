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

#include "TestSupport.hpp"
#include "lane/RSSFormulas.hpp"

namespace rss {
namespace lane {

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPattern, negative_speed)
{
  Distance coveredDistance = 0.;

  ASSERT_FALSE(calculateDistanceAfterStatedBrakingPattern(-10., 1, 3.5, 4., coveredDistance));
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPattern, negative_time)
{
  Distance coveredDistance = 0.;

  ASSERT_FALSE(calculateDistanceAfterStatedBrakingPattern(1., -1, 3.5, 4., coveredDistance));
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBreakingPatternOtherVehicle, leading_ego_checks_100kmh)
{
  Distance coveredDistance = 0.;
  ASSERT_TRUE(calculateDistanceAfterStatedBrakingPattern(kmhToMeterPerSec(100),
                                                         cResponseTimeOtherVehicles,
                                                         cMaximumLongitudinalAcceleration,
                                                         cMinimumLongitudinalBrakingDeceleleration,
                                                         coveredDistance));
  ASSERT_NEAR(coveredDistance, 213.74, cDoubleNear);
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPatternEgoVehicle, leading_other_checks_100kmh)
{
  Distance coveredDistance = 0.;
  ASSERT_TRUE(calculateDistanceAfterStatedBrakingPattern(kmhToMeterPerSec(100),
                                                         cResponseTimeEgoVehicle,
                                                         cMaximumLongitudinalAcceleration,
                                                         cMinimumLongitudinalBrakingDeceleleration,
                                                         coveredDistance));
  ASSERT_NEAR(coveredDistance, 151.81, cDoubleNear);
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPatternEgoVehicle, leading_other_checks_500kmh)
{
  Distance coveredDistance = 0.;
  ASSERT_TRUE(calculateDistanceAfterStatedBrakingPattern(
    kmhToMeterPerSec(50), cResponseTimeOtherVehicles, 2., 4., coveredDistance));
  ASSERT_NEAR(coveredDistance, 71.77, cDoubleNear);
}

} // namespace lane
} // namespace rss
