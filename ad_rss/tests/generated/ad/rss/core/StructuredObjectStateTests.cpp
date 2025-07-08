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
#include "ad/rss/core/StructuredObjectState.hpp"

class StructuredObjectStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::core::StructuredObjectState value;
    ::ad::rss::world::Velocity valueVelocity;
    ::ad::physics::Speed valueVelocitySpeed_lon_min(-100.);
    valueVelocitySpeed_lon_min = ::ad::physics::Speed(0.); // set to valid value within struct
    valueVelocity.speed_lon_min = valueVelocitySpeed_lon_min;
    ::ad::physics::Speed valueVelocitySpeed_lon_max(-100.);
    valueVelocity.speed_lon_max = valueVelocitySpeed_lon_max;
    ::ad::physics::Speed valueVelocitySpeed_lat_min(-100.);
    valueVelocity.speed_lat_min = valueVelocitySpeed_lat_min;
    ::ad::physics::Speed valueVelocitySpeed_lat_max(-100.);
    valueVelocity.speed_lat_max = valueVelocitySpeed_lat_max;
    valueVelocity.speed_lon_max = valueVelocity.speed_lon_min;
    valueVelocity.speed_lat_max = valueVelocity.speed_lat_min;
    valueVelocity.speed_lon_min = valueVelocity.speed_lon_max;
    valueVelocity.speed_lat_min = valueVelocity.speed_lat_max;
    value.velocity = valueVelocity;
    bool valueHas_priority{true};
    value.has_priority = valueHas_priority;
    bool valueIs_in_correct_lane{true};
    value.is_in_correct_lane = valueIs_in_correct_lane;
    ::ad::physics::Distance valueDistance_to_enter_intersection(-1e9);
    valueDistance_to_enter_intersection = ::ad::physics::Distance(0.); // set to valid value within struct
    value.distance_to_enter_intersection = valueDistance_to_enter_intersection;
    ::ad::physics::Distance valueDistance_to_leave_intersection(-1e9);
    value.distance_to_leave_intersection = valueDistance_to_leave_intersection;
    value.distance_to_leave_intersection = value.distance_to_enter_intersection;
    value.distance_to_enter_intersection = value.distance_to_leave_intersection;
    mValue = value;
  }

  ::ad::rss::core::StructuredObjectState mValue;
};

TEST_F(StructuredObjectStateTests, copyConstruction)
{
  ::ad::rss::core::StructuredObjectState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(StructuredObjectStateTests, moveConstruction)
{
  ::ad::rss::core::StructuredObjectState tmpValue(mValue);
  ::ad::rss::core::StructuredObjectState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(StructuredObjectStateTests, copyAssignment)
{
  ::ad::rss::core::StructuredObjectState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(StructuredObjectStateTests, moveAssignment)
{
  ::ad::rss::core::StructuredObjectState tmpValue(mValue);
  ::ad::rss::core::StructuredObjectState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(StructuredObjectStateTests, comparisonOperatorEqual)
{
  ::ad::rss::core::StructuredObjectState valueA = mValue;
  ::ad::rss::core::StructuredObjectState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(StructuredObjectStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(StructuredObjectStateTests, comparisonOperatorVelocityDiffers)
{
  ::ad::rss::core::StructuredObjectState valueA = mValue;
  ::ad::rss::world::Velocity velocity;
  ::ad::physics::Speed velocitySpeed_lon_min(100.);
  velocity.speed_lon_min = velocitySpeed_lon_min;
  ::ad::physics::Speed velocitySpeed_lon_max(100.);
  velocity.speed_lon_max = velocitySpeed_lon_max;
  ::ad::physics::Speed velocitySpeed_lat_min(100.);
  velocity.speed_lat_min = velocitySpeed_lat_min;
  ::ad::physics::Speed velocitySpeed_lat_max(100.);
  velocity.speed_lat_max = velocitySpeed_lat_max;
  velocity.speed_lat_max = velocity.speed_lat_min;
  velocity.speed_lon_max = velocity.speed_lon_min;
  velocity.speed_lat_min = velocity.speed_lat_max;
  velocity.speed_lon_min = velocity.speed_lon_max;
  valueA.velocity = velocity;
  ::ad::rss::core::StructuredObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(StructuredObjectStateTests, comparisonOperatorHas_priorityDiffers)
{
  ::ad::rss::core::StructuredObjectState valueA = mValue;
  bool has_priority{false};
  valueA.has_priority = has_priority;
  ::ad::rss::core::StructuredObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(StructuredObjectStateTests, comparisonOperatorIs_in_correct_laneDiffers)
{
  ::ad::rss::core::StructuredObjectState valueA = mValue;
  bool is_in_correct_lane{false};
  valueA.is_in_correct_lane = is_in_correct_lane;
  ::ad::rss::core::StructuredObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(StructuredObjectStateTests, comparisonOperatorDistance_to_enter_intersectionDiffers)
{
  ::ad::rss::core::StructuredObjectState valueA = mValue;
  ::ad::physics::Distance distance_to_enter_intersection(1e9);
  valueA.distance_to_enter_intersection = distance_to_enter_intersection;
  ::ad::rss::core::StructuredObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(StructuredObjectStateTests, comparisonOperatorDistance_to_leave_intersectionDiffers)
{
  ::ad::rss::core::StructuredObjectState valueA = mValue;
  ::ad::physics::Distance distance_to_leave_intersection(1e9);
  valueA.distance_to_leave_intersection = distance_to_leave_intersection;
  ::ad::rss::core::StructuredObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
