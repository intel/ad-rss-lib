/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * SPDX-License-Identifier: LGPL-2.1-only
 *
 * ----------------- END LICENSE BLOCK -----------------------------------
 */

/*
 * Generated file
 */

#include <gtest/gtest.h>
#include <limits>
#include "ad_rss/situation/SituationSnapshot.hpp"

class SituationSnapshotTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::situation::SituationSnapshot value;
    ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
    valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad_rss::situation::SituationVector valueSituations;
    value.situations = valueSituations;
    mValue = value;
  }

  ::ad_rss::situation::SituationSnapshot mValue;
};

TEST_F(SituationSnapshotTests, copyConstruction)
{
  ::ad_rss::situation::SituationSnapshot value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, moveConstruction)
{
  ::ad_rss::situation::SituationSnapshot value(std::move(::ad_rss::situation::SituationSnapshot(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, copyAssignment)
{
  ::ad_rss::situation::SituationSnapshot value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, moveAssignment)
{
  ::ad_rss::situation::SituationSnapshot value;
  value = std::move(::ad_rss::situation::SituationSnapshot(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationSnapshotTests, comparisonOperatorEqual)
{
  ::ad_rss::situation::SituationSnapshot valueA = mValue;
  ::ad_rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SituationSnapshotTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad_rss::situation::SituationSnapshot valueA = mValue;
  ::ad_rss::physics::TimeIndex timeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad_rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationSnapshotTests, comparisonOperatorSituationsDiffers)
{
  ::ad_rss::situation::SituationSnapshot valueA = mValue;
  ::ad_rss::situation::SituationVector situations;
  ::ad_rss::situation::Situation situationsElement;
  ::ad_rss::situation::SituationId situationsElementSituationId(
    std::numeric_limits<::ad_rss::situation::SituationId>::max());
  situationsElement.situationId = situationsElementSituationId;
  ::ad_rss::world::ObjectId situationsElementObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  situationsElement.objectId = situationsElementObjectId;
  ::ad_rss::situation::SituationType situationsElementSituationType(
    ::ad_rss::situation::SituationType::IntersectionSamePriority);
  situationsElement.situationType = situationsElementSituationType;
  ::ad_rss::situation::VehicleState situationsElementEgoVehicleState;
  ::ad_rss::situation::VelocityRange situationsElementEgoVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange situationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLonMinimum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLon.minimum = situationsElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLonMaximum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLon.maximum = situationsElementEgoVehicleStateVelocitySpeedLonMaximum;
  situationsElementEgoVehicleStateVelocitySpeedLon.maximum = situationsElementEgoVehicleStateVelocitySpeedLon.minimum;
  situationsElementEgoVehicleStateVelocitySpeedLon.minimum = situationsElementEgoVehicleStateVelocitySpeedLon.maximum;
  situationsElementEgoVehicleStateVelocity.speedLon = situationsElementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange situationsElementEgoVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLatMinimum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLat.minimum = situationsElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed situationsElementEgoVehicleStateVelocitySpeedLatMaximum(100.);
  situationsElementEgoVehicleStateVelocitySpeedLat.maximum = situationsElementEgoVehicleStateVelocitySpeedLatMaximum;
  situationsElementEgoVehicleStateVelocitySpeedLat.maximum = situationsElementEgoVehicleStateVelocitySpeedLat.minimum;
  situationsElementEgoVehicleStateVelocitySpeedLat.minimum = situationsElementEgoVehicleStateVelocitySpeedLat.maximum;
  situationsElementEgoVehicleStateVelocity.speedLat = situationsElementEgoVehicleStateVelocitySpeedLat;
  situationsElementEgoVehicleState.velocity = situationsElementEgoVehicleStateVelocity;
  ::ad_rss::world::RssDynamics situationsElementEgoVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues situationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonAccelMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.accelMax = situationsElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  situationsElementEgoVehicleStateDynamics.alphaLon = situationsElementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues situationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLatAccelMax(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLat.accelMax = situationsElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration situationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  situationsElementEgoVehicleStateDynamicsAlphaLat.brakeMin = situationsElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  situationsElementEgoVehicleStateDynamics.alphaLat = situationsElementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin(1e6);
  situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  situationsElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = situationsElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration situationsElementEgoVehicleStateDynamicsResponseTime(100.);
  situationsElementEgoVehicleStateDynamicsResponseTime
    = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  situationsElementEgoVehicleStateDynamics.responseTime = situationsElementEgoVehicleStateDynamicsResponseTime;
  situationsElementEgoVehicleState.dynamics = situationsElementEgoVehicleStateDynamics;
  bool situationsElementEgoVehicleStateHasPriority{false};
  situationsElementEgoVehicleState.hasPriority = situationsElementEgoVehicleStateHasPriority;
  bool situationsElementEgoVehicleStateIsInCorrectLane{false};
  situationsElementEgoVehicleState.isInCorrectLane = situationsElementEgoVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance situationsElementEgoVehicleStateDistanceToEnterIntersection(1e6);
  situationsElementEgoVehicleState.distanceToEnterIntersection
    = situationsElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance situationsElementEgoVehicleStateDistanceToLeaveIntersection(1e6);
  situationsElementEgoVehicleStateDistanceToLeaveIntersection
    = ::ad_rss::physics::Distance(1e4); // set to valid value within struct
  situationsElementEgoVehicleState.distanceToLeaveIntersection
    = situationsElementEgoVehicleStateDistanceToLeaveIntersection;
  situationsElementEgoVehicleState.distanceToLeaveIntersection
    = situationsElementEgoVehicleState.distanceToEnterIntersection;
  situationsElementEgoVehicleState.distanceToEnterIntersection
    = situationsElementEgoVehicleState.distanceToLeaveIntersection;
  situationsElement.egoVehicleState = situationsElementEgoVehicleState;
  ::ad_rss::situation::VehicleState situationsElementOtherVehicleState;
  ::ad_rss::situation::VelocityRange situationsElementOtherVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange situationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLonMinimum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLonMaximum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLonMaximum;
  situationsElementOtherVehicleStateVelocitySpeedLon.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLon.minimum;
  situationsElementOtherVehicleStateVelocitySpeedLon.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLon.maximum;
  situationsElementOtherVehicleStateVelocity.speedLon = situationsElementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange situationsElementOtherVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLatMinimum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed situationsElementOtherVehicleStateVelocitySpeedLatMaximum(100.);
  situationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLatMaximum;
  situationsElementOtherVehicleStateVelocitySpeedLat.maximum
    = situationsElementOtherVehicleStateVelocitySpeedLat.minimum;
  situationsElementOtherVehicleStateVelocitySpeedLat.minimum
    = situationsElementOtherVehicleStateVelocitySpeedLat.maximum;
  situationsElementOtherVehicleStateVelocity.speedLat = situationsElementOtherVehicleStateVelocitySpeedLat;
  situationsElementOtherVehicleState.velocity = situationsElementOtherVehicleStateVelocity;
  ::ad_rss::world::RssDynamics situationsElementOtherVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues situationsElementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonAccelMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = situationsElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
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
  ::ad_rss::world::LateralRssAccelerationValues situationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLatAccelMax(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = situationsElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration situationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  situationsElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = situationsElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  situationsElementOtherVehicleStateDynamics.alphaLat = situationsElementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin(1e6);
  situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  situationsElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = situationsElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration situationsElementOtherVehicleStateDynamicsResponseTime(100.);
  situationsElementOtherVehicleStateDynamicsResponseTime
    = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  situationsElementOtherVehicleStateDynamics.responseTime = situationsElementOtherVehicleStateDynamicsResponseTime;
  situationsElementOtherVehicleState.dynamics = situationsElementOtherVehicleStateDynamics;
  bool situationsElementOtherVehicleStateHasPriority{false};
  situationsElementOtherVehicleState.hasPriority = situationsElementOtherVehicleStateHasPriority;
  bool situationsElementOtherVehicleStateIsInCorrectLane{false};
  situationsElementOtherVehicleState.isInCorrectLane = situationsElementOtherVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance situationsElementOtherVehicleStateDistanceToEnterIntersection(1e6);
  situationsElementOtherVehicleState.distanceToEnterIntersection
    = situationsElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance situationsElementOtherVehicleStateDistanceToLeaveIntersection(1e6);
  situationsElementOtherVehicleStateDistanceToLeaveIntersection
    = ::ad_rss::physics::Distance(1e4); // set to valid value within struct
  situationsElementOtherVehicleState.distanceToLeaveIntersection
    = situationsElementOtherVehicleStateDistanceToLeaveIntersection;
  situationsElementOtherVehicleState.distanceToLeaveIntersection
    = situationsElementOtherVehicleState.distanceToEnterIntersection;
  situationsElementOtherVehicleState.distanceToEnterIntersection
    = situationsElementOtherVehicleState.distanceToLeaveIntersection;
  situationsElement.otherVehicleState = situationsElementOtherVehicleState;
  ::ad_rss::situation::RelativePosition situationsElementRelativePosition;
  ::ad_rss::situation::LongitudinalRelativePosition situationsElementRelativePositionLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::AtBack);
  situationsElementRelativePosition.longitudinalPosition = situationsElementRelativePositionLongitudinalPosition;
  ::ad_rss::physics::Distance situationsElementRelativePositionLongitudinalDistance(1e6);
  situationsElementRelativePosition.longitudinalDistance = situationsElementRelativePositionLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition situationsElementRelativePositionLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtRight);
  situationsElementRelativePosition.lateralPosition = situationsElementRelativePositionLateralPosition;
  ::ad_rss::physics::Distance situationsElementRelativePositionLateralDistance(1e6);
  situationsElementRelativePosition.lateralDistance = situationsElementRelativePositionLateralDistance;
  situationsElement.relativePosition = situationsElementRelativePosition;
  situations.resize(0 + 1, situationsElement);
  valueA.situations = situations;
  ::ad_rss::situation::SituationSnapshot valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
