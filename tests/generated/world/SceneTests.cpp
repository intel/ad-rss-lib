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
#include "ad_rss/world/Scene.hpp"

class SceneTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::Scene value;
    ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
    value.situationType = valueSituationType;
    ::ad_rss::world::Object valueEgoVehicle;
    ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
    valueEgoVehicle.objectId = valueEgoVehicleObjectId;
    ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
    valueEgoVehicle.objectType = valueEgoVehicleObjectType;
    ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
    valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
    ::ad_rss::world::Velocity valueEgoVehicleVelocity;
    ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
    valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
    ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
    valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
    valueEgoVehicle.velocity = valueEgoVehicleVelocity;
    value.egoVehicle = valueEgoVehicle;
    ::ad_rss::world::Object valueObject;
    ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
    valueObject.objectId = valueObjectObjectId;
    ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
    valueObject.objectType = valueObjectObjectType;
    ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
    valueObject.occupiedRegions = valueObjectOccupiedRegions;
    ::ad_rss::world::Velocity valueObjectVelocity;
    ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
    valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
    ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
    valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
    valueObject.velocity = valueObjectVelocity;
    value.object = valueObject;
    ::ad_rss::world::RssDynamics valueObjectRssDynamics;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
    ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
    valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
    valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
    valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
    valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
    valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
    ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
    valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
    valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
    valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
    ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
    valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
    ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
    valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
    value.objectRssDynamics = valueObjectRssDynamics;
    ::ad_rss::world::RoadArea valueIntersectingRoad;
    value.intersectingRoad = valueIntersectingRoad;
    ::ad_rss::world::RoadArea valueEgoVehicleRoad;
    value.egoVehicleRoad = valueEgoVehicleRoad;
    mValue = value;
  }

  ::ad_rss::world::Scene mValue;
};

