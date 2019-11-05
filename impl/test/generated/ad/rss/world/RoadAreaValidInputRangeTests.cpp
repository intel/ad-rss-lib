/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
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

TEST(RoadAreaValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::RoadArea value;
  ::ad::rss::world::RoadSegment element;
  ::ad::rss::world::LaneSegment elementRoadSegmentElement;
  ::ad::rss::world::LaneSegmentId elementRoadSegmentElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementRoadSegmentElement.id = elementRoadSegmentElementId;
  ::ad::rss::world::LaneSegmentType elementRoadSegmentElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementRoadSegmentElement.type = elementRoadSegmentElementType;
  ::ad::rss::world::LaneDrivingDirection elementRoadSegmentElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementRoadSegmentElement.drivingDirection = elementRoadSegmentElementDrivingDirection;
  ::ad::physics::MetricRange elementRoadSegmentElementLength;
  ::ad::physics::Distance elementRoadSegmentElementLengthMinimum(0.);
  elementRoadSegmentElementLength.minimum = elementRoadSegmentElementLengthMinimum;
  ::ad::physics::Distance elementRoadSegmentElementLengthMaximum(0.);
  elementRoadSegmentElementLength.maximum = elementRoadSegmentElementLengthMaximum;
  elementRoadSegmentElementLength.maximum = elementRoadSegmentElementLength.minimum;
  elementRoadSegmentElementLength.minimum = elementRoadSegmentElementLength.maximum;
  elementRoadSegmentElement.length = elementRoadSegmentElementLength;
  ::ad::physics::MetricRange elementRoadSegmentElementWidth;
  ::ad::physics::Distance elementRoadSegmentElementWidthMinimum(0.);
  elementRoadSegmentElementWidth.minimum = elementRoadSegmentElementWidthMinimum;
  ::ad::physics::Distance elementRoadSegmentElementWidthMaximum(0.);
  elementRoadSegmentElementWidth.maximum = elementRoadSegmentElementWidthMaximum;
  elementRoadSegmentElementWidth.maximum = elementRoadSegmentElementWidth.minimum;
  elementRoadSegmentElementWidth.minimum = elementRoadSegmentElementWidth.maximum;
  elementRoadSegmentElement.width = elementRoadSegmentElementWidth;
  element.resize(21, elementRoadSegmentElement);
  value.resize(49, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
