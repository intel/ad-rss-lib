/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (C) 2018-2020 Intel Corporation
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
#include "ad/rss/world/Object.hpp"

class ObjectTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::Object value;
    ::ad::rss::world::ObjectId valueObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    value.objectId = valueObjectId;
    ::ad::rss::world::ObjectType valueObjectType(::ad::rss::world::ObjectType::Invalid);
    value.objectType = valueObjectType;
    ::ad::rss::world::OccupiedRegionVector valueOccupiedRegions;
    ::ad::rss::world::OccupiedRegion valueOccupiedRegionsElement;
    ::ad::rss::world::LaneSegmentId valueOccupiedRegionsElementSegmentId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueOccupiedRegionsElement.segmentId = valueOccupiedRegionsElementSegmentId;
    ::ad::physics::ParametricRange valueOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricValue valueOccupiedRegionsElementLonRangeMinimum(0.);
    valueOccupiedRegionsElementLonRange.minimum = valueOccupiedRegionsElementLonRangeMinimum;
    ::ad::physics::ParametricValue valueOccupiedRegionsElementLonRangeMaximum(0.);
    valueOccupiedRegionsElementLonRange.maximum = valueOccupiedRegionsElementLonRangeMaximum;
    valueOccupiedRegionsElementLonRange.maximum = valueOccupiedRegionsElementLonRange.minimum;
    valueOccupiedRegionsElementLonRange.minimum = valueOccupiedRegionsElementLonRange.maximum;
    valueOccupiedRegionsElement.lonRange = valueOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricRange valueOccupiedRegionsElementLatRange;
    ::ad::physics::ParametricValue valueOccupiedRegionsElementLatRangeMinimum(0.);
    valueOccupiedRegionsElementLatRange.minimum = valueOccupiedRegionsElementLatRangeMinimum;
    ::ad::physics::ParametricValue valueOccupiedRegionsElementLatRangeMaximum(0.);
    valueOccupiedRegionsElementLatRange.maximum = valueOccupiedRegionsElementLatRangeMaximum;
    valueOccupiedRegionsElementLatRange.maximum = valueOccupiedRegionsElementLatRange.minimum;
    valueOccupiedRegionsElementLatRange.minimum = valueOccupiedRegionsElementLatRange.maximum;
    valueOccupiedRegionsElement.latRange = valueOccupiedRegionsElementLatRange;
    valueOccupiedRegions.resize(1, valueOccupiedRegionsElement);
    value.occupiedRegions = valueOccupiedRegions;
    ::ad::rss::world::Velocity valueVelocity;
    ::ad::physics::Speed valueVelocitySpeedLonMin(-100.);
    valueVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueVelocity.speedLonMin = valueVelocitySpeedLonMin;
    ::ad::physics::Speed valueVelocitySpeedLonMax(-100.);
    valueVelocity.speedLonMax = valueVelocitySpeedLonMax;
    ::ad::physics::Speed valueVelocitySpeedLatMin(-100.);
    valueVelocity.speedLatMin = valueVelocitySpeedLatMin;
    ::ad::physics::Speed valueVelocitySpeedLatMax(-100.);
    valueVelocity.speedLatMax = valueVelocitySpeedLatMax;
    valueVelocity.speedLonMax = valueVelocity.speedLonMin;
    valueVelocity.speedLatMax = valueVelocity.speedLatMin;
    valueVelocity.speedLonMin = valueVelocity.speedLonMax;
    valueVelocity.speedLatMin = valueVelocity.speedLatMax;
    value.velocity = valueVelocity;
    ::ad::rss::world::ObjectState valueState;
    ::ad::physics::Angle valueStateYaw(-6.283185308);
    valueState.yaw = valueStateYaw;
    ::ad::physics::Dimension2D valueStateDimension;
    ::ad::physics::Distance valueStateDimensionLength(-1e9);
    valueStateDimension.length = valueStateDimensionLength;
    ::ad::physics::Distance valueStateDimensionWidth(-1e9);
    valueStateDimension.width = valueStateDimensionWidth;
    valueState.dimension = valueStateDimension;
    ::ad::physics::AngularVelocity valueStateYawRate(-100.);
    valueState.yawRate = valueStateYawRate;
    ::ad::physics::Distance2D valueStateCenterPoint;
    ::ad::physics::Distance valueStateCenterPointX(-1e9);
    valueStateCenterPoint.x = valueStateCenterPointX;
    ::ad::physics::Distance valueStateCenterPointY(-1e9);
    valueStateCenterPoint.y = valueStateCenterPointY;
    valueState.centerPoint = valueStateCenterPoint;
    ::ad::physics::Speed valueStateSpeed(-100.);
    valueState.speed = valueStateSpeed;
    value.state = valueState;
    mValue = value;
  }

  ::ad::rss::world::Object mValue;
};

