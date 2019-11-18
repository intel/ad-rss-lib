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

#include "ad_rss/world/LaneSegmentValidInputRange.hpp"

TEST(LaneSegmentValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeTypeTooSmall)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad_rss::world::LaneSegmentType invalidInitializedMember(static_cast<::ad_rss::world::LaneSegmentType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeTypeTooBig)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad_rss::world::LaneSegmentType invalidInitializedMember(static_cast<::ad_rss::world::LaneSegmentType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeDrivingDirectionTooSmall)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad_rss::world::LaneDrivingDirection invalidInitializedMember(
    static_cast<::ad_rss::world::LaneDrivingDirection>(-1));
  value.drivingDirection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeDrivingDirectionTooBig)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad_rss::world::LaneDrivingDirection invalidInitializedMember(
    static_cast<::ad_rss::world::LaneDrivingDirection>(-1));
  value.drivingDirection = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeLengthTooSmall)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad_rss::physics::MetricRange invalidInitializedMember;
  ::ad_rss::physics::Distance invalidInitializedMemberMinimum(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.length = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeLengthTooBig)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad_rss::physics::MetricRange invalidInitializedMember;
  ::ad_rss::physics::Distance invalidInitializedMemberMinimum(1e6 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.length = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeWidthTooSmall)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad_rss::physics::MetricRange invalidInitializedMember;
  ::ad_rss::physics::Distance invalidInitializedMemberMinimum(0. - ::ad_rss::physics::Distance::cPrecisionValue);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.width = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentValidInputRangeTests, testValidInputRangeWidthTooBig)
{
  ::ad_rss::world::LaneSegment value;
  ::ad_rss::world::LaneSegmentId valueId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  value.id = valueId;
  ::ad_rss::world::LaneSegmentType valueType(::ad_rss::world::LaneSegmentType::Normal);
  value.type = valueType;
  ::ad_rss::world::LaneDrivingDirection valueDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  value.drivingDirection = valueDrivingDirection;
  ::ad_rss::physics::MetricRange valueLength;
  ::ad_rss::physics::Distance valueLengthMinimum(0.);
  valueLength.minimum = valueLengthMinimum;
  ::ad_rss::physics::Distance valueLengthMaximum(0.);
  valueLength.maximum = valueLengthMaximum;
  valueLength.maximum = valueLength.minimum;
  valueLength.minimum = valueLength.maximum;
  value.length = valueLength;
  ::ad_rss::physics::MetricRange valueWidth;
  ::ad_rss::physics::Distance valueWidthMinimum(0.);
  valueWidth.minimum = valueWidthMinimum;
  ::ad_rss::physics::Distance valueWidthMaximum(0.);
  valueWidth.maximum = valueWidthMaximum;
  valueWidth.maximum = valueWidth.minimum;
  valueWidth.minimum = valueWidth.maximum;
  value.width = valueWidth;

  // override member with invalid value
  ::ad_rss::physics::MetricRange invalidInitializedMember;
  ::ad_rss::physics::Distance invalidInitializedMemberMinimum(1e6 * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.width = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
