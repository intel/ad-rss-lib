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

#include "ad/rss/world/LaneSegmentVectorValidInputRange.hpp"

TEST(LaneSegmentVectorValidInputRangeTests, testValidInputRangeLowerThanInputRangeMin)
{
  ::ad::rss::world::LaneSegmentVector value;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::LaneSegmentVector value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentId elementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad::rss::world::LaneDrivingDirection elementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  element.driving_direction = elementDriving_direction;
  ::ad::physics::MetricRange elementLength;
  ::ad::physics::Distance elementLengthMinimum(-1e9);
  elementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLength.minimum = elementLengthMinimum;
  ::ad::physics::Distance elementLengthMaximum(-1e9);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad::physics::MetricRange elementWidth;
  ::ad::physics::Distance elementWidthMinimum(-1e9);
  elementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWidth.minimum = elementWidthMinimum;
  ::ad::physics::Distance elementWidthMaximum(-1e9);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(1, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LaneSegmentVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::world::LaneSegmentVector value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentId elementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad::rss::world::LaneDrivingDirection elementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  element.driving_direction = elementDriving_direction;
  ::ad::physics::MetricRange elementLength;
  ::ad::physics::Distance elementLengthMinimum(-1e9);
  elementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLength.minimum = elementLengthMinimum;
  ::ad::physics::Distance elementLengthMaximum(-1e9);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad::physics::MetricRange elementWidth;
  ::ad::physics::Distance elementWidthMinimum(-1e9);
  elementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWidth.minimum = elementWidthMinimum;
  ::ad::physics::Distance elementWidthMaximum(-1e9);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(20, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LaneSegmentVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::LaneSegmentVector value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentId elementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad::rss::world::LaneDrivingDirection elementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  element.driving_direction = elementDriving_direction;
  ::ad::physics::MetricRange elementLength;
  ::ad::physics::Distance elementLengthMinimum(-1e9);
  elementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLength.minimum = elementLengthMinimum;
  ::ad::physics::Distance elementLengthMaximum(-1e9);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad::physics::MetricRange elementWidth;
  ::ad::physics::Distance elementWidthMinimum(-1e9);
  elementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWidth.minimum = elementWidthMinimum;
  ::ad::physics::Distance elementWidthMaximum(-1e9);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.resize(21, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::LaneSegmentVector value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneDrivingDirection elementDriving_direction(
    static_cast<::ad::rss::world::LaneDrivingDirection>(-1));
  element.driving_direction = elementDriving_direction;
  value.resize(1, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(LaneSegmentVectorValidInputRangeTests, testValidInputRangeElementValid)
{
  ::ad::rss::world::LaneSegmentVector value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneSegmentId elementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  element.id = elementId;
  ::ad::rss::world::LaneDrivingDirection elementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  element.driving_direction = elementDriving_direction;
  ::ad::physics::MetricRange elementLength;
  ::ad::physics::Distance elementLengthMinimum(-1e9);
  elementLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementLength.minimum = elementLengthMinimum;
  ::ad::physics::Distance elementLengthMaximum(-1e9);
  elementLength.maximum = elementLengthMaximum;
  elementLength.maximum = elementLength.minimum;
  elementLength.minimum = elementLength.maximum;
  element.length = elementLength;
  ::ad::physics::MetricRange elementWidth;
  ::ad::physics::Distance elementWidthMinimum(-1e9);
  elementWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
  elementWidth.minimum = elementWidthMinimum;
  ::ad::physics::Distance elementWidthMaximum(-1e9);
  elementWidth.maximum = elementWidthMaximum;
  elementWidth.maximum = elementWidth.minimum;
  elementWidth.minimum = elementWidth.maximum;
  element.width = elementWidth;
  value.push_back(element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(LaneSegmentVectorValidInputRangeTests, testValidInputRangeElementInvalid)
{
  ::ad::rss::world::LaneSegmentVector value;
  ::ad::rss::world::LaneSegment element;
  ::ad::rss::world::LaneDrivingDirection elementDriving_direction(
    static_cast<::ad::rss::world::LaneDrivingDirection>(-1));
  element.driving_direction = elementDriving_direction;
  value.push_back(element);
  ASSERT_FALSE(withinValidInputRange(value));
}
