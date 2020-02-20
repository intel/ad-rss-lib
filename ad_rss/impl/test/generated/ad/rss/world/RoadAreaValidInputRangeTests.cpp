/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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
  ::ad::rss::world::LaneSegment elementElement;
  ::ad::rss::world::LaneSegmentId elementElementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementElement.id = elementElementId;
  ::ad::rss::world::LaneSegmentType elementElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementElement.type = elementElementType;
  ::ad::rss::world::LaneDrivingDirection elementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementElement.drivingDirection = elementElementDrivingDirection;
  ::ad::physics::MetricRange elementElementLength;
  ::ad::physics::Distance elementElementLengthMinimum(0.);
  elementElementLength.minimum = elementElementLengthMinimum;
  ::ad::physics::Distance elementElementLengthMaximum(0.);
  elementElementLength.maximum = elementElementLengthMaximum;
  elementElementLength.maximum = elementElementLength.minimum;
  elementElementLength.minimum = elementElementLength.maximum;
  elementElement.length = elementElementLength;
  ::ad::physics::MetricRange elementElementWidth;
  ::ad::physics::Distance elementElementWidthMinimum(0.);
  elementElementWidth.minimum = elementElementWidthMinimum;
  ::ad::physics::Distance elementElementWidthMaximum(0.);
  elementElementWidth.maximum = elementElementWidthMaximum;
  elementElementWidth.maximum = elementElementWidth.minimum;
  elementElementWidth.minimum = elementElementWidth.maximum;
  elementElement.width = elementElementWidth;
  element.resize(1, elementElement);
  value.resize(50, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::RoadArea value;
  ::ad::rss::world::RoadSegment element;
  ::ad::rss::world::LaneSegment elementElement;
  ::ad::rss::world::LaneSegmentId elementElementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementElement.id = elementElementId;
  ::ad::rss::world::LaneSegmentType elementElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementElement.type = elementElementType;
  ::ad::rss::world::LaneDrivingDirection elementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementElement.drivingDirection = elementElementDrivingDirection;
  ::ad::physics::MetricRange elementElementLength;
  ::ad::physics::Distance elementElementLengthMinimum(0.);
  elementElementLength.minimum = elementElementLengthMinimum;
  ::ad::physics::Distance elementElementLengthMaximum(0.);
  elementElementLength.maximum = elementElementLengthMaximum;
  elementElementLength.maximum = elementElementLength.minimum;
  elementElementLength.minimum = elementElementLength.maximum;
  elementElement.length = elementElementLength;
  ::ad::physics::MetricRange elementElementWidth;
  ::ad::physics::Distance elementElementWidthMinimum(0.);
  elementElementWidth.minimum = elementElementWidthMinimum;
  ::ad::physics::Distance elementElementWidthMaximum(0.);
  elementElementWidth.maximum = elementElementWidthMaximum;
  elementElementWidth.maximum = elementElementWidth.minimum;
  elementElementWidth.minimum = elementElementWidth.maximum;
  elementElement.width = elementElementWidth;
  element.resize(1, elementElement);
  value.resize(51, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(RoadAreaValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::world::RoadArea value;
  ::ad::rss::world::RoadSegment element;
  ::ad::rss::world::LaneSegment elementElement;
  ::ad::rss::world::LaneSegmentId elementElementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementElement.id = elementElementId;
  ::ad::rss::world::LaneSegmentType elementElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementElement.type = elementElementType;
  ::ad::rss::world::LaneDrivingDirection elementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementElement.drivingDirection = elementElementDrivingDirection;
  ::ad::physics::MetricRange elementElementLength;
  ::ad::physics::Distance elementElementLengthMinimum(0.);
  elementElementLength.minimum = elementElementLengthMinimum;
  ::ad::physics::Distance elementElementLengthMaximum(0.);
  elementElementLength.maximum = elementElementLengthMaximum;
  elementElementLength.maximum = elementElementLength.minimum;
  elementElementLength.minimum = elementElementLength.maximum;
  elementElement.length = elementElementLength;
  ::ad::physics::MetricRange elementElementWidth;
  ::ad::physics::Distance elementElementWidthMinimum(0.);
  elementElementWidth.minimum = elementElementWidthMinimum;
  ::ad::physics::Distance elementElementWidthMaximum(0.);
  elementElementWidth.maximum = elementElementWidthMaximum;
  elementElementWidth.maximum = elementElementWidth.minimum;
  elementElementWidth.minimum = elementElementWidth.maximum;
  elementElement.width = elementElementWidth;
  element.resize(1, elementElement);
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}
