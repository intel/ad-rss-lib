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
#include "ad_rss/situation/Situation.hpp"

class SituationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::situation::Situation value;
    ::ad_rss::situation::SituationId valueSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
    value.situationId = valueSituationId;
    ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
    value.objectId = valueObjectId;
    ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
    value.situationType = valueSituationType;
    ::ad_rss::situation::VehicleState valueEgoVehicleState;
    ::ad_rss::situation::VelocityRange valueEgoVehicleStateVelocity;
    ::ad_rss::physics::SpeedRange valueEgoVehicleStateVelocitySpeedLon;
    ::ad_rss::physics::Speed valueEgoVehicleStateVelocitySpeedLonMinimum(-100.);
    valueEgoVehicleStateVelocitySpeedLon.minimum = valueEgoVehicleStateVelocitySpeedLonMinimum;
    ::ad_rss::physics::Speed valueEgoVehicleStateVelocitySpeedLonMaximum(-100.);
    valueEgoVehicleStateVelocitySpeedLon.maximum = valueEgoVehicleStateVelocitySpeedLonMaximum;
    valueEgoVehicleStateVelocitySpeedLon.maximum = valueEgoVehicleStateVelocitySpeedLon.minimum;
    valueEgoVehicleStateVelocitySpeedLon.minimum = valueEgoVehicleStateVelocitySpeedLon.maximum;
    valueEgoVehicleStateVelocity.speedLon = valueEgoVehicleStateVelocitySpeedLon;
    ::ad_rss::physics::SpeedRange valueEgoVehicleStateVelocitySpeedLat;
    ::ad_rss::physics::Speed valueEgoVehicleStateVelocitySpeedLatMinimum(-100.);
    valueEgoVehicleStateVelocitySpeedLat.minimum = valueEgoVehicleStateVelocitySpeedLatMinimum;
    ::ad_rss::physics::Speed valueEgoVehicleStateVelocitySpeedLatMaximum(-100.);
    valueEgoVehicleStateVelocitySpeedLat.maximum = valueEgoVehicleStateVelocitySpeedLatMaximum;
    valueEgoVehicleStateVelocitySpeedLat.maximum = valueEgoVehicleStateVelocitySpeedLat.minimum;
    valueEgoVehicleStateVelocitySpeedLat.minimum = valueEgoVehicleStateVelocitySpeedLat.maximum;
    valueEgoVehicleStateVelocity.speedLat = valueEgoVehicleStateVelocitySpeedLat;
    valueEgoVehicleState.velocity = valueEgoVehicleStateVelocity;
    ::ad_rss::world::RssDynamics valueEgoVehicleStateDynamics;
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
    ::ad_rss::physics::Duration valueEgoVehicleStateDynamicsResponseTime(0.);
    valueEgoVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleStateDynamics.responseTime = valueEgoVehicleStateDynamicsResponseTime;
    valueEgoVehicleState.dynamics = valueEgoVehicleStateDynamics;
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
    ::ad_rss::situation::VelocityRange valueOtherVehicleStateVelocity;
    ::ad_rss::physics::SpeedRange valueOtherVehicleStateVelocitySpeedLon;
    ::ad_rss::physics::Speed valueOtherVehicleStateVelocitySpeedLonMinimum(-100.);
    valueOtherVehicleStateVelocitySpeedLon.minimum = valueOtherVehicleStateVelocitySpeedLonMinimum;
    ::ad_rss::physics::Speed valueOtherVehicleStateVelocitySpeedLonMaximum(-100.);
    valueOtherVehicleStateVelocitySpeedLon.maximum = valueOtherVehicleStateVelocitySpeedLonMaximum;
    valueOtherVehicleStateVelocitySpeedLon.maximum = valueOtherVehicleStateVelocitySpeedLon.minimum;
    valueOtherVehicleStateVelocitySpeedLon.minimum = valueOtherVehicleStateVelocitySpeedLon.maximum;
    valueOtherVehicleStateVelocity.speedLon = valueOtherVehicleStateVelocitySpeedLon;
    ::ad_rss::physics::SpeedRange valueOtherVehicleStateVelocitySpeedLat;
    ::ad_rss::physics::Speed valueOtherVehicleStateVelocitySpeedLatMinimum(-100.);
    valueOtherVehicleStateVelocitySpeedLat.minimum = valueOtherVehicleStateVelocitySpeedLatMinimum;
    ::ad_rss::physics::Speed valueOtherVehicleStateVelocitySpeedLatMaximum(-100.);
    valueOtherVehicleStateVelocitySpeedLat.maximum = valueOtherVehicleStateVelocitySpeedLatMaximum;
    valueOtherVehicleStateVelocitySpeedLat.maximum = valueOtherVehicleStateVelocitySpeedLat.minimum;
    valueOtherVehicleStateVelocitySpeedLat.minimum = valueOtherVehicleStateVelocitySpeedLat.maximum;
    valueOtherVehicleStateVelocity.speedLat = valueOtherVehicleStateVelocitySpeedLat;
    valueOtherVehicleState.velocity = valueOtherVehicleStateVelocity;
    ::ad_rss::world::RssDynamics valueOtherVehicleStateDynamics;
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
    ::ad_rss::physics::Duration valueOtherVehicleStateDynamicsResponseTime(0.);
    valueOtherVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueOtherVehicleStateDynamics.responseTime = valueOtherVehicleStateDynamicsResponseTime;
    valueOtherVehicleState.dynamics = valueOtherVehicleStateDynamics;
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

