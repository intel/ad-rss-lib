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

#include "ad/rss/world/LateralRssAccelerationValuesValidInputRange.hpp"

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccel_maxTooSmall)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;

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

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeAccel_maxTooBig)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.accel_max = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeaccel_maxDefault)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.accel_max = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrake_minTooSmall)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;

  // override member with data type value below input range minimum
  ::ad::physics::Acceleration invalidInitializedMember(-1e2 * 1.1);
  value.brake_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangeBrake_minTooBig)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueAccel_max(-1e2);
  valueAccel_max = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.accel_max = valueAccel_max;
  ::ad::physics::Acceleration valueBrake_min(-1e2);
  value.brake_min = valueBrake_min;

  // override member with data type value above input range maximum
  ::ad::physics::Acceleration invalidInitializedMember(1e2 * 1.1);
  value.brake_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));

  // override member with value above struct member input range maximum
  invalidInitializedMember = ::ad::physics::Acceleration(0.); // set to valid value within struct
  value.brake_min = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LateralRssAccelerationValuesValidInputRangeTests, testValidInputRangebrake_minDefault)
{
  ::ad::rss::world::LateralRssAccelerationValues value;
  ::ad::physics::Acceleration valueDefault;
  value.brake_min = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
