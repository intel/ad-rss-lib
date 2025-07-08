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
#include "ad/rss/world/OccupiedRegion.hpp"

class OccupiedRegionTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::OccupiedRegion value;
    ::ad::rss::world::LaneSegmentId valueSegment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    value.segment_id = valueSegment_id;
    ::ad::physics::ParametricRange valueLon_range;
    ::ad::physics::ParametricValue valueLon_rangeMinimum(0.);
    valueLon_range.minimum = valueLon_rangeMinimum;
    ::ad::physics::ParametricValue valueLon_rangeMaximum(0.);
    valueLon_range.maximum = valueLon_rangeMaximum;
    valueLon_range.maximum = valueLon_range.minimum;
    valueLon_range.minimum = valueLon_range.maximum;
    value.lon_range = valueLon_range;
    ::ad::physics::ParametricRange valueLat_range;
    ::ad::physics::ParametricValue valueLat_rangeMinimum(0.);
    valueLat_range.minimum = valueLat_rangeMinimum;
    ::ad::physics::ParametricValue valueLat_rangeMaximum(0.);
    valueLat_range.maximum = valueLat_rangeMaximum;
    valueLat_range.maximum = valueLat_range.minimum;
    valueLat_range.minimum = valueLat_range.maximum;
    value.lat_range = valueLat_range;
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
  ::ad::rss::world::OccupiedRegion tmpValue(mValue);
  ::ad::rss::world::OccupiedRegion value(std::move(tmpValue));
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
  ::ad::rss::world::OccupiedRegion tmpValue(mValue);
  ::ad::rss::world::OccupiedRegion value;
  value = std::move(tmpValue);
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

TEST_F(OccupiedRegionTests, comparisonOperatorSegment_idDiffers)
{
  ::ad::rss::world::OccupiedRegion valueA = mValue;
  ::ad::rss::world::LaneSegmentId segment_id(std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  valueA.segment_id = segment_id;
  ::ad::rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(OccupiedRegionTests, comparisonOperatorLon_rangeDiffers)
{
  ::ad::rss::world::OccupiedRegion valueA = mValue;
  ::ad::physics::ParametricRange lon_range;
  ::ad::physics::ParametricValue lon_rangeMinimum(1.);
  lon_range.minimum = lon_rangeMinimum;
  ::ad::physics::ParametricValue lon_rangeMaximum(1.);
  lon_range.maximum = lon_rangeMaximum;
  lon_range.maximum = lon_range.minimum;
  lon_range.minimum = lon_range.maximum;
  valueA.lon_range = lon_range;
  ::ad::rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(OccupiedRegionTests, comparisonOperatorLat_rangeDiffers)
{
  ::ad::rss::world::OccupiedRegion valueA = mValue;
  ::ad::physics::ParametricRange lat_range;
  ::ad::physics::ParametricValue lat_rangeMinimum(1.);
  lat_range.minimum = lat_rangeMinimum;
  ::ad::physics::ParametricValue lat_rangeMaximum(1.);
  lat_range.maximum = lat_rangeMaximum;
  lat_range.maximum = lat_range.minimum;
  lat_range.minimum = lat_range.maximum;
  valueA.lat_range = lat_range;
  ::ad::rss::world::OccupiedRegion valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
