// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2020 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/situation/RssFormulas.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(RssFormulaTestsCalculateDistanceAfterStatedBrakingPattern, longitudinal_negative_speed)
{
  Distance distanceOffset(0.);

  ASSERT_FALSE(calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(
    Speed(-10.), cMaxSpeedOnAcceleration, Duration(1), Acceleration(3.5), Acceleration(-4.), distanceOffset));
}

TEST(RssFormulaTestsCalculateDistanceAfterStatedBrakingPattern, lateral_negative_speed)
{
  std::vector<double> expectedDistanceOffset = {-8., -13., -14., -10., 0., 18., 42., 72.};
  for (auto responseTime = 1u; responseTime < 9u; responseTime++)
  {
    Distance distanceOffsetA(0.);
    ASSERT_TRUE(calculateLateralDistanceOffsetAfterStatedBrakingPattern(
      Speed(-10.), Duration(responseTime), Acceleration(3.5), Acceleration(-4.), distanceOffsetA));
    Distance distanceOffsetB(0.);
    ASSERT_TRUE(calculateLateralDistanceOffsetAfterStatedBrakingPattern(
      Speed(10.), Duration(responseTime), Acceleration(-3.5), Acceleration(4.), distanceOffsetB));
    ASSERT_NEAR(static_cast<double>(distanceOffsetA), -static_cast<double>(distanceOffsetB), cDoubleNear);
    ASSERT_NEAR(expectedDistanceOffset[responseTime - 1u], static_cast<double>(distanceOffsetA), 1.);
  }
}

TEST(RssFormulaTestsCalculateDistanceAfterStatedBrakingPattern, negative_time)
{
  Distance distanceOffset(0.);

  EXPECT_FALSE(calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(
    Speed(1.), cMaxSpeedOnAcceleration, Duration(-1), Acceleration(3.5), Acceleration(4.), distanceOffset));
  EXPECT_FALSE(calculateLateralDistanceOffsetAfterStatedBrakingPattern(
    Speed(1.), Duration(-1), Acceleration(3.5), Acceleration(4.), distanceOffset));
}

TEST(RssFormulaTestsCalculateDistanceAfterStatedBreakingPatternOtherVehicle, leading_ego_checks_100kmh)
{
  Distance distanceOffset(0.);
  ASSERT_TRUE(calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(kmhToMeterPerSec(100),
                                                                           cMaxSpeedOnAcceleration,
                                                                           cResponseTimeOtherVehicles,
                                                                           cMaximumLongitudinalAcceleration,
                                                                           cMinimumLongitudinalBrakingDeceleleration,
                                                                           distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 213.74, cDoubleNear);
}

TEST(RssFormulaTestsCalculateDistanceAfterStatedBrakingPatternEgoVehicle, leading_other_checks_100kmh)
{
  Distance distanceOffset(0.);
  ASSERT_TRUE(calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(kmhToMeterPerSec(100),
                                                                           cMaxSpeedOnAcceleration,
                                                                           cResponseTimeEgoVehicle,
                                                                           cMaximumLongitudinalAcceleration,
                                                                           cMinimumLongitudinalBrakingDeceleleration,
                                                                           distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 151.81, cDoubleNear);
}

TEST(RssFormulaTestsCalculateDistanceAfterStatedBrakingPatternEgoVehicle, leading_other_checks_50kmh)
{
  Distance distanceOffset(0.);
  ASSERT_TRUE(calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(kmhToMeterPerSec(50),
                                                                           cMaxSpeedOnAcceleration,
                                                                           cResponseTimeOtherVehicles,
                                                                           Acceleration(2.),
                                                                           Acceleration(-4.),
                                                                           distanceOffset));
  ASSERT_NEAR(static_cast<double>(distanceOffset), 71.77, cDoubleNear);
}

} // namespace situation
} // namespace rss
} // namespace ad