TEST_F(SituationTests, comparisonOperatorSituationIdDiffers)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::situation::SituationId situationId(std::numeric_limits<::ad_rss::situation::SituationId>::max());
  valueA.situationId = situationId;
  ::ad_rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorObjectIdDiffers)
{
  ::ad_rss::situation::Situation valueA = mValue;
  ::ad_rss::world::ObjectId objectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  valueA.objectId = objectId;
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
  ::ad_rss::situation::VelocityRange egoVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange egoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed egoVehicleStateVelocitySpeedLonMinimum(100.);
  egoVehicleStateVelocitySpeedLon.minimum = egoVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed egoVehicleStateVelocitySpeedLonMaximum(100.);
  egoVehicleStateVelocitySpeedLon.maximum = egoVehicleStateVelocitySpeedLonMaximum;
  egoVehicleStateVelocitySpeedLon.maximum = egoVehicleStateVelocitySpeedLon.minimum;
  egoVehicleStateVelocitySpeedLon.minimum = egoVehicleStateVelocitySpeedLon.maximum;
  egoVehicleStateVelocity.speedLon = egoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange egoVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed egoVehicleStateVelocitySpeedLatMinimum(100.);
  egoVehicleStateVelocitySpeedLat.minimum = egoVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed egoVehicleStateVelocitySpeedLatMaximum(100.);
  egoVehicleStateVelocitySpeedLat.maximum = egoVehicleStateVelocitySpeedLatMaximum;
  egoVehicleStateVelocitySpeedLat.maximum = egoVehicleStateVelocitySpeedLat.minimum;
  egoVehicleStateVelocitySpeedLat.minimum = egoVehicleStateVelocitySpeedLat.maximum;
  egoVehicleStateVelocity.speedLat = egoVehicleStateVelocitySpeedLat;
  egoVehicleState.velocity = egoVehicleStateVelocity;
  ::ad_rss::world::RssDynamics egoVehicleStateDynamics;
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
  ::ad_rss::physics::Duration egoVehicleStateDynamicsResponseTime(100.);
  egoVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  egoVehicleStateDynamics.responseTime = egoVehicleStateDynamicsResponseTime;
  egoVehicleState.dynamics = egoVehicleStateDynamics;
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
  ::ad_rss::situation::VelocityRange otherVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange otherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed otherVehicleStateVelocitySpeedLonMinimum(100.);
  otherVehicleStateVelocitySpeedLon.minimum = otherVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed otherVehicleStateVelocitySpeedLonMaximum(100.);
  otherVehicleStateVelocitySpeedLon.maximum = otherVehicleStateVelocitySpeedLonMaximum;
  otherVehicleStateVelocitySpeedLon.maximum = otherVehicleStateVelocitySpeedLon.minimum;
  otherVehicleStateVelocitySpeedLon.minimum = otherVehicleStateVelocitySpeedLon.maximum;
  otherVehicleStateVelocity.speedLon = otherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange otherVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed otherVehicleStateVelocitySpeedLatMinimum(100.);
  otherVehicleStateVelocitySpeedLat.minimum = otherVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed otherVehicleStateVelocitySpeedLatMaximum(100.);
  otherVehicleStateVelocitySpeedLat.maximum = otherVehicleStateVelocitySpeedLatMaximum;
  otherVehicleStateVelocitySpeedLat.maximum = otherVehicleStateVelocitySpeedLat.minimum;
  otherVehicleStateVelocitySpeedLat.minimum = otherVehicleStateVelocitySpeedLat.maximum;
  otherVehicleStateVelocity.speedLat = otherVehicleStateVelocitySpeedLat;
  otherVehicleState.velocity = otherVehicleStateVelocity;
  ::ad_rss::world::RssDynamics otherVehicleStateDynamics;
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
  ::ad_rss::physics::Duration otherVehicleStateDynamicsResponseTime(100.);
  otherVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  otherVehicleStateDynamics.responseTime = otherVehicleStateDynamicsResponseTime;
  otherVehicleState.dynamics = otherVehicleStateDynamics;
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
