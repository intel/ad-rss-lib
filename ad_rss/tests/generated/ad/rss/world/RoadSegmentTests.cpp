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

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wself-assign-overloaded"
#endif

#include <gtest/gtest.h>
#include <limits>
#include "ad/rss/world/RoadSegment.hpp"

class RoadSegmentTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    mValue = value;
  }

  ::ad::rss::world::RoadSegment mValue;
};

TEST_F(RoadSegmentTests, copyConstruction)
{
  ::ad::rss::world::RoadSegment value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RoadSegmentTests, moveConstruction)
{
  ::ad::rss::world::RoadSegment tmpValue(mValue);
  ::ad::rss::world::RoadSegment value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RoadSegmentTests, copyAssignment)
{
  ::ad::rss::world::RoadSegment value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RoadSegmentTests, moveAssignment)
{
  ::ad::rss::world::RoadSegment tmpValue(mValue);
  ::ad::rss::world::RoadSegment value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RoadSegmentTests, comparisonOperatorEqual)
{
  ::ad::rss::world::RoadSegment valueA = mValue;
  ::ad::rss::world::RoadSegment valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RoadSegmentTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RoadSegmentTests, comparisonOperatorTypeDiffers)
{
  ::ad::rss::world::RoadSegment valueA = mValue;
  ::ad::rss::world::RoadSegmentType type(::ad::rss::world::RoadSegmentType::Intersection);
  valueA.type = type;
  ::ad::rss::world::RoadSegment valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RoadSegmentTests, comparisonOperatorLane_segmentsDiffers)
{
  ::ad::rss::world::RoadSegment valueA = mValue;
  ::ad::rss::world::LaneSegmentVector lane_segments;
  ::ad::rss::world::LaneSegment lane_segmentsElement;
  ::ad::rss::world::LaneSegmentId lane_segmentsElementId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  lane_segmentsElement.id = lane_segmentsElementId;
  ::ad::rss::world::LaneDrivingDirection lane_segmentsElementDriving_direction(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  lane_segmentsElement.driving_direction = lane_segmentsElementDriving_direction;
  ::ad::physics::MetricRange lane_segmentsElementLength;
  ::ad::physics::Distance lane_segmentsElementLengthMinimum(1e9);
  lane_segmentsElementLength.minimum = lane_segmentsElementLengthMinimum;
  ::ad::physics::Distance lane_segmentsElementLengthMaximum(1e9);
  lane_segmentsElementLengthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  lane_segmentsElementLength.maximum = lane_segmentsElementLengthMaximum;
  lane_segmentsElementLength.maximum = lane_segmentsElementLength.minimum;
  lane_segmentsElementLength.minimum = lane_segmentsElementLength.maximum;
  lane_segmentsElement.length = lane_segmentsElementLength;
  ::ad::physics::MetricRange lane_segmentsElementWidth;
  ::ad::physics::Distance lane_segmentsElementWidthMinimum(1e9);
  lane_segmentsElementWidth.minimum = lane_segmentsElementWidthMinimum;
  ::ad::physics::Distance lane_segmentsElementWidthMaximum(1e9);
  lane_segmentsElementWidthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  lane_segmentsElementWidth.maximum = lane_segmentsElementWidthMaximum;
  lane_segmentsElementWidth.maximum = lane_segmentsElementWidth.minimum;
  lane_segmentsElementWidth.minimum = lane_segmentsElementWidth.maximum;
  lane_segmentsElement.width = lane_segmentsElementWidth;
  lane_segments.resize(1 + 1, lane_segmentsElement);
  valueA.lane_segments = lane_segments;
  ::ad::rss::world::RoadSegment valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RoadSegmentTests, comparisonOperatorMinimum_length_after_intersecting_areaDiffers)
{
  ::ad::rss::world::RoadSegment valueA = mValue;
  ::ad::physics::Distance minimum_length_after_intersecting_area(1e9);
  valueA.minimum_length_after_intersecting_area = minimum_length_after_intersecting_area;
  ::ad::rss::world::RoadSegment valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RoadSegmentTests, comparisonOperatorMinimum_length_before_intersecting_areaDiffers)
{
  ::ad::rss::world::RoadSegment valueA = mValue;
  ::ad::physics::Distance minimum_length_before_intersecting_area(1e9);
  valueA.minimum_length_before_intersecting_area = minimum_length_before_intersecting_area;
  ::ad::rss::world::RoadSegment valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
