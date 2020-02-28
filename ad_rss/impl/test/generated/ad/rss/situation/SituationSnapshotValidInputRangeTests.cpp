/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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

#include "ad/rss/situation/SituationSnapshotValidInputRange.hpp"

TEST(SituationSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::rss::world::RssDynamics valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLon = valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLat = valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeed(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeed = valueDefaultEgoVehicleRssDynamicsMaxSpeed;
  value.defaultEgoVehicleRssDynamics = valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::situation::SituationVector valueSituations;
  ::ad::rss::situation::Situation valueSituationsElement;
  ::ad::rss::situation::SituationId valueSituationsElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueSituationsElement.situationId = valueSituationsElementSituationId;
  ::ad::rss::world::ObjectId valueSituationsElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
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
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateDynamicsMaxSpeed(-100.);
  valueSituationsElementEgoVehicleStateDynamics.maxSpeed = valueSituationsElementEgoVehicleStateDynamicsMaxSpeed;
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
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateDynamicsMaxSpeed(-100.);
  valueSituationsElementOtherVehicleStateDynamics.maxSpeed = valueSituationsElementOtherVehicleStateDynamicsMaxSpeed;
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationSnapshotValidInputRangeTests, testValidInputRangeDefaultEgoVehicleRssDynamicsTooSmall)
{
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::rss::world::RssDynamics valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLon = valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLat = valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeed(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeed = valueDefaultEgoVehicleRssDynamicsMaxSpeed;
  value.defaultEgoVehicleRssDynamics = valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::situation::SituationVector valueSituations;
  ::ad::rss::situation::Situation valueSituationsElement;
  ::ad::rss::situation::SituationId valueSituationsElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueSituationsElement.situationId = valueSituationsElementSituationId;
  ::ad::rss::world::ObjectId valueSituationsElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
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
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateDynamicsMaxSpeed(-100.);
  valueSituationsElementEgoVehicleStateDynamics.maxSpeed = valueSituationsElementEgoVehicleStateDynamicsMaxSpeed;
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
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateDynamicsMaxSpeed(-100.);
  valueSituationsElementOtherVehicleStateDynamics.maxSpeed = valueSituationsElementOtherVehicleStateDynamicsMaxSpeed;
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

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationSnapshotValidInputRangeTests, testValidInputRangeDefaultEgoVehicleRssDynamicsTooBig)
{
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad::rss::world::RssDynamics valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueDefaultEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLon = valueDefaultEgoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.accelMax = valueDefaultEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamicsAlphaLat.brakeMin = valueDefaultEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueDefaultEgoVehicleRssDynamics.alphaLat = valueDefaultEgoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueDefaultEgoVehicleRssDynamics.lateralFluctuationMargin
    = valueDefaultEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDefaultEgoVehicleRssDynamicsResponseTime(0.);
  valueDefaultEgoVehicleRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDefaultEgoVehicleRssDynamics.responseTime = valueDefaultEgoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed valueDefaultEgoVehicleRssDynamicsMaxSpeed(-100.);
  valueDefaultEgoVehicleRssDynamics.maxSpeed = valueDefaultEgoVehicleRssDynamicsMaxSpeed;
  value.defaultEgoVehicleRssDynamics = valueDefaultEgoVehicleRssDynamics;
  ::ad::rss::situation::SituationVector valueSituations;
  ::ad::rss::situation::Situation valueSituationsElement;
  ::ad::rss::situation::SituationId valueSituationsElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  valueSituationsElement.situationId = valueSituationsElementSituationId;
  ::ad::rss::world::ObjectId valueSituationsElementObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
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
  ::ad::physics::Speed valueSituationsElementEgoVehicleStateDynamicsMaxSpeed(-100.);
  valueSituationsElementEgoVehicleStateDynamics.maxSpeed = valueSituationsElementEgoVehicleStateDynamicsMaxSpeed;
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
  ::ad::physics::Speed valueSituationsElementOtherVehicleStateDynamicsMaxSpeed(-100.);
  valueSituationsElementOtherVehicleStateDynamics.maxSpeed = valueSituationsElementOtherVehicleStateDynamicsMaxSpeed;
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

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.defaultEgoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
