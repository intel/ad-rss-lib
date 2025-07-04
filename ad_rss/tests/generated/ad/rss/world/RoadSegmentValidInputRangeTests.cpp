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

#include "ad/rss/world/RoadSegmentValidInputRange.hpp"

TEST(RoadSegmentValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::RoadSegmentType valueType(::ad::rss::world::RoadSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneSegmentVector valueLane_segments;
  ::ad::rss::world::LaneSegment valueLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId valueLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueLane_segmentsElement.id = valueLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection valueLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueLane_segmentsElement.driving_direction = valueLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange valueLane_segmentsElementLength;
  ::ad::physics::Distance valueLane_segmentsElementLengthMinimum(-1e9);
  valueLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementLengthMaximum(-1e9);
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLengthMaximum;
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLength.minimum;
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLength.maximum;
  valueLane_segmentsElement.length = valueLane_segmentsElementLength;
  ::ad::physics::MetricRange valueLane_segmentsElementWidth;
  ::ad::physics::Distance valueLane_segmentsElementWidthMinimum(-1e9);
  valueLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementWidthMaximum(-1e9);
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidthMaximum;
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidth.minimum;
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidth.maximum;
  valueLane_segmentsElement.width = valueLane_segmentsElementWidth;
  valueLane_segments.resize(1, valueLane_segmentsElement);
  value.lane_segments = valueLane_segments;
  ::ad::physics::Distance valueMinimum_length_after_intersecting_area(-1e9);
  value.minimum_length_after_intersecting_area = valueMinimum_length_after_intersecting_area;
  ::ad::physics::Distance valueMinimum_length_before_intersecting_area(-1e9);
  value.minimum_length_before_intersecting_area = valueMinimum_length_before_intersecting_area;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeTypeTooSmall)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::RoadSegmentType valueType(::ad::rss::world::RoadSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneSegmentVector valueLane_segments;
  ::ad::rss::world::LaneSegment valueLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId valueLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueLane_segmentsElement.id = valueLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection valueLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueLane_segmentsElement.driving_direction = valueLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange valueLane_segmentsElementLength;
  ::ad::physics::Distance valueLane_segmentsElementLengthMinimum(-1e9);
  valueLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementLengthMaximum(-1e9);
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLengthMaximum;
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLength.minimum;
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLength.maximum;
  valueLane_segmentsElement.length = valueLane_segmentsElementLength;
  ::ad::physics::MetricRange valueLane_segmentsElementWidth;
  ::ad::physics::Distance valueLane_segmentsElementWidthMinimum(-1e9);
  valueLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementWidthMaximum(-1e9);
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidthMaximum;
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidth.minimum;
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidth.maximum;
  valueLane_segmentsElement.width = valueLane_segmentsElementWidth;
  valueLane_segments.resize(1, valueLane_segmentsElement);
  value.lane_segments = valueLane_segments;
  ::ad::physics::Distance valueMinimum_length_after_intersecting_area(-1e9);
  value.minimum_length_after_intersecting_area = valueMinimum_length_after_intersecting_area;
  ::ad::physics::Distance valueMinimum_length_before_intersecting_area(-1e9);
  value.minimum_length_before_intersecting_area = valueMinimum_length_before_intersecting_area;

  // override member with data type value below input range minimum
  ::ad::rss::world::RoadSegmentType invalidInitializedMember(static_cast<::ad::rss::world::RoadSegmentType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeTypeTooBig)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::RoadSegmentType valueType(::ad::rss::world::RoadSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneSegmentVector valueLane_segments;
  ::ad::rss::world::LaneSegment valueLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId valueLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueLane_segmentsElement.id = valueLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection valueLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueLane_segmentsElement.driving_direction = valueLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange valueLane_segmentsElementLength;
  ::ad::physics::Distance valueLane_segmentsElementLengthMinimum(-1e9);
  valueLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementLengthMaximum(-1e9);
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLengthMaximum;
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLength.minimum;
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLength.maximum;
  valueLane_segmentsElement.length = valueLane_segmentsElementLength;
  ::ad::physics::MetricRange valueLane_segmentsElementWidth;
  ::ad::physics::Distance valueLane_segmentsElementWidthMinimum(-1e9);
  valueLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementWidthMaximum(-1e9);
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidthMaximum;
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidth.minimum;
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidth.maximum;
  valueLane_segmentsElement.width = valueLane_segmentsElementWidth;
  valueLane_segments.resize(1, valueLane_segmentsElement);
  value.lane_segments = valueLane_segments;
  ::ad::physics::Distance valueMinimum_length_after_intersecting_area(-1e9);
  value.minimum_length_after_intersecting_area = valueMinimum_length_after_intersecting_area;
  ::ad::physics::Distance valueMinimum_length_before_intersecting_area(-1e9);
  value.minimum_length_before_intersecting_area = valueMinimum_length_before_intersecting_area;

  // override member with data type value above input range maximum
  ::ad::rss::world::RoadSegmentType invalidInitializedMember(static_cast<::ad::rss::world::RoadSegmentType>(-1));
  value.type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeMinimum_length_after_intersecting_areaTooSmall)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::RoadSegmentType valueType(::ad::rss::world::RoadSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneSegmentVector valueLane_segments;
  ::ad::rss::world::LaneSegment valueLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId valueLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueLane_segmentsElement.id = valueLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection valueLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueLane_segmentsElement.driving_direction = valueLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange valueLane_segmentsElementLength;
  ::ad::physics::Distance valueLane_segmentsElementLengthMinimum(-1e9);
  valueLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementLengthMaximum(-1e9);
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLengthMaximum;
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLength.minimum;
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLength.maximum;
  valueLane_segmentsElement.length = valueLane_segmentsElementLength;
  ::ad::physics::MetricRange valueLane_segmentsElementWidth;
  ::ad::physics::Distance valueLane_segmentsElementWidthMinimum(-1e9);
  valueLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementWidthMaximum(-1e9);
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidthMaximum;
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidth.minimum;
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidth.maximum;
  valueLane_segmentsElement.width = valueLane_segmentsElementWidth;
  valueLane_segments.resize(1, valueLane_segmentsElement);
  value.lane_segments = valueLane_segments;
  ::ad::physics::Distance valueMinimum_length_after_intersecting_area(-1e9);
  value.minimum_length_after_intersecting_area = valueMinimum_length_after_intersecting_area;
  ::ad::physics::Distance valueMinimum_length_before_intersecting_area(-1e9);
  value.minimum_length_before_intersecting_area = valueMinimum_length_before_intersecting_area;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.minimum_length_after_intersecting_area = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeMinimum_length_after_intersecting_areaTooBig)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::RoadSegmentType valueType(::ad::rss::world::RoadSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneSegmentVector valueLane_segments;
  ::ad::rss::world::LaneSegment valueLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId valueLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueLane_segmentsElement.id = valueLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection valueLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueLane_segmentsElement.driving_direction = valueLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange valueLane_segmentsElementLength;
  ::ad::physics::Distance valueLane_segmentsElementLengthMinimum(-1e9);
  valueLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementLengthMaximum(-1e9);
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLengthMaximum;
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLength.minimum;
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLength.maximum;
  valueLane_segmentsElement.length = valueLane_segmentsElementLength;
  ::ad::physics::MetricRange valueLane_segmentsElementWidth;
  ::ad::physics::Distance valueLane_segmentsElementWidthMinimum(-1e9);
  valueLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementWidthMaximum(-1e9);
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidthMaximum;
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidth.minimum;
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidth.maximum;
  valueLane_segmentsElement.width = valueLane_segmentsElementWidth;
  valueLane_segments.resize(1, valueLane_segmentsElement);
  value.lane_segments = valueLane_segments;
  ::ad::physics::Distance valueMinimum_length_after_intersecting_area(-1e9);
  value.minimum_length_after_intersecting_area = valueMinimum_length_after_intersecting_area;
  ::ad::physics::Distance valueMinimum_length_before_intersecting_area(-1e9);
  value.minimum_length_before_intersecting_area = valueMinimum_length_before_intersecting_area;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.minimum_length_after_intersecting_area = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeminimum_length_after_intersecting_areaDefault)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::physics::Distance valueDefault;
  value.minimum_length_after_intersecting_area = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeMinimum_length_before_intersecting_areaTooSmall)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::RoadSegmentType valueType(::ad::rss::world::RoadSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneSegmentVector valueLane_segments;
  ::ad::rss::world::LaneSegment valueLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId valueLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueLane_segmentsElement.id = valueLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection valueLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueLane_segmentsElement.driving_direction = valueLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange valueLane_segmentsElementLength;
  ::ad::physics::Distance valueLane_segmentsElementLengthMinimum(-1e9);
  valueLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementLengthMaximum(-1e9);
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLengthMaximum;
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLength.minimum;
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLength.maximum;
  valueLane_segmentsElement.length = valueLane_segmentsElementLength;
  ::ad::physics::MetricRange valueLane_segmentsElementWidth;
  ::ad::physics::Distance valueLane_segmentsElementWidthMinimum(-1e9);
  valueLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementWidthMaximum(-1e9);
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidthMaximum;
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidth.minimum;
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidth.maximum;
  valueLane_segmentsElement.width = valueLane_segmentsElementWidth;
  valueLane_segments.resize(1, valueLane_segmentsElement);
  value.lane_segments = valueLane_segments;
  ::ad::physics::Distance valueMinimum_length_after_intersecting_area(-1e9);
  value.minimum_length_after_intersecting_area = valueMinimum_length_after_intersecting_area;
  ::ad::physics::Distance valueMinimum_length_before_intersecting_area(-1e9);
  value.minimum_length_before_intersecting_area = valueMinimum_length_before_intersecting_area;

  // override member with data type value below input range minimum
  ::ad::physics::Distance invalidInitializedMember(-1e9 * 1.1);
  value.minimum_length_before_intersecting_area = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeMinimum_length_before_intersecting_areaTooBig)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::RoadSegmentType valueType(::ad::rss::world::RoadSegmentType::Normal);
  value.type = valueType;
  ::ad::rss::world::LaneSegmentVector valueLane_segments;
  ::ad::rss::world::LaneSegment valueLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId valueLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueLane_segmentsElement.id = valueLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection valueLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueLane_segmentsElement.driving_direction = valueLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange valueLane_segmentsElementLength;
  ::ad::physics::Distance valueLane_segmentsElementLengthMinimum(-1e9);
  valueLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementLengthMaximum(-1e9);
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLengthMaximum;
  valueLane_segmentsElementLength.maximum = valueLane_segmentsElementLength.minimum;
  valueLane_segmentsElementLength.minimum = valueLane_segmentsElementLength.maximum;
  valueLane_segmentsElement.length = valueLane_segmentsElementLength;
  ::ad::physics::MetricRange valueLane_segmentsElementWidth;
  ::ad::physics::Distance valueLane_segmentsElementWidthMinimum(-1e9);
  valueLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance valueLane_segmentsElementWidthMaximum(-1e9);
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidthMaximum;
  valueLane_segmentsElementWidth.maximum = valueLane_segmentsElementWidth.minimum;
  valueLane_segmentsElementWidth.minimum = valueLane_segmentsElementWidth.maximum;
  valueLane_segmentsElement.width = valueLane_segmentsElementWidth;
  valueLane_segments.resize(1, valueLane_segmentsElement);
  value.lane_segments = valueLane_segments;
  ::ad::physics::Distance valueMinimum_length_after_intersecting_area(-1e9);
  value.minimum_length_after_intersecting_area = valueMinimum_length_after_intersecting_area;
  ::ad::physics::Distance valueMinimum_length_before_intersecting_area(-1e9);
  value.minimum_length_before_intersecting_area = valueMinimum_length_before_intersecting_area;

  // override member with data type value above input range maximum
  ::ad::physics::Distance invalidInitializedMember(1e9 * 1.1);
  value.minimum_length_before_intersecting_area = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeminimum_length_before_intersecting_areaDefault)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::physics::Distance valueDefault;
  value.minimum_length_before_intersecting_area = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
