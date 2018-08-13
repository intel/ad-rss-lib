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

TEST(MathUnitTestsSpeedAfterResponseTime, longitudinal_negative_speed)
{
  Speed resultingSpeed = 0.;
  ASSERT_FALSE(calculateSpeedAfterResponseTime(CoordinateSystemAxis::Longitudinal, -10., 1., 1., resultingSpeed));
}

TEST(MathUnitTestsSpeedAfterResponseTime, lateral_negative_speed_and_negative_acceleration)
{
  Speed resultingSpeedA = 0.;
  ASSERT_TRUE(calculateSpeedAfterResponseTime(CoordinateSystemAxis::Lateral, -10., 1., 1., resultingSpeedA));
  Speed resultingSpeedB = 0.;
  ASSERT_TRUE(calculateSpeedAfterResponseTime(CoordinateSystemAxis::Lateral, 10., -1., 1., resultingSpeedB));
  ASSERT_NEAR(-resultingSpeedA, resultingSpeedB, cDoubleNear);
}

TEST(MathUnitTestsSpeedAfterResponseTime, zero_deceleration)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = 10.;
    Speed resultingSpeed = 0.;
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, 0., 1., resultingSpeed));
    ASSERT_NEAR(startSpeed, resultingSpeed, cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_1sec)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = 10.;
    Speed resultingSpeed = 0.;
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, 1., 1., resultingSpeed));
    ASSERT_NEAR(startSpeed + 1, resultingSpeed, cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_2sec)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = 10.;
    Speed resultingSpeed = 0.;
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, 1., 2., resultingSpeed));
    ASSERT_NEAR(startSpeed + 2., resultingSpeed, cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, negative_acceleration)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = 10.;
    Speed resultingSpeed = 0.;
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, -1., 2., resultingSpeed));
    ASSERT_NEAR(startSpeed - 2., resultingSpeed, cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, negative_acceleration_till_stop)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = 10.;
    Speed resultingSpeed = 0.;
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, -1., 20., resultingSpeed));
    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(0., resultingSpeed, cDoubleNear);
    }
    else
    {
      ASSERT_LE(resultingSpeed, -10.);
    }
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, acceleration_accel_max_2m_s2_50kmh)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = kmhToMeterPerSec(50);
    Speed resultingSpeed = 0.;
    ASSERT_TRUE(calculateSpeedAfterResponseTime(axis, startSpeed, 2., 2., resultingSpeed));
    ASSERT_NEAR(startSpeed + 4., resultingSpeed, cDoubleNear);
  }
}

} // namespace lane
} // namespace rss
