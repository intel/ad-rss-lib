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

#include "ad/rss/situation/VehicleStateValidInputRange.hpp"

TEST(VehicleStateValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeVelocityTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad::rss::situation::VelocityRange invalidInitializedMember;
  ::ad::physics::SpeedRange invalidInitializedMemberSpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSpeedLonMinimum(-100. * 1.1);
  invalidInitializedMemberSpeedLon.minimum = invalidInitializedMemberSpeedLonMinimum;
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad::rss::situation::VelocityRange invalidInitializedMember;
  ::ad::physics::SpeedRange invalidInitializedMemberSpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSpeedLonMinimum(100. * 1.1);
  invalidInitializedMemberSpeedLon.minimum = invalidInitializedMemberSpeedLonMinimum;
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDynamicsTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDynamicsTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToEnterIntersectionTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad::physics::Distance invalidInitializedMember(0. - ::ad::physics::Distance::cPrecisionValue);
  value.distanceToEnterIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToEnterIntersectionTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad::physics::Distance invalidInitializedMember(1e6 * 1.1);
  value.distanceToEnterIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangedistanceToEnterIntersectionDefault)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::physics::Distance valueDefault;
  value.distanceToEnterIntersection = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToLeaveIntersectionTooSmall)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad::physics::Distance invalidInitializedMember(0. - ::ad::physics::Distance::cPrecisionValue);
  value.distanceToLeaveIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToLeaveIntersectionTooBig)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::rss::situation::VelocityRange valueVelocity;
  ::ad::physics::SpeedRange valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::SpeedRange valueVelocitySpeedLat;
  ::ad::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad::rss::world::RssDynamics valueDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
  bool valueHasPriority{true};
  value.hasPriority = valueHasPriority;
  bool valueIsInCorrectLane{true};
  value.isInCorrectLane = valueIsInCorrectLane;
  ::ad::physics::Distance valueDistanceToEnterIntersection(0.);
  value.distanceToEnterIntersection = valueDistanceToEnterIntersection;
  ::ad::physics::Distance valueDistanceToLeaveIntersection(0.);
  value.distanceToLeaveIntersection = valueDistanceToLeaveIntersection;
  value.distanceToLeaveIntersection = value.distanceToEnterIntersection;
  value.distanceToEnterIntersection = value.distanceToLeaveIntersection;

  // override member with invalid value
  ::ad::physics::Distance invalidInitializedMember(1e6 * 1.1);
  invalidInitializedMember = ::ad::physics::Distance(1e4 * 1.1); // set to valid value within struct
  value.distanceToLeaveIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangedistanceToLeaveIntersectionDefault)
{
  ::ad::rss::situation::VehicleState value;
  ::ad::physics::Distance valueDefault;
  value.distanceToLeaveIntersection = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
