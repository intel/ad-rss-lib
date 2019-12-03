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

#include "ad/rss/world/RoadSegmentValidInputRange.hpp"

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeLowerThanInputRangeMin)
{
  ::ad::rss::world::RoadSegment value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentId elementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad::rss::world::LaneSegmentType elementType(::ad::rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad::rss::world::LaneDrivingDirection elementDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad::physics::MetricRange elementLength;
  ::ad::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad::physics::MetricRange elementWidth;
  ::ad::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(1, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentId elementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad::rss::world::LaneSegmentType elementType(::ad::rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad::rss::world::LaneDrivingDirection elementDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad::physics::MetricRange elementLength;
  ::ad::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad::physics::MetricRange elementWidth;
  ::ad::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(20, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentId elementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad::rss::world::LaneSegmentType elementType(::ad::rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad::rss::world::LaneDrivingDirection elementDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad::physics::MetricRange elementLength;
  ::ad::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad::physics::MetricRange elementWidth;
  ::ad::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(21, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentType elementType(static_cast<::ad::rss::world::LaneSegmentType>(-1));
  element.type = elementType;
  value.resize(1, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentId elementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad::rss::world::LaneSegmentType elementType(::ad::rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad::rss::world::LaneDrivingDirection elementDrivingDirection(::ad::rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad::physics::MetricRange elementLength;
  ::ad::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad::physics::MetricRange elementWidth;
  ::ad::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::world::RoadSegment value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentType elementType(static_cast<::ad::rss::world::LaneSegmentType>(-1));
  element.type = elementType;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
