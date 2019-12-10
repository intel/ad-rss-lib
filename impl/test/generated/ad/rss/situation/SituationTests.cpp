/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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
#include "ad/rss/situation/Situation.hpp"

class SituationTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::situation::Situation value;
    ::ad::rss::situation::SituationId valueSituationId(
      std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
    value.situationId = valueSituationId;
    ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    value.objectId = valueObjectId;
    ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
    value.situationType = valueSituationType;
    ::ad::rss::situation::VehicleState valueEgoVehicleState;
    ::ad::rss::situation::VelocityRange valueEgoVehicleStateVelocity;
    ::ad::physics::SpeedRange valueEgoVehicleStateVelocitySpeedLon;
    ::ad::physics::Speed valueEgoVehicleStateVelocitySpeedLonMinimum(-100.);
    valueEgoVehicleStateVelocitySpeedLon.minimum = valueEgoVehicleStateVelocitySpeedLonMinimum;
    ::ad::physics::Speed valueEgoVehicleStateVelocitySpeedLonMaximum(-100.);
    valueEgoVehicleStateVelocitySpeedLon.maximum = valueEgoVehicleStateVelocitySpeedLonMaximum;
    valueEgoVehicleStateVelocitySpeedLon.maximum = valueEgoVehicleStateVelocitySpeedLon.minimum;
    valueEgoVehicleStateVelocitySpeedLon.minimum = valueEgoVehicleStateVelocitySpeedLon.maximum;
    valueEgoVehicleStateVelocity.speedLon = valueEgoVehicleStateVelocitySpeedLon;
    ::ad::physics::SpeedRange valueEgoVehicleStateVelocitySpeedLat;
    ::ad::physics::Speed valueEgoVehicleStateVelocitySpeedLatMinimum(-100.);
    valueEgoVehicleStateVelocitySpeedLat.minimum = valueEgoVehicleStateVelocitySpeedLatMinimum;
    ::ad::physics::Speed valueEgoVehicleStateVelocitySpeedLatMaximum(-100.);
    valueEgoVehicleStateVelocitySpeedLat.maximum = valueEgoVehicleStateVelocitySpeedLatMaximum;
    valueEgoVehicleStateVelocitySpeedLat.maximum = valueEgoVehicleStateVelocitySpeedLat.minimum;
    valueEgoVehicleStateVelocitySpeedLat.minimum = valueEgoVehicleStateVelocitySpeedLat.maximum;
    valueEgoVehicleStateVelocity.speedLat = valueEgoVehicleStateVelocitySpeedLat;
    valueEgoVehicleState.velocity = valueEgoVehicleStateVelocity;
    ::ad::rss::world::RssDynamics valueEgoVehicleStateDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueEgoVehicleStateDynamicsAlphaLon;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonAccelMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLon.accelMax = valueEgoVehicleStateDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLon.brakeMax = valueEgoVehicleStateDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMax = valueEgoVehicleStateDynamicsAlphaLon.brakeMin;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMin = valueEgoVehicleStateDynamicsAlphaLon.brakeMax;
    valueEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleStateDynamicsAlphaLon.brakeMin;
    valueEgoVehicleStateDynamics.alphaLon = valueEgoVehicleStateDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueEgoVehicleStateDynamicsAlphaLat;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLatAccelMax(-1e2);
    valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLat.accelMax = valueEgoVehicleStateDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueEgoVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
    valueEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleStateDynamicsAlphaLat.brakeMin = valueEgoVehicleStateDynamicsAlphaLatBrakeMin;
    valueEgoVehicleStateDynamics.alphaLat = valueEgoVehicleStateDynamicsAlphaLat;
    ::ad::physics::Distance valueEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
    valueEgoVehicleStateDynamics.lateralFluctuationMargin = valueEgoVehicleStateDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueEgoVehicleStateDynamicsResponseTime(0.);
    valueEgoVehicleStateDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleStateDynamics.responseTime = valueEgoVehicleStateDynamicsResponseTime;
    ::ad::physics::Speed valueEgoVehicleStateDynamicsMaxSpeed(-100.);
    valueEgoVehicleStateDynamics.maxSpeed = valueEgoVehicleStateDynamicsMaxSpeed;
    valueEgoVehicleState.dynamics = valueEgoVehicleStateDynamics;
    bool valueEgoVehicleStateHasPriority{true};
    valueEgoVehicleState.hasPriority = valueEgoVehicleStateHasPriority;
    bool valueEgoVehicleStateIsInCorrectLane{true};
    valueEgoVehicleState.isInCorrectLane = valueEgoVehicleStateIsInCorrectLane;
    ::ad::physics::Distance valueEgoVehicleStateDistanceToEnterIntersection(0.);
    valueEgoVehicleState.distanceToEnterIntersection = valueEgoVehicleStateDistanceToEnterIntersection;
    ::ad::physics::Distance valueEgoVehicleStateDistanceToLeaveIntersection(0.);
    valueEgoVehicleState.distanceToLeaveIntersection = valueEgoVehicleStateDistanceToLeaveIntersection;
    valueEgoVehicleState.distanceToLeaveIntersection = valueEgoVehicleState.distanceToEnterIntersection;
    valueEgoVehicleState.distanceToEnterIntersection = valueEgoVehicleState.distanceToLeaveIntersection;
    value.egoVehicleState = valueEgoVehicleState;
    ::ad::rss::situation::VehicleState valueOtherVehicleState;
    ::ad::rss::situation::VelocityRange valueOtherVehicleStateVelocity;
    ::ad::physics::SpeedRange valueOtherVehicleStateVelocitySpeedLon;
    ::ad::physics::Speed valueOtherVehicleStateVelocitySpeedLonMinimum(-100.);
    valueOtherVehicleStateVelocitySpeedLon.minimum = valueOtherVehicleStateVelocitySpeedLonMinimum;
    ::ad::physics::Speed valueOtherVehicleStateVelocitySpeedLonMaximum(-100.);
    valueOtherVehicleStateVelocitySpeedLon.maximum = valueOtherVehicleStateVelocitySpeedLonMaximum;
    valueOtherVehicleStateVelocitySpeedLon.maximum = valueOtherVehicleStateVelocitySpeedLon.minimum;
    valueOtherVehicleStateVelocitySpeedLon.minimum = valueOtherVehicleStateVelocitySpeedLon.maximum;
    valueOtherVehicleStateVelocity.speedLon = valueOtherVehicleStateVelocitySpeedLon;
    ::ad::physics::SpeedRange valueOtherVehicleStateVelocitySpeedLat;
    ::ad::physics::Speed valueOtherVehicleStateVelocitySpeedLatMinimum(-100.);
    valueOtherVehicleStateVelocitySpeedLat.minimum = valueOtherVehicleStateVelocitySpeedLatMinimum;
    ::ad::physics::Speed valueOtherVehicleStateVelocitySpeedLatMaximum(-100.);
    valueOtherVehicleStateVelocitySpeedLat.maximum = valueOtherVehicleStateVelocitySpeedLatMaximum;
    valueOtherVehicleStateVelocitySpeedLat.maximum = valueOtherVehicleStateVelocitySpeedLat.minimum;
    valueOtherVehicleStateVelocitySpeedLat.minimum = valueOtherVehicleStateVelocitySpeedLat.maximum;
    valueOtherVehicleStateVelocity.speedLat = valueOtherVehicleStateVelocitySpeedLat;
    valueOtherVehicleState.velocity = valueOtherVehicleStateVelocity;
    ::ad::rss::world::RssDynamics valueOtherVehicleStateDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueOtherVehicleStateDynamicsAlphaLon;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
    valueOtherVehicleStateDynamicsAlphaLon.accelMax = valueOtherVehicleStateDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLon.brakeMax = valueOtherVehicleStateDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMax = valueOtherVehicleStateDynamicsAlphaLon.brakeMin;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMin = valueOtherVehicleStateDynamicsAlphaLon.brakeMax;
    valueOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = valueOtherVehicleStateDynamicsAlphaLon.brakeMin;
    valueOtherVehicleStateDynamics.alphaLon = valueOtherVehicleStateDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueOtherVehicleStateDynamicsAlphaLat;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
    valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
    valueOtherVehicleStateDynamicsAlphaLat.accelMax = valueOtherVehicleStateDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
    valueOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueOtherVehicleStateDynamicsAlphaLat.brakeMin = valueOtherVehicleStateDynamicsAlphaLatBrakeMin;
    valueOtherVehicleStateDynamics.alphaLat = valueOtherVehicleStateDynamicsAlphaLat;
    ::ad::physics::Distance valueOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
    valueOtherVehicleStateDynamics.lateralFluctuationMargin = valueOtherVehicleStateDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueOtherVehicleStateDynamicsResponseTime(0.);
    valueOtherVehicleStateDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueOtherVehicleStateDynamics.responseTime = valueOtherVehicleStateDynamicsResponseTime;
    ::ad::physics::Speed valueOtherVehicleStateDynamicsMaxSpeed(-100.);
    valueOtherVehicleStateDynamics.maxSpeed = valueOtherVehicleStateDynamicsMaxSpeed;
    valueOtherVehicleState.dynamics = valueOtherVehicleStateDynamics;
    bool valueOtherVehicleStateHasPriority{true};
    valueOtherVehicleState.hasPriority = valueOtherVehicleStateHasPriority;
    bool valueOtherVehicleStateIsInCorrectLane{true};
    valueOtherVehicleState.isInCorrectLane = valueOtherVehicleStateIsInCorrectLane;
    ::ad::physics::Distance valueOtherVehicleStateDistanceToEnterIntersection(0.);
    valueOtherVehicleState.distanceToEnterIntersection = valueOtherVehicleStateDistanceToEnterIntersection;
    ::ad::physics::Distance valueOtherVehicleStateDistanceToLeaveIntersection(0.);
    valueOtherVehicleState.distanceToLeaveIntersection = valueOtherVehicleStateDistanceToLeaveIntersection;
    valueOtherVehicleState.distanceToLeaveIntersection = valueOtherVehicleState.distanceToEnterIntersection;
    valueOtherVehicleState.distanceToEnterIntersection = valueOtherVehicleState.distanceToLeaveIntersection;
    value.otherVehicleState = valueOtherVehicleState;
    ::ad::rss::situation::RelativePosition valueRelativePosition;
    ::ad::rss::situation::LongitudinalRelativePosition valueRelativePositionLongitudinalPosition(
      ::ad::rss::situation::LongitudinalRelativePosition::InFront);
    valueRelativePosition.longitudinalPosition = valueRelativePositionLongitudinalPosition;
    ::ad::physics::Distance valueRelativePositionLongitudinalDistance(0.);
    valueRelativePosition.longitudinalDistance = valueRelativePositionLongitudinalDistance;
    ::ad::rss::situation::LateralRelativePosition valueRelativePositionLateralPosition(
      ::ad::rss::situation::LateralRelativePosition::AtLeft);
    valueRelativePosition.lateralPosition = valueRelativePositionLateralPosition;
    ::ad::physics::Distance valueRelativePositionLateralDistance(0.);
    valueRelativePosition.lateralDistance = valueRelativePositionLateralDistance;
    value.relativePosition = valueRelativePosition;
    mValue = value;
  }

  ::ad::rss::situation::Situation mValue;
};

