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

Distance calculateDistanceOffsetInAcceleratedMovement(Speed const &speed,
                                                      Acceleration const &acceleration,
                                                      Duration const &duration);

Distance calculateDistanceOffsetInAcceleratedLimitedMovement(Speed const &speed,
                                                             Speed const &maxSpeed,
                                                             Acceleration const &acceleration,
                                                             Duration const &duration);

bool calculateTimeForDistance(Speed const &currentSpeed,
                              Acceleration const &acceleration,
                              Distance const &distanceToCover,
                              Duration &requiredTime);

Speed calculateSpeedInAcceleratedMovement(Speed const &speed,
                                          Acceleration const &acceleration,
                                          Duration const &duration);

TEST(MathUnitTestsInputRangeChecks, negative_speed)
{
  Duration requiredTime(0.);
  EXPECT_FALSE(calculateTimeForDistance(Speed(-1.), Acceleration(0.), Distance(1.), requiredTime));
}

TEST(MathUnitTestsInputRangeChecks, speed_and_acceleration_zero)
{
  Duration requiredTime(0.);
  EXPECT_TRUE(calculateTimeForDistance(Speed(0.), Acceleration(0.), Distance(1.), requiredTime));
  EXPECT_EQ(requiredTime, std::numeric_limits<Duration>::max());
}

TEST(MathUnitTestsInputRangeChecks, calculateDistanceOffsetInAccerlatedMovementThrows)
{
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(), Acceleration(0), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(0), Acceleration(), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedMovement(Speed(0), Acceleration(0), Duration()), std::out_of_range);
}

TEST(MathUnitTestsInputRangeChecks, calculateDistanceOffsetInAccerlatedLimitedMovementThrows)
{
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedLimitedMovement(Speed(), Speed(0), Acceleration(0), Duration(0)),
               std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedLimitedMovement(Speed(0), Speed(), Acceleration(0), Duration(0)),
               std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedLimitedMovement(Speed(0), Speed(0), Acceleration(), Duration(0)),
               std::out_of_range);
  EXPECT_THROW(calculateDistanceOffsetInAcceleratedLimitedMovement(Speed(0), Speed(0), Acceleration(0), Duration()),
               std::out_of_range);
}

TEST(MathUnitTestsInputRangeChecks, calculateSpeedInAcceleratedMovementThrows)
{
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(), Acceleration(0), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(0), Acceleration(), Duration(0)), std::out_of_range);
  EXPECT_THROW(calculateSpeedInAcceleratedMovement(Speed(0), Acceleration(0), Duration()), std::out_of_range);
}

TEST(MathUnitTestsInputRangeChecks, calculateTimeToCoverDistanceThrows)
{
  Duration requiredTime(0.);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(),
                                            cMaxSpeed,
                                            Duration(0.),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeed,
                                            Duration(),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeed,
                                            Duration(0.),
                                            Acceleration(),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(1.),
                                            requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(
                 Speed(0.), cMaxSpeed, Duration(0.), Acceleration(0.), Acceleration(), Distance(1.), requiredTime),
               std::out_of_range);
  EXPECT_THROW(calculateTimeToCoverDistance(Speed(0.),
                                            cMaxSpeed,
                                            Duration(0.),
                                            Acceleration(0.),
                                            std::numeric_limits<Acceleration>::epsilon(),
                                            Distance(),
                                            requiredTime),
               std::out_of_range);
}

} // namespace situation
} // namespace rss
} // namespace ad
