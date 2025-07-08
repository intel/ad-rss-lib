/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2022 Intel Corporation
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
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccel_maxTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.accel_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value below struct member input range minimum
  invalidInitializedMember = ::ad::physics::Acceleration(
    0. - ::ad::physics::Acceleration::cPrecisionValue); // set to invalid value within struct
  value.accel_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccel_maxTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.accel_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeaccel_maxDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.accel_max = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrake_maxTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brake_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrake_maxTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brake_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrake_maxDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brake_max = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrake_minTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brake_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrake_minTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brake_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrake_minDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brake_min = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrake_min_correctTooSmall)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brake_min_correct = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrake_min_correctTooBig)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_max(-1e2);
  value.brake_max = valueBrake_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ::ad::physics::Acceleration valueBrake_min_correct(-1e2);
  value.brake_min_correct = valueBrake_min_correct;
  value.brake_min = value.brake_max;
  value.brake_min_correct = value.brake_min;
  value.brake_min = value.brake_min_correct;
  value.brake_max = value.brake_min;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brake_min_correct = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.brake_min_correct = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LongitudinalRssAccelerationValuesValidInputRangeTests, testValidInputRangebrake_min_correctDefault)
{
  ::ad::rss::world::LongitudinalRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brake_min_correct = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
