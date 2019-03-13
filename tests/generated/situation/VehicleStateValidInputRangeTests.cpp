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

#include "ad_rss/situation/VehicleStateValidInputRange.hpp"

TEST(VehicleStateValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeVelocityTooSmall)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::world::Velocity invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberSpeedLon(-100. * 1.1);
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::world::Velocity invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberSpeedLon(100. * 1.1);
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDynamicsTooSmall)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::world::Dynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-10 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDynamicsTooBig)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::world::Dynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(10 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeResponseTimeTooSmall)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::physics::Duration invalidInitializedMember(0. - ::ad_rss::physics::Duration::cPrecisionValue);
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeResponseTimeTooBig)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::physics::Duration invalidInitializedMember(100. * 1.1);
  invalidInitializedMember = ::ad_rss::physics::Duration(10. * 1.1); // set to valid value within struct
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeresponseTimeDefault)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::physics::Duration valueDefault;
  value.responseTime = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToEnterIntersectionTooSmall)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.distanceToEnterIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToEnterIntersectionTooBig)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.distanceToEnterIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangedistanceToEnterIntersectionDefault)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::physics::Distance valueDefault;
  value.distanceToEnterIntersection = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToLeaveIntersectionTooSmall)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.distanceToLeaveIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToLeaveIntersectionTooBig)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::Dynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-10);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-10);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-10);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-10);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-10);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-10);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  value.dynamics = valueDynamics;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad_rss::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad_rss::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  invalidInitializedMember = ::ad_rss::physics::Distance(1e4 * 1.1); // set to valid value within struct
  value.distanceToLeaveIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangedistanceToLeaveIntersectionDefault)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::physics::Distance valueDefault;
  value.distanceToLeaveIntersection = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
