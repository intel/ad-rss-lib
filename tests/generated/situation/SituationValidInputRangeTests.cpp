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

#include "ad_rss/situation/SituationValidInputRange.hpp"

class SituationValidInputRangeTests : public ::testing::Test
{
public:
  void SetUp() override
  {
    DLT_REGISTER_CONTEXT(mDltContext, "TEST", "SituationValidInputRangeTests");
  }

  void TearDown() override
  {
    DLT_UNREGISTER_CONTEXT(mDltContext);
  }

  DltContext mDltContext;
};

TEST_F(SituationValidInputRangeTests, testValidInputRange)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  ASSERT_TRUE(withinValidInputRange(value, mDltContext));
}

TEST_F(SituationValidInputRangeTests, testValidInputRangeSituationTypeTooSmall)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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

  // override member with invalid value
  ::ad_rss::situation::SituationType invalidInitializedMember(static_cast<::ad_rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(SituationValidInputRangeTests, testValidInputRangeSituationTypeTooBig)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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

  // override member with invalid value
  ::ad_rss::situation::SituationType invalidInitializedMember(static_cast<::ad_rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(SituationValidInputRangeTests, testValidInputRangeEgoVehicleStateTooSmall)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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

  // override member with invalid value
  ::ad_rss::situation::VehicleState invalidInitializedMember;
  ::ad_rss::world::Velocity invalidInitializedMemberVelocity;
  ::ad_rss::physics::Speed invalidInitializedMemberVelocitySpeedLon(-100. * 1.1);
  invalidInitializedMemberVelocity.speedLon = invalidInitializedMemberVelocitySpeedLon;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.egoVehicleState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(SituationValidInputRangeTests, testValidInputRangeEgoVehicleStateTooBig)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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

  // override member with invalid value
  ::ad_rss::situation::VehicleState invalidInitializedMember;
  ::ad_rss::world::Velocity invalidInitializedMemberVelocity;
  ::ad_rss::physics::Speed invalidInitializedMemberVelocitySpeedLon(100. * 1.1);
  invalidInitializedMemberVelocity.speedLon = invalidInitializedMemberVelocitySpeedLon;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.egoVehicleState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(SituationValidInputRangeTests, testValidInputRangeOtherVehicleStateTooSmall)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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

  // override member with invalid value
  ::ad_rss::situation::VehicleState invalidInitializedMember;
  ::ad_rss::world::Velocity invalidInitializedMemberVelocity;
  ::ad_rss::physics::Speed invalidInitializedMemberVelocitySpeedLon(-100. * 1.1);
  invalidInitializedMemberVelocity.speedLon = invalidInitializedMemberVelocitySpeedLon;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.otherVehicleState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(SituationValidInputRangeTests, testValidInputRangeOtherVehicleStateTooBig)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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

  // override member with invalid value
  ::ad_rss::situation::VehicleState invalidInitializedMember;
  ::ad_rss::world::Velocity invalidInitializedMemberVelocity;
  ::ad_rss::physics::Speed invalidInitializedMemberVelocitySpeedLon(100. * 1.1);
  invalidInitializedMemberVelocity.speedLon = invalidInitializedMemberVelocitySpeedLon;
  invalidInitializedMember.velocity = invalidInitializedMemberVelocity;
  value.otherVehicleState = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(SituationValidInputRangeTests, testValidInputRangeRelativePositionTooSmall)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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

  // override member with invalid value
  ::ad_rss::situation::RelativePosition invalidInitializedMember;
  ::ad_rss::situation::LongitudinalRelativePosition invalidInitializedMemberLongitudinalPosition(
    static_cast<::ad_rss::situation::LongitudinalRelativePosition>(-1));
  invalidInitializedMember.longitudinalPosition = invalidInitializedMemberLongitudinalPosition;
  value.relativePosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(SituationValidInputRangeTests, testValidInputRangeRelativePositionTooBig)
{
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
  valueEgoVehicleStateDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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
  valueEgoVehicleStateDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
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

  // override member with invalid value
  ::ad_rss::situation::RelativePosition invalidInitializedMember;
  ::ad_rss::situation::LongitudinalRelativePosition invalidInitializedMemberLongitudinalPosition(
    static_cast<::ad_rss::situation::LongitudinalRelativePosition>(-1));
  invalidInitializedMember.longitudinalPosition = invalidInitializedMemberLongitudinalPosition;
  value.relativePosition = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}
