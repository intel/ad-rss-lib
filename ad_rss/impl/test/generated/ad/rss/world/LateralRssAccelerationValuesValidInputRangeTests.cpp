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

#include "ad/rss/world/LateralRssAccelerationValuesValidInputRange.hpp"

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
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
  value.brakeMin = valueBrakeMin;

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

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccelMaxTooBig)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccelMax(-1e2);
  valueAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accelMax = valueAccelMax;
  ::ad::physics::Acceleration valueBrakeMin(-1e2);
  value.brakeMin = valueBrakeMin;

  // override member with data type value above input range maximum
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
  value.brakeMin = valueBrakeMin;

  // override member with data type value below input range minimum
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
  value.brakeMin = valueBrakeMin;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brakeMin = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Acceleration(0.); // set to valid value within struct
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
