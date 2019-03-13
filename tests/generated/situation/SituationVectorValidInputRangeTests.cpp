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

#include "ad_rss/situation/SituationVectorValidInputRange.hpp"

TEST(SituationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::situation::SituationVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::situation::SituationVector value;
  ::ad_rss::situation::Situation element;
  ::ad_rss::physics::TimeIndex elementTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  element.timeIndex = elementTimeIndex;
  ::ad_rss::situation::SituationId elementSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad_rss::situation::SituationType elementSituationType(::ad_rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad_rss::situation::VehicleState elementEgoVehicleState;
  ::ad_rss::world::Velocity elementEgoVehicleStateVelocity;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLon(-100.);
  elementEgoVehicleStateVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLat(-100.);
  elementEgoVehicleStateVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad_rss::world::Dynamics elementEgoVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-10);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-10);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-10);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-10);
  elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-10);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-10);
  elementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  ::ad_rss::physics::Duration elementEgoVehicleStateResponseTime(0.);
  elementEgoVehicleStateResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleState.responseTime = elementEgoVehicleStateResponseTime;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(0.);
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(0.);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad_rss::situation::VehicleState elementOtherVehicleState;
  ::ad_rss::world::Velocity elementOtherVehicleStateVelocity;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLon(-100.);
  elementOtherVehicleStateVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLat(-100.);
  elementOtherVehicleStateVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad_rss::world::Dynamics elementOtherVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-10);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-10);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-10);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-10);
  elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-10);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-10);
  elementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  ::ad_rss::physics::Duration elementOtherVehicleStateResponseTime(0.);
  elementOtherVehicleStateResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleState.responseTime = elementOtherVehicleStateResponseTime;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(0.);
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(0.);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad_rss::situation::RelativePosition elementRelativePosition;
  ::ad_rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad_rss::physics::Distance elementRelativePositionLongitudinalDistance(0.);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad_rss::physics::Distance elementRelativePositionLateralDistance(0.);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::situation::SituationVector value;
  ::ad_rss::situation::Situation element;
  ::ad_rss::physics::TimeIndex elementTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  element.timeIndex = elementTimeIndex;
  ::ad_rss::situation::SituationId elementSituationId(std::numeric_limits<::ad_rss::situation::SituationId>::lowest());
  element.situationId = elementSituationId;
  ::ad_rss::situation::SituationType elementSituationType(::ad_rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad_rss::situation::VehicleState elementEgoVehicleState;
  ::ad_rss::world::Velocity elementEgoVehicleStateVelocity;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLon(-100.);
  elementEgoVehicleStateVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleStateVelocity.speedLon = elementEgoVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed elementEgoVehicleStateVelocitySpeedLat(-100.);
  elementEgoVehicleStateVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  elementEgoVehicleStateVelocity.speedLat = elementEgoVehicleStateVelocitySpeedLat;
  elementEgoVehicleState.velocity = elementEgoVehicleStateVelocity;
  ::ad_rss::world::Dynamics elementEgoVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonAccelMax(-10);
  elementEgoVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.accelMax = elementEgoVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMax(-10);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMin(-10);
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect(-10);
  elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMax = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMin = elementEgoVehicleStateDynamicsAlphaLon.brakeMax;
  elementEgoVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementEgoVehicleStateDynamicsAlphaLon.brakeMin;
  elementEgoVehicleStateDynamics.alphaLon = elementEgoVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatAccelMax(-10);
  elementEgoVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.accelMax = elementEgoVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementEgoVehicleStateDynamicsAlphaLatBrakeMin(-10);
  elementEgoVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleStateDynamicsAlphaLat.brakeMin = elementEgoVehicleStateDynamicsAlphaLatBrakeMin;
  elementEgoVehicleStateDynamics.alphaLat = elementEgoVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementEgoVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementEgoVehicleStateDynamics.lateralFluctuationMargin = elementEgoVehicleStateDynamicsLateralFluctuationMargin;
  elementEgoVehicleState.dynamics = elementEgoVehicleStateDynamics;
  ::ad_rss::physics::Duration elementEgoVehicleStateResponseTime(0.);
  elementEgoVehicleStateResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementEgoVehicleState.responseTime = elementEgoVehicleStateResponseTime;
  bool elementEgoVehicleStateHasPriority{true};
  elementEgoVehicleState.hasPriority = elementEgoVehicleStateHasPriority;
  bool elementEgoVehicleStateIsInCorrectLane{true};
  elementEgoVehicleState.isInCorrectLane = elementEgoVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance elementEgoVehicleStateDistanceToEnterIntersection(0.);
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance elementEgoVehicleStateDistanceToLeaveIntersection(0.);
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleStateDistanceToLeaveIntersection;
  elementEgoVehicleState.distanceToLeaveIntersection = elementEgoVehicleState.distanceToEnterIntersection;
  elementEgoVehicleState.distanceToEnterIntersection = elementEgoVehicleState.distanceToLeaveIntersection;
  element.egoVehicleState = elementEgoVehicleState;
  ::ad_rss::situation::VehicleState elementOtherVehicleState;
  ::ad_rss::world::Velocity elementOtherVehicleStateVelocity;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLon(-100.);
  elementOtherVehicleStateVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  elementOtherVehicleStateVelocity.speedLon = elementOtherVehicleStateVelocitySpeedLon;
  ::ad_rss::physics::Speed elementOtherVehicleStateVelocitySpeedLat(-100.);
  elementOtherVehicleStateVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  elementOtherVehicleStateVelocity.speedLat = elementOtherVehicleStateVelocitySpeedLat;
  elementOtherVehicleState.velocity = elementOtherVehicleStateVelocity;
  ::ad_rss::world::Dynamics elementOtherVehicleStateDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonAccelMax(-10);
  elementOtherVehicleStateDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.accelMax = elementOtherVehicleStateDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMax(-10);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMin(-10);
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect(-10);
  elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLonBrakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMax = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMin = elementOtherVehicleStateDynamicsAlphaLon.brakeMax;
  elementOtherVehicleStateDynamicsAlphaLon.brakeMinCorrect = elementOtherVehicleStateDynamicsAlphaLon.brakeMin;
  elementOtherVehicleStateDynamics.alphaLon = elementOtherVehicleStateDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatAccelMax(-10);
  elementOtherVehicleStateDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.accelMax = elementOtherVehicleStateDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementOtherVehicleStateDynamicsAlphaLatBrakeMin(-10);
  elementOtherVehicleStateDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleStateDynamicsAlphaLat.brakeMin = elementOtherVehicleStateDynamicsAlphaLatBrakeMin;
  elementOtherVehicleStateDynamics.alphaLat = elementOtherVehicleStateDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementOtherVehicleStateDynamicsLateralFluctuationMargin(0.);
  elementOtherVehicleStateDynamics.lateralFluctuationMargin = elementOtherVehicleStateDynamicsLateralFluctuationMargin;
  elementOtherVehicleState.dynamics = elementOtherVehicleStateDynamics;
  ::ad_rss::physics::Duration elementOtherVehicleStateResponseTime(0.);
  elementOtherVehicleStateResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementOtherVehicleState.responseTime = elementOtherVehicleStateResponseTime;
  bool elementOtherVehicleStateHasPriority{true};
  elementOtherVehicleState.hasPriority = elementOtherVehicleStateHasPriority;
  bool elementOtherVehicleStateIsInCorrectLane{true};
  elementOtherVehicleState.isInCorrectLane = elementOtherVehicleStateIsInCorrectLane;
  ::ad_rss::physics::Distance elementOtherVehicleStateDistanceToEnterIntersection(0.);
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleStateDistanceToEnterIntersection;
  ::ad_rss::physics::Distance elementOtherVehicleStateDistanceToLeaveIntersection(0.);
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleStateDistanceToLeaveIntersection;
  elementOtherVehicleState.distanceToLeaveIntersection = elementOtherVehicleState.distanceToEnterIntersection;
  elementOtherVehicleState.distanceToEnterIntersection = elementOtherVehicleState.distanceToLeaveIntersection;
  element.otherVehicleState = elementOtherVehicleState;
  ::ad_rss::situation::RelativePosition elementRelativePosition;
  ::ad_rss::situation::LongitudinalRelativePosition elementRelativePositionLongitudinalPosition(
    ::ad_rss::situation::LongitudinalRelativePosition::InFront);
  elementRelativePosition.longitudinalPosition = elementRelativePositionLongitudinalPosition;
  ::ad_rss::physics::Distance elementRelativePositionLongitudinalDistance(0.);
  elementRelativePosition.longitudinalDistance = elementRelativePositionLongitudinalDistance;
  ::ad_rss::situation::LateralRelativePosition elementRelativePositionLateralPosition(
    ::ad_rss::situation::LateralRelativePosition::AtLeft);
  elementRelativePosition.lateralPosition = elementRelativePositionLateralPosition;
  ::ad_rss::physics::Distance elementRelativePositionLateralDistance(0.);
  elementRelativePosition.lateralDistance = elementRelativePositionLateralDistance;
  element.relativePosition = elementRelativePosition;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SituationVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad_rss::situation::SituationVector value;
  ::ad_rss::situation::Situation element;
  ::ad_rss::situation::SituationType elementSituationType(static_cast<::ad_rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
