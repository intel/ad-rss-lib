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
#include "ad_rss/world/Object.hpp"

class ObjectTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    mValue = value;
  }

  ::ad_rss::world::Object mValue;
};

TEST_F(ObjectTests, copyConstruction)
{
  ::ad_rss::world::Object value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, moveConstruction)
{
  ::ad_rss::world::Object value(std::move(::ad_rss::world::Object(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, copyAssignment)
{
  ::ad_rss::world::Object value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, moveAssignment)
{
  ::ad_rss::world::Object value;
  value = std::move(::ad_rss::world::Object(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(ObjectTests, comparisonOperatorEqual)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorObjectIdDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::ObjectId objectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  valueA.objectId = objectId;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorObjectTypeDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::ObjectType objectType(::ad_rss::world::ObjectType::ArtificialObject);
  valueA.objectType = objectType;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorOccupiedRegionsDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::OccupiedRegionVector occupiedRegions;
  ::ad_rss::world::OccupiedRegion occupiedRegionsElement;
  ::ad_rss::world::LaneSegmentId occupiedRegionsElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  occupiedRegionsElement.segmentId = occupiedRegionsElementSegmentId;
  ::ad_rss::physics::ParametricRange occupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricValue occupiedRegionsElementLonRangeMinimum(1.);
  occupiedRegionsElementLonRange.minimum = occupiedRegionsElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue occupiedRegionsElementLonRangeMaximum(1.);
  occupiedRegionsElementLonRange.maximum = occupiedRegionsElementLonRangeMaximum;
  occupiedRegionsElementLonRange.maximum = occupiedRegionsElementLonRange.minimum;
  occupiedRegionsElementLonRange.minimum = occupiedRegionsElementLonRange.maximum;
  occupiedRegionsElement.lonRange = occupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricRange occupiedRegionsElementLatRange;
  ::ad_rss::physics::ParametricValue occupiedRegionsElementLatRangeMinimum(1.);
  occupiedRegionsElementLatRange.minimum = occupiedRegionsElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue occupiedRegionsElementLatRangeMaximum(1.);
  occupiedRegionsElementLatRange.maximum = occupiedRegionsElementLatRangeMaximum;
  occupiedRegionsElementLatRange.maximum = occupiedRegionsElementLatRange.minimum;
  occupiedRegionsElementLatRange.minimum = occupiedRegionsElementLatRange.maximum;
  occupiedRegionsElement.latRange = occupiedRegionsElementLatRange;
  occupiedRegions.resize(0 + 1, occupiedRegionsElement);
  valueA.occupiedRegions = occupiedRegions;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(ObjectTests, comparisonOperatorVelocityDiffers)
{
  ::ad_rss::world::Object valueA = mValue;
  ::ad_rss::world::Velocity velocity;
  ::ad_rss::physics::Speed velocitySpeedLon(100.);
  velocity.speedLon = velocitySpeedLon;
  ::ad_rss::physics::Speed velocitySpeedLat(100.);
  velocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  velocity.speedLat = velocitySpeedLat;
  valueA.velocity = velocity;
  ::ad_rss::world::Object valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
