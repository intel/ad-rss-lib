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

#include "ad_rss/world/RoadSegmentValidInputRange.hpp"

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeLowerThanInputRangeMin)
{
  ::ad_rss::world::RoadSegment value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::world::RoadSegment value;
  ::ad_rss::world::LaneSegment element;
  ::ad_rss::world::LaneSegmentId elementId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad_rss::world::LaneSegmentType elementType(::ad_rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad_rss::world::LaneDrivingDirection elementDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad_rss::physics::MetricRange elementLength;
  ::ad_rss::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad_rss::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad_rss::physics::MetricRange elementWidth;
  ::ad_rss::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad_rss::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(1, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::world::RoadSegment value;
  ::ad_rss::world::LaneSegment element;
  ::ad_rss::world::LaneSegmentId elementId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad_rss::world::LaneSegmentType elementType(::ad_rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad_rss::world::LaneDrivingDirection elementDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad_rss::physics::MetricRange elementLength;
  ::ad_rss::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad_rss::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad_rss::physics::MetricRange elementWidth;
  ::ad_rss::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad_rss::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(20, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::world::RoadSegment value;
  ::ad_rss::world::LaneSegment element;
  ::ad_rss::world::LaneSegmentId elementId(std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad_rss::world::LaneSegmentType elementType(::ad_rss::world::LaneSegmentType::Normal);
  element.type = elementType;
  ::ad_rss::world::LaneDrivingDirection elementDrivingDirection(::ad_rss::world::LaneDrivingDirection::Bidirectional);
  element.drivingDirection = elementDrivingDirection;
  ::ad_rss::physics::MetricRange elementLength;
  ::ad_rss::physics::Distance elementLengthMinimum(0.);
  elementLength.minimum = elementLengthMinimum;
  ::ad_rss::physics::Distance elementLengthMaximum(0.);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad_rss::physics::MetricRange elementWidth;
  ::ad_rss::physics::Distance elementWidthMinimum(0.);
  elementWidth.minimum = elementWidthMinimum;
  ::ad_rss::physics::Distance elementWidthMaximum(0.);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(21, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadSegmentValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad_rss::world::RoadSegment value;
  ::ad_rss::world::LaneSegment element;
  ::ad_rss::world::LaneSegmentType elementType(static_cast<::ad_rss::world::LaneSegmentType>(-1));
  element.type = elementType;
  value.resize(1, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
