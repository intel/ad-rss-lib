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

#include "ad/rss/world/OccupiedRegionValidInputRange.hpp"

TEST(OccupiedRegionValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segment_id = valueSegment_id;
  ::ad::physics::ParametricRange valueLon_range;
  ::ad::physics::ParametricValue valueLon_rangeMinimum(0.);
  valueLon_range.minimum = valueLon_rangeMinimum;
  ::ad::physics::ParametricValue valueLon_rangeMaximum(0.);
  valueLon_range.maximum = valueLon_rangeMaximum;
  valueLon_range.maximum = valueLon_range.minimum;
  valueLon_range.minimum = valueLon_range.maximum;
  value.lon_range = valueLon_range;
  ::ad::physics::ParametricRange valueLat_range;
  ::ad::physics::ParametricValue valueLat_rangeMinimum(0.);
  valueLat_range.minimum = valueLat_rangeMinimum;
  ::ad::physics::ParametricValue valueLat_rangeMaximum(0.);
  valueLat_range.maximum = valueLat_rangeMaximum;
  valueLat_range.maximum = valueLat_range.minimum;
  valueLat_range.minimum = valueLat_range.maximum;
  value.lat_range = valueLat_range;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLon_rangeTooSmall)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segment_id = valueSegment_id;
  ::ad::physics::ParametricRange valueLon_range;
  ::ad::physics::ParametricValue valueLon_rangeMinimum(0.);
  valueLon_range.minimum = valueLon_rangeMinimum;
  ::ad::physics::ParametricValue valueLon_rangeMaximum(0.);
  valueLon_range.maximum = valueLon_rangeMaximum;
  valueLon_range.maximum = valueLon_range.minimum;
  valueLon_range.minimum = valueLon_range.maximum;
  value.lon_range = valueLon_range;
  ::ad::physics::ParametricRange valueLat_range;
  ::ad::physics::ParametricValue valueLat_rangeMinimum(0.);
  valueLat_range.minimum = valueLat_rangeMinimum;
  ::ad::physics::ParametricValue valueLat_rangeMaximum(0.);
  valueLat_range.maximum = valueLat_rangeMaximum;
  valueLat_range.maximum = valueLat_range.minimum;
  valueLat_range.minimum = valueLat_range.maximum;
  value.lat_range = valueLat_range;

  // override member with data type value below input range minimum
  ::ad::physics::ParametricRange invalidInitializedMember;
  ::ad::physics::ParametricValue invalidInitializedMemberMinimum(0. - ::ad::physics::ParametricValue::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lon_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLon_rangeTooBig)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segment_id = valueSegment_id;
  ::ad::physics::ParametricRange valueLon_range;
  ::ad::physics::ParametricValue valueLon_rangeMinimum(0.);
  valueLon_range.minimum = valueLon_rangeMinimum;
  ::ad::physics::ParametricValue valueLon_rangeMaximum(0.);
  valueLon_range.maximum = valueLon_rangeMaximum;
  valueLon_range.maximum = valueLon_range.minimum;
  valueLon_range.minimum = valueLon_range.maximum;
  value.lon_range = valueLon_range;
  ::ad::physics::ParametricRange valueLat_range;
  ::ad::physics::ParametricValue valueLat_rangeMinimum(0.);
  valueLat_range.minimum = valueLat_rangeMinimum;
  ::ad::physics::ParametricValue valueLat_rangeMaximum(0.);
  valueLat_range.maximum = valueLat_rangeMaximum;
  valueLat_range.maximum = valueLat_range.minimum;
  valueLat_range.minimum = valueLat_range.maximum;
  value.lat_range = valueLat_range;

  // override member with data type value above input range maximum
  ::ad::physics::ParametricRange invalidInitializedMember;
  ::ad::physics::ParametricValue invalidInitializedMemberMinimum(1. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lon_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLat_rangeTooSmall)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segment_id = valueSegment_id;
  ::ad::physics::ParametricRange valueLon_range;
  ::ad::physics::ParametricValue valueLon_rangeMinimum(0.);
  valueLon_range.minimum = valueLon_rangeMinimum;
  ::ad::physics::ParametricValue valueLon_rangeMaximum(0.);
  valueLon_range.maximum = valueLon_rangeMaximum;
  valueLon_range.maximum = valueLon_range.minimum;
  valueLon_range.minimum = valueLon_range.maximum;
  value.lon_range = valueLon_range;
  ::ad::physics::ParametricRange valueLat_range;
  ::ad::physics::ParametricValue valueLat_rangeMinimum(0.);
  valueLat_range.minimum = valueLat_rangeMinimum;
  ::ad::physics::ParametricValue valueLat_rangeMaximum(0.);
  valueLat_range.maximum = valueLat_rangeMaximum;
  valueLat_range.maximum = valueLat_range.minimum;
  valueLat_range.minimum = valueLat_range.maximum;
  value.lat_range = valueLat_range;

  // override member with data type value below input range minimum
  ::ad::physics::ParametricRange invalidInitializedMember;
  ::ad::physics::ParametricValue invalidInitializedMemberMinimum(0. - ::ad::physics::ParametricValue::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lat_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLat_rangeTooBig)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segment_id = valueSegment_id;
  ::ad::physics::ParametricRange valueLon_range;
  ::ad::physics::ParametricValue valueLon_rangeMinimum(0.);
  valueLon_range.minimum = valueLon_rangeMinimum;
  ::ad::physics::ParametricValue valueLon_rangeMaximum(0.);
  valueLon_range.maximum = valueLon_rangeMaximum;
  valueLon_range.maximum = valueLon_range.minimum;
  valueLon_range.minimum = valueLon_range.maximum;
  value.lon_range = valueLon_range;
  ::ad::physics::ParametricRange valueLat_range;
  ::ad::physics::ParametricValue valueLat_rangeMinimum(0.);
  valueLat_range.minimum = valueLat_rangeMinimum;
  ::ad::physics::ParametricValue valueLat_rangeMaximum(0.);
  valueLat_range.maximum = valueLat_rangeMaximum;
  valueLat_range.maximum = valueLat_range.minimum;
  valueLat_range.minimum = valueLat_range.maximum;
  value.lat_range = valueLat_range;

  // override member with data type value above input range maximum
  ::ad::physics::ParametricRange invalidInitializedMember;
  ::ad::physics::ParametricValue invalidInitializedMemberMinimum(1. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lat_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
