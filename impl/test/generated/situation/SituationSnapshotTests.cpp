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
#include "ad/rss/situation/SituationSnapshot.hpp"

class SituationSnapshotTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::situation::SituationSnapshot value;
    ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
    valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad::rss::situation::SituationVector valueSituations;
    ::ad::rss::situation::Situation valueSituationsElement;
    ::ad::rss::situation::SituationId valueSituationsElementSituationId(
      std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
    valueSituationsElement.situationId = valueSituationsElementSituationId;
    ::ad::rss::world::ObjectId valueSituationsElementObjectId(
      std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueSituationsElement.objectId = valueSituationsElementObjectId;
    ::ad::rss::situation::SituationType valueSituationsElementSituationType(
      ::ad::rss::situation::SituationType::NotRelevant);
    valueSituationsElement.situationType = valueSituationsElementSituationType;
    ::ad::rss::situation::VehicleState valueSituationsElementEgoVehicleState;
    ::ad::rss::situation::VelocityRange valueSituationsElementEgoVehicleStateVelocity;
    ::ad::physics::SpeedRange valueSituationsElementEgoVehicleStateVelocitySpeedLon;
    ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
    valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum
      = valueSituationsElementEgoVehicleStateVelocitySpeedLonMinimum;
    ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
    valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum
      = valueSituationsElementEgoVehicleStateVelocitySpeedLonMaximum;
    valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum
      = valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum;
    valueSituationsElementEgoVehicleStateVelocitySpeedLon.minimum
      = valueSituationsElementEgoVehicleStateVelocitySpeedLon.maximum;
    valueSituationsElementEgoVehicleStateVelocity.speedLon = valueSituationsElementEgoVehicleStateVelocitySpeedLon;
    ::ad::physics::SpeedRange valueSituationsElementEgoVehicleStateVelocitySpeedLat;
    ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
    valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum
      = valueSituationsElementEgoVehicleStateVelocitySpeedLatMinimum;
    ::ad::physics::Speed valueSituationsElementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
    valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum
      = valueSituationsElementEgoVehicleStateVelocitySpeedLatMaximum;
    valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum
      = valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum;
    valueSituationsElementEgoVehicleStateVelocitySpeedLat.minimum
      = valueSituationsElementEgoVehicleStateVelocitySpeedLat.maximum;
    valueSituationsElementEgoVehicleStateVelocity.speedLat = valueSituationsElementEgoVehicleStateVelocitySpeedLat;
    valueSituationsElementEgoVehicleState.velocity = valueSituationsElementEgoVehicleStateVelocity;
    ::ad::rss::world::RssDynamics valueSituationsElementEgoVehicleStateDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueSituationsElementEgoVehicleStateDynamicsAlphaLon;
    ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
    valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueSituationsElementEgoVehicleStateDynamicsAlphaLon.accelMax
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
    valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
    valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
    valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
    valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
    valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
    valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
    valueSituationsElementEgoVehicleStateDynamics.alphaLon = valueSituationsElementEgoVehicleStateDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueSituationsElementEgoVehicleStateDynamicsAlphaLat;
    ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
    valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueSituationsElementEgoVehicleStateDynamicsAlphaLat.accelMax
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
    valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueSituationsElementEgoVehicleStateDynamicsAlphaLat.brakeMin
      = valueSituationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
    valueSituationsElementEgoVehicleStateDynamics.alphaLat = valueSituationsElementEgoVehicleStateDynamicsAlphaLat;
    ::ad::physics::Distance valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
    valueSituationsElementEgoVehicleStateDynamics.lateralFluctuationMargin
      = valueSituationsElementEgoVehicleStateDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueSituationsElementEgoVehicleStateDynamicsResponseTime(0.);
    valueSituationsElementEgoVehicleStateDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueSituationsElementEgoVehicleStateDynamics.responseTime
      = valueSituationsElementEgoVehicleStateDynamicsResponseTime;
    valueSituationsElementEgoVehicleState.dynamics = valueSituationsElementEgoVehicleStateDynamics;
    bool valueSituationsElementEgoVehicleStateHasPriority{true};
    valueSituationsElementEgoVehicleState.hasPriority = valueSituationsElementEgoVehicleStateHasPriority;
    bool valueSituationsElementEgoVehicleStateIsInCorrectLane{true};
    valueSituationsElementEgoVehicleState.isInCorrectLane = valueSituationsElementEgoVehicleStateIsInCorrectLane;
    ::ad::physics::Distance valueSituationsElementEgoVehicleStateDistanceToEnterIntersection(0.);
    valueSituationsElementEgoVehicleState.distanceToEnterIntersection
      = valueSituationsElementEgoVehicleStateDistanceToEnterIntersection;
    ::ad::physics::Distance valueSituationsElementEgoVehicleStateDistanceToLeaveIntersection(0.);
    valueSituationsElementEgoVehicleState.distanceToLeaveIntersection
      = valueSituationsElementEgoVehicleStateDistanceToLeaveIntersection;
    valueSituationsElementEgoVehicleState.distanceToLeaveIntersection
      = valueSituationsElementEgoVehicleState.distanceToEnterIntersection;
    valueSituationsElementEgoVehicleState.distanceToEnterIntersection
      = valueSituationsElementEgoVehicleState.distanceToLeaveIntersection;
    valueSituationsElement.egoVehicleState = valueSituationsElementEgoVehicleState;
    ::ad::rss::situation::VehicleState valueSituationsElementOtherVehicleState;
    ::ad::rss::situation::VelocityRange valueSituationsElementOtherVehicleStateVelocity;
    ::ad::physics::SpeedRange valueSituationsElementOtherVehicleStateVelocitySpeedLon;
    ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
    valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum
      = valueSituationsElementOtherVehicleStateVelocitySpeedLonMinimum;
    ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
    valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum
      = valueSituationsElementOtherVehicleStateVelocitySpeedLonMaximum;
    valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum
      = valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum;
    valueSituationsElementOtherVehicleStateVelocitySpeedLon.minimum
      = valueSituationsElementOtherVehicleStateVelocitySpeedLon.maximum;
    valueSituationsElementOtherVehicleStateVelocity.speedLon = valueSituationsElementOtherVehicleStateVelocitySpeedLon;
    ::ad::physics::SpeedRange valueSituationsElementOtherVehicleStateVelocitySpeedLat;
    ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
    valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum
      = valueSituationsElementOtherVehicleStateVelocitySpeedLatMinimum;
    ::ad::physics::Speed valueSituationsElementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
    valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum
      = valueSituationsElementOtherVehicleStateVelocitySpeedLatMaximum;
    valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum
      = valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum;
    valueSituationsElementOtherVehicleStateVelocitySpeedLat.minimum
      = valueSituationsElementOtherVehicleStateVelocitySpeedLat.maximum;
    valueSituationsElementOtherVehicleStateVelocity.speedLat = valueSituationsElementOtherVehicleStateVelocitySpeedLat;
    valueSituationsElementOtherVehicleState.velocity = valueSituationsElementOtherVehicleStateVelocity;
    ::ad::rss::world::RssDynamics valueSituationsElementOtherVehicleStateDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueSituationsElementOtherVehicleStateDynamicsAlphaLon;
    ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
    valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueSituationsElementOtherVehicleStateDynamicsAlphaLon.accelMax
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
    valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
    valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
    valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
    valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
    valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax;
    valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
    valueSituationsElementOtherVehicleStateDynamics.alphaLon = valueSituationsElementOtherVehicleStateDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueSituationsElementOtherVehicleStateDynamicsAlphaLat;
    ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
    valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax
      = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueSituationsElementOtherVehicleStateDynamicsAlphaLat.accelMax
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
    valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueSituationsElementOtherVehicleStateDynamicsAlphaLat.brakeMin
      = valueSituationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
    valueSituationsElementOtherVehicleStateDynamics.alphaLat = valueSituationsElementOtherVehicleStateDynamicsAlphaLat;
    ::ad::physics::Distance valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
    valueSituationsElementOtherVehicleStateDynamics.lateralFluctuationMargin
      = valueSituationsElementOtherVehicleStateDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueSituationsElementOtherVehicleStateDynamicsResponseTime(0.);
    valueSituationsElementOtherVehicleStateDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueSituationsElementOtherVehicleStateDynamics.responseTime
      = valueSituationsElementOtherVehicleStateDynamicsResponseTime;
    valueSituationsElementOtherVehicleState.dynamics = valueSituationsElementOtherVehicleStateDynamics;
    bool valueSituationsElementOtherVehicleStateHasPriority{true};
    valueSituationsElementOtherVehicleState.hasPriority = valueSituationsElementOtherVehicleStateHasPriority;
    bool valueSituationsElementOtherVehicleStateIsInCorrectLane{true};
    valueSituationsElementOtherVehicleState.isInCorrectLane = valueSituationsElementOtherVehicleStateIsInCorrectLane;
    ::ad::physics::Distance valueSituationsElementOtherVehicleStateDistanceToEnterIntersection(0.);
    valueSituationsElementOtherVehicleState.distanceToEnterIntersection
      = valueSituationsElementOtherVehicleStateDistanceToEnterIntersection;
    ::ad::physics::Distance valueSituationsElementOtherVehicleStateDistanceToLeaveIntersection(0.);
    valueSituationsElementOtherVehicleState.distanceToLeaveIntersection
      = valueSituationsElementOtherVehicleStateDistanceToLeaveIntersection;
    valueSituationsElementOtherVehicleState.distanceToLeaveIntersection
      = valueSituationsElementOtherVehicleState.distanceToEnterIntersection;
    valueSituationsElementOtherVehicleState.distanceToEnterIntersection
      = valueSituationsElementOtherVehicleState.distanceToLeaveIntersection;
    valueSituationsElement.otherVehicleState = valueSituationsElementOtherVehicleState;
    ::ad::rss::situation::RelativePosition valueSituationsElementRelativePosition;
    ::ad::rss::situation::LongitudinalRelativePosition valueSituationsElementRelativePositionLongitudinalPosition(
      ::ad::rss::situation::LongitudinalRelativePosition::InFront);
    valueSituationsElementRelativePosition.longitudinalPosition
      = valueSituationsElementRelativePositionLongitudinalPosition;
    ::ad::physics::Distance valueSituationsElementRelativePositionLongitudinalDistance(0.);
    valueSituationsElementRelativePosition.longitudinalDistance
      = valueSituationsElementRelativePositionLongitudinalDistance;
    ::ad::rss::situation::LateralRelativePosition valueSituationsElementRelativePositionLateralPosition(
      ::ad::rss::situation::LateralRelativePosition::AtLeft);
    valueSituationsElementRelativePosition.lateralPosition = valueSituationsElementRelativePositionLateralPosition;
    ::ad::physics::Distance valueSituationsElementRelativePositionLateralDistance(0.);
    valueSituationsElementRelativePosition.lateralDistance = valueSituationsElementRelativePositionLateralDistance;
    valueSituationsElement.relativePosition = valueSituationsElementRelativePosition;
    valueSituations.resize(1, valueSituationsElement);
    value.situations = valueSituations;
    mValue = value;
  }

  ::ad::rss::situation::SituationSnapshot mValue;
};