TEST_F(ObjectTests, copyConstruction)
{
  ::ad::rss::world::Object value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, moveConstruction)
{
  ::ad::rss::world::Object tmpValue(mValue);
  ::ad::rss::world::Object value(std::move(tmpValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, copyAssignment)
{
  ::ad::rss::world::Object value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, moveAssignment)
{
  ::ad::rss::world::Object tmpValue(mValue);
  ::ad::rss::world::Object value;
  value = std::move(tmpValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, comparisonOperatorEqual)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(ObjectTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(ObjectTests, comparisonOperatorObjectIdDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::ObjectId objectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.objectId = objectId;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorObjectTypeDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::ObjectType objectType(::ad::rss::world::ObjectType::ArtificialObject);
  valueA.objectType = objectType;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorOccupiedRegionsDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::OccupiedRegionVector occupiedRegions;
  ::ad::rss::world::OccupiedRegion occupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId occupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  occupiedRegionsElement.segmentId = occupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange occupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue occupiedRegionsElementLonRangeMinimum(1.);
  occupiedRegionsElementLonRange.minimum = occupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue occupiedRegionsElementLonRangeMaximum(1.);
  occupiedRegionsElementLonRange.maximum = occupiedRegionsElementLonRangeMaximum;
  occupiedRegionsElementLonRange.maximum = occupiedRegionsElementLonRange.minimum;
  occupiedRegionsElementLonRange.minimum = occupiedRegionsElementLonRange.maximum;
  occupiedRegionsElement.lonRange = occupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange occupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue occupiedRegionsElementLatRangeMinimum(1.);
  occupiedRegionsElementLatRange.minimum = occupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue occupiedRegionsElementLatRangeMaximum(1.);
  occupiedRegionsElementLatRange.maximum = occupiedRegionsElementLatRangeMaximum;
  occupiedRegionsElementLatRange.maximum = occupiedRegionsElementLatRange.minimum;
  occupiedRegionsElementLatRange.minimum = occupiedRegionsElementLatRange.maximum;
  occupiedRegionsElement.latRange = occupiedRegionsElementLatRange;
  occupiedRegions.resize(0 + 1, occupiedRegionsElement);
  valueA.occupiedRegions = occupiedRegions;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorVelocityDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::Velocity velocity;
  ::ad::physics::Speed velocitySpeedLonMin(100.);
  velocity.speedLonMin = velocitySpeedLonMin;
  ::ad::physics::Speed velocitySpeedLonMax(100.);
  velocity.speedLonMax = velocitySpeedLonMax;
  ::ad::physics::Speed velocitySpeedLatMin(100.);
  velocity.speedLatMin = velocitySpeedLatMin;
  ::ad::physics::Speed velocitySpeedLatMax(100.);
  velocity.speedLatMax = velocitySpeedLatMax;
  velocity.speedLatMax = velocity.speedLatMin;
  velocity.speedLonMax = velocity.speedLonMin;
  velocity.speedLatMin = velocity.speedLatMax;
  velocity.speedLonMin = velocity.speedLonMax;
  valueA.velocity = velocity;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorStateDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::ObjectState state;
  ::ad::physics::Angle stateYaw(6.283185308);
  state.yaw = stateYaw;
  ::ad::physics::Dimension2D stateDimension;
  ::ad::physics::Distance stateDimensionLength(1e9);
  stateDimension.length = stateDimensionLength;
  ::ad::physics::Distance stateDimensionWidth(1e9);
  stateDimension.width = stateDimensionWidth;
  state.dimension = stateDimension;
  ::ad::physics::AngularVelocity stateYawRate(100.);
  state.yawRate = stateYawRate;
  ::ad::physics::Distance2D stateCenterPoint;
  ::ad::physics::Distance stateCenterPointX(1e9);
  stateCenterPoint.x = stateCenterPointX;
  ::ad::physics::Distance stateCenterPointY(1e9);
  stateCenterPoint.y = stateCenterPointY;
  state.centerPoint = stateCenterPoint;
  ::ad::physics::Speed stateSpeed(100.);
  state.speed = stateSpeed;
  valueA.state = state;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
