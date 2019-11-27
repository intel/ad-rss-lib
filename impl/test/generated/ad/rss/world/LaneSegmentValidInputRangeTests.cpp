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

#include "ad/rss/world/LaneSegmentValidInputRange.hpp"

TEST(LaneSegmentValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeTypeTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::rss::world::LaneSegmentType invalidInitializedMember(static_cast<::ad::rss::world::LaneSegmentType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeTypeTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::rss::world::LaneSegmentType invalidInitializedMember(static_cast<::ad::rss::world::LaneSegmentType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeDrivingDirectionTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMember(
    static_cast<::ad::rss::world::LaneDrivingDirection>(-1));
  value.drivingDirection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeDrivingDirectionTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMember(
    static_cast<::ad::rss::world::LaneDrivingDirection>(-1));
  value.drivingDirection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeLengthTooSmall)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(0. - ::ad::physics::Distance::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.length = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeLengthTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
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
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(0. - ::ad::physics::Distance::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.width = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeWidthTooBig)
{
  ::ad::rss::world::LaneSegment value;
  ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad::rss::world::LaneSegmentType valueType(::ad::rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneDrivingDirection valueDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad::physics::MetricRange valueLength;
  ::ad::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad::physics::MetricRange valueWidth;
  ::ad::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad::physics::MetricRange invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberMinimum(1e9 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.width = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
