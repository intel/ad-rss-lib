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

#include "ad_rss/world/OccupiedRegionValidInputRange.hpp"

TEST(OccupiedRegionValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::OccupiedRegion value;
  ::ad_rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad_rss::physics::ParametricRange valueLonRange;
  ::ad_rss::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad_rss::physics::ParametricRange valueLatRange;
  ::ad_rss::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLonRangeTooSmall)
{
  ::ad_rss::world::OccupiedRegion value;
  ::ad_rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad_rss::physics::ParametricRange valueLonRange;
  ::ad_rss::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad_rss::physics::ParametricRange valueLatRange;
  ::ad_rss::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;

  // override member with invalid value
  ::ad_rss::physics::ParametricRange invalidInitializedMember;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberMinimum(
    0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lonRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLonRangeTooBig)
{
  ::ad_rss::world::OccupiedRegion value;
  ::ad_rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad_rss::physics::ParametricRange valueLonRange;
  ::ad_rss::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad_rss::physics::ParametricRange valueLatRange;
  ::ad_rss::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;

  // override member with invalid value
  ::ad_rss::physics::ParametricRange invalidInitializedMember;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberMinimum(1. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.lonRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLatRangeTooSmall)
{
  ::ad_rss::world::OccupiedRegion value;
  ::ad_rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad_rss::physics::ParametricRange valueLonRange;
  ::ad_rss::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad_rss::physics::ParametricRange valueLatRange;
  ::ad_rss::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;

  // override member with invalid value
  ::ad_rss::physics::ParametricRange invalidInitializedMember;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberMinimum(
    0. - ::ad_rss::physics::ParametricValue::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.latRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(OccupiedRegionValidInputRangeTests, testValidInputRangeLatRangeTooBig)
{
  ::ad_rss::world::OccupiedRegion value;
  ::ad_rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.segmentId = valueSegmentId;
  ::ad_rss::physics::ParametricRange valueLonRange;
  ::ad_rss::physics::ParametricValue valueLonRangeMinimum(0.);
  valueLonRange.minimum = valueLonRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLonRangeMaximum(0.);
  valueLonRange.maximum = valueLonRangeMaximum;
  valueLonRange.maximum = valueLonRange.minimum;
  valueLonRange.minimum = valueLonRange.maximum;
  value.lonRange = valueLonRange;
  ::ad_rss::physics::ParametricRange valueLatRange;
  ::ad_rss::physics::ParametricValue valueLatRangeMinimum(0.);
  valueLatRange.minimum = valueLatRangeMinimum;
  ::ad_rss::physics::ParametricValue valueLatRangeMaximum(0.);
  valueLatRange.maximum = valueLatRangeMaximum;
  valueLatRange.maximum = valueLatRange.minimum;
  valueLatRange.minimum = valueLatRange.maximum;
  value.latRange = valueLatRange;

  // override member with invalid value
  ::ad_rss::physics::ParametricRange invalidInitializedMember;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberMinimum(1. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.latRange = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
