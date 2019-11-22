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

#include "ad_rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooSmall)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooBig)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeaccelMaxDefault)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.accelMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMaxTooSmall)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMaxTooBig)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMaxDefault)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.brakeMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooSmall)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooBig)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinDefault)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.brakeMin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinCorrectTooSmall)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinCorrectTooBig)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad_rss::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinCorrectDefault)
{
  ::ad_rss::world::LongitudinalRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.brakeMinCorrect = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
