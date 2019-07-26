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

TEST(MathUnitTestsTimeToCoverDistance, no_brake_required_2_brake_required_is_continuous)
{
  for (size_t i = 0; i <= 10u; ++i)
  {
    Speed speed(1 - (static_cast<double>(i) - 5.) * 0.01);
    Duration requiredTime(0.);
    double expectedDuration = 1. / static_cast<double>(speed);
    EXPECT_TRUE(calculateTimeToCoverDistance(
      speed, Duration(1.), Acceleration(0.), Acceleration(1.), Distance(1.), requiredTime));
    EXPECT_NEAR(expectedDuration, static_cast<double>(requiredTime), cDoubleNear);
  }
}

TEST(MathUnitTestsTimeToCoverDistance, no_brake_required_zero_acceleration_zero_speed)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeToCoverDistance(
    Speed(0.), Duration(1.), Acceleration(0.), Acceleration(1.), Distance(1.), requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

TEST(MathUnitTestsTimeToCoverDistance, no_brake_required_zero_acceleration_is_continous)
{
  for (size_t i = 0; i < 10u; ++i)
  {
    Acceleration acceleration(
      (static_cast<double>(i) - 5.) * static_cast<double>(std::numeric_limits<Acceleration>::epsilon()) * 0.9);
    Duration requiredTime(0.);
    EXPECT_TRUE(calculateTimeToCoverDistance(
      Speed(2.), Duration(1.), acceleration, Acceleration(1.), Distance(1.), requiredTime));
    EXPECT_NEAR(.5, static_cast<double>(requiredTime), cDoubleNear);
  }
}

TEST(MathUnitTestsTimeToCoverDistance, brake_required_negative_or_zero_deceleration)
{
  Acceleration decelerationValue(-1.);
  Duration requiredTime(0.);
  for (size_t i = 0u; i < 10u; ++i)
  {
    decelerationValue = decelerationValue * 0.1;
    EXPECT_FALSE(calculateTimeToCoverDistance(
      Speed(0.), Duration(0.), Acceleration(0.), decelerationValue, Distance(1.), requiredTime));
  }
  EXPECT_FALSE(calculateTimeToCoverDistance(
    Speed(0.), Duration(0.), Acceleration(0.), Acceleration(0.), Distance(1.), requiredTime));
  EXPECT_FALSE(calculateTimeToCoverDistance(Speed(0.),
                                            Duration(0.),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon() * 0.99,
                                            Distance(1.),
                                            requiredTime));
}

TEST(MathUnitTestsTimeToCoverDistance, brake_required_positive_deceleration)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeToCoverDistance(Speed(0.),
                                           Duration(0.),
                                           Acceleration(0.),
                                           std::numeric_limits<Acceleration>::epsilon(),
                                           Distance(1.),
                                           requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

} // namespace situation
} // namespace rss
} // namespace ad