TEST_F(SituationTests, copyConstruction)
{
  ::ad::rss::situation::Situation value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, moveConstruction)
{
  ::ad::rss::situation::Situation value(std::move(::ad::rss::situation::Situation(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, copyAssignment)
{
  ::ad::rss::situation::Situation value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, moveAssignment)
{
  ::ad::rss::situation::Situation value;
  value = std::move(::ad::rss::situation::Situation(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SituationTests, comparisonOperatorEqual)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SituationTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(SituationTests, comparisonOperatorSituationIdDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::SituationId situationId(std::numeric_limits<::ad::rss::situation::SituationId>::max());
  valueA.situationId = situationId;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorObjectIdDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::world::ObjectId objectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.objectId = objectId;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorSituationTypeDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::SituationType situationType(::ad::rss::situation::SituationType::IntersectionSamePriority);
  valueA.situationType = situationType;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorEgoVehicleStateDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::VehicleState egoVehicleState;
  ::ad::rss::situation::VelocityRange egoVehicleStateVelocity;
  ::ad::physics::SpeedRange egoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed egoVehicleStateVelocitySpeedLonMinimum(100.);
  egoVehicleStateVelocitySpeedLon.minimum = egoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed egoVehicleStateVelocitySpeedLonMaximum(100.);
  egoVehicleStateVelocitySpeedLon.maximum = egoVehicleStateVelocitySpeedLonMaximum;
  egoVehicleStateVelocitySpeedLon.maximum = egoVehicleStateVelocitySpeedLon.minimum;
  egoVehicleStateVelocitySpeedLon.minimum = egoVehicleStateVelocitySpeedLon.maximum;
  egoVehicleStateVelocity.speedLon = egoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange egoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed egoVehicleStateVelocitySpeedLatMinimum(100.);
  egoVehicleStateVelocitySpeedLat.minimum = egoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed egoVehicleStateVelocitySpeedLatMaximum(100.);
  egoVehicleStateVelocitySpeedLat.maximum = egoVehicleStateVelocitySpeedLatMaximum;
  egoVehicleStateVelocitySpeedLat.maximum = egoVehicleStateVelocitySpeedLat.minimum;
  egoVehicleStateVelocitySpeedLat.minimum = egoVehicleStateVelocitySpeedLat.maximum;
  egoVehicleStateVelocity.speedLat = egoVehicleStateVelocitySpeedLat;
  egoVehicleState.velocity = egoVehicleStateVelocity;
  ::ad::rss::world::RssDynamics egoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues egoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLonAccelMax(1e2);
  egoVehicleStateDynamicsAlphaLon.accelMax = egoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  egoVehicleStateDynamicsAlphaLon.brakeMax = egoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  egoVehicleStateDynamicsAlphaLon.brakeMinCorrect = egoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  egoVehicleStateDynamicsAlphaLon.brakeMax = egoVehicleStateDynamicsAlphaLon.brakeMin;
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  egoVehicleStateDynamicsAlphaLon.brakeMinCorrect = egoVehicleStateDynamicsAlphaLon.brakeMin;
  egoVehicleStateDynamicsAlphaLon.brakeMin = egoVehicleStateDynamicsAlphaLon.brakeMax;
  egoVehicleStateDynamics.alphaLon = egoVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues egoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLatAccelMax(1e2);
  egoVehicleStateDynamicsAlphaLat.accelMax = egoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration egoVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  egoVehicleStateDynamicsAlphaLat.brakeMin = egoVehicleStateDynamicsAlphaLatBrakeMin;
  egoVehicleStateDynamics.alphaLat = egoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance egoVehicleStateDynamicsLateralFluctuationMargin(1e9);
  egoVehicleStateDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  egoVehicleStateDynamics.lateralFluctuationMargin = egoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration egoVehicleStateDynamicsResponseTime(1e6);
  egoVehicleStateDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  egoVehicleStateDynamics.responseTime = egoVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed egoVehicleStateDynamicsMaxSpeed(100.);
  egoVehicleStateDynamics.maxSpeed = egoVehicleStateDynamicsMaxSpeed;
  egoVehicleState.dynamics = egoVehicleStateDynamics;
  bool egoVehicleStateHasPriority{false};
  egoVehicleState.hasPriority = egoVehicleStateHasPriority;
  bool egoVehicleStateIsInCorrectLane{false};
  egoVehicleState.isInCorrectLane = egoVehicleStateIsInCorrectLane;
  ::ad::physics::Distance egoVehicleStateDistanceToEnterIntersection(1e9);
  egoVehicleState.distanceToEnterIntersection = egoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance egoVehicleStateDistanceToLeaveIntersection(1e9);
  egoVehicleStateDistanceToLeaveIntersection = ::ad::physics::Distance(1e4); // set to valid value within struct
  egoVehicleState.distanceToLeaveIntersection = egoVehicleStateDistanceToLeaveIntersection;
  egoVehicleState.distanceToLeaveIntersection = egoVehicleState.distanceToEnterIntersection;
  egoVehicleState.distanceToEnterIntersection = egoVehicleState.distanceToLeaveIntersection;
  valueA.egoVehicleState = egoVehicleState;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorOtherVehicleStateDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::VehicleState otherVehicleState;
  ::ad::rss::situation::VelocityRange otherVehicleStateVelocity;
  ::ad::physics::SpeedRange otherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed otherVehicleStateVelocitySpeedLonMinimum(100.);
  otherVehicleStateVelocitySpeedLon.minimum = otherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed otherVehicleStateVelocitySpeedLonMaximum(100.);
  otherVehicleStateVelocitySpeedLon.maximum = otherVehicleStateVelocitySpeedLonMaximum;
  otherVehicleStateVelocitySpeedLon.maximum = otherVehicleStateVelocitySpeedLon.minimum;
  otherVehicleStateVelocitySpeedLon.minimum = otherVehicleStateVelocitySpeedLon.maximum;
  otherVehicleStateVelocity.speedLon = otherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange otherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed otherVehicleStateVelocitySpeedLatMinimum(100.);
  otherVehicleStateVelocitySpeedLat.minimum = otherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed otherVehicleStateVelocitySpeedLatMaximum(100.);
  otherVehicleStateVelocitySpeedLat.maximum = otherVehicleStateVelocitySpeedLatMaximum;
  otherVehicleStateVelocitySpeedLat.maximum = otherVehicleStateVelocitySpeedLat.minimum;
  otherVehicleStateVelocitySpeedLat.minimum = otherVehicleStateVelocitySpeedLat.maximum;
  otherVehicleStateVelocity.speedLat = otherVehicleStateVelocitySpeedLat;
  otherVehicleState.velocity = otherVehicleStateVelocity;
  ::ad::rss::world::RssDynamics otherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues otherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLonAccelMax(1e2);
  otherVehicleStateDynamicsAlphaLon.accelMax = otherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  otherVehicleStateDynamicsAlphaLon.brakeMax = otherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  otherVehicleStateDynamicsAlphaLon.brakeMinCorrect = otherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  otherVehicleStateDynamicsAlphaLon.brakeMax = otherVehicleStateDynamicsAlphaLon.brakeMin;
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  otherVehicleStateDynamicsAlphaLon.brakeMinCorrect = otherVehicleStateDynamicsAlphaLon.brakeMin;
  otherVehicleStateDynamicsAlphaLon.brakeMin = otherVehicleStateDynamicsAlphaLon.brakeMax;
  otherVehicleStateDynamics.alphaLon = otherVehicleStateDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues otherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLatAccelMax(1e2);
  otherVehicleStateDynamicsAlphaLat.accelMax = otherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration otherVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  otherVehicleStateDynamicsAlphaLat.brakeMin = otherVehicleStateDynamicsAlphaLatBrakeMin;
  otherVehicleStateDynamics.alphaLat = otherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance otherVehicleStateDynamicsLateralFluctuationMargin(1e9);
  otherVehicleStateDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  otherVehicleStateDynamics.lateralFluctuationMargin = otherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration otherVehicleStateDynamicsResponseTime(1e6);
  otherVehicleStateDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  otherVehicleStateDynamics.responseTime = otherVehicleStateDynamicsResponseTime;
  ::ad::physics::Speed otherVehicleStateDynamicsMaxSpeed(100.);
  otherVehicleStateDynamics.maxSpeed = otherVehicleStateDynamicsMaxSpeed;
  otherVehicleState.dynamics = otherVehicleStateDynamics;
  bool otherVehicleStateHasPriority{false};
  otherVehicleState.hasPriority = otherVehicleStateHasPriority;
  bool otherVehicleStateIsInCorrectLane{false};
  otherVehicleState.isInCorrectLane = otherVehicleStateIsInCorrectLane;
  ::ad::physics::Distance otherVehicleStateDistanceToEnterIntersection(1e9);
  otherVehicleState.distanceToEnterIntersection = otherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance otherVehicleStateDistanceToLeaveIntersection(1e9);
  otherVehicleStateDistanceToLeaveIntersection = ::ad::physics::Distance(1e4); // set to valid value within struct
  otherVehicleState.distanceToLeaveIntersection = otherVehicleStateDistanceToLeaveIntersection;
  otherVehicleState.distanceToLeaveIntersection = otherVehicleState.distanceToEnterIntersection;
  otherVehicleState.distanceToEnterIntersection = otherVehicleState.distanceToLeaveIntersection;
  valueA.otherVehicleState = otherVehicleState;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SituationTests, comparisonOperatorRelativePositionDiffers)
{
  ::ad::rss::situation::Situation valueA = mValue;
  ::ad::rss::situation::RelativePosition relativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition relativePositionLongitudinalPosition(
    ::ad::rss::situation::LongitudinalRelativePosition::AtBack);
  relativePosition.longitudinalPosition = relativePositionLongitudinalPosition;
  ::ad::physics::Distance relativePositionLongitudinalDistance(1e9);
  relativePosition.longitudinalDistance = relativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition relativePositionLateralPosition(
    ::ad::rss::situation::LateralRelativePosition::AtRight);
  relativePosition.lateralPosition = relativePositionLateralPosition;
  ::ad::physics::Distance relativePositionLateralDistance(1e9);
  relativePosition.lateralDistance = relativePositionLateralDistance;
  valueA.relativePosition = relativePosition;
  ::ad::rss::situation::Situation valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
