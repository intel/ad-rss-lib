/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

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
    ::ad::physics::Speed valueVelocitySpeedLon(-100.);
    valueVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
    valueVelocity.speedLon = valueVelocitySpeedLon;
    ::ad::physics::Speed valueVelocitySpeedLat(-100.);
    valueVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
    valueVelocity.speedLat = valueVelocitySpeedLat;
    value.velocity = valueVelocity;
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
  ::ad::rss::world::Object value(std::move(::ad::rss::world::Object(mValue)));
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
  ::ad::rss::world::Object value;
  value = std::move(::ad::rss::world::Object(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, comparisonOperatorEqual)
{
  ::ad::rss::world::Object valueA = mValue;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
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
  ::ad::physics::Speed velocitySpeedLon(100.);
  velocity.speedLon = velocitySpeedLon;
  ::ad::physics::Speed velocitySpeedLat(100.);
  velocitySpeedLat = ::ad::physics::Speed(10.); // set to valid value within struct
  velocity.speedLat = velocitySpeedLat;
  valueA.velocity = velocity;
  ::ad::rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
