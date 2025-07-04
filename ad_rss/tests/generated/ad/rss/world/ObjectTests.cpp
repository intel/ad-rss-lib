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
#include "ad/rss/world/Object.hpp"

class ObjectTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::Object value;
    ::ad::rss::world::ObjectId valueObject_id(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    value.object_id = valueObject_id;
    ::ad::rss::world::ObjectType valueObject_type(::ad::rss::world::ObjectType::Invalid);
    value.object_type = valueObject_type;
    ::ad::rss::world::OccupiedRegionVector valueOccupied_regions;
    ::ad::rss::world::OccupiedRegion valueOccupied_regionsElement;
    ::ad::rss::world::LaneSegmentId valueOccupied_regionsElementSegment_id(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueOccupied_regionsElement.segment_id = valueOccupied_regionsElementSegment_id;
    ::ad::physics::ParametricRange valueOccupied_regionsElementLon_range;
    ::ad::physics::ParametricValue valueOccupied_regionsElementLon_rangeMinimum(0.);
    valueOccupied_regionsElementLon_range.minimum = valueOccupied_regionsElementLon_rangeMinimum;
    ::ad::physics::ParametricValue valueOccupied_regionsElementLon_rangeMaximum(0.);
    valueOccupied_regionsElementLon_range.maximum = valueOccupied_regionsElementLon_rangeMaximum;
    valueOccupied_regionsElementLon_range.maximum = valueOccupied_regionsElementLon_range.minimum;
    valueOccupied_regionsElementLon_range.minimum = valueOccupied_regionsElementLon_range.maximum;
    valueOccupied_regionsElement.lon_range = valueOccupied_regionsElementLon_range;
    ::ad::physics::ParametricRange valueOccupied_regionsElementLat_range;
    ::ad::physics::ParametricValue valueOccupied_regionsElementLat_rangeMinimum(0.);
    valueOccupied_regionsElementLat_range.minimum = valueOccupied_regionsElementLat_rangeMinimum;
    ::ad::physics::ParametricValue valueOccupied_regionsElementLat_rangeMaximum(0.);
    valueOccupied_regionsElementLat_range.maximum = valueOccupied_regionsElementLat_rangeMaximum;
    valueOccupied_regionsElementLat_range.maximum = valueOccupied_regionsElementLat_range.minimum;
    valueOccupied_regionsElementLat_range.minimum = valueOccupied_regionsElementLat_range.maximum;
    valueOccupied_regionsElement.lat_range = valueOccupied_regionsElementLat_range;
    valueOccupied_regions.resize(1, valueOccupied_regionsElement);
    value.occupied_regions = valueOccupied_regions;
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
    ::ad::rss::world::ObjectState valueState;
    ::ad::physics::Angle valueStateYaw(-6.283185308);
    valueState.yaw = valueStateYaw;
    ::ad::physics::Dimension2D valueStateDimension;
    ::ad::physics::Distance valueStateDimensionLength(-1e9);
    valueStateDimension.length = valueStateDimensionLength;
    ::ad::physics::Distance valueStateDimensionWidth(-1e9);
    valueStateDimension.width = valueStateDimensionWidth;
    valueState.dimension = valueStateDimension;
    ::ad::physics::AngularVelocity valueStateYaw_rate(-100.);
    valueState.yaw_rate = valueStateYaw_rate;
    ::ad::physics::Distance2D valueStateCenter_point;
    ::ad::physics::Distance valueStateCenter_pointX(-1e9);
    valueStateCenter_point.x = valueStateCenter_pointX;
    ::ad::physics::Distance valueStateCenter_pointY(-1e9);
    valueStateCenter_point.y = valueStateCenter_pointY;
    valueState.center_point = valueStateCenter_point;
    ::ad::physics::SpeedRange valueStateSpeed_range;
    ::ad::physics::Speed valueStateSpeed_rangeMinimum(-100.);
    valueStateSpeed_range.minimum = valueStateSpeed_rangeMinimum;
    ::ad::physics::Speed valueStateSpeed_rangeMaximum(-100.);
    valueStateSpeed_range.maximum = valueStateSpeed_rangeMaximum;
    valueStateSpeed_range.maximum = valueStateSpeed_range.minimum;
    valueStateSpeed_range.minimum = valueStateSpeed_range.maximum;
    valueState.speed_range = valueStateSpeed_range;
    ::ad::physics::Angle valueStateSteering_angle(-6.283185308);
    valueState.steering_angle = valueStateSteering_angle;
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

TEST_F(ObjectTests, comparisonOperatorObject_idDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::ObjectId object_id(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  valueA.object_id = object_id;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorObject_typeDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::ObjectType object_type(::ad::rss::world::ObjectType::OtherObject);
  valueA.object_type = object_type;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorOccupied_regionsDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::OccupiedRegionVector occupied_regions;
  ::ad::rss::world::OccupiedRegion occupied_regionsElement;
  ::ad::rss::world::LaneSegmentId occupied_regionsElementSegment_id(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  occupied_regionsElement.segment_id = occupied_regionsElementSegment_id;
  ::ad::physics::ParametricRange occupied_regionsElementLon_range;
  ::ad::physics::ParametricValue occupied_regionsElementLon_rangeMinimum(1.);
  occupied_regionsElementLon_range.minimum = occupied_regionsElementLon_rangeMinimum;
  ::ad::physics::ParametricValue occupied_regionsElementLon_rangeMaximum(1.);
  occupied_regionsElementLon_range.maximum = occupied_regionsElementLon_rangeMaximum;
  occupied_regionsElementLon_range.maximum = occupied_regionsElementLon_range.minimum;
  occupied_regionsElementLon_range.minimum = occupied_regionsElementLon_range.maximum;
  occupied_regionsElement.lon_range = occupied_regionsElementLon_range;
  ::ad::physics::ParametricRange occupied_regionsElementLat_range;
  ::ad::physics::ParametricValue occupied_regionsElementLat_rangeMinimum(1.);
  occupied_regionsElementLat_range.minimum = occupied_regionsElementLat_rangeMinimum;
  ::ad::physics::ParametricValue occupied_regionsElementLat_rangeMaximum(1.);
  occupied_regionsElementLat_range.maximum = occupied_regionsElementLat_rangeMaximum;
  occupied_regionsElementLat_range.maximum = occupied_regionsElementLat_range.minimum;
  occupied_regionsElementLat_range.minimum = occupied_regionsElementLat_range.maximum;
  occupied_regionsElement.lat_range = occupied_regionsElementLat_range;
  occupied_regions.resize(0 + 1, occupied_regionsElement);
  valueA.occupied_regions = occupied_regions;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorVelocityDiffers)
{
  ::ad::rss::world::Object valueA = mValue;
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
  ::ad::physics::AngularVelocity stateYaw_rate(100.);
  state.yaw_rate = stateYaw_rate;
  ::ad::physics::Distance2D stateCenter_point;
  ::ad::physics::Distance stateCenter_pointX(1e9);
  stateCenter_point.x = stateCenter_pointX;
  ::ad::physics::Distance stateCenter_pointY(1e9);
  stateCenter_point.y = stateCenter_pointY;
  state.center_point = stateCenter_point;
  ::ad::physics::SpeedRange stateSpeed_range;
  ::ad::physics::Speed stateSpeed_rangeMinimum(100.);
  stateSpeed_range.minimum = stateSpeed_rangeMinimum;
  ::ad::physics::Speed stateSpeed_rangeMaximum(100.);
  stateSpeed_range.maximum = stateSpeed_rangeMaximum;
  stateSpeed_range.maximum = stateSpeed_range.minimum;
  stateSpeed_range.minimum = stateSpeed_range.maximum;
  state.speed_range = stateSpeed_range;
  ::ad::physics::Angle stateSteering_angle(6.283185308);
  state.steering_angle = stateSteering_angle;
  valueA.state = state;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

#if defined(__clang__) && (__clang_major__ >= 7)
#pragma GCC diagnostic pop
#endif
