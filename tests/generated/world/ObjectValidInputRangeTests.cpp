/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
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

#include "ad_rss/world/ObjectValidInputRange.hpp"

TEST(ObjectValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::Object value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::world::ObjectType valueObjectType(::ad_rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad_rss::world::OccupiedRegionVector valueOccupiedRegions;
  value.occupiedRegions = valueOccupiedRegions;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeObjectTypeTooSmall)
{
  ::ad_rss::world::Object value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::world::ObjectType valueObjectType(::ad_rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad_rss::world::OccupiedRegionVector valueOccupiedRegions;
  value.occupiedRegions = valueOccupiedRegions;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad_rss::world::ObjectType invalidInitializedMember(static_cast<::ad_rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeObjectTypeTooBig)
{
  ::ad_rss::world::Object value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::world::ObjectType valueObjectType(::ad_rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad_rss::world::OccupiedRegionVector valueOccupiedRegions;
  value.occupiedRegions = valueOccupiedRegions;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad_rss::world::ObjectType invalidInitializedMember(static_cast<::ad_rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeOccupiedRegionsTooSmall)
{
  ::ad_rss::world::Object value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::world::ObjectType valueObjectType(::ad_rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad_rss::world::OccupiedRegionVector valueOccupiedRegions;
  value.occupiedRegions = valueOccupiedRegions;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMember;
  ::ad_rss::world::OccupiedRegion invalidInitializedMemberOccupiedRegionVectorElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberOccupiedRegionVectorElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberOccupiedRegionVectorElement.segmentId
    = invalidInitializedMemberOccupiedRegionVectorElementSegmentId;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.lonRange
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.latRange
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  invalidInitializedMember.resize(1001, invalidInitializedMemberOccupiedRegionVectorElement);
  value.occupiedRegions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeOccupiedRegionsTooBig)
{
  ::ad_rss::world::Object value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::world::ObjectType valueObjectType(::ad_rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad_rss::world::OccupiedRegionVector valueOccupiedRegions;
  value.occupiedRegions = valueOccupiedRegions;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMember;
  ::ad_rss::world::OccupiedRegion invalidInitializedMemberOccupiedRegionVectorElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberOccupiedRegionVectorElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  invalidInitializedMemberOccupiedRegionVectorElement.segmentId
    = invalidInitializedMemberOccupiedRegionVectorElementSegmentId;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.lonRange
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.latRange
    = invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  invalidInitializedMember.resize(1001, invalidInitializedMemberOccupiedRegionVectorElement);
  value.occupiedRegions = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeVelocityTooSmall)
{
  ::ad_rss::world::Object value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::world::ObjectType valueObjectType(::ad_rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad_rss::world::OccupiedRegionVector valueOccupiedRegions;
  value.occupiedRegions = valueOccupiedRegions;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad_rss::world::Velocity invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberSpeedLon(-100. * 1.1);
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeVelocityTooBig)
{
  ::ad_rss::world::Object value;
  ::ad_rss::world::ObjectId valueObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  value.objectId = valueObjectId;
  ::ad_rss::world::ObjectType valueObjectType(::ad_rss::world::ObjectType::Invalid);
  value.objectType = valueObjectType;
  ::ad_rss::world::OccupiedRegionVector valueOccupiedRegions;
  value.occupiedRegions = valueOccupiedRegions;
  ::ad_rss::world::Velocity valueVelocity;
  ::ad_rss::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad_rss::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad_rss::world::Velocity invalidInitializedMember;
  ::ad_rss::physics::Speed invalidInitializedMemberSpeedLon(100. * 1.1);
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
