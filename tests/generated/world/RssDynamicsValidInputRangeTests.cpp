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

#include "ad_rss/world/RssDynamicsValidInputRange.hpp"

TEST(RssDynamicsValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLonTooSmall)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;

  // override member with invalid value
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLonTooBig)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;

  // override member with invalid value
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLon = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLatTooSmall)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;

  // override member with invalid value
  ::ad_rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAccelMax(-1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeAlphaLatTooBig)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;

  // override member with invalid value
  ::ad_rss::world::LateralRssAccelerationValues invalidInitializedMember;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAccelMax(1e2 * 1.1);
  invalidInitializedMember.accelMax = invalidInitializedMemberAccelMax;
  value.alphaLat = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeLateralFluctuationMarginTooSmall)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeLateralFluctuationMarginTooBig)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;

  // override member with invalid value
  ::ad_rss::physics::Distance invalidInitializedMember(1e6 * 1.1);
  invalidInitializedMember = ::ad_rss::physics::Distance(1. * 1.1); // set to valid value within struct
  value.lateralFluctuationMargin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangelateralFluctuationMarginDefault)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::physics::Distance valueDefault;
  value.lateralFluctuationMargin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeResponseTimeTooSmall)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;

  // override member with invalid value
  ::ad_rss::physics::Duration invalidInitializedMember(0. - ::ad_rss::physics::Duration::cPrecisionValue);
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeResponseTimeTooBig)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueAlphaLon;
  ::ad_rss::physics::Acceleration valueAlphaLonAccelMax(-1e2);
  valueAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLon.accelMax = valueAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMax(-1e2);
  valueAlphaLon.brakeMax = valueAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMin(-1e2);
  valueAlphaLon.brakeMin = valueAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueAlphaLonBrakeMinCorrect(-1e2);
  valueAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLon.brakeMinCorrect = valueAlphaLonBrakeMinCorrect;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMinCorrect;
  valueAlphaLon.brakeMax = valueAlphaLon.brakeMin;
  valueAlphaLon.brakeMin = valueAlphaLon.brakeMax;
  valueAlphaLon.brakeMinCorrect = valueAlphaLon.brakeMin;
  value.alphaLon = valueAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueAlphaLat;
  ::ad_rss::physics::Acceleration valueAlphaLatAccelMax(-1e2);
  valueAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueAlphaLat.accelMax = valueAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueAlphaLatBrakeMin(-1e2);
  valueAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueAlphaLat.brakeMin = valueAlphaLatBrakeMin;
  value.alphaLat = valueAlphaLat;
  ::ad_rss::physics::Distance valueLateralFluctuationMargin(0.);
  value.lateralFluctuationMargin = valueLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueResponseTime(0.);
  valueResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  value.responseTime = valueResponseTime;

  // override member with invalid value
  ::ad_rss::physics::Duration invalidInitializedMember(100. * 1.1);
  invalidInitializedMember = ::ad_rss::physics::Duration(10. * 1.1); // set to valid value within struct
  value.responseTime = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssDynamicsValidInputRangeTests, testValidInputRangeresponseTimeDefault)
{
  ::ad_rss::world::RssDynamics value;
  ::ad_rss::physics::Duration valueDefault;
  value.responseTime = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
