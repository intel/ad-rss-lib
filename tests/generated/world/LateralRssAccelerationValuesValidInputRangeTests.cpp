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

#include "ad_rss/world/LateralRssAccelerationValuesValidInputRange.hpp"

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooSmall)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooBig)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.accelMax = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeaccelMaxDefault)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.accelMax = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooSmall)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrakeMinTooBig)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad_rss::physics::Acceleration valueBrakeMin(-1e2);
  valueBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  value.brakeMin = valueBrakeMin;

  // override member with invalid value
  ::ad_rss::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangebrakeMinDefault)
{
  ::ad_rss::world::LateralRssAccelerationValues value;
  ::ad_rss::physics::Acceleration valueDefault;
  value.brakeMin = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