TEST_F(SceneTests, copyConstruction)
{
  ::ad_rss::world::Scene value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, moveConstruction)
{
  ::ad_rss::world::Scene value(std::move(::ad_rss::world::Scene(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, copyAssignment)
{
  ::ad_rss::world::Scene value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, moveAssignment)
{
  ::ad_rss::world::Scene value;
  value = std::move(::ad_rss::world::Scene(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, comparisonOperatorEqual)
{
  ::ad_rss::world::Scene valueA = mValue;
  ::ad_rss::world::Scene valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorSituationTypeDiffers)
{
  ::ad_rss::world::Scene valueA = mValue;
  ::ad_rss::situation::SituationType situationType(::ad_rss::situation::SituationType::IntersectionSamePriority);
  valueA.situationType = situationType;
  ::ad_rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorEgoVehicleDiffers)
{
  ::ad_rss::world::Scene valueA = mValue;
  ::ad_rss::world::Object egoVehicle;
  ::ad_rss::world::ObjectId egoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  egoVehicle.objectId = egoVehicleObjectId;
  ::ad_rss::world::ObjectType egoVehicleObjectType(::ad_rss::world::ObjectType::ArtificialObject);
  egoVehicle.objectType = egoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector egoVehicleOccupiedRegions;
  ::ad_rss::world::OccupiedRegion egoVehicleOccupiedRegionsElement;
  ::ad_rss::world::LaneSegmentId egoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  egoVehicleOccupiedRegionsElement.segmentId = egoVehicleOccupiedRegionsElementSegmentId;
  ::ad_rss::physics::ParametricRange egoVehicleOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricValue egoVehicleOccupiedRegionsElementLonRangeMinimum(1.);
  egoVehicleOccupiedRegionsElementLonRange.minimum = egoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue egoVehicleOccupiedRegionsElementLonRangeMaximum(1.);
  egoVehicleOccupiedRegionsElementLonRange.maximum = egoVehicleOccupiedRegionsElementLonRangeMaximum;
  egoVehicleOccupiedRegionsElementLonRange.maximum = egoVehicleOccupiedRegionsElementLonRange.minimum;
  egoVehicleOccupiedRegionsElementLonRange.minimum = egoVehicleOccupiedRegionsElementLonRange.maximum;
  egoVehicleOccupiedRegionsElement.lonRange = egoVehicleOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricRange egoVehicleOccupiedRegionsElementLatRange;
  ::ad_rss::physics::ParametricValue egoVehicleOccupiedRegionsElementLatRangeMinimum(1.);
  egoVehicleOccupiedRegionsElementLatRange.minimum = egoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue egoVehicleOccupiedRegionsElementLatRangeMaximum(1.);
  egoVehicleOccupiedRegionsElementLatRange.maximum = egoVehicleOccupiedRegionsElementLatRangeMaximum;
  egoVehicleOccupiedRegionsElementLatRange.maximum = egoVehicleOccupiedRegionsElementLatRange.minimum;
  egoVehicleOccupiedRegionsElementLatRange.minimum = egoVehicleOccupiedRegionsElementLatRange.maximum;
  egoVehicleOccupiedRegionsElement.latRange = egoVehicleOccupiedRegionsElementLatRange;
  egoVehicleOccupiedRegions.resize(0 + 1, egoVehicleOccupiedRegionsElement);
  egoVehicle.occupiedRegions = egoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity egoVehicleVelocity;
  ::ad_rss::physics::Speed egoVehicleVelocitySpeedLon(100.);
  egoVehicleVelocity.speedLon = egoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed egoVehicleVelocitySpeedLat(100.);
  egoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  egoVehicleVelocity.speedLat = egoVehicleVelocitySpeedLat;
  egoVehicle.velocity = egoVehicleVelocity;
  valueA.egoVehicle = egoVehicle;
  ::ad_rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorObjectDiffers)
{
  ::ad_rss::world::Scene valueA = mValue;
  ::ad_rss::world::Object object;
  ::ad_rss::world::ObjectId objectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  object.objectId = objectObjectId;
  ::ad_rss::world::ObjectType objectObjectType(::ad_rss::world::ObjectType::ArtificialObject);
  object.objectType = objectObjectType;
  ::ad_rss::world::OccupiedRegionVector objectOccupiedRegions;
  ::ad_rss::world::OccupiedRegion objectOccupiedRegionsElement;
  ::ad_rss::world::LaneSegmentId objectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  objectOccupiedRegionsElement.segmentId = objectOccupiedRegionsElementSegmentId;
  ::ad_rss::physics::ParametricRange objectOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricValue objectOccupiedRegionsElementLonRangeMinimum(1.);
  objectOccupiedRegionsElementLonRange.minimum = objectOccupiedRegionsElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue objectOccupiedRegionsElementLonRangeMaximum(1.);
  objectOccupiedRegionsElementLonRange.maximum = objectOccupiedRegionsElementLonRangeMaximum;
  objectOccupiedRegionsElementLonRange.maximum = objectOccupiedRegionsElementLonRange.minimum;
  objectOccupiedRegionsElementLonRange.minimum = objectOccupiedRegionsElementLonRange.maximum;
  objectOccupiedRegionsElement.lonRange = objectOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricRange objectOccupiedRegionsElementLatRange;
  ::ad_rss::physics::ParametricValue objectOccupiedRegionsElementLatRangeMinimum(1.);
  objectOccupiedRegionsElementLatRange.minimum = objectOccupiedRegionsElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue objectOccupiedRegionsElementLatRangeMaximum(1.);
  objectOccupiedRegionsElementLatRange.maximum = objectOccupiedRegionsElementLatRangeMaximum;
  objectOccupiedRegionsElementLatRange.maximum = objectOccupiedRegionsElementLatRange.minimum;
  objectOccupiedRegionsElementLatRange.minimum = objectOccupiedRegionsElementLatRange.maximum;
  objectOccupiedRegionsElement.latRange = objectOccupiedRegionsElementLatRange;
  objectOccupiedRegions.resize(0 + 1, objectOccupiedRegionsElement);
  object.occupiedRegions = objectOccupiedRegions;
  ::ad_rss::world::Velocity objectVelocity;
  ::ad_rss::physics::Speed objectVelocitySpeedLon(100.);
  objectVelocity.speedLon = objectVelocitySpeedLon;
  ::ad_rss::physics::Speed objectVelocitySpeedLat(100.);
  objectVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  objectVelocity.speedLat = objectVelocitySpeedLat;
  object.velocity = objectVelocity;
  valueA.object = object;
  ::ad_rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorObjectRssDynamicsDiffers)
{
  ::ad_rss::world::Scene valueA = mValue;
  ::ad_rss::world::RssDynamics objectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues objectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration objectRssDynamicsAlphaLonAccelMax(1e2);
  objectRssDynamicsAlphaLon.accelMax = objectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration objectRssDynamicsAlphaLonBrakeMax(1e2);
  objectRssDynamicsAlphaLon.brakeMax = objectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration objectRssDynamicsAlphaLonBrakeMin(1e2);
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration objectRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  objectRssDynamicsAlphaLon.brakeMinCorrect = objectRssDynamicsAlphaLonBrakeMinCorrect;
  objectRssDynamicsAlphaLon.brakeMax = objectRssDynamicsAlphaLon.brakeMin;
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLon.brakeMinCorrect;
  objectRssDynamicsAlphaLon.brakeMinCorrect = objectRssDynamicsAlphaLon.brakeMin;
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLon.brakeMax;
  objectRssDynamics.alphaLon = objectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues objectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration objectRssDynamicsAlphaLatAccelMax(1e2);
  objectRssDynamicsAlphaLat.accelMax = objectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration objectRssDynamicsAlphaLatBrakeMin(1e2);
  objectRssDynamicsAlphaLat.brakeMin = objectRssDynamicsAlphaLatBrakeMin;
  objectRssDynamics.alphaLat = objectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance objectRssDynamicsLateralFluctuationMargin(1e6);
  objectRssDynamicsLateralFluctuationMargin = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  objectRssDynamics.lateralFluctuationMargin = objectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration objectRssDynamicsResponseTime(100.);
  objectRssDynamicsResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  objectRssDynamics.responseTime = objectRssDynamicsResponseTime;
  valueA.objectRssDynamics = objectRssDynamics;
  ::ad_rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorIntersectingRoadDiffers)
{
  ::ad_rss::world::Scene valueA = mValue;
  ::ad_rss::world::RoadArea intersectingRoad;
  ::ad_rss::world::RoadSegment intersectingRoadElement;
  ::ad_rss::world::LaneSegment intersectingRoadElementElement;
  ::ad_rss::world::LaneSegmentId intersectingRoadElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  intersectingRoadElementElement.id = intersectingRoadElementElementId;
  ::ad_rss::world::LaneSegmentType intersectingRoadElementElementType(::ad_rss::world::LaneSegmentType::Intersection);
  intersectingRoadElementElement.type = intersectingRoadElementElementType;
  ::ad_rss::world::LaneDrivingDirection intersectingRoadElementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Negative);
  intersectingRoadElementElement.drivingDirection = intersectingRoadElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange intersectingRoadElementElementLength;
  ::ad_rss::physics::Distance intersectingRoadElementElementLengthMinimum(1e6);
  intersectingRoadElementElementLength.minimum = intersectingRoadElementElementLengthMinimum;
  ::ad_rss::physics::Distance intersectingRoadElementElementLengthMaximum(1e6);
  intersectingRoadElementElementLength.maximum = intersectingRoadElementElementLengthMaximum;
  intersectingRoadElementElementLength.maximum = intersectingRoadElementElementLength.minimum;
  intersectingRoadElementElementLength.minimum = intersectingRoadElementElementLength.maximum;
  intersectingRoadElementElement.length = intersectingRoadElementElementLength;
  ::ad_rss::physics::MetricRange intersectingRoadElementElementWidth;
  ::ad_rss::physics::Distance intersectingRoadElementElementWidthMinimum(1e6);
  intersectingRoadElementElementWidth.minimum = intersectingRoadElementElementWidthMinimum;
  ::ad_rss::physics::Distance intersectingRoadElementElementWidthMaximum(1e6);
  intersectingRoadElementElementWidth.maximum = intersectingRoadElementElementWidthMaximum;
  intersectingRoadElementElementWidth.maximum = intersectingRoadElementElementWidth.minimum;
  intersectingRoadElementElementWidth.minimum = intersectingRoadElementElementWidth.maximum;
  intersectingRoadElementElement.width = intersectingRoadElementElementWidth;
  intersectingRoadElement.resize(1 + 1, intersectingRoadElementElement);
  intersectingRoad.resize(0 + 1, intersectingRoadElement);
  valueA.intersectingRoad = intersectingRoad;
  ::ad_rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorEgoVehicleRoadDiffers)
{
  ::ad_rss::world::Scene valueA = mValue;
  ::ad_rss::world::RoadArea egoVehicleRoad;
  ::ad_rss::world::RoadSegment egoVehicleRoadElement;
  ::ad_rss::world::LaneSegment egoVehicleRoadElementElement;
  ::ad_rss::world::LaneSegmentId egoVehicleRoadElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  egoVehicleRoadElementElement.id = egoVehicleRoadElementElementId;
  ::ad_rss::world::LaneSegmentType egoVehicleRoadElementElementType(::ad_rss::world::LaneSegmentType::Intersection);
  egoVehicleRoadElementElement.type = egoVehicleRoadElementElementType;
  ::ad_rss::world::LaneDrivingDirection egoVehicleRoadElementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Negative);
  egoVehicleRoadElementElement.drivingDirection = egoVehicleRoadElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange egoVehicleRoadElementElementLength;
  ::ad_rss::physics::Distance egoVehicleRoadElementElementLengthMinimum(1e6);
  egoVehicleRoadElementElementLength.minimum = egoVehicleRoadElementElementLengthMinimum;
  ::ad_rss::physics::Distance egoVehicleRoadElementElementLengthMaximum(1e6);
  egoVehicleRoadElementElementLength.maximum = egoVehicleRoadElementElementLengthMaximum;
  egoVehicleRoadElementElementLength.maximum = egoVehicleRoadElementElementLength.minimum;
  egoVehicleRoadElementElementLength.minimum = egoVehicleRoadElementElementLength.maximum;
  egoVehicleRoadElementElement.length = egoVehicleRoadElementElementLength;
  ::ad_rss::physics::MetricRange egoVehicleRoadElementElementWidth;
  ::ad_rss::physics::Distance egoVehicleRoadElementElementWidthMinimum(1e6);
  egoVehicleRoadElementElementWidth.minimum = egoVehicleRoadElementElementWidthMinimum;
  ::ad_rss::physics::Distance egoVehicleRoadElementElementWidthMaximum(1e6);
  egoVehicleRoadElementElementWidth.maximum = egoVehicleRoadElementElementWidthMaximum;
  egoVehicleRoadElementElementWidth.maximum = egoVehicleRoadElementElementWidth.minimum;
  egoVehicleRoadElementElementWidth.minimum = egoVehicleRoadElementElementWidth.maximum;
  egoVehicleRoadElementElement.width = egoVehicleRoadElementElementWidth;
  egoVehicleRoadElement.resize(1 + 1, egoVehicleRoadElementElement);
  egoVehicleRoad.resize(0 + 1, egoVehicleRoadElement);
  valueA.egoVehicleRoad = egoVehicleRoad;
  ::ad_rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
