// ----------------- BEGIN LICENSE BLOCK ---------------------------------
//
// Copyright (c) 2018-2019 Intel Corporation
//
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice,
//    this list of conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice,
//    this list of conditions and the following disclaimer in the documentation
//    and/or other materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors
//    may be used to endorse or promote products derived from this software without
//    specific prior written permission.
//
//    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
//    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
//    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
//    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
//    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
//    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//    POSSIBILITY OF SUCH DAMAGE.
//
// ----------------- END LICENSE BLOCK -----------------------------------

#include "TestSupport.hpp"
#include "situation/RSSFormulas.hpp"

namespace ad_rss {
namespace situation {

using namespace ::ad_rss::physics;

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

} // namespace situation
} // namespace ad_rss
