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
#include "ad/rss/world/OccupiedRegion.hpp"

class OccupiedRegionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::OccupiedRegion value;
    ::ad::rss::world::LaneSegmentId valueSegmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    value.segmentId = valueSegmentId;
    ::ad::physics::ParametricRange valueLonRange;
    ::ad::physics::ParametricValue valueLonRangeMinimum(0.);
    valueLonRange.minimum = valueLonRangeMinimum;
    ::ad::physics::ParametricValue valueLonRangeMaximum(0.);
    valueLonRange.maximum = valueLonRangeMaximum;
    valueLonRange.maximum = valueLonRange.minimum;
    valueLonRange.minimum = valueLonRange.maximum;
    value.lonRange = valueLonRange;
    ::ad::physics::ParametricRange valueLatRange;
    ::ad::physics::ParametricValue valueLatRangeMinimum(0.);
    valueLatRange.minimum = valueLatRangeMinimum;
    ::ad::physics::ParametricValue valueLatRangeMaximum(0.);
    valueLatRange.maximum = valueLatRangeMaximum;
    valueLatRange.maximum = valueLatRange.minimum;
    valueLatRange.minimum = valueLatRange.maximum;
    value.latRange = valueLatRange;
    mValue = value;
  }

  ::ad::rss::world::OccupiedRegion mValue;
};

TEST_F(OccupiedRegionTests, copyConstruction)
{
  ::ad::rss::world::OccupiedRegion value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(OccupiedRegionTests, moveConstruction)
{
  ::ad::rss::world::OccupiedRegion value(std::move(::ad::rss::world::OccupiedRegion(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(OccupiedRegionTests, copyAssignment)
{
  ::ad::rss::world::OccupiedRegion value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(OccupiedRegionTests, moveAssignment)
{
  ::ad::rss::world::OccupiedRegion value;
  value = std::move(::ad::rss::world::OccupiedRegion(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(OccupiedRegionTests, comparisonOperatorEqual)
{
  ::ad::rss::world::OccupiedRegion valueA = mValue;
  ::ad::rss::world::OccupiedRegion valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(OccupiedRegionTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(OccupiedRegionTests, comparisonOperatorSegmentIdDiffers)
{
  ::ad::rss::world::OccupiedRegion valueA = mValue;
  ::ad::rss::world::LaneSegmentId segmentId(std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  valueA.segmentId = segmentId;
  ::ad::rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(OccupiedRegionTests, comparisonOperatorLonRangeDiffers)
{
  ::ad::rss::world::OccupiedRegion valueA = mValue;
  ::ad::physics::ParametricRange lonRange;
  ::ad::physics::ParametricValue lonRangeMinimum(1.);
  lonRange.minimum = lonRangeMinimum;
  ::ad::physics::ParametricValue lonRangeMaximum(1.);
  lonRange.maximum = lonRangeMaximum;
  lonRange.maximum = lonRange.minimum;
  lonRange.minimum = lonRange.maximum;
  valueA.lonRange = lonRange;
  ::ad::rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(OccupiedRegionTests, comparisonOperatorLatRangeDiffers)
{
  ::ad::rss::world::OccupiedRegion valueA = mValue;
  ::ad::physics::ParametricRange latRange;
  ::ad::physics::ParametricValue latRangeMinimum(1.);
  latRange.minimum = latRangeMinimum;
  ::ad::physics::ParametricValue latRangeMaximum(1.);
  latRange.maximum = latRangeMaximum;
  latRange.maximum = latRange.minimum;
  latRange.minimum = latRange.maximum;
  valueA.latRange = latRange;
  ::ad::rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
