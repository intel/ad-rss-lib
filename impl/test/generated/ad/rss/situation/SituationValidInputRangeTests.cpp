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

#include "ad/rss/situation/SituationValidInputRange.hpp"

TEST(SituationValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationValidInputRangeTests, testValidInputRangeSituationTypeTooSmall)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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

  // override member with data type value below input range minimum
  ::ad::rss::situation::SituationType invalidInitializedMember(static_cast<::ad::rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationValidInputRangeTests, testValidInputRangeSituationTypeTooBig)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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

  // override member with data type value above input range maximum
  ::ad::rss::situation::SituationType invalidInitializedMember(static_cast<::ad::rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationValidInputRangeTests, testValidInputRangeEgoVehicleStateTooSmall)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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

  // override member with data type value below input range minimum
  ::ad::rss::situation::VehicleState invalidInitializedMember;
  ::ad::rss::situation::VelocityRange invalidInitializedMemberVelocity;
  ::ad::physics::SpeedRange invalidInitializedMemberVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberVelocitySpeedLonMinimum(-100. * 1.1);
  invalidInitializedMemberVelocitySpeedLon.minimum = invalidInitializedMemberVelocitySpeedLonMinimum;
  invalidInitializedMemberVelocity.speedLon = invalidInitializedMemberVelocitySpeedLon;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.egoVehicleState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationValidInputRangeTests, testValidInputRangeEgoVehicleStateTooBig)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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

  // override member with data type value above input range maximum
  ::ad::rss::situation::VehicleState invalidInitializedMember;
  ::ad::rss::situation::VelocityRange invalidInitializedMemberVelocity;
  ::ad::physics::SpeedRange invalidInitializedMemberVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberVelocitySpeedLonMinimum(100. * 1.1);
  invalidInitializedMemberVelocitySpeedLon.minimum = invalidInitializedMemberVelocitySpeedLonMinimum;
  invalidInitializedMemberVelocity.speedLon = invalidInitializedMemberVelocitySpeedLon;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.egoVehicleState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationValidInputRangeTests, testValidInputRangeOtherVehicleStateTooSmall)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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

  // override member with data type value below input range minimum
  ::ad::rss::situation::VehicleState invalidInitializedMember;
  ::ad::rss::situation::VelocityRange invalidInitializedMemberVelocity;
  ::ad::physics::SpeedRange invalidInitializedMemberVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberVelocitySpeedLonMinimum(-100. * 1.1);
  invalidInitializedMemberVelocitySpeedLon.minimum = invalidInitializedMemberVelocitySpeedLonMinimum;
  invalidInitializedMemberVelocity.speedLon = invalidInitializedMemberVelocitySpeedLon;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.otherVehicleState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationValidInputRangeTests, testValidInputRangeOtherVehicleStateTooBig)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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

  // override member with data type value above input range maximum
  ::ad::rss::situation::VehicleState invalidInitializedMember;
  ::ad::rss::situation::VelocityRange invalidInitializedMemberVelocity;
  ::ad::physics::SpeedRange invalidInitializedMemberVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberVelocitySpeedLonMinimum(100. * 1.1);
  invalidInitializedMemberVelocitySpeedLon.minimum = invalidInitializedMemberVelocitySpeedLonMinimum;
  invalidInitializedMemberVelocity.speedLon = invalidInitializedMemberVelocitySpeedLon;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.otherVehicleState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationValidInputRangeTests, testValidInputRangeRelativePositionTooSmall)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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

  // override member with data type value below input range minimum
  ::ad::rss::situation::RelativePosition invalidInitializedMember;
  ::ad::rss::situation::LongitudinalRelativePosition invalidInitializedMemberLongitudinalPosition(
    static_cast<::ad::rss::situation::LongitudinalRelativePosition>(-1));
  invalidInitializedMember.longitudinalPosition = invalidInitializedMemberLongitudinalPosition;
  value.relativePosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationValidInputRangeTests, testValidInputRangeRelativePositionTooBig)
{
  ::ad::rss::situation::Situation value;
  ::ad::rss::situation::SituationId valueSituationId(std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
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
  valueOtherVehicleStateDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
  valueOtherVehicleStateDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
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

  // override member with data type value above input range maximum
  ::ad::rss::situation::RelativePosition invalidInitializedMember;
  ::ad::rss::situation::LongitudinalRelativePosition invalidInitializedMemberLongitudinalPosition(
    static_cast<::ad::rss::situation::LongitudinalRelativePosition>(-1));
  invalidInitializedMember.longitudinalPosition = invalidInitializedMemberLongitudinalPosition;
  value.relativePosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
