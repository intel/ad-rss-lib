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
#include "ad/rss/world/LaneSegment.hpp"

class LaneSegmentTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::LaneSegment value;
    ::ad::rss::world::LaneSegmentId valueId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    value.id = valueId;
    ::ad::rss::world::LaneDrivingDirection valueDriving_direction(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    value.driving_direction = valueDriving_direction;
    ::ad::physics::MetricRange valueLength;
    ::ad::physics::Distance valueLengthMinimum(-1e9);
    valueLengthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
    valueLength.minimum = valueLengthMinimum;
    ::ad::physics::Distance valueLengthMaximum(-1e9);
    valueLength.maximum = valueLengthMaximum;
    valueLength.maximum = valueLength.minimum;
    valueLength.minimum = valueLength.maximum;
    value.length = valueLength;
    ::ad::physics::MetricRange valueWidth;
    ::ad::physics::Distance valueWidthMinimum(-1e9);
    valueWidthMinimum = ::ad::physics::Distance(0.); // set to valid value within struct
    valueWidth.minimum = valueWidthMinimum;
    ::ad::physics::Distance valueWidthMaximum(-1e9);
    valueWidth.maximum = valueWidthMaximum;
    valueWidth.maximum = valueWidth.minimum;
    valueWidth.minimum = valueWidth.maximum;
    value.width = valueWidth;
    mValue = value;
  }

  ::ad::rss::world::LaneSegment mValue;
};

TEST_F(LaneSegmentTests, copyConstruction)
{
  ::ad::rss::world::LaneSegment value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LaneSegmentTests, moveConstruction)
{
  ::ad::rss::world::LaneSegment tmpValue(mValue);
  ::ad::rss::world::LaneSegment value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(LaneSegmentTests, copyAssignment)
{
  ::ad::rss::world::LaneSegment value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(LaneSegmentTests, moveAssignment)
{
  ::ad::rss::world::LaneSegment tmpValue(mValue);
  ::ad::rss::world::LaneSegment value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(LaneSegmentTests, comparisonOperatorEqual)
{
  ::ad::rss::world::LaneSegment valueA = mValue;
  ::ad::rss::world::LaneSegment valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(LaneSegmentTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(LaneSegmentTests, comparisonOperatorIdDiffers)
{
  ::ad::rss::world::LaneSegment valueA = mValue;
  ::ad::rss::world::LaneSegmentId id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  valueA.id = id;
  ::ad::rss::world::LaneSegment valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LaneSegmentTests, comparisonOperatorDriving_directionDiffers)
{
  ::ad::rss::world::LaneSegment valueA = mValue;
  ::ad::rss::world::LaneDrivingDirection driving_direction(::ad::rss::world::LaneDrivingDirection::Negative);
  valueA.driving_direction = driving_direction;
  ::ad::rss::world::LaneSegment valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LaneSegmentTests, comparisonOperatorLengthDiffers)
{
  ::ad::rss::world::LaneSegment valueA = mValue;
  ::ad::physics::MetricRange length;
  ::ad::physics::Distance lengthMinimum(1e9);
  length.minimum = lengthMinimum;
  ::ad::physics::Distance lengthMaximum(1e9);
  lengthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  length.maximum = lengthMaximum;
  length.maximum = length.minimum;
  length.minimum = length.maximum;
  valueA.length = length;
  ::ad::rss::world::LaneSegment valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(LaneSegmentTests, comparisonOperatorWidthDiffers)
{
  ::ad::rss::world::LaneSegment valueA = mValue;
  ::ad::physics::MetricRange width;
  ::ad::physics::Distance widthMinimum(1e9);
  width.minimum = widthMinimum;
  ::ad::physics::Distance widthMaximum(1e9);
  widthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  width.maximum = widthMaximum;
  width.maximum = width.minimum;
  width.minimum = width.maximum;
  valueA.width = width;
  ::ad::rss::world::LaneSegment valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
