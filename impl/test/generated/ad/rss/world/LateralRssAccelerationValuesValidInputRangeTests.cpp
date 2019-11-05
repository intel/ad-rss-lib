/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/LateralRssAccelerationValuesValidInputRange.hpp"

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooSmall)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooBig)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeaccelMaxDefault)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.accelMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooSmall)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooBig)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;

  // override member with invalid value
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinDefault)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brakeMin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
