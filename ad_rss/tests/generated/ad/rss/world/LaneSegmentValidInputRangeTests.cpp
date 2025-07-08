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

#include "ad/rss/world/LaneSegmentValidInputRange.hpp"

TEST(LaneSegmentValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneDrivingDirection valueDriving_direction(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.driving_direction = valueDriving_direction;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(-1e9);
  valueLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(-1e9);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(-1e9);
  valueWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(-1e9);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeDriving_directionTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneDrivingDirection valueDriving_direction(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.driving_direction = valueDriving_direction;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(-1e9);
  valueLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(-1e9);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(-1e9);
  valueWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(-1e9);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with data type value below input range minimum
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMember(
    static_cast<::ad::rss::world::LaneDrivingDirection>(-1));
  value.driving_direction = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeDriving_directionTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneDrivingDirection valueDriving_direction(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.driving_direction = valueDriving_direction;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(-1e9);
  valueLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(-1e9);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(-1e9);
  valueWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(-1e9);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with data type value above input range maximum
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMember(
    static_cast<::ad::rss::world::LaneDrivingDirection>(-1));
  value.driving_direction = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeLengthTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneDrivingDirection valueDriving_direction(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.driving_direction = valueDriving_direction;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(-1e9);
  valueLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(-1e9);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(-1e9);
  valueWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(-1e9);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with data type value below input range minimum
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(-1e9 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.length = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeLengthTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneDrivingDirection valueDriving_direction(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.driving_direction = valueDriving_direction;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(-1e9);
  valueLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(-1e9);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(-1e9);
  valueWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(-1e9);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with data type value above input range maximum
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(1e9 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.length = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeWidthTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneDrivingDirection valueDriving_direction(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.driving_direction = valueDriving_direction;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(-1e9);
  valueLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(-1e9);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(-1e9);
  valueWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(-1e9);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with data type value below input range minimum
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(-1e9 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.width = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeWidthTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneDrivingDirection valueDriving_direction(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.driving_direction = valueDriving_direction;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(-1e9);
  valueLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(-1e9);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(-1e9);
  valueWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(-1e9);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with data type value above input range maximum
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(1e9 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.width = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
