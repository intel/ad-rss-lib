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

#include "ad/rss/map/RssVehicleAccelerationRestrictionsValidInputRange.hpp"

TEST(RssVehicleAccelerationRestrictionsValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions value;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_combined_range;
  ::ad::physics::Acceleration valueLateral_combined_rangeMinimum(-1e2);
  valueLateral_combined_range.minimum = valueLateral_combined_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_combined_rangeMaximum(-1e2);
  valueLateral_combined_range.maximum = valueLateral_combined_rangeMaximum;
  valueLateral_combined_range.maximum = valueLateral_combined_range.minimum;
  valueLateral_combined_range.minimum = valueLateral_combined_range.maximum;
  value.lateral_combined_range = valueLateral_combined_range;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RssVehicleAccelerationRestrictionsValidInputRangeTests, testValidInputRangeLongitudinal_rangeTooSmall)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions value;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_combined_range;
  ::ad::physics::Acceleration valueLateral_combined_rangeMinimum(-1e2);
  valueLateral_combined_range.minimum = valueLateral_combined_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_combined_rangeMaximum(-1e2);
  valueLateral_combined_range.maximum = valueLateral_combined_rangeMaximum;
  valueLateral_combined_range.maximum = valueLateral_combined_range.minimum;
  valueLateral_combined_range.minimum = valueLateral_combined_range.maximum;
  value.lateral_combined_range = valueLateral_combined_range;

  // override member with data type value below input range minimum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinal_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssVehicleAccelerationRestrictionsValidInputRangeTests, testValidInputRangeLongitudinal_rangeTooBig)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions value;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_combined_range;
  ::ad::physics::Acceleration valueLateral_combined_rangeMinimum(-1e2);
  valueLateral_combined_range.minimum = valueLateral_combined_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_combined_rangeMaximum(-1e2);
  valueLateral_combined_range.maximum = valueLateral_combined_rangeMaximum;
  valueLateral_combined_range.maximum = valueLateral_combined_range.minimum;
  valueLateral_combined_range.minimum = valueLateral_combined_range.maximum;
  value.lateral_combined_range = valueLateral_combined_range;

  // override member with data type value above input range maximum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.longitudinal_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssVehicleAccelerationRestrictionsValidInputRangeTests, testValidInputRangeLateral_combined_rangeTooSmall)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions value;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_combined_range;
  ::ad::physics::Acceleration valueLateral_combined_rangeMinimum(-1e2);
  valueLateral_combined_range.minimum = valueLateral_combined_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_combined_rangeMaximum(-1e2);
  valueLateral_combined_range.maximum = valueLateral_combined_rangeMaximum;
  valueLateral_combined_range.maximum = valueLateral_combined_range.minimum;
  valueLateral_combined_range.minimum = valueLateral_combined_range.maximum;
  value.lateral_combined_range = valueLateral_combined_range;

  // override member with data type value below input range minimum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(-1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateral_combined_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RssVehicleAccelerationRestrictionsValidInputRangeTests, testValidInputRangeLateral_combined_rangeTooBig)
{
  ::ad::rss::map::RssVehicleAccelerationRestrictions value;
  ::ad::physics::AccelerationRange valueLongitudinal_range;
  ::ad::physics::Acceleration valueLongitudinal_rangeMinimum(-1e2);
  valueLongitudinal_range.minimum = valueLongitudinal_rangeMinimum;
  ::ad::physics::Acceleration valueLongitudinal_rangeMaximum(-1e2);
  valueLongitudinal_range.maximum = valueLongitudinal_rangeMaximum;
  valueLongitudinal_range.maximum = valueLongitudinal_range.minimum;
  valueLongitudinal_range.minimum = valueLongitudinal_range.maximum;
  value.longitudinal_range = valueLongitudinal_range;
  ::ad::physics::AccelerationRange valueLateral_combined_range;
  ::ad::physics::Acceleration valueLateral_combined_rangeMinimum(-1e2);
  valueLateral_combined_range.minimum = valueLateral_combined_rangeMinimum;
  ::ad::physics::Acceleration valueLateral_combined_rangeMaximum(-1e2);
  valueLateral_combined_range.maximum = valueLateral_combined_rangeMaximum;
  valueLateral_combined_range.maximum = valueLateral_combined_range.minimum;
  valueLateral_combined_range.minimum = valueLateral_combined_range.maximum;
  value.lateral_combined_range = valueLateral_combined_range;

  // override member with data type value above input range maximum
  ::ad::physics::AccelerationRange invalidInitializedMember;
  ::ad::physics::Acceleration invalidInitializedMemberMinimum(1e2 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lateral_combined_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
