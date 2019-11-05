/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
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
  ::ad::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;
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
  ::ad::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
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
  ::ad::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad::rss::world::ObjectType invalidInitializedMember(static_cast<::ad::rss::world::ObjectType>(-1));
  value.objectType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(ObjectValidInputRangeTests, testValidInputRangeOccupiedRegionsTooSmall)
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
  ::ad::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad::rss::world::OccupiedRegionVector invalidInitializedMember;
  ::ad::rss::world::OccupiedRegion invalidInitializedMemberOccupiedRegionVectorElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberOccupiedRegionVectorElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberOccupiedRegionVectorElement.segmentId
    = invalidInitializedMemberOccupiedRegionVectorElementSegmentId;
  ::ad::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum;
  ::ad::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.lonRange
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  ::ad::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum(0.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum;
  ::ad::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum(0.);
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
  ::ad::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad::rss::world::OccupiedRegionVector invalidInitializedMember;
  ::ad::rss::world::OccupiedRegion invalidInitializedMemberOccupiedRegionVectorElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberOccupiedRegionVectorElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  invalidInitializedMemberOccupiedRegionVectorElement.segmentId
    = invalidInitializedMemberOccupiedRegionVectorElementSegmentId;
  ::ad::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMinimum;
  ::ad::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRangeMaximum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum;
  invalidInitializedMemberOccupiedRegionVectorElementLonRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange.maximum;
  invalidInitializedMemberOccupiedRegionVectorElement.lonRange
    = invalidInitializedMemberOccupiedRegionVectorElementLonRange;
  ::ad::physics::ParametricRange invalidInitializedMemberOccupiedRegionVectorElementLatRange;
  ::ad::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum(1.);
  invalidInitializedMemberOccupiedRegionVectorElementLatRange.minimum
    = invalidInitializedMemberOccupiedRegionVectorElementLatRangeMinimum;
  ::ad::physics::ParametricValue invalidInitializedMemberOccupiedRegionVectorElementLatRangeMaximum(1.);
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
  ::ad::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad::rss::world::Velocity invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberSpeedLon(-100. * 1.1);
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
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
  ::ad::physics::Speed valueVelocitySpeedLon(-100.);
  valueVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueVelocity.speedLon = valueVelocitySpeedLon;
  ::ad::physics::Speed valueVelocitySpeedLat(-100.);
  valueVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueVelocity.speedLat = valueVelocitySpeedLat;
  value.velocity = valueVelocity;

  // override member with invalid value
  ::ad::rss::world::Velocity invalidInitializedMember;
  ::ad::physics::Speed invalidInitializedMemberSpeedLon(100. * 1.1);
  invalidInitializedMember.speedLon = invalidInitializedMemberSpeedLon;
  value.velocity = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
