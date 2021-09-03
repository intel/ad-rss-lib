/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2021 Intel Corporation
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
    ::ad::physics::AngularVelocity valueYawRate(-100.);
    value.yawRate = valueYawRate;
    ::ad::physics::Distance2D valueCenterPoint;
    ::ad::physics::Distance valueCenterPointX(-1e9);
    valueCenterPoint.x = valueCenterPointX;
    ::ad::physics::Distance valueCenterPointY(-1e9);
    valueCenterPoint.y = valueCenterPointY;
    value.centerPoint = valueCenterPoint;
    ::ad::physics::Speed valueSpeed(-100.);
    value.speed = valueSpeed;
    ::ad::physics::Angle valueSteeringAngle(-6.283185308);
    value.steeringAngle = valueSteeringAngle;
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

TEST_F(ObjectStateTests, comparisonOperatorYawRateDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::AngularVelocity yawRate(100.);
  valueA.yawRate = yawRate;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectStateTests, comparisonOperatorCenterPointDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::Distance2D centerPoint;
  ::ad::physics::Distance centerPointX(1e9);
  centerPoint.x = centerPointX;
  ::ad::physics::Distance centerPointY(1e9);
  centerPoint.y = centerPointY;
  valueA.centerPoint = centerPoint;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectStateTests, comparisonOperatorSpeedDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::Speed speed(100.);
  valueA.speed = speed;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectStateTests, comparisonOperatorSteeringAngleDiffers)
{
  ::ad::rss::world::ObjectState valueA = mValue;
  ::ad::physics::Angle steeringAngle(6.283185308);
  valueA.steeringAngle = steeringAngle;
  ::ad::rss::world::ObjectState valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
