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

  // override member with data type value above input range maximum
  ::ad::physics::Dimension2D invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberLength(1e9 * 1.1);
  invalidInitializedMember.length = invalidInitializedMemberLength;
  value.dimension = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeYawRateTooSmall)
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

  // override member with data type value below input range minimum
  ::ad::physics::AngularVelocity invalidInitializedMember(-100. * 1.1);
  value.yawRate = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeYawRateTooBig)
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

  // override member with data type value above input range maximum
  ::ad::physics::AngularVelocity invalidInitializedMember(100. * 1.1);
  value.yawRate = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeyawRateDefault)
{
  ::ad::rss::world::ObjectState value;
  ::ad::physics::AngularVelocity valueDefault;
  value.yawRate = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeCenterPointTooSmall)
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

  // override member with data type value below input range minimum
  ::ad::physics::Distance2D invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberX(-1e9 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.centerPoint = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeCenterPointTooBig)
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

  // override member with data type value above input range maximum
  ::ad::physics::Distance2D invalidInitializedMember;
  ::ad::physics::Distance invalidInitializedMemberX(1e9 * 1.1);
  invalidInitializedMember.x = invalidInitializedMemberX;
  value.centerPoint = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeSpeedTooSmall)
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

  // override member with data type value below input range minimum
  ::ad::physics::Speed invalidInitializedMember(-100. * 1.1);
  value.speed = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeSpeedTooBig)
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

  // override member with data type value above input range maximum
  ::ad::physics::Speed invalidInitializedMember(100. * 1.1);
  value.speed = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangespeedDefault)
{
  ::ad::rss::world::ObjectState value;
  ::ad::physics::Speed valueDefault;
  value.speed = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeSteeringAngleTooSmall)
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

  // override member with data type value below input range minimum
  ::ad::physics::Angle invalidInitializedMember(-6.283185308 * 1.1);
  value.steeringAngle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangeSteeringAngleTooBig)
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

  // override member with data type value above input range maximum
  ::ad::physics::Angle invalidInitializedMember(6.283185308 * 1.1);
  value.steeringAngle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectStateValidInputRangeTests, testValidInputRangesteeringAngleDefault)
{
  ::ad::rss::world::ObjectState value;
  ::ad::physics::Angle valueDefault;
  value.steeringAngle = valueDefault;
  ASSERT_FALSE(withinValidInputRange(value));
}
