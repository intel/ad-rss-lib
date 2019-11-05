/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
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

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
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

  // override member with invalid value
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

  // override member with invalid value
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

  // override member with invalid value
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

  // override member with invalid value
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

  // override member with invalid value
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

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
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

  // override member with invalid value
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
