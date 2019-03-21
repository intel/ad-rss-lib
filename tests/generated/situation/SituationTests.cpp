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
#include "ad_rss/situation/Situation.hpp"

class SituationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::situation::Situation value;
    ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
    valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
    value.situationId = valueSituationId;
    ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
    value.situationType = valueSituationType;
    ::ad_rss::situation::VehicleState valueEgoVehicleState;
    ::ad_rss::world::Velocity valueEgoVehicleStateVelocity;
    ::ad_rss::physics::Speed valueEgoVehicleStateVelocitySpeedLon(-100.);
    valueEgoVehicleStateVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    valueEgoVehicleStateVelocity.speedLon = valueEgoVehicleStateVelocitySpeedLon;
    ::ad_rss::physics::Speed valueEgoVehicleStateVelocitySpeedLat(-100.);
    valueEgoVehicleStateVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    valueEgoVehicleStateVelocity.speedLat = valueEgoVehicleStateVelocitySpeedLat;
    valueEgoVehicleState.velocity = valueEgoVehicleStateVelocity;
    ::ad_rss::world::Dynamics valueEgoVehicleStateDynamics;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleStateDynamicsAlphaLon;
    ::ad_rss::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLonAccelMax
      = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLon.accelMax = valueEgoVehicleStateDynamicsAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLon.brakeMax = valueEgoVehicleStateDynamicsAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMax = valueEgoVehicleStateDynamicsAlphaLon.brakeMin;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLon.brakeMax;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleStateDynamicsAlphaLon.brakeMin;
    valueEgoVehicleStateDynamics.alphaLon = valueEgoVehicleStateDynamicsAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleStateDynamicsAlphaLat;
    ::ad_rss::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLatAccelMax
      = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLat.accelMax = valueEgoVehicleStateDynamicsAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
    valueEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLat.brakeMin = valueEgoVehicleStateDynamicsAlphaLatBrakeMin;
    valueEgoVehicleStateDynamics.alphaLat = valueEgoVehicleStateDynamicsAlphaLat;
    ::ad_rss::physics::Distance valueEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
    valueEgoVehicleStateDynamics.lateralFluctuationMargin = valueEgoVehicleStateDynamicsLateralFluctuationMargin;
    valueEgoVehicleState.dynamics = valueEgoVehicleStateDynamics;
    ::ad_rss::physics::Duration valueEgoVehicleStateResponseTime(0.);
    valueEgoVehicleStateResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleState.responseTime = valueEgoVehicleStateResponseTime;
    bool valueEgoVehicleStateHasPriority{true};
    valueEgoVehicleState.hasPriority = valueEgoVehicleStateHasPriority;
    bool valueEgoVehicleStateIsInCorrectLane{true};
    valueEgoVehicleState.isInCorrectLane = valueEgoVehicleStateIsInCorrectLane;
    ::ad_rss::physics::Distance valueEgoVehicleStateDistanceToEnterIntersection(0.);
    valueEgoVehicleState.distanceToEnterIntersection = valueEgoVehicleStateDistanceToEnterIntersection;
    ::ad_rss::physics::Distance valueEgoVehicleStateDistanceToLeaveIntersection(0.);
    valueEgoVehicleState.distanceToLeaveIntersection = valueEgoVehicleStateDistanceToLeaveIntersection;
    valueEgoVehicleState.distanceToLeaveIntersection = valueEgoVehicleState.distanceToEnterIntersection;
    valueEgoVehicleState.distanceToEnterIntersection = valueEgoVehicleState.distanceToLeaveIntersection;
    value.egoVehicleState = valueEgoVehicleState;
    ::ad_rss::situation::VehicleState valueOtherVehicleState;
    ::ad_rss::world::Velocity valueOtherVehicleStateVelocity;
    ::ad_rss::physics::Speed valueOtherVehicleStateVelocitySpeedLon(-100.);
    valueOtherVehicleStateVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    valueOtherVehicleStateVelocity.speedLon = valueOtherVehicleStateVelocitySpeedLon;
    ::ad_rss::physics::Speed valueOtherVehicleStateVelocitySpeedLat(-100.);
    valueOtherVehicleStateVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    valueOtherVehicleStateVelocity.speedLat = valueOtherVehicleStateVelocitySpeedLat;
    valueOtherVehicleState.velocity = valueOtherVehicleStateVelocity;
    ::ad_rss::world::Dynamics valueOtherVehicleStateDynamics;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueOtherVehicleStateDynamicsAlphaLon;
    ::ad_rss::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLonAccelMax
      = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueOtherVehicleStateDynamicsAlphaLon.accelMax = valueOtherVehicleStateDynamicsAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLon.brakeMax = valueOtherVehicleStateDynamicsAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMax = valueOtherVehicleStateDynamicsAlphaLon.brakeMin;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLon.brakeMax;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueOtherVehicleStateDynamicsAlphaLon.brakeMin;
    valueOtherVehicleStateDynamics.alphaLon = valueOtherVehicleStateDynamicsAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueOtherVehicleStateDynamicsAlphaLat;
    ::ad_rss::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLatAccelMax
      = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueOtherVehicleStateDynamicsAlphaLat.accelMax = valueOtherVehicleStateDynamicsAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
    valueOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueOtherVehicleStateDynamicsAlphaLat.brakeMin = valueOtherVehicleStateDynamicsAlphaLatBrakeMin;
    valueOtherVehicleStateDynamics.alphaLat = valueOtherVehicleStateDynamicsAlphaLat;
    ::ad_rss::physics::Distance valueOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
    valueOtherVehicleStateDynamics.lateralFluctuationMargin = valueOtherVehicleStateDynamicsLateralFluctuationMargin;
    valueOtherVehicleState.dynamics = valueOtherVehicleStateDynamics;
    ::ad_rss::physics::Duration valueOtherVehicleStateResponseTime(0.);
    valueOtherVehicleStateResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueOtherVehicleState.responseTime = valueOtherVehicleStateResponseTime;
    bool valueOtherVehicleStateHasPriority{true};
    valueOtherVehicleState.hasPriority = valueOtherVehicleStateHasPriority;
    bool valueOtherVehicleStateIsInCorrectLane{true};
    valueOtherVehicleState.isInCorrectLane = valueOtherVehicleStateIsInCorrectLane;
    ::ad_rss::physics::Distance valueOtherVehicleStateDistanceToEnterIntersection(0.);
    valueOtherVehicleState.distanceToEnterIntersection = valueOtherVehicleStateDistanceToEnterIntersection;
    ::ad_rss::physics::Distance valueOtherVehicleStateDistanceToLeaveIntersection(0.);
    valueOtherVehicleState.distanceToLeaveIntersection = valueOtherVehicleStateDistanceToLeaveIntersection;
    valueOtherVehicleState.distanceToLeaveIntersection = valueOtherVehicleState.distanceToEnterIntersection;
    valueOtherVehicleState.distanceToEnterIntersection = valueOtherVehicleState.distanceToLeaveIntersection;
    value.otherVehicleState = valueOtherVehicleState;
    ::ad_rss::situation::RelativePosition valueRelativePosition;
    ::ad_rss::situation::LongitudinalRelativePosition valueRelativePositionLongitudinalPosition(
      ::ad_rss::situation::LongitudinalRelativePosition::InFront);
    valueRelativePosition.longitudinalPosition = valueRelativePositionLongitudinalPosition;
    ::ad_rss::physics::Distance valueRelativePositionLongitudinalDistance(0.);
    valueRelativePosition.longitudinalDistance = valueRelativePositionLongitudinalDistance;
    ::ad_rss::situation::LateralRelativePosition valueRelativePositionLateralPosition(
      ::ad_rss::situation::LateralRelativePosition::AtLeft);
    valueRelativePosition.lateralPosition = valueRelativePositionLateralPosition;
    ::ad_rss::physics::Distance valueRelativePositionLateralDistance(0.);
    valueRelativePosition.lateralDistance = valueRelativePositionLateralDistance;
    value.relativePosition = valueRelativePosition;
    mValue = value;
  }

  ::ad_rss::situation::Situation mValue;
};

