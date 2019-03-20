/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad_rss/situation/VehicleState.hpp"

class VehicleStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::situation::VehicleState value;
    ::ad_rss::world::Velocity valueVelocity;
    ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
    valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    valueVelocity.speedLon = valueVelocitySpeedLon;
    ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
    valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    valueVelocity.speedLat = valueVelocitySpeedLat;
    value.velocity = valueVelocity;
    ::ad_rss::world::Dynamics valueDynamics;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
    valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
    valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
    valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
    valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
    valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
    valueDynamics.alphaLon = valueDynamicsAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
    valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
    valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
    valueDynamics.alphaLat = valueDynamicsAlphaLat;
    ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
    valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
    value.dynamics = valueDynamics;
    ::ad_rss::physics::Duration valueResponseTime(0.);
    valueResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    value.responseTime = valueResponseTime;
    bool valueHasPriority{true};
    value.hasPriority = valueHasPriority;
    bool valueIsInCorrectLane{true};
    value.isInCorrectLane = valueIsInCorrectLane;
    ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
    value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
    ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
    value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
    value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
    value.distanceToEnterIntersection = value.distanceToLeaveIntersection;
    mValue = value;
  }

  ::ad_rss::situation::VehicleState mValue;
};

TEST_F(VehicleStateTests, copyConstruction)
{
  ::ad_rss::situation::VehicleState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(VehicleStateTests, moveConstruction)
{
  ::ad_rss::situation::VehicleState value(std::move(::ad_rss::situation::VehicleState(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(VehicleStateTests, copyAssignment)
{
  ::ad_rss::situation::VehicleState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(VehicleStateTests, moveAssignment)
{
  ::ad_rss::situation::VehicleState value;
  value = std::move(::ad_rss::situation::VehicleState(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(VehicleStateTests, comparisonOperatorEqual)
{
  ::ad_rss::situation::VehicleState valueA = mValue;
  ::ad_rss::situation::VehicleState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorVelocityDiffers)
{
  ::ad_rss::situation::VehicleState valueA = mValue;
  ::ad_rss::world::Velocity velocity;
  ::ad_rss::physics::Speed velocitySpeedLon(100.);
  velocity.speedLon = velocitySpeedLon;
  ::ad_rss::physics::Speed velocitySpeedLat(100.);
  velocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  velocity.speedLat = velocitySpeedLat;
  valueA.velocity = velocity;
  ::ad_rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorDynamicsDiffers)
{
  ::ad_rss::situation::VehicleState valueA = mValue;
  ::ad_rss::world::Dynamics dynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues dynamicsAlphaLon;
  ::ad_rss::physics::Acceleration dynamicsAlphaLonAccelMax(1e2);
  dynamicsAlphaLon.accelMax = dynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration dynamicsAlphaLonBrakeMax(1e2);
  dynamicsAlphaLon.brakeMax = dynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration dynamicsAlphaLonBrakeMin(1e2);
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration dynamicsAlphaLonBrakeMinCorrect(1e2);
  dynamicsAlphaLon.brakeMinCorrect = dynamicsAlphaLonBrakeMinCorrect;
  dynamicsAlphaLon.brakeMax = dynamicsAlphaLon.brakeMin;
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLon.brakeMinCorrect;
  dynamicsAlphaLon.brakeMinCorrect = dynamicsAlphaLon.brakeMin;
  dynamicsAlphaLon.brakeMin = dynamicsAlphaLon.brakeMax;
  dynamics.alphaLon = dynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues dynamicsAlphaLat;
  ::ad_rss::physics::Acceleration dynamicsAlphaLatAccelMax(1e2);
  dynamicsAlphaLat.accelMax = dynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration dynamicsAlphaLatBrakeMin(1e2);
  dynamicsAlphaLat.brakeMin = dynamicsAlphaLatBrakeMin;
  dynamics.alphaLat = dynamicsAlphaLat;
  ::ad_rss::physics::Distance dynamicsLateralFluctuationMargin(1e6);
  dynamicsLateralFluctuationMargin = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  dynamics.lateralFluctuationMargin = dynamicsLateralFluctuationMargin;
  valueA.dynamics = dynamics;
  ::ad_rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorResponseTimeDiffers)
{
  ::ad_rss::situation::VehicleState valueA = mValue;
  ::ad_rss::physics::Duration responseTime(100.);
  valueA.responseTime = responseTime;
  ::ad_rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorHasPriorityDiffers)
{
  ::ad_rss::situation::VehicleState valueA = mValue;
  bool hasPriority{false};
  valueA.hasPriority = hasPriority;
  ::ad_rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorIsInCorrectLaneDiffers)
{
  ::ad_rss::situation::VehicleState valueA = mValue;
  bool isInCorrectLane{false};
  valueA.isInCorrectLane = isInCorrectLane;
  ::ad_rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorDistanceToEnterIntersectionDiffers)
{
  ::ad_rss::situation::VehicleState valueA = mValue;
  ::ad_rss::physics::Distance distanceToEnterIntersection(1e6);
  valueA.distanceToEnterIntersection = distanceToEnterIntersection;
  ::ad_rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(VehicleStateTests, comparisonOperatorDistanceToLeaveIntersectionDiffers)
{
  ::ad_rss::situation::VehicleState valueA = mValue;
  ::ad_rss::physics::Distance distanceToLeaveIntersection(1e6);
  valueA.distanceToLeaveIntersection = distanceToLeaveIntersection;
  ::ad_rss::situation::VehicleState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
