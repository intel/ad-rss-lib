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

#include "ad_rss/situation/SituationSnapshotValidInputRange.hpp"

TEST(SituationSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::situation::SituationSnapshot value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationVector valueSituations;
  value.situations = valueSituations;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationSnapshotValidInputRangeTests, testValidInputRangeSituationsTooSmall)
{
  ::ad_rss::situation::SituationSnapshot value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationVector valueSituations;
  value.situations = valueSituations;

  // override member with invalid value
  ::ad_rss::situation::SituationVector invalidInitializedMember;
  ::ad_rss::situation::Situation invalidInitializedMemberSituationVectorElement;
  ::ad_rss::situation::SituationId invalidInitializedMemberSituationVectorElementSituationId(
    std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  invalidInitializedMemberSituationVectorElement.situationId
    = invalidInitializedMemberSituationVectorElementSituationId;
  ::ad_rss::world::ObjectId invalidInitializedMemberSituationVectorElementObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  invalidInitializedMemberSituationVectorElement.objectId = invalidInitializedMemberSituationVectorElementObjectId;
  ::ad_rss::situation::SituationType invalidInitializedMemberSituationVectorElementSituationType(
    ::ad_rss::situation::SituationType::NotRelevant);
  invalidInitializedMemberSituationVectorElement.situationType
    = invalidInitializedMemberSituationVectorElementSituationType;
  ::ad_rss::situation::VehicleState invalidInitializedMemberSituationVectorElementEgoVehicleState;
  ::ad_rss::situation::VelocityRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMaximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity.speedLon
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMaximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.minimum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.maximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity.speedLat
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.velocity
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity;
  ::ad_rss::world::RssDynamics invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMin(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect
    = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.alphaLon
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin
    = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.alphaLat
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime(0.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.responseTime
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.dynamics
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics;
  bool invalidInitializedMemberSituationVectorElementEgoVehicleStateHasPriority{true};
  invalidInitializedMemberSituationVectorElementEgoVehicleState.hasPriority
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateHasPriority;
  bool invalidInitializedMemberSituationVectorElementEgoVehicleStateIsInCorrectLane{true};
  invalidInitializedMemberSituationVectorElementEgoVehicleState.isInCorrectLane
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToEnterIntersection(
    0.);
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection(
    0.);
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElement.egoVehicleState
    = invalidInitializedMemberSituationVectorElementEgoVehicleState;
  ::ad_rss::situation::VehicleState invalidInitializedMemberSituationVectorElementOtherVehicleState;
  ::ad_rss::situation::VelocityRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMinimum(
    -100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMaximum(
    -100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMaximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity.speedLon
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMinimum(
    -100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMaximum(
    -100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMaximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.minimum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.maximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity.speedLat
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.velocity
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity;
  ::ad_rss::world::RssDynamics invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax(-1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMax(-1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMin(-1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect
    = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.alphaLon
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax(-1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin(-1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin
    = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.alphaLat
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime(0.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.responseTime
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.dynamics
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics;
  bool invalidInitializedMemberSituationVectorElementOtherVehicleStateHasPriority{true};
  invalidInitializedMemberSituationVectorElementOtherVehicleState.hasPriority
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateHasPriority;
  bool invalidInitializedMemberSituationVectorElementOtherVehicleStateIsInCorrectLane{true};
  invalidInitializedMemberSituationVectorElementOtherVehicleState.isInCorrectLane
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToEnterIntersection(0.);
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection(0.);
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElement.otherVehicleState
    = invalidInitializedMemberSituationVectorElementOtherVehicleState;
  ::ad_rss::situation::RelativePosition invalidInitializedMemberSituationVectorElementRelativePosition;
  ::ad_rss::situation::LongitudinalRelativePosition
    invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalPosition(
      ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  invalidInitializedMemberSituationVectorElementRelativePosition.longitudinalPosition
    = invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalPosition;
  ::ad_rss::physics::Distance invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalDistance(0.);
  invalidInitializedMemberSituationVectorElementRelativePosition.longitudinalDistance
    = invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition
    invalidInitializedMemberSituationVectorElementRelativePositionLateralPosition(
      ::ad_rss::situation::LateralRelativePosition::AtLeft);
  invalidInitializedMemberSituationVectorElementRelativePosition.lateralPosition
    = invalidInitializedMemberSituationVectorElementRelativePositionLateralPosition;
  ::ad_rss::physics::Distance invalidInitializedMemberSituationVectorElementRelativePositionLateralDistance(0.);
  invalidInitializedMemberSituationVectorElementRelativePosition.lateralDistance
    = invalidInitializedMemberSituationVectorElementRelativePositionLateralDistance;
  invalidInitializedMemberSituationVectorElement.relativePosition
    = invalidInitializedMemberSituationVectorElementRelativePosition;
  invalidInitializedMember.resize(1001, invalidInitializedMemberSituationVectorElement);
  value.situations = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationSnapshotValidInputRangeTests, testValidInputRangeSituationsTooBig)
{
  ::ad_rss::situation::SituationSnapshot value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::situation::SituationVector valueSituations;
  value.situations = valueSituations;

  // override member with invalid value
  ::ad_rss::situation::SituationVector invalidInitializedMember;
  ::ad_rss::situation::Situation invalidInitializedMemberSituationVectorElement;
  ::ad_rss::situation::SituationId invalidInitializedMemberSituationVectorElementSituationId(
    std::numeric_limits<::ad_rss::situation::SituationId>::max());
  invalidInitializedMemberSituationVectorElement.situationId
    = invalidInitializedMemberSituationVectorElementSituationId;
  ::ad_rss::world::ObjectId invalidInitializedMemberSituationVectorElementObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::max());
  invalidInitializedMemberSituationVectorElement.objectId = invalidInitializedMemberSituationVectorElementObjectId;
  ::ad_rss::situation::SituationType invalidInitializedMemberSituationVectorElementSituationType(
    ::ad_rss::situation::SituationType::IntersectionSamePriority);
  invalidInitializedMemberSituationVectorElement.situationType
    = invalidInitializedMemberSituationVectorElementSituationType;
  ::ad_rss::situation::VehicleState invalidInitializedMemberSituationVectorElementEgoVehicleState;
  ::ad_rss::situation::VelocityRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMinimum(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMaximum(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMaximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity.speedLon
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMinimum(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMaximum(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMaximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.minimum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.maximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity.speedLat
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.velocity
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity;
  ::ad_rss::world::RssDynamics invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMax(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMin(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.alphaLon
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.alphaLat
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin(1e6);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime
    = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.responseTime
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.dynamics
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics;
  bool invalidInitializedMemberSituationVectorElementEgoVehicleStateHasPriority{false};
  invalidInitializedMemberSituationVectorElementEgoVehicleState.hasPriority
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateHasPriority;
  bool invalidInitializedMemberSituationVectorElementEgoVehicleStateIsInCorrectLane{false};
  invalidInitializedMemberSituationVectorElementEgoVehicleState.isInCorrectLane
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToEnterIntersection(
    1e6);
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection(
    1e6);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection
    = ::ad_rss::physics::Distance(1e4); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElement.egoVehicleState
    = invalidInitializedMemberSituationVectorElementEgoVehicleState;
  ::ad_rss::situation::VehicleState invalidInitializedMemberSituationVectorElementOtherVehicleState;
  ::ad_rss::situation::VelocityRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMinimum(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMaximum(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMaximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity.speedLon
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMinimum(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMaximum(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMaximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.minimum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.maximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity.speedLat
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.velocity
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity;
  ::ad_rss::world::RssDynamics invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax(1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMax(1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMin(1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.alphaLon
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax(1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin(1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.alphaLat
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin(1e6);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime
    = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.responseTime
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.dynamics
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics;
  bool invalidInitializedMemberSituationVectorElementOtherVehicleStateHasPriority{false};
  invalidInitializedMemberSituationVectorElementOtherVehicleState.hasPriority
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateHasPriority;
  bool invalidInitializedMemberSituationVectorElementOtherVehicleStateIsInCorrectLane{false};
  invalidInitializedMemberSituationVectorElementOtherVehicleState.isInCorrectLane
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToEnterIntersection(1e6);
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection(1e6);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection
    = ::ad_rss::physics::Distance(1e4); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElement.otherVehicleState
    = invalidInitializedMemberSituationVectorElementOtherVehicleState;
  ::ad_rss::situation::RelativePosition invalidInitializedMemberSituationVectorElementRelativePosition;
  ::ad_rss::situation::LongitudinalRelativePosition
    invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalPosition(
      ::ad_rss::situation::LongitudinalRelativePosition::AtBack);
  invalidInitializedMemberSituationVectorElementRelativePosition.longitudinalPosition
    = invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalPosition;
  ::ad_rss::physics::Distance invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalDistance(1e6);
  invalidInitializedMemberSituationVectorElementRelativePosition.longitudinalDistance
    = invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition
    invalidInitializedMemberSituationVectorElementRelativePositionLateralPosition(
      ::ad_rss::situation::LateralRelativePosition::AtRight);
  invalidInitializedMemberSituationVectorElementRelativePosition.lateralPosition
    = invalidInitializedMemberSituationVectorElementRelativePositionLateralPosition;
  ::ad_rss::physics::Distance invalidInitializedMemberSituationVectorElementRelativePositionLateralDistance(1e6);
  invalidInitializedMemberSituationVectorElementRelativePosition.lateralDistance
    = invalidInitializedMemberSituationVectorElementRelativePositionLateralDistance;
  invalidInitializedMemberSituationVectorElement.relativePosition
    = invalidInitializedMemberSituationVectorElementRelativePosition;
  invalidInitializedMember.resize(1001, invalidInitializedMemberSituationVectorElement);
  value.situations = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
