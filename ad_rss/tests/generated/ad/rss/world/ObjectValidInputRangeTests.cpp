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

#include "ad/rss/world/ObjectValidInputRange.hpp"

TEST(ObjectValidInputRangeTests, testValidInputRange)
{
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeObject_typeTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.object_type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeObject_typeTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.object_type = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeVelocityTooSmall)
{
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

  // override member with data type value below input range minimum
  ::ad::rss::world::Velocity invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberSpeed_lon_min(-100. * 1.1);
  invalidInitializedMember.speed_lon_min = invalidInitializedMemberSpeed_lon_min;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
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

  // override member with data type value above input range maximum
  ::ad::rss::world::Velocity invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberSpeed_lon_min(100. * 1.1);
  invalidInitializedMember.speed_lon_min = invalidInitializedMemberSpeed_lon_min;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeStateTooSmall)
{
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

  // override member with data type value above input range maximum
  ::ad::rss::world::ObjectState invalidInitializedMember;
  ::ad::physics::Angle invalidInitializedMemberYaw(6.283185308 * 1.1);
  invalidInitializedMember.yaw = invalidInitializedMemberYaw;
  value.state = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
