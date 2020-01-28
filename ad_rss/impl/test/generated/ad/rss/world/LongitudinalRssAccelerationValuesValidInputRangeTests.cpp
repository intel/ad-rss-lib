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

#include "ad/rss/world/LongitudinalRssAccelerationValuesValidInputRange.hpp"

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember = ::ad::physics::Acceleration(
    0. - ::ad::physics::Acceleration::cPrecisionValue); // set to invalid value within struct
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeaccelMaxDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.accelMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMaxTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMaxTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMaxDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brakeMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brakeMin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinCorrectTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinCorrectTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMax(-1e2);
  value.brakeMax = valueBrakeMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;
  ::ad::physics::Acceleration valueBrakeMinCorrect(-1e2);
  valueBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMinCorrect = valueBrakeMinCorrect;
  value.brakeMin = value.brakeMinCorrect;
  value.brakeMax = value.brakeMin;
  value.brakeMin = value.brakeMax;
  value.brakeMinCorrect = value.brakeMin;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMinCorrect = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinCorrectDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brakeMinCorrect = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
