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

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPattern, longitudinal_negative_speed)
{
  Distance distanceOffset = 0.;

  ASSERT_FALSE(calculateDistanceOffsetAfterStatedBrakingPattern(
    CoordinateSystemAxis::Longitudinal, -10., 1, 3.5, 4., distanceOffset));
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPattern, lateral_negative_speed)
{
  std::vector<Distance> expectedDistanceOffset = {-8., -13., -14., -10., 0., 18., 42., 72.};
  for (auto responseTime = 1u; responseTime < 9u; responseTime++)
  {
    Distance distanceOffsetA = 0.;
    ASSERT_TRUE(calculateDistanceOffsetAfterStatedBrakingPattern(
      CoordinateSystemAxis::Lateral, -10., responseTime, 3.5, 4., distanceOffsetA));
    Distance distanceOffsetB = 0.;
    ASSERT_TRUE(calculateDistanceOffsetAfterStatedBrakingPattern(
      CoordinateSystemAxis::Lateral, 10., responseTime, -3.5, -4., distanceOffsetB));
    ASSERT_NEAR(distanceOffsetA, -distanceOffsetB, cDoubleNear);
    ASSERT_NEAR(expectedDistanceOffset[responseTime - 1u], distanceOffsetA, 1.);
  }
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPattern, negative_time)
{
  Distance distanceOffset = 0.;

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    ASSERT_FALSE(calculateDistanceOffsetAfterStatedBrakingPattern(axis, 1., -1, 3.5, 4., distanceOffset));
  }
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBreakingPatternOtherVehicle, leading_ego_checks_100kmh)
{
  Distance distanceOffset = 0.;
  ASSERT_TRUE(calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Longitudinal,
                                                               kmhToMeterPerSec(100),
                                                               cResponseTimeOtherVehicles,
                                                               cMaximumLongitudinalAcceleration,
                                                               cMinimumLongitudinalBrakingDeceleleration,
                                                               distanceOffset));
  ASSERT_NEAR(distanceOffset, 213.74, cDoubleNear);
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPatternEgoVehicle, leading_other_checks_100kmh)
{
  Distance distanceOffset = 0.;
  ASSERT_TRUE(calculateDistanceOffsetAfterStatedBrakingPattern(CoordinateSystemAxis::Longitudinal,
                                                               kmhToMeterPerSec(100),
                                                               cResponseTimeEgoVehicle,
                                                               cMaximumLongitudinalAcceleration,
                                                               cMinimumLongitudinalBrakingDeceleleration,
                                                               distanceOffset));
  ASSERT_NEAR(distanceOffset, 151.81, cDoubleNear);
}

TEST(RSSFormulaTestsCalculateDistanceAfterStatedBrakingPatternEgoVehicle, leading_other_checks_500kmh)
{
  Distance distanceOffset = 0.;
  ASSERT_TRUE(calculateDistanceOffsetAfterStatedBrakingPattern(
    CoordinateSystemAxis::Longitudinal, kmhToMeterPerSec(50), cResponseTimeOtherVehicles, 2., 4., distanceOffset));
  ASSERT_NEAR(distanceOffset, 71.77, cDoubleNear);
}

} // namespace lane
} // namespace rss
