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

#include "ad/rss/world/RoadAreaValidInputRange.hpp"

TEST(RoadAreaValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::RoadArea value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::world::RoadArea value;
  ::ad::rss::world::RoadSegment element;
  ::ad::rss::world::RoadSegmentType elementType(::ad::rss::world::RoadSegmentType::Normal);
  element.type = elementType;
  ::ad::rss::world::LaneSegmentVector elementLane_segments;
  ::ad::rss::world::LaneSegment elementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementLane_segmentsElement.id = elementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementLane_segmentsElement.driving_direction = elementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementLane_segmentsElementLength;
  ::ad::physics::Distance elementLane_segmentsElementLengthMinimum(-1e9);
  elementLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLane_segmentsElementLength.minimum = elementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementLane_segmentsElementLengthMaximum(-1e9);
  elementLane_segmentsElementLength.maximum = elementLane_segmentsElementLengthMaximum;
  elementLane_segmentsElementLength.maximum = elementLane_segmentsElementLength.minimum;
  elementLane_segmentsElementLength.minimum = elementLane_segmentsElementLength.maximum;
  elementLane_segmentsElement.length = elementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementLane_segmentsElementWidth;
  ::ad::physics::Distance elementLane_segmentsElementWidthMinimum(-1e9);
  elementLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLane_segmentsElementWidth.minimum = elementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementLane_segmentsElementWidthMaximum(-1e9);
  elementLane_segmentsElementWidth.maximum = elementLane_segmentsElementWidthMaximum;
  elementLane_segmentsElementWidth.maximum = elementLane_segmentsElementWidth.minimum;
  elementLane_segmentsElementWidth.minimum = elementLane_segmentsElementWidth.maximum;
  elementLane_segmentsElement.width = elementLane_segmentsElementWidth;
  elementLane_segments.resize(1, elementLane_segmentsElement);
  element.lane_segments = elementLane_segments;
  ::ad::physics::Distance elementMinimum_length_after_intersecting_area(-1e9);
  element.minimum_length_after_intersecting_area = elementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementMinimum_length_before_intersecting_area(-1e9);
  element.minimum_length_before_intersecting_area = elementMinimum_length_before_intersecting_area;
  value.resize(50, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::RoadArea value;
  ::ad::rss::world::RoadSegment element;
  ::ad::rss::world::RoadSegmentType elementType(::ad::rss::world::RoadSegmentType::Normal);
  element.type = elementType;
  ::ad::rss::world::LaneSegmentVector elementLane_segments;
  ::ad::rss::world::LaneSegment elementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementLane_segmentsElement.id = elementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementLane_segmentsElement.driving_direction = elementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementLane_segmentsElementLength;
  ::ad::physics::Distance elementLane_segmentsElementLengthMinimum(-1e9);
  elementLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLane_segmentsElementLength.minimum = elementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementLane_segmentsElementLengthMaximum(-1e9);
  elementLane_segmentsElementLength.maximum = elementLane_segmentsElementLengthMaximum;
  elementLane_segmentsElementLength.maximum = elementLane_segmentsElementLength.minimum;
  elementLane_segmentsElementLength.minimum = elementLane_segmentsElementLength.maximum;
  elementLane_segmentsElement.length = elementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementLane_segmentsElementWidth;
  ::ad::physics::Distance elementLane_segmentsElementWidthMinimum(-1e9);
  elementLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLane_segmentsElementWidth.minimum = elementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementLane_segmentsElementWidthMaximum(-1e9);
  elementLane_segmentsElementWidth.maximum = elementLane_segmentsElementWidthMaximum;
  elementLane_segmentsElementWidth.maximum = elementLane_segmentsElementWidth.minimum;
  elementLane_segmentsElementWidth.minimum = elementLane_segmentsElementWidth.maximum;
  elementLane_segmentsElement.width = elementLane_segmentsElementWidth;
  elementLane_segments.resize(1, elementLane_segmentsElement);
  element.lane_segments = elementLane_segments;
  ::ad::physics::Distance elementMinimum_length_after_intersecting_area(-1e9);
  element.minimum_length_after_intersecting_area = elementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementMinimum_length_before_intersecting_area(-1e9);
  element.minimum_length_before_intersecting_area = elementMinimum_length_before_intersecting_area;
  value.resize(51, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::RoadArea value;
  ::ad::rss::world::RoadSegment element;
  ::ad::rss::world::RoadSegmentType elementType(static_cast<::ad::rss::world::RoadSegmentType>(-1));
  element.type = elementType;
  value.resize(49, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::world::RoadArea value;
  ::ad::rss::world::RoadSegment element;
  ::ad::rss::world::RoadSegmentType elementType(::ad::rss::world::RoadSegmentType::Normal);
  element.type = elementType;
  ::ad::rss::world::LaneSegmentVector elementLane_segments;
  ::ad::rss::world::LaneSegment elementLane_segmentsElement;
  ::ad::rss::world::LaneSegmentId elementLane_segmentsElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementLane_segmentsElement.id = elementLane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection elementLane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementLane_segmentsElement.driving_direction = elementLane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange elementLane_segmentsElementLength;
  ::ad::physics::Distance elementLane_segmentsElementLengthMinimum(-1e9);
  elementLane_segmentsElementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLane_segmentsElementLength.minimum = elementLane_segmentsElementLengthMinimum;
  ::ad::physics::Distance elementLane_segmentsElementLengthMaximum(-1e9);
  elementLane_segmentsElementLength.maximum = elementLane_segmentsElementLengthMaximum;
  elementLane_segmentsElementLength.maximum = elementLane_segmentsElementLength.minimum;
  elementLane_segmentsElementLength.minimum = elementLane_segmentsElementLength.maximum;
  elementLane_segmentsElement.length = elementLane_segmentsElementLength;
  ::ad::physics::MetricRange elementLane_segmentsElementWidth;
  ::ad::physics::Distance elementLane_segmentsElementWidthMinimum(-1e9);
  elementLane_segmentsElementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLane_segmentsElementWidth.minimum = elementLane_segmentsElementWidthMinimum;
  ::ad::physics::Distance elementLane_segmentsElementWidthMaximum(-1e9);
  elementLane_segmentsElementWidth.maximum = elementLane_segmentsElementWidthMaximum;
  elementLane_segmentsElementWidth.maximum = elementLane_segmentsElementWidth.minimum;
  elementLane_segmentsElementWidth.minimum = elementLane_segmentsElementWidth.maximum;
  elementLane_segmentsElement.width = elementLane_segmentsElementWidth;
  elementLane_segments.resize(1, elementLane_segmentsElement);
  element.lane_segments = elementLane_segments;
  ::ad::physics::Distance elementMinimum_length_after_intersecting_area(-1e9);
  element.minimum_length_after_intersecting_area = elementMinimum_length_after_intersecting_area;
  ::ad::physics::Distance elementMinimum_length_before_intersecting_area(-1e9);
  element.minimum_length_before_intersecting_area = elementMinimum_length_before_intersecting_area;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::world::RoadArea value;
  ::ad::rss::world::RoadSegment element;
  ::ad::rss::world::RoadSegmentType elementType(static_cast<::ad::rss::world::RoadSegmentType>(-1));
  element.type = elementType;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
