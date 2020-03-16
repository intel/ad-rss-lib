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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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

  // override member with data type value below input range minimum
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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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

  // override member with data type value above input range maximum
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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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

  // override member with data type value below input range minimum
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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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

  // override member with data type value above input range maximum
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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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

  // override member with data type value below input range minimum
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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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

  // override member with data type value below input range minimum
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
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLonBrakeMinCorrect;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMax;
  valueDynamicsAlphaLon.brakeMinCorrect = valueDynamicsAlphaLon.brakeMin;
  valueDynamicsAlphaLon.brakeMin = valueDynamicsAlphaLon.brakeMinCorrect;
  valueDynamicsAlphaLon.brakeMax = valueDynamicsAlphaLon.brakeMin;
  valueDynamics.alphaLon = valueDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueDynamicsAlphaLat;
  ::ad::physics::Acceleration valueDynamicsAlphaLatAccelMax(-1e2);
  valueDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueDynamicsAlphaLat.accelMax = valueDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueDynamicsAlphaLatBrakeMin(-1e2);
  valueDynamicsAlphaLat.brakeMin = valueDynamicsAlphaLatBrakeMin;
  valueDynamics.alphaLat = valueDynamicsAlphaLat;
  ::ad::physics::Distance valueDynamicsLateralFluctuationMargin(0.);
  valueDynamics.lateralFluctuationMargin = valueDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueDynamicsResponseTime(0.);
  valueDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueDynamics.responseTime = valueDynamicsResponseTime;
  ::ad::physics::Speed valueDynamicsMaxSpeed(-100.);
  valueDynamics.maxSpeed = valueDynamicsMaxSpeed;
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

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.distanceToLeaveIntersection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Distance(1e4 * 1.1); // set to invalid value within struct
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
