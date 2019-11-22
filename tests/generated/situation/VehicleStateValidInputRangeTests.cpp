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

#include "ad_rss/situation/VehicleStateValidInputRange.hpp"

TEST(VehicleStateValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
  ::ad_rss::situation::VelocityRange invalidInitializedMember;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSpeedLonMinimum(-100. * 1.1);
  invalidInitializedMemberSpeedLon.minimum = invalidInitializedMemberSpeedLonMinimum;
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
  ::ad_rss::situation::VelocityRange invalidInitializedMember;
  ::ad_rss::physics::SpeedRange invalidInitializedMemberSpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSpeedLonMinimum(100. * 1.1);
  invalidInitializedMemberSpeedLon.minimum = invalidInitializedMemberSpeedLonMinimum;
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDynamicsTooSmall)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
  ::ad_rss::world::RssDynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDynamicsTooBig)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
  ::ad_rss::world::RssDynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.dynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(VehicleStateValidInputRangeTests, testValidInputRangeDistanceToEnterIntersectionTooSmall)
{
  ::ad_rss::situation::VehicleState value;
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
  ::ad_rss::situation::VelocityRange valueVelocity;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMinimum(-100.);
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLonMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLonMaximum(-100.);
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLonMaximum;
  valueVelocitySpeedLon.maximum = valueVelocitySpeedLon.minimum;
  valueVelocitySpeedLon.minimum = valueVelocitySpeedLon.maximum;
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::SpeedRange valueVelocitySpeedLat;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMinimum(-100.);
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLatMinimum;
  ::ad_rss::physics::Speed valueVelocitySpeedLatMaximum(-100.);
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLatMaximum;
  valueVelocitySpeedLat.maximum = valueVelocitySpeedLat.minimum;
  valueVelocitySpeedLat.minimum = valueVelocitySpeedLat.maximum;
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ::ad_rss::world::RssDynamics valueDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonAccelMax(-1e2);
  valueDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLon.accelMax = valueDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMax(-1e2);
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMin(-1e2);
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  value.dynamics = valueDynamics;
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
