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

TEST(MathUnitTestsStoppingDistance, negative_speed)
{
  Distance stoppingDistance = 0.;
  ASSERT_FALSE(calculateStoppingDistance(-10., 4., stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, negative_deceleration)
{
  Distance stoppingDistance = 0.;
  ASSERT_FALSE(calculateStoppingDistance(10., -4., stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, zero_deceleration)
{
  Distance stoppingDistance = 0.;
  ASSERT_FALSE(calculateStoppingDistance(10., 0., stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, checks_100kmh)
{
  Distance stoppingDistance = 0.;
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(100.), 6., stoppingDistance));
  ASSERT_NEAR(stoppingDistance, 64.3, cDoubleNear);
}

TEST(MathUnitTestsStoppingDistance, checks_0kmh)
{
  Distance stoppingDistance = 0.;
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(0.), 6., stoppingDistance));
  ASSERT_NEAR(stoppingDistance, 0, cDoubleNear);
}

} // namespace lane
} // namespace rss