TEST_F(SituationTests, copyConstruction)
{
  ::ad_rss::situation::Situation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, moveConstruction)
{
  ::ad_rss::situation::Situation value(std::move(::ad_rss::situation::Situation(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, copyAssignment)
{
  ::ad_rss::situation::Situation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, moveAssignment)
{
  ::ad_rss::situation::Situation value;
  value = std::move(::ad_rss::situation::Situation(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, comparisonOperatorEqual)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::situation::Situation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::physics::TimeIndex timeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad_rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorSituationIdDiffers)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::situation::SituationId situationId(std::numeric_limits<::ad_rss::situation::SituationId>::max());
  valueA.situationId = situationId;
  ::ad_rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorSituationTypeDiffers)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::situation::SituationType situationType(::ad_rss::situation::SituationType::IntersectionSamePriority);
  valueA.situationType = situationType;
  ::ad_rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorEgoVehicleStateDiffers)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::situation::VehicleState egoVehicleState;
  ::ad_rss::world::Velocity egoVehicleStateVelocity;
  ::ad_rss::physics::Speed egoVehicleStateVelocitySpeedLon(100.);
  egoVehicleStateVelocity.speedLon = egoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed egoVehicleStateVelocitySpeedLat(100.);
  egoVehicleStateVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  egoVehicleStateVelocity.speedLat = egoVehicleStateVelocitySpeedLat;
  egoVehicleState.velocity = egoVehicleStateVelocity;
  ::ad_rss::world::Dynamics egoVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues egoVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration egoVehicleStateDynamicsAlphaLonAccelMax(1e2);
  egoVehicleStateDynamicsAlphaLon.accelMax = egoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  egoVehicleStateDynamicsAlphaLon.brakeMax = egoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  egoVehicleStateDynamicsAlphaLon.brakeMinCorrect = egoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  egoVehicleStateDynamicsAlphaLon.brakeMax = egoVehicleStateDynamicsAlphaLon.brakeMin;
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  egoVehicleStateDynamicsAlphaLon.brakeMinCorrect = egoVehicleStateDynamicsAlphaLon.brakeMin;
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLon.brakeMax;
  egoVehicleStateDynamics.alphaLon = egoVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues egoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration egoVehicleStateDynamicsAlphaLatAccelMax(1e2);
  egoVehicleStateDynamicsAlphaLat.accelMax = egoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration egoVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  egoVehicleStateDynamicsAlphaLat.brakeMin = egoVehicleStateDynamicsAlphaLatBrakeMin;
  egoVehicleStateDynamics.alphaLat = egoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance egoVehicleStateDynamicsLateralFluctuationMargin(1e6);
  egoVehicleStateDynamicsLateralFluctuationMargin = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  egoVehicleStateDynamics.lateralFluctuationMargin = egoVehicleStateDynamicsLateralFluctuationMargin;
  egoVehicleState.dynamics = egoVehicleStateDynamics;
  ::ad_rss::physics::Duration egoVehicleStateResponseTime(100.);
  egoVehicleStateResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  egoVehicleState.responseTime = egoVehicleStateResponseTime;
  bool egoVehicleStateHasPriority{false};
  egoVehicleState.hasPriority = egoVehicleStateHasPriority;
  bool egoVehicleStateIsInCorrectLane{false};
  egoVehicleState.isInCorrectLane = egoVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance egoVehicleStateDistanceToEnterIntersection(1e6);
  egoVehicleState.distanceToEnterIntersection = egoVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance egoVehicleStateDistanceToLeaveIntersection(1e6);
  egoVehicleStateDistanceToLeaveIntersection = ::ad_rss::physics::Distance(1e4); // set to valid value within struct
  egoVehicleState.distanceToLeaveIntersection = egoVehicleStateDistanceToLeaveIntersection;
  egoVehicleState.distanceToLeaveIntersection = egoVehicleState.distanceToEnterIntersection;
  egoVehicleState.distanceToEnterIntersection = egoVehicleState.distanceToLeaveIntersection;
  valueA.egoVehicleState = egoVehicleState;
  ::ad_rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorOtherVehicleStateDiffers)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::situation::VehicleState otherVehicleState;
  ::ad_rss::world::Velocity otherVehicleStateVelocity;
  ::ad_rss::physics::Speed otherVehicleStateVelocitySpeedLon(100.);
  otherVehicleStateVelocity.speedLon = otherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed otherVehicleStateVelocitySpeedLat(100.);
  otherVehicleStateVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  otherVehicleStateVelocity.speedLat = otherVehicleStateVelocitySpeedLat;
  otherVehicleState.velocity = otherVehicleStateVelocity;
  ::ad_rss::world::Dynamics otherVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues otherVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration otherVehicleStateDynamicsAlphaLonAccelMax(1e2);
  otherVehicleStateDynamicsAlphaLon.accelMax = otherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  otherVehicleStateDynamicsAlphaLon.brakeMax = otherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  otherVehicleStateDynamicsAlphaLon.brakeMinCorrect = otherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  otherVehicleStateDynamicsAlphaLon.brakeMax = otherVehicleStateDynamicsAlphaLon.brakeMin;
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  otherVehicleStateDynamicsAlphaLon.brakeMinCorrect = otherVehicleStateDynamicsAlphaLon.brakeMin;
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLon.brakeMax;
  otherVehicleStateDynamics.alphaLon = otherVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues otherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration otherVehicleStateDynamicsAlphaLatAccelMax(1e2);
  otherVehicleStateDynamicsAlphaLat.accelMax = otherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration otherVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  otherVehicleStateDynamicsAlphaLat.brakeMin = otherVehicleStateDynamicsAlphaLatBrakeMin;
  otherVehicleStateDynamics.alphaLat = otherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance otherVehicleStateDynamicsLateralFluctuationMargin(1e6);
  otherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  otherVehicleStateDynamics.lateralFluctuationMargin = otherVehicleStateDynamicsLateralFluctuationMargin;
  otherVehicleState.dynamics = otherVehicleStateDynamics;
  ::ad_rss::physics::Duration otherVehicleStateResponseTime(100.);
  otherVehicleStateResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  otherVehicleState.responseTime = otherVehicleStateResponseTime;
  bool otherVehicleStateHasPriority{false};
  otherVehicleState.hasPriority = otherVehicleStateHasPriority;
  bool otherVehicleStateIsInCorrectLane{false};
  otherVehicleState.isInCorrectLane = otherVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance otherVehicleStateDistanceToEnterIntersection(1e6);
  otherVehicleState.distanceToEnterIntersection = otherVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance otherVehicleStateDistanceToLeaveIntersection(1e6);
  otherVehicleStateDistanceToLeaveIntersection = ::ad_rss::physics::Distance(1e4); // set to valid value within struct
  otherVehicleState.distanceToLeaveIntersection = otherVehicleStateDistanceToLeaveIntersection;
  otherVehicleState.distanceToLeaveIntersection = otherVehicleState.distanceToEnterIntersection;
  otherVehicleState.distanceToEnterIntersection = otherVehicleState.distanceToLeaveIntersection;
  valueA.otherVehicleState = otherVehicleState;
  ::ad_rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorRelativePositionDiffers)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::situation::RelativePosition relativePosition;
  ::ad_rss::situation::LongitudinalRelativePosition relativePositionLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::AtBack);
  relativePosition.longitudinalPosition = relativePositionLongitudinalPosition;
  ::ad_rss::physics::Distance relativePositionLongitudinalDistance(1e6);
  relativePosition.longitudinalDistance = relativePositionLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition relativePositionLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtRight);
  relativePosition.lateralPosition = relativePositionLateralPosition;
  ::ad_rss::physics::Distance relativePositionLateralDistance(1e6);
  relativePosition.lateralDistance = relativePositionLateralDistance;
  valueA.relativePosition = relativePosition;
  ::ad_rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
