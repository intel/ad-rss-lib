/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2019 Intel Corporation
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
  ::ad::rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad::physics::ParametricRange valueLonRange;
  ::ad::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad::physics::ParametricRange valueLatRange;
  ::ad::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLonRangeTooSmall)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad::physics::ParametricRange valueLonRange;
  ::ad::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad::physics::ParametricRange valueLatRange;
  ::ad::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;

  // override member with data type value below input range minimum
  ::ad::physics::ParametricRange invalidInitializedMember;
  ::ad::physics::ParametricValue invalidInitializedMemberMinimum(0. - ::ad::physics::ParametricValue::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lonRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLonRangeTooBig)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad::physics::ParametricRange valueLonRange;
  ::ad::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad::physics::ParametricRange valueLatRange;
  ::ad::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;

  // override member with data type value above input range maximum
  ::ad::physics::ParametricRange invalidInitializedMember;
  ::ad::physics::ParametricValue invalidInitializedMemberMinimum(1. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lonRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLatRangeTooSmall)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad::physics::ParametricRange valueLonRange;
  ::ad::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad::physics::ParametricRange valueLatRange;
  ::ad::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;

  // override member with data type value below input range minimum
  ::ad::physics::ParametricRange invalidInitializedMember;
  ::ad::physics::ParametricValue invalidInitializedMemberMinimum(0. - ::ad::physics::ParametricValue::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.latRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLatRangeTooBig)
{
  ::ad::rss::world::OccupiedRegion value;
  ::ad::rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad::physics::ParametricRange valueLonRange;
  ::ad::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad::physics::ParametricRange valueLatRange;
  ::ad::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;

  // override member with data type value above input range maximum
  ::ad::physics::ParametricRange invalidInitializedMember;
  ::ad::physics::ParametricValue invalidInitializedMemberMinimum(1. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.latRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
