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

TEST(MathUnitTestsSpeedAfterResponseTime, longitudinal_negative_speed)
{
  Speed resultingSpeed(0.);
  ASSERT_FALSE(calculateSpeedAfterResponseTime(
    CoordinateSystemAxis::Longitudinal, Speed(-10.), cMaxSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
}

TEST(MathUnitTestsSpeedAfterResponseTime, lateral_negative_speed_and_negative_acceleration)
{
  Speed resultingSpeedA(0.);
  ASSERT_TRUE(calculateSpeedAfterResponseTime(
    CoordinateSystemAxis::Lateral, Speed(-10.), cMaxSpeed, Acceleration(1.), Duration(1.), resultingSpeedA));
  Speed resultingSpeedB(0.);
  ASSERT_TRUE(calculateSpeedAfterResponseTime(
    CoordinateSystemAxis::Lateral, Speed(10.), cMaxSpeed, Acceleration(-1.), Duration(1.), resultingSpeedB));
  ASSERT_NEAR(-static_cast<double>(resultingSpeedA), static_cast<double>(resultingSpeedB), cDoubleNear);
}

TEST(MathUnitTestsSpeedAfterResponseTime, zero_deceleration)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterResponseTime(axis, startSpeed, cMaxSpeed, Acceleration(0.), Duration(1.), resultingSpeed));
    ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_1sec)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterResponseTime(axis, startSpeed, cMaxSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 1), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_2sec)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterResponseTime(axis, startSpeed, cMaxSpeed, Acceleration(1.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 2.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, checks_acceleration_maxSpeed)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterResponseTime(axis, startSpeed, startSpeed, Acceleration(1.), Duration(1.), resultingSpeed));
    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(static_cast<double>(startSpeed), static_cast<double>(resultingSpeed), cDoubleNear);
    }
    else
    {
      ASSERT_NEAR((static_cast<double>(startSpeed) + 1.), static_cast<double>(resultingSpeed), cDoubleNear);
    }
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, negative_acceleration)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterResponseTime(axis, startSpeed, cMaxSpeed, Acceleration(-1.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) - 2.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, negative_acceleration_till_stop)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed(10.);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterResponseTime(axis, startSpeed, cMaxSpeed, Acceleration(-1.), Duration(20.), resultingSpeed));
    if (axis == CoordinateSystemAxis::Longitudinal)
    {
      ASSERT_NEAR(0., static_cast<double>(resultingSpeed), cDoubleNear);
    }
    else
    {
      ASSERT_LE(static_cast<double>(resultingSpeed), -10.);
    }
  }
}

TEST(MathUnitTestsSpeedAfterResponseTime, acceleration_accel_max_2m_s2_50kmh)
{
  for (auto axis : {CoordinateSystemAxis::Longitudinal, CoordinateSystemAxis::Lateral})
  {
    Speed startSpeed = kmhToMeterPerSec(50);
    Speed resultingSpeed(0.);
    ASSERT_TRUE(
      calculateSpeedAfterResponseTime(axis, startSpeed, cMaxSpeed, Acceleration(2.), Duration(2.), resultingSpeed));
    ASSERT_NEAR((static_cast<double>(startSpeed) + 4.), static_cast<double>(resultingSpeed), cDoubleNear);
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
