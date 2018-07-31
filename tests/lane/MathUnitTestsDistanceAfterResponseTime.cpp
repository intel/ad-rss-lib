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
#include "lane/Math.hpp"

namespace rss {
namespace lane {

TEST(MathUnitTestsDistanceAfterResponseTime, negative_speed)
{
  Distance coveredDistance = 0.;

  ASSERT_FALSE(calculateDistanceAfterResponseTime(-10., 2, 1, coveredDistance));
}

TEST(MathUnitTestsDistanceAfterResponseTime, negative_time)
{
  Distance coveredDistance = 0.;

  ASSERT_FALSE(calculateDistanceAfterResponseTime(1., 2, -1, coveredDistance));
}

TEST(MathUnitTestsDistanceAfterResponseTime, deceleration_to_stop_equal_response_time)
{
  Distance coveredDistanceA = 0.;
  ASSERT_TRUE(calculateDistanceAfterResponseTime(4., -4., 1., coveredDistanceA));

  Distance coveredDistanceB = 0.;
  ASSERT_TRUE(calculateStoppingDistance(4., 4., coveredDistanceB));
  ASSERT_NEAR(coveredDistanceA, coveredDistanceB, cDoubleNear);
}

TEST(MathUnitTestsDistanceAfterResponseTime, checks_zero_acceleration)
{
  Distance coveredDistance = 0.;
  ASSERT_TRUE(calculateDistanceAfterResponseTime(4., 0., 1., coveredDistance));
  ASSERT_NEAR(coveredDistance, 4., cDoubleNear);
}

TEST(MathUnitTestsDistanceAfterResponseTime, checks_acceleration_time1s)
{
  Distance coveredDistance = 0.;
  ASSERT_TRUE(calculateDistanceAfterResponseTime(4., 2., 1., coveredDistance));
  ASSERT_NEAR(coveredDistance, 5., cDoubleNear);
}

TEST(MathUnitTestsDistanceAfterResponseTime, checks_acceleration_time2s)
{
  Distance coveredDistance = 0.;
  ASSERT_TRUE(calculateDistanceAfterResponseTime(4., 2., 2., coveredDistance));
  ASSERT_NEAR(coveredDistance, 12., cDoubleNear);
}

} // namespace lane
} // namespace rss
