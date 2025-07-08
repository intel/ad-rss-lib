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
#include "ad/rss/map/RssRouteCheckResultAnalysis.hpp"

class RssRouteCheckResultAnalysisTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::map::RssRouteCheckResultAnalysis value;
    bool valueDangerous_state{true};
    value.dangerous_state = valueDangerous_state;
    bool valueDangerous_vehicle{true};
    value.dangerous_vehicle = valueDangerous_vehicle;
    bool valueDangerous_opposite_state{true};
    value.dangerous_opposite_state = valueDangerous_opposite_state;
    bool valueVehicle_crossing_road_boundaries{true};
    value.vehicle_crossing_road_boundaries = valueVehicle_crossing_road_boundaries;
    mValue = value;
  }

  ::ad::rss::map::RssRouteCheckResultAnalysis mValue;
};

TEST_F(RssRouteCheckResultAnalysisTests, copyConstruction)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteCheckResultAnalysisTests, moveConstruction)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis tmpValue(mValue);
  ::ad::rss::map::RssRouteCheckResultAnalysis value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteCheckResultAnalysisTests, copyAssignment)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteCheckResultAnalysisTests, moveAssignment)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis tmpValue(mValue);
  ::ad::rss::map::RssRouteCheckResultAnalysis value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(RssRouteCheckResultAnalysisTests, comparisonOperatorEqual)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis valueA = mValue;
  ::ad::rss::map::RssRouteCheckResultAnalysis valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(RssRouteCheckResultAnalysisTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(RssRouteCheckResultAnalysisTests, comparisonOperatorDangerous_stateDiffers)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis valueA = mValue;
  bool dangerous_state{false};
  valueA.dangerous_state = dangerous_state;
  ::ad::rss::map::RssRouteCheckResultAnalysis valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultAnalysisTests, comparisonOperatorDangerous_vehicleDiffers)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis valueA = mValue;
  bool dangerous_vehicle{false};
  valueA.dangerous_vehicle = dangerous_vehicle;
  ::ad::rss::map::RssRouteCheckResultAnalysis valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultAnalysisTests, comparisonOperatorDangerous_opposite_stateDiffers)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis valueA = mValue;
  bool dangerous_opposite_state{false};
  valueA.dangerous_opposite_state = dangerous_opposite_state;
  ::ad::rss::map::RssRouteCheckResultAnalysis valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(RssRouteCheckResultAnalysisTests, comparisonOperatorVehicle_crossing_road_boundariesDiffers)
{
  ::ad::rss::map::RssRouteCheckResultAnalysis valueA = mValue;
  bool vehicle_crossing_road_boundaries{false};
  valueA.vehicle_crossing_road_boundaries = vehicle_crossing_road_boundaries;
  ::ad::rss::map::RssRouteCheckResultAnalysis valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
