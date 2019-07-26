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

TEST(MathUnitTestsStoppingDistance, negative_deceleration)
{
  Distance stoppingDistance(0.);
  ASSERT_FALSE(calculateStoppingDistance(Speed(10.), Acceleration(-4.), stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, zero_deceleration)
{
  Distance stoppingDistance(0.);
  ASSERT_FALSE(calculateStoppingDistance(Speed(10.), Acceleration(0.), stoppingDistance));
}

TEST(MathUnitTestsStoppingDistance, checks_100kmh)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(100.), Acceleration(6.), stoppingDistance));
  ASSERT_NEAR(static_cast<double>(stoppingDistance), 64.3, cDoubleNear);
}

TEST(MathUnitTestsStoppingDistance, checks_negative_speed)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(-100.), Acceleration(6.), stoppingDistance));
  ASSERT_NEAR(static_cast<double>(stoppingDistance), -64.3, cDoubleNear);
}

TEST(MathUnitTestsStoppingDistance, checks_0kmh)
{
  Distance stoppingDistance(0.);
  ASSERT_TRUE(calculateStoppingDistance(kmhToMeterPerSec(0.), Acceleration(6.), stoppingDistance));
  ASSERT_NEAR(static_cast<double>(stoppingDistance), 0., cDoubleNear);
}

TEST(MathUnitTestsStoppingDistance, checks_value_range)
{
  Acceleration deceleration(2.);

  for (int i = -300; i < 300; i++)
  {
    Speed startVelocity = kmhToMeterPerSec(i);
    Distance resultingDistance = (startVelocity * std::fabs(startVelocity)) / (2. * deceleration);

    Distance stoppingDistance(0.);
    ASSERT_TRUE(calculateStoppingDistance(startVelocity, deceleration, stoppingDistance));
    ASSERT_NEAR(static_cast<double>(stoppingDistance), static_cast<double>(resultingDistance), cDoubleNear);
  }
}

} // namespace situation
} // namespace rss
} // namespace ad
