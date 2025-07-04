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

#include "ad/rss/state/AccelerationRestrictionValidInputRange.hpp"

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::state::AccelerationRestriction value;
  ::ad::physics::AccelerationRange valueLateral_left_range;
  ::ad::physics::Acceleration valueLateral_left_rangeMinimum(-1e2);
  valueLateral_left_range.minimum = valueLateral_left_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_left_rangeMaximum(-1e2);
  valueLateral_left_range.maximum = valueLateral_left_rangeMaximum;
  valueLateral_left_range.maximum = valueLateral_left_range.minimum;
  valueLateral_left_range.minimum = valueLateral_left_range.maximum;
  value.lateral_left_range = valueLateral_left_range;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_right_range;
  ::ad::physics::Acceleration valueLateral_right_rangeMinimum(-1e2);
  valueLateral_right_range.minimum = valueLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_right_rangeMaximum(-1e2);
  valueLateral_right_range.maximum = valueLateral_right_rangeMaximum;
  valueLateral_right_range.maximum = valueLateral_right_range.minimum;
  valueLateral_right_range.minimum = valueLateral_right_range.maximum;
  value.lateral_right_range = valueLateral_right_range;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateral_left_rangeTooSmall)
{
  ::ad::rss::state::AccelerationRestriction value;
  ::ad::physics::AccelerationRange valueLateral_left_range;
  ::ad::physics::Acceleration valueLateral_left_rangeMinimum(-1e2);
  valueLateral_left_range.minimum = valueLateral_left_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_left_rangeMaximum(-1e2);
  valueLateral_left_range.maximum = valueLateral_left_rangeMaximum;
  valueLateral_left_range.maximum = valueLateral_left_range.minimum;
  valueLateral_left_range.minimum = valueLateral_left_range.maximum;
  value.lateral_left_range = valueLateral_left_range;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_right_range;
  ::ad::physics::Acceleration valueLateral_right_rangeMinimum(-1e2);
  valueLateral_right_range.minimum = valueLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_right_rangeMaximum(-1e2);
  valueLateral_right_range.maximum = valueLateral_right_rangeMaximum;
  valueLateral_right_range.maximum = valueLateral_right_range.minimum;
  valueLateral_right_range.minimum = valueLateral_right_range.maximum;
  value.lateral_right_range = valueLateral_right_range;

  // override member with data type value below input range minimum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateral_left_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateral_left_rangeTooBig)
{
  ::ad::rss::state::AccelerationRestriction value;
  ::ad::physics::AccelerationRange valueLateral_left_range;
  ::ad::physics::Acceleration valueLateral_left_rangeMinimum(-1e2);
  valueLateral_left_range.minimum = valueLateral_left_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_left_rangeMaximum(-1e2);
  valueLateral_left_range.maximum = valueLateral_left_rangeMaximum;
  valueLateral_left_range.maximum = valueLateral_left_range.minimum;
  valueLateral_left_range.minimum = valueLateral_left_range.maximum;
  value.lateral_left_range = valueLateral_left_range;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_right_range;
  ::ad::physics::Acceleration valueLateral_right_rangeMinimum(-1e2);
  valueLateral_right_range.minimum = valueLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_right_rangeMaximum(-1e2);
  valueLateral_right_range.maximum = valueLateral_right_rangeMaximum;
  valueLateral_right_range.maximum = valueLateral_right_range.minimum;
  valueLateral_right_range.minimum = valueLateral_right_range.maximum;
  value.lateral_right_range = valueLateral_right_range;

  // override member with data type value above input range maximum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateral_left_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLongitudinal_rangeTooSmall)
{
  ::ad::rss::state::AccelerationRestriction value;
  ::ad::physics::AccelerationRange valueLateral_left_range;
  ::ad::physics::Acceleration valueLateral_left_rangeMinimum(-1e2);
  valueLateral_left_range.minimum = valueLateral_left_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_left_rangeMaximum(-1e2);
  valueLateral_left_range.maximum = valueLateral_left_rangeMaximum;
  valueLateral_left_range.maximum = valueLateral_left_range.minimum;
  valueLateral_left_range.minimum = valueLateral_left_range.maximum;
  value.lateral_left_range = valueLateral_left_range;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_right_range;
  ::ad::physics::Acceleration valueLateral_right_rangeMinimum(-1e2);
  valueLateral_right_range.minimum = valueLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_right_rangeMaximum(-1e2);
  valueLateral_right_range.maximum = valueLateral_right_rangeMaximum;
  valueLateral_right_range.maximum = valueLateral_right_range.minimum;
  valueLateral_right_range.minimum = valueLateral_right_range.maximum;
  value.lateral_right_range = valueLateral_right_range;

  // override member with data type value below input range minimum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinal_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLongitudinal_rangeTooBig)
{
  ::ad::rss::state::AccelerationRestriction value;
  ::ad::physics::AccelerationRange valueLateral_left_range;
  ::ad::physics::Acceleration valueLateral_left_rangeMinimum(-1e2);
  valueLateral_left_range.minimum = valueLateral_left_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_left_rangeMaximum(-1e2);
  valueLateral_left_range.maximum = valueLateral_left_rangeMaximum;
  valueLateral_left_range.maximum = valueLateral_left_range.minimum;
  valueLateral_left_range.minimum = valueLateral_left_range.maximum;
  value.lateral_left_range = valueLateral_left_range;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_right_range;
  ::ad::physics::Acceleration valueLateral_right_rangeMinimum(-1e2);
  valueLateral_right_range.minimum = valueLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_right_rangeMaximum(-1e2);
  valueLateral_right_range.maximum = valueLateral_right_rangeMaximum;
  valueLateral_right_range.maximum = valueLateral_right_range.minimum;
  valueLateral_right_range.minimum = valueLateral_right_range.maximum;
  value.lateral_right_range = valueLateral_right_range;

  // override member with data type value above input range maximum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinal_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateral_right_rangeTooSmall)
{
  ::ad::rss::state::AccelerationRestriction value;
  ::ad::physics::AccelerationRange valueLateral_left_range;
  ::ad::physics::Acceleration valueLateral_left_rangeMinimum(-1e2);
  valueLateral_left_range.minimum = valueLateral_left_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_left_rangeMaximum(-1e2);
  valueLateral_left_range.maximum = valueLateral_left_rangeMaximum;
  valueLateral_left_range.maximum = valueLateral_left_range.minimum;
  valueLateral_left_range.minimum = valueLateral_left_range.maximum;
  value.lateral_left_range = valueLateral_left_range;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_right_range;
  ::ad::physics::Acceleration valueLateral_right_rangeMinimum(-1e2);
  valueLateral_right_range.minimum = valueLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_right_rangeMaximum(-1e2);
  valueLateral_right_range.maximum = valueLateral_right_rangeMaximum;
  valueLateral_right_range.maximum = valueLateral_right_range.minimum;
  valueLateral_right_range.minimum = valueLateral_right_range.maximum;
  value.lateral_right_range = valueLateral_right_range;

  // override member with data type value below input range minimum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateral_right_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(AccelerationRestrictionValidInputRangeTests, testValidInputRangeLateral_right_rangeTooBig)
{
  ::ad::rss::state::AccelerationRestriction value;
  ::ad::physics::AccelerationRange valueLateral_left_range;
  ::ad::physics::Acceleration valueLateral_left_rangeMinimum(-1e2);
  valueLateral_left_range.minimum = valueLateral_left_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_left_rangeMaximum(-1e2);
  valueLateral_left_range.maximum = valueLateral_left_rangeMaximum;
  valueLateral_left_range.maximum = valueLateral_left_range.minimum;
  valueLateral_left_range.minimum = valueLateral_left_range.maximum;
  value.lateral_left_range = valueLateral_left_range;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_right_range;
  ::ad::physics::Acceleration valueLateral_right_rangeMinimum(-1e2);
  valueLateral_right_range.minimum = valueLateral_right_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_right_rangeMaximum(-1e2);
  valueLateral_right_range.maximum = valueLateral_right_rangeMaximum;
  valueLateral_right_range.maximum = valueLateral_right_range.minimum;
  valueLateral_right_range.minimum = valueLateral_right_range.maximum;
  value.lateral_right_range = valueLateral_right_range;

  // override member with data type value above input range maximum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateral_right_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
