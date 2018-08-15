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
#include "situation/Math.hpp"

namespace rss {
namespace situation {

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, longitudinal_negative_speed)
{
  Distance distanceOffset = 0.;

  ASSERT_FALSE(
    calculateDistanceOffsetAfterResponseTime(CoordinateSystemAxis::Longitudinal, -10., 2, 1, distanceOffset));
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, lateral_negative_speed_and_negative_acceleration)
{
  Distance distanceOffsetA = 0.;
  Distance distanceOffsetB = 0.;

  for (auto responseTime = 1; responseTime < 20; responseTime++)
  {
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(CoordinateSystemAxis::Lateral, -10., 2, responseTime, distanceOffsetA));
    ASSERT_TRUE(
      calculateDistanceOffsetAfterResponseTime(CoordinateSystemAxis::Lateral, 10., -2, responseTime, distanceOffsetB));

    ASSERT_NEAR(-distanceOffsetA, distanceOffsetB, cDoubleNear);

    Distance expectedResult = responseTime * responseTime - 10 * responseTime;
    ASSERT_NEAR(expectedResult, distanceOffsetA, cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, negative_time)
{
  Distance distanceOffset = 0.;

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    ASSERT_FALSE(calculateDistanceOffsetAfterResponseTime(axis, 1., 2, -1, distanceOffset));
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, deceleration_to_stop_equal_response_time_longitudinal)
{
  Distance distanceOffsetB = 0.;
  ASSERT_TRUE(calculateStoppingDistance(4., 4., distanceOffsetB));

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffsetA = 0.;
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(axis, 4., -4., 10., distanceOffsetA));

    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(distanceOffsetA, distanceOffsetB, cDoubleNear);
    }
    else
    {
      ASSERT_TRUE(std::fabs(distanceOffsetA - distanceOffsetB) > 10);
    }
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_zero_acceleration)
{
  Distance distanceOffset = 0.;

  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(axis, 4., 0., 1., distanceOffset));
    ASSERT_NEAR(distanceOffset, 4., cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_acceleration_time1s)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffset = 0.;
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(axis, 4., 2., 1., distanceOffset));
    ASSERT_NEAR(distanceOffset, 5., cDoubleNear);
  }
}

TEST(MathUnitTestsDistanceOffsetAfterResponseTime, checks_acceleration_time2s)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Distance distanceOffset = 0.;
    ASSERT_TRUE(calculateDistanceOffsetAfterResponseTime(axis, 4., 2., 2., distanceOffset));
    ASSERT_NEAR(distanceOffset, 12., cDoubleNear);
  }
}

} // namespace situation
} // namespace rss
