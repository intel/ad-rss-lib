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

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/ObjectStateValidInputRange.hpp"

TEST(ObjectStateValidInputRangeTests, testValidInputRange)
{
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeYawTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.yaw = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeYawTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.yaw = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeyawDefault)
{
  ::ad::rss::world::ObjectState value;
  ::ad::physics::Angle valueDefault;
  value.yaw = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeDimensionTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Dimension2D invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberLength(-1e9 * 1.1);
  invalidInitializedMember.length = invalidInitializedMemberLength;
  value.dimension = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeDimensionTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Dimension2D invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberLength(1e9 * 1.1);
  invalidInitializedMember.length = invalidInitializedMemberLength;
  value.dimension = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeYaw_rateTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::AngularVelocity invalidInitializedMember(-100. * 1.1);
  value.yaw_rate = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeYaw_rateTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::AngularVelocity invalidInitializedMember(100. * 1.1);
  value.yaw_rate = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeyaw_rateDefault)
{
  ::ad::rss::world::ObjectState value;
  ::ad::physics::AngularVelocity valueDefault;
  value.yaw_rate = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeCenter_pointTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Distance2D invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberX(-1e9 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.center_point = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeCenter_pointTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Distance2D invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberX(1e9 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.center_point = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeSpeed_rangeTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::SpeedRange invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberMinimum(-100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speed_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeSpeed_rangeTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::SpeedRange invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberMinimum(100. * 1.1);
  invalidInitializedMember.minimum = invalidInitializedMemberMinimum;
  value.speed_range = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeSteering_angleTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.steering_angle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeSteering_angleTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.steering_angle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangesteering_angleDefault)
{
  ::ad::rss::world::ObjectState value;
  ::ad::physics::Angle valueDefault;
  value.steering_angle = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
