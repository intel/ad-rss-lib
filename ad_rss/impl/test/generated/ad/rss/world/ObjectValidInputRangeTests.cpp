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

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/ObjectValidInputRange.hpp"

TEST(ObjectValidInputRangeTests, testValidInputRange)
{
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeObjectTypeTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeObjectTypeTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeVelocityTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::rss::world::Velocity invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberSpeedLonMin(-100. * 1.1);
  invalidInitializedMember.speedLonMin = invalidInitializedMemberSpeedLonMin;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::rss::world::Velocity invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberSpeedLonMin(100. * 1.1);
  invalidInitializedMember.speedLonMin = invalidInitializedMemberSpeedLonMin;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeStateTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::rss::world::ObjectState invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberYaw(-6.283185308 * 1.1);
  invalidInitializedMember.yaw = invalidInitializedMemberYaw;
  value.state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeStateTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectState invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberYaw(6.283185308 * 1.1);
  invalidInitializedMember.yaw = invalidInitializedMemberYaw;
  value.state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
