// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (C) 2018-2021 Intel Corporation
//
// SPDX-License-Identifier: LGPL-2.1-only
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "ad/rss/structured/RssFormulas.hpp"

namespace ad {
namespace rss {
namespace structured {

TEST(RssFormulaTestsCalculateDistanceAfterStatedBrakingPattern, longitudinal_negative_speed)
{
  Distance distanceOffset(0.);

  ASSERT_FALSE(calculateLongitudinalDistanceOffsetAfterStatedBrakingPattern(
    Speed(-10.), cMaxSpeedOnAcceleration, Duration(1), Acceleration(3.5), Acceleration(-4.), distanceOffset));
}

TEST(RssFormulaTestsCalculateDistanceAfterStatedBrakingPattern, lateral_negative_speed)
{
  std::vector<double> expectedDistanceOffset = {-8., -13., -14., -10., 0., 18., 42., 72.};
  for (auto response_time = 1u; response_time < 9u; response_time++)
  {
    Distance distanceOffsetA(0.);
    ASSERT_TRUE(calculateLateralDistanceOffsetAfterStatedBrakingPattern(
      Speed(-10.), Duration(response_time), Acceleration(3.5), Acceleration(-4.), distanceOffsetA));
    Distance distanceOffsetB(0.);
    ASSERT_TRUE(calculateLateralDistanceOffsetAfterStatedBrakingPattern(
      Speed(10.), Duration(response_time), Acceleration(-3.5), Acceleration(4.), distanceOffsetB));
    ASSERT_NEAR(distanceOffsetA.mDistance, -distanceOffsetB.mDistance, cDoubleNear);
    ASSERT_NEAR(expectedDistanceOffset[response_time - 1u], distanceOffsetA.mDistance, 1.);
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
  ASSERT_NEAR(distanceOffset.mDistance, 213.74, cDoubleNear);
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
  ASSERT_NEAR(distanceOffset.mDistance, 151.81, cDoubleNear);
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
  ASSERT_NEAR(distanceOffset.mDistance, 71.77, cDoubleNear);
}

} // namespace structured
} // namespace rss
} // namespace ad
