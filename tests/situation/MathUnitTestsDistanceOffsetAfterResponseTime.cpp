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
#include "situation/Math.hpp"

namespace ad {
namespace rss {
namespace situation {

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, longitudinal_negative_speed)
{
  Distance distanceOffset(0.);

  ASSERT_FALSE(calculateDistanceOffsetAfterResponseTime(
    CoordinateSystemAxis::Longitudinal, Speed(-10.), Acceleration(2), Duration(1), distanceOffset));
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, lateral_negative_speed_and_negative_acceleration)
{
  Distance distanceOffsetA(0.);
  Distance distanceOffsetB(0.);

  for (auto responseTime = 1; responseTime < 20; responseTime++)
  {
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      CoordinateSystemAxis::Lateral, Speed(-10.), Acceleration(2), Duration(responseTime), distanceOffsetA));
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(
      CoordinateSystemAxis::Lateral, Speed(10.), Acceleration(-2), Duration(responseTime), distanceOffsetB));

    ASSERT_NEAR(-static_cast<double>(distanceOffsetA), static_cast<double>(distanceOffsetB), cDoubleNear);

    Distance expectedResult(responseTime * responseTime - 10 * responseTime);
    ASSERT_NEAR(static_cast<double>(expectedResult), static_cast<double>(distanceOffsetA), cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, negative_time)
{
  Distance distanceOffset(0.);

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    EXPECT_FALSE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(1.), Acceleration(2.), Duration(-1.), distanceOffset));
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, deceleration_to_stop_equal_response_time_longitudinal)
{
  Distance distanceOffsetB(0.);
  ASSERT_TRUE(calculateStoppingDistance(Speed(4.), Acceleration(4.), distanceOffsetB));

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffsetA(0.);
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(4.), Acceleration(-4.), Duration(10.), distanceOffsetA));

    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(static_cast<double>(distanceOffsetA), static_cast<double>(distanceOffsetB), cDoubleNear);
    }
    else
    {
      ASSERT_GT(std::fabs(distanceOffsetA - distanceOffsetB), Distance(10.));
    }
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_zero_acceleration)
{
  Distance distanceOffset(0.);

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(4.), Acceleration(0.), Duration(1.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 4., cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_acceleration_time1s)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffset(0.);
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(4.), Acceleration(2.), Duration(1.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 5., cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_acceleration_time2s)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffset(0.);
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(axis, Speed(4.), Acceleration(2.), Duration(2.), distanceOffset));
    ASSERT_NEAR(static_cast<double>(distanceOffset), 12., cDoubleNear);
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
