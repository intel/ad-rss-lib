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
#include "ad/rss/world/ObjectState.hpp"

class ObjectStateTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::ObjectState value;
    ::ad::physics::Angle valueYaw(-6.283185308);
    value.yaw = valueYaw;
    ::ad::physics::Dimension2D valueDimension;
    ::ad::physics::Distance valueDimensionLength(-1e9);
    valueDimension.length = valueDimensionLength;
    ::ad::physics::Distance valueDimensionWidth(-1e9);
    valueDimension.width = valueDimensionWidth;
    value.dimension = valueDimension;
    ::ad::physics::AngularVelocity valueYaw_rate(-100.);
    value.yaw_rate = valueYaw_rate;
    ::ad::physics::Distance2D valueCenter_point;
    ::ad::physics::Distance valueCenter_pointX(-1e9);
    valueCenter_point.x = valueCenter_pointX;
    ::ad::physics::Distance valueCenter_pointY(-1e9);
    valueCenter_point.y = valueCenter_pointY;
    value.center_point = valueCenter_point;
    ::ad::physics::SpeedRange valueSpeed_range;
    ::ad::physics::Speed valueSpeed_rangeMinimum(-100.);
    valueSpeed_range.minimum = valueSpeed_rangeMinimum;
    ::ad::physics::Speed valueSpeed_rangeMaximum(-100.);
    valueSpeed_range.maximum = valueSpeed_rangeMaximum;
    valueSpeed_range.maximum = valueSpeed_range.minimum;
    valueSpeed_range.minimum = valueSpeed_range.maximum;
    value.speed_range = valueSpeed_range;
    ::ad::physics::Angle valueSteering_angle(-6.283185308);
    value.steering_angle = valueSteering_angle;
    mValue = value;
  }

  ::ad::rss::world::ObjectState mValue;
};

TEST_F(ObjectStateTests, copyConstruction)
{
  ::ad::rss::world::ObjectState value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectStateTests, moveConstruction)
{
  ::ad::rss::world::ObjectState tmpValue(mValue);
  ::ad::rss::world::ObjectState value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectStateTests, copyAssignment)
{
  ::ad::rss::world::ObjectState value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectStateTests, moveAssignment)
{
  ::ad::rss::world::ObjectState tmpValue(mValue);
  ::ad::rss::world::ObjectState value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectStateTests, comparisonOperatorEqual)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(ObjectStateTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(ObjectStateTests, comparisonOperatorYawDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::Angle yaw(6.283185308);
  valueA.yaw = yaw;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectStateTests, comparisonOperatorDimensionDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::Dimension2D dimension;
  ::ad::physics::Distance dimensionLength(1e9);
  dimension.length = dimensionLength;
  ::ad::physics::Distance dimensionWidth(1e9);
  dimension.width = dimensionWidth;
  valueA.dimension = dimension;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectStateTests, comparisonOperatorYaw_rateDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::AngularVelocity yaw_rate(100.);
  valueA.yaw_rate = yaw_rate;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectStateTests, comparisonOperatorCenter_pointDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::Distance2D center_point;
  ::ad::physics::Distance center_pointX(1e9);
  center_point.x = center_pointX;
  ::ad::physics::Distance center_pointY(1e9);
  center_point.y = center_pointY;
  valueA.center_point = center_point;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectStateTests, comparisonOperatorSpeed_rangeDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::SpeedRange speed_range;
  ::ad::physics::Speed speed_rangeMinimum(100.);
  speed_range.minimum = speed_rangeMinimum;
  ::ad::physics::Speed speed_rangeMaximum(100.);
  speed_range.maximum = speed_rangeMaximum;
  speed_range.maximum = speed_range.minimum;
  speed_range.minimum = speed_range.maximum;
  valueA.speed_range = speed_range;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectStateTests, comparisonOperatorSteering_angleDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::Angle steering_angle(6.283185308);
  valueA.steering_angle = steering_angle;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