TEST_F(SituationSnapshotTests, copyConstruction)
{
  ::ad::rss::situation::SituationSnapshot value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, moveConstruction)
{
  ::ad::rss::situation::SituationSnapshot value(std::move(::ad::rss::situation::SituationSnapshot(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, copyAssignment)
{
  ::ad::rss::situation::SituationSnapshot value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, moveAssignment)
{
  ::ad::rss::situation::SituationSnapshot value;
  value = std::move(::ad::rss::situation::SituationSnapshot(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, comparisonOperatorEqual)
{
  ::ad::rss::situation::SituationSnapshot valueA = mValue;
  ::ad::rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SituationSnapshotTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::situation::SituationSnapshot valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationSnapshotTests, comparisonOperatorSituationsDiffers)
{
  ::ad::rss::situation::SituationSnapshot valueA = mValue;
  ::ad::rss::situation::SituationVector situations;
  ::ad::rss::situation::Situation situationsElement;
  ::ad::rss::situation::SituationId situationsElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::max());
  situationsElement.situationId = situationsElementSituationId;
  ::ad::rss::world::ObjectId situationsElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  situationsElement.objectId = situationsElementObjectId;
  ::ad::rss::situation::SituationType situationsElementSituationType(
    ::ad::rss::situation::SituationType::IntersectionSamePriority);
  situationsElement.situationType = situationsElementSituationType;
  ::ad::rss::situation::VehicleState situationsElementEgoVehicleState;
  ::ad::rss::situation::VelocityRange situationsElementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange situationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLonMinimum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLon.minimum = situationsElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLonMaximum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLon.maximum = situationsElementEgoVehicleStateVelocitySpeedLonMaximum;
  situationsElementEgoVehicleStateVelocitySpeedLon.maximum = situationsElementEgoVehicleStateVelocitySpeedLon.minimum;
  situationsElementEgoVehicleStateVelocitySpeedLon.minimum = situationsElementEgoVehicleStateVelocitySpeedLon.maximum;
  situationsElementEgoVehicleStateVelocity.speedLon = situationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange situationsElementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLatMinimum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLat.minimum = situationsElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLatMaximum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLat.maximum = situationsElementEgoVehicleStateVelocitySpeedLatMaximum;
  situationsElementEgoVehicleStateVelocitySpeedLat.maximum = situationsElementEgoVehicleStateVelocitySpeedLat.minimum;
  situationsElementEgoVehicleStateVelocitySpeedLat.minimum = situationsElementEgoVehicleStateVelocitySpeedLat.maximum;
  situationsElementEgoVehicleStateVelocity.speedLat = situationsElementEgoVehicleStateVelocitySpeedLat;
  situationsElementEgoVehicleState.velocity = situationsElementEgoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics situationsElementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues situationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonAccelMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.accelMax = situationsElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  situationsElementEgoVehicleStateDynamics.alphaLon = situationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues situationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLatAccelMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLat.accelMax = situationsElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLat.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  situationsElementEgoVehicleStateDynamics.alphaLat = situationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin(1e6);
  situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  situationsElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration situationsElementEgoVehicleStateDynamicsResponseTime(100.);
  situationsElementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(10.); // set to valid value within struct
  situationsElementEgoVehicleStateDynamics.responseTime = situationsElementEgoVehicleStateDynamicsResponseTime;
  situationsElementEgoVehicleState.dynamics = situationsElementEgoVehicleStateDynamics;
  bool situationsElementEgoVehicleStateHasPriority{false};
  situationsElementEgoVehicleState.hasPriority = situationsElementEgoVehicleStateHasPriority;
  bool situationsElementEgoVehicleStateIsInCorrectLane{false};
  situationsElementEgoVehicleState.isInCorrectLane = situationsElementEgoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance situationsElementEgoVehicleStateDistanceToEnterIntersection(1e6);
  situationsElementEgoVehicleState.distanceToEnterIntersection
    = situationsElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance situationsElementEgoVehicleStateDistanceToLeaveIntersection(1e6);
  situationsElementEgoVehicleStateDistanceToLeaveIntersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  situationsElementEgoVehicleState.distanceToLeaveIntersection
    = situationsElementEgoVehicleStateDistanceToLeaveIntersection;
  situationsElementEgoVehicleState.distanceToLeaveIntersection
    = situationsElementEgoVehicleState.distanceToEnterIntersection;
  situationsElementEgoVehicleState.distanceToEnterIntersection
    = situationsElementEgoVehicleState.distanceToLeaveIntersection;
  situationsElement.egoVehicleState = situationsElementEgoVehicleState;
  ::ad::rss::situation::VehicleState situationsElementOtherVehicleState;
  ::ad::rss::situation::VelocityRange situationsElementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange situationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLonMinimum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLonMaximum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLonMaximum;
  situationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLon.minimum;
  situationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLon.maximum;
  situationsElementOtherVehicleStateVelocity.speedLon = situationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange situationsElementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLatMinimum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLatMaximum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLatMaximum;
  situationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLat.minimum;
  situationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLat.maximum;
  situationsElementOtherVehicleStateVelocity.speedLat = situationsElementOtherVehicleStateVelocitySpeedLat;
  situationsElementOtherVehicleState.velocity = situationsElementOtherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics situationsElementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues situationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonAccelMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = situationsElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  situationsElementOtherVehicleStateDynamics.alphaLon = situationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues situationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLatAccelMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = situationsElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  situationsElementOtherVehicleStateDynamics.alphaLat = situationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin(1e6);
  situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  situationsElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration situationsElementOtherVehicleStateDynamicsResponseTime(100.);
  situationsElementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(10.); // set to valid value within struct
  situationsElementOtherVehicleStateDynamics.responseTime = situationsElementOtherVehicleStateDynamicsResponseTime;
  situationsElementOtherVehicleState.dynamics = situationsElementOtherVehicleStateDynamics;
  bool situationsElementOtherVehicleStateHasPriority{false};
  situationsElementOtherVehicleState.hasPriority = situationsElementOtherVehicleStateHasPriority;
  bool situationsElementOtherVehicleStateIsInCorrectLane{false};
  situationsElementOtherVehicleState.isInCorrectLane = situationsElementOtherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance situationsElementOtherVehicleStateDistanceToEnterIntersection(1e6);
  situationsElementOtherVehicleState.distanceToEnterIntersection
    = situationsElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance situationsElementOtherVehicleStateDistanceToLeaveIntersection(1e6);
  situationsElementOtherVehicleStateDistanceToLeaveIntersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  situationsElementOtherVehicleState.distanceToLeaveIntersection
    = situationsElementOtherVehicleStateDistanceToLeaveIntersection;
  situationsElementOtherVehicleState.distanceToLeaveIntersection
    = situationsElementOtherVehicleState.distanceToEnterIntersection;
  situationsElementOtherVehicleState.distanceToEnterIntersection
    = situationsElementOtherVehicleState.distanceToLeaveIntersection;
  situationsElement.otherVehicleState = situationsElementOtherVehicleState;
  ::ad::rss::situation::RelativePosition situationsElementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition situationsElementRelativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::AtBack);
  situationsElementRelativePosition.longitudinalPosition = situationsElementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance situationsElementRelativePositionLongitudinalDistance(1e6);
  situationsElementRelativePosition.longitudinalDistance = situationsElementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition situationsElementRelativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtRight);
  situationsElementRelativePosition.lateralPosition = situationsElementRelativePositionLateralPosition;
  ::ad::physics::Distance situationsElementRelativePositionLateralDistance(1e6);
  situationsElementRelativePosition.lateralDistance = situationsElementRelativePositionLateralDistance;
  situationsElement.relativePosition = situationsElementRelativePosition;
  situations.resize(0 + 1, situationsElement);
  valueA.situations = situations;
  ::ad::rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
