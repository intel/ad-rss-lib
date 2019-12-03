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

#include "ad/rss/world/RssDynamicsValidInputRange.hpp"

TEST(RssDynamicsValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLonTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value below input range minimum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLonTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value above input range maximum
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLatTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value below input range minimum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLatTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value above input range maximum
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeLateralFluctuationMarginTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(0. - ::ad::physics::Distance::cPrecisionValue);
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeLateralFluctuationMarginTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Distance(1. * 1.1); // set to invalid value within struct
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangelateralFluctuationMarginDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Distance valueDefault;
  value.lateralFluctuationMargin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeResponseTimeTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value below input range minimum
  ::ad::physics::Duration invalidInitializedMember(0. - ::ad::physics::Duration::cPrecisionValue);
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember = ::ad::physics::Duration(0.); // set to valid value within struct
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeResponseTimeTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value above input range maximum
  ::ad::physics::Duration invalidInitializedMember(1e6 * 1.1);
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Duration(10. * 1.1); // set to invalid value within struct
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeresponseTimeDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Duration valueDefault;
  value.responseTime = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeMaxSpeedTooSmall)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.maxSpeed = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeMaxSpeedTooBig)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad::physics::Duration valueResponseTime(0.);
  valueResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ::ad::physics::Speed valueMaxSpeed(-100.);
  value.maxSpeed = valueMaxSpeed;

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.maxSpeed = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangemaxSpeedDefault)
{
  ::ad::rss::world::RssDynamics value;
  ::ad::physics::Speed valueDefault;
  value.maxSpeed = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
