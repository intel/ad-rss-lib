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

#include "ad/rss/situation/SituationSnapshotValidInputRange.hpp"

TEST(SituationSnapshotValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationSnapshotValidInputRangeTests, testValidInputRangeSituationsTooSmall)
{
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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

  // override member with invalid value
  ::ad::rss::situation::SituationVector invalidInitializedMember;
  ::ad::rss::situation::Situation invalidInitializedMemberSituationVectorElement;
  ::ad::rss::situation::SituationId invalidInitializedMemberSituationVectorElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::lowest());
  invalidInitializedMemberSituationVectorElement.situationId
    = invalidInitializedMemberSituationVectorElementSituationId;
  ::ad::rss::world::ObjectId invalidInitializedMemberSituationVectorElementObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  invalidInitializedMemberSituationVectorElement.objectId = invalidInitializedMemberSituationVectorElementObjectId;
  ::ad::rss::situation::SituationType invalidInitializedMemberSituationVectorElementSituationType(
    ::ad::rss::situation::SituationType::NotRelevant);
  invalidInitializedMemberSituationVectorElement.situationType
    = invalidInitializedMemberSituationVectorElementSituationType;
  ::ad::rss::situation::VehicleState invalidInitializedMemberSituationVectorElementEgoVehicleState;
  ::ad::rss::situation::VelocityRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMinimum(-100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMaximum(-100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMaximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity.speedLon
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMinimum(-100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMaximum(-100.);
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
  ::ad::rss::world::RssDynamics invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMin(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0.
                                  + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
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
  ::ad::rss::world::LateralRssAccelerationValues
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin(
    -1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.alphaLat
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin(
    0.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime(0.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
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
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToEnterIntersection(0.);
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection(0.);
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElement.egoVehicleState
    = invalidInitializedMemberSituationVectorElementEgoVehicleState;
  ::ad::rss::situation::VehicleState invalidInitializedMemberSituationVectorElementOtherVehicleState;
  ::ad::rss::situation::VelocityRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMinimum(-100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMaximum(-100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMaximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity.speedLon
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMinimum(-100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMaximum(-100.);
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
  ::ad::rss::world::RssDynamics invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMin(
    -1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect
    = ::ad::physics::Acceleration(0.
                                  + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
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
  ::ad::rss::world::LateralRssAccelerationValues
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax(
    -1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin(
    -1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.alphaLat
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime(0.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
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
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToEnterIntersection(
    0.);
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection(
    0.);
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElement.otherVehicleState
    = invalidInitializedMemberSituationVectorElementOtherVehicleState;
  ::ad::rss::situation::RelativePosition invalidInitializedMemberSituationVectorElementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition
    invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalPosition(
      ::ad::rss::situation::LongitudinalRelativePosition::InFront);
  invalidInitializedMemberSituationVectorElementRelativePosition.longitudinalPosition
    = invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalDistance(0.);
  invalidInitializedMemberSituationVectorElementRelativePosition.longitudinalDistance
    = invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition
    invalidInitializedMemberSituationVectorElementRelativePositionLateralPosition(
      ::ad::rss::situation::LateralRelativePosition::AtLeft);
  invalidInitializedMemberSituationVectorElementRelativePosition.lateralPosition
    = invalidInitializedMemberSituationVectorElementRelativePositionLateralPosition;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementRelativePositionLateralDistance(0.);
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
  ::ad::rss::situation::SituationSnapshot value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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

  // override member with invalid value
  ::ad::rss::situation::SituationVector invalidInitializedMember;
  ::ad::rss::situation::Situation invalidInitializedMemberSituationVectorElement;
  ::ad::rss::situation::SituationId invalidInitializedMemberSituationVectorElementSituationId(
    std::numeric_limits<::ad::rss::situation::SituationId>::max());
  invalidInitializedMemberSituationVectorElement.situationId
    = invalidInitializedMemberSituationVectorElementSituationId;
  ::ad::rss::world::ObjectId invalidInitializedMemberSituationVectorElementObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  invalidInitializedMemberSituationVectorElement.objectId = invalidInitializedMemberSituationVectorElementObjectId;
  ::ad::rss::situation::SituationType invalidInitializedMemberSituationVectorElementSituationType(
    ::ad::rss::situation::SituationType::IntersectionSamePriority);
  invalidInitializedMemberSituationVectorElement.situationType
    = invalidInitializedMemberSituationVectorElementSituationType;
  ::ad::rss::situation::VehicleState invalidInitializedMemberSituationVectorElementEgoVehicleState;
  ::ad::rss::situation::VelocityRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity;
  ::ad::physics::SpeedRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMinimum(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMaximum(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLonMaximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon.maximum;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocity.speedLon
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMinimum(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementEgoVehicleStateVelocitySpeedLatMaximum(100.);
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
  ::ad::rss::world::RssDynamics invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMax(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMin(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration
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
  ::ad::rss::world::LateralRssAccelerationValues
    invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin(
    1e2);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.alphaLat
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin(
    1e6);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime(100.);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(10.); // set to valid value within struct
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
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToEnterIntersection(1e6);
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection(1e6);
  invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleStateDistanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection;
  invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementEgoVehicleState.distanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElement.egoVehicleState
    = invalidInitializedMemberSituationVectorElementEgoVehicleState;
  ::ad::rss::situation::VehicleState invalidInitializedMemberSituationVectorElementOtherVehicleState;
  ::ad::rss::situation::VelocityRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity;
  ::ad::physics::SpeedRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMinimum(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMinimum;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMaximum(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLonMaximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon.maximum;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocity.speedLon
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLon;
  ::ad::physics::SpeedRange invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMinimum(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLat.minimum
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMinimum;
  ::ad::physics::Speed invalidInitializedMemberSituationVectorElementOtherVehicleStateVelocitySpeedLatMaximum(100.);
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
  ::ad::rss::world::RssDynamics invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax(
    1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMax(
    1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMin(
    1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration
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
  ::ad::rss::world::LateralRssAccelerationValues
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax(
    1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin(
    1e2);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.alphaLat
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsAlphaLat;
  ::ad::physics::Distance
    invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin(1e6);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime(100.);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDynamicsResponseTime
    = ::ad::physics::Duration(10.); // set to valid value within struct
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
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToEnterIntersection(
    1e6);
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToEnterIntersection;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection(
    1e6);
  invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection
    = ::ad::physics::Distance(1e4); // set to valid value within struct
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleStateDistanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection;
  invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToEnterIntersection
    = invalidInitializedMemberSituationVectorElementOtherVehicleState.distanceToLeaveIntersection;
  invalidInitializedMemberSituationVectorElement.otherVehicleState
    = invalidInitializedMemberSituationVectorElementOtherVehicleState;
  ::ad::rss::situation::RelativePosition invalidInitializedMemberSituationVectorElementRelativePosition;
  ::ad::rss::situation::LongitudinalRelativePosition
    invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalPosition(
      ::ad::rss::situation::LongitudinalRelativePosition::AtBack);
  invalidInitializedMemberSituationVectorElementRelativePosition.longitudinalPosition
    = invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalPosition;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalDistance(1e6);
  invalidInitializedMemberSituationVectorElementRelativePosition.longitudinalDistance
    = invalidInitializedMemberSituationVectorElementRelativePositionLongitudinalDistance;
  ::ad::rss::situation::LateralRelativePosition
    invalidInitializedMemberSituationVectorElementRelativePositionLateralPosition(
      ::ad::rss::situation::LateralRelativePosition::AtRight);
  invalidInitializedMemberSituationVectorElementRelativePosition.lateralPosition
    = invalidInitializedMemberSituationVectorElementRelativePositionLateralPosition;
  ::ad::physics::Distance invalidInitializedMemberSituationVectorElementRelativePositionLateralDistance(1e6);
  invalidInitializedMemberSituationVectorElementRelativePosition.lateralDistance
    = invalidInitializedMemberSituationVectorElementRelativePositionLateralDistance;
  invalidInitializedMemberSituationVectorElement.relativePosition
    = invalidInitializedMemberSituationVectorElementRelativePosition;
  invalidInitializedMember.resize(1001, invalidInitializedMemberSituationVectorElement);
  value.situations = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
