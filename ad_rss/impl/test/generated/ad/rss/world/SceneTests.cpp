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
#include "ad/rss/world/Scene.hpp"

class SceneTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad::rss::world::Scene value;
    ::ad::rss::situation::SituationType valueSituationType(::ad::rss::situation::SituationType::NotRelevant);
    value.situationType = valueSituationType;
    ::ad::rss::world::Object valueEgoVehicle;
    ::ad::rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueEgoVehicle.objectId = valueEgoVehicleObjectId;
    ::ad::rss::world::ObjectType valueEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
    valueEgoVehicle.objectType = valueEgoVehicleObjectType;
    ::ad::rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
    ::ad::rss::world::OccupiedRegion valueEgoVehicleOccupiedRegionsElement;
    ::ad::rss::world::LaneSegmentId valueEgoVehicleOccupiedRegionsElementSegmentId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueEgoVehicleOccupiedRegionsElement.segmentId = valueEgoVehicleOccupiedRegionsElementSegmentId;
    ::ad::physics::ParametricRange valueEgoVehicleOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricValue valueEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
    valueEgoVehicleOccupiedRegionsElementLonRange.minimum = valueEgoVehicleOccupiedRegionsElementLonRangeMinimum;
    ::ad::physics::ParametricValue valueEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
    valueEgoVehicleOccupiedRegionsElementLonRange.maximum = valueEgoVehicleOccupiedRegionsElementLonRangeMaximum;
    valueEgoVehicleOccupiedRegionsElementLonRange.maximum = valueEgoVehicleOccupiedRegionsElementLonRange.minimum;
    valueEgoVehicleOccupiedRegionsElementLonRange.minimum = valueEgoVehicleOccupiedRegionsElementLonRange.maximum;
    valueEgoVehicleOccupiedRegionsElement.lonRange = valueEgoVehicleOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricRange valueEgoVehicleOccupiedRegionsElementLatRange;
    ::ad::physics::ParametricValue valueEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
    valueEgoVehicleOccupiedRegionsElementLatRange.minimum = valueEgoVehicleOccupiedRegionsElementLatRangeMinimum;
    ::ad::physics::ParametricValue valueEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
    valueEgoVehicleOccupiedRegionsElementLatRange.maximum = valueEgoVehicleOccupiedRegionsElementLatRangeMaximum;
    valueEgoVehicleOccupiedRegionsElementLatRange.maximum = valueEgoVehicleOccupiedRegionsElementLatRange.minimum;
    valueEgoVehicleOccupiedRegionsElementLatRange.minimum = valueEgoVehicleOccupiedRegionsElementLatRange.maximum;
    valueEgoVehicleOccupiedRegionsElement.latRange = valueEgoVehicleOccupiedRegionsElementLatRange;
    valueEgoVehicleOccupiedRegions.resize(1, valueEgoVehicleOccupiedRegionsElement);
    valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
    ::ad::rss::world::Velocity valueEgoVehicleVelocity;
    ::ad::physics::Speed valueEgoVehicleVelocitySpeedLonMin(-100.);
    valueEgoVehicleVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueEgoVehicleVelocity.speedLonMin = valueEgoVehicleVelocitySpeedLonMin;
    ::ad::physics::Speed valueEgoVehicleVelocitySpeedLonMax(-100.);
    valueEgoVehicleVelocity.speedLonMax = valueEgoVehicleVelocitySpeedLonMax;
    ::ad::physics::Speed valueEgoVehicleVelocitySpeedLatMin(-100.);
    valueEgoVehicleVelocitySpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
    valueEgoVehicleVelocity.speedLatMin = valueEgoVehicleVelocitySpeedLatMin;
    ::ad::physics::Speed valueEgoVehicleVelocitySpeedLatMax(-100.);
    valueEgoVehicleVelocity.speedLatMax = valueEgoVehicleVelocitySpeedLatMax;
    valueEgoVehicleVelocity.speedLonMax = valueEgoVehicleVelocity.speedLonMin;
    valueEgoVehicleVelocity.speedLatMax = valueEgoVehicleVelocity.speedLatMin;
    valueEgoVehicleVelocity.speedLonMin = valueEgoVehicleVelocity.speedLonMax;
    valueEgoVehicleVelocity.speedLatMin = valueEgoVehicleVelocity.speedLatMax;
    valueEgoVehicle.velocity = valueEgoVehicleVelocity;
    value.egoVehicle = valueEgoVehicle;
    ::ad::rss::world::RssDynamics valueEgoVehicleRssDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLon;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleRssDynamicsAlphaLon.accelMax = valueEgoVehicleRssDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMax;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueEgoVehicleRssDynamics.alphaLon = valueEgoVehicleRssDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLat;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleRssDynamicsAlphaLat.accelMax = valueEgoVehicleRssDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
    valueEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleRssDynamicsAlphaLat.brakeMin = valueEgoVehicleRssDynamicsAlphaLatBrakeMin;
    valueEgoVehicleRssDynamics.alphaLat = valueEgoVehicleRssDynamicsAlphaLat;
    ::ad::physics::Distance valueEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
    valueEgoVehicleRssDynamics.lateralFluctuationMargin = valueEgoVehicleRssDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueEgoVehicleRssDynamicsResponseTime(0.);
    valueEgoVehicleRssDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleRssDynamics.responseTime = valueEgoVehicleRssDynamicsResponseTime;
    ::ad::physics::Speed valueEgoVehicleRssDynamicsMaxSpeed(-100.);
    valueEgoVehicleRssDynamics.maxSpeed = valueEgoVehicleRssDynamicsMaxSpeed;
    value.egoVehicleRssDynamics = valueEgoVehicleRssDynamics;
    ::ad::rss::world::Object valueObject;
    ::ad::rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
    valueObject.objectId = valueObjectObjectId;
    ::ad::rss::world::ObjectType valueObjectObjectType(::ad::rss::world::ObjectType::Invalid);
    valueObject.objectType = valueObjectObjectType;
    ::ad::rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
    ::ad::rss::world::OccupiedRegion valueObjectOccupiedRegionsElement;
    ::ad::rss::world::LaneSegmentId valueObjectOccupiedRegionsElementSegmentId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueObjectOccupiedRegionsElement.segmentId = valueObjectOccupiedRegionsElementSegmentId;
    ::ad::physics::ParametricRange valueObjectOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricValue valueObjectOccupiedRegionsElementLonRangeMinimum(0.);
    valueObjectOccupiedRegionsElementLonRange.minimum = valueObjectOccupiedRegionsElementLonRangeMinimum;
    ::ad::physics::ParametricValue valueObjectOccupiedRegionsElementLonRangeMaximum(0.);
    valueObjectOccupiedRegionsElementLonRange.maximum = valueObjectOccupiedRegionsElementLonRangeMaximum;
    valueObjectOccupiedRegionsElementLonRange.maximum = valueObjectOccupiedRegionsElementLonRange.minimum;
    valueObjectOccupiedRegionsElementLonRange.minimum = valueObjectOccupiedRegionsElementLonRange.maximum;
    valueObjectOccupiedRegionsElement.lonRange = valueObjectOccupiedRegionsElementLonRange;
    ::ad::physics::ParametricRange valueObjectOccupiedRegionsElementLatRange;
    ::ad::physics::ParametricValue valueObjectOccupiedRegionsElementLatRangeMinimum(0.);
    valueObjectOccupiedRegionsElementLatRange.minimum = valueObjectOccupiedRegionsElementLatRangeMinimum;
    ::ad::physics::ParametricValue valueObjectOccupiedRegionsElementLatRangeMaximum(0.);
    valueObjectOccupiedRegionsElementLatRange.maximum = valueObjectOccupiedRegionsElementLatRangeMaximum;
    valueObjectOccupiedRegionsElementLatRange.maximum = valueObjectOccupiedRegionsElementLatRange.minimum;
    valueObjectOccupiedRegionsElementLatRange.minimum = valueObjectOccupiedRegionsElementLatRange.maximum;
    valueObjectOccupiedRegionsElement.latRange = valueObjectOccupiedRegionsElementLatRange;
    valueObjectOccupiedRegions.resize(1, valueObjectOccupiedRegionsElement);
    valueObject.occupiedRegions = valueObjectOccupiedRegions;
    ::ad::rss::world::Velocity valueObjectVelocity;
    ::ad::physics::Speed valueObjectVelocitySpeedLonMin(-100.);
    valueObjectVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueObjectVelocity.speedLonMin = valueObjectVelocitySpeedLonMin;
    ::ad::physics::Speed valueObjectVelocitySpeedLonMax(-100.);
    valueObjectVelocity.speedLonMax = valueObjectVelocitySpeedLonMax;
    ::ad::physics::Speed valueObjectVelocitySpeedLatMin(-100.);
    valueObjectVelocitySpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
    valueObjectVelocity.speedLatMin = valueObjectVelocitySpeedLatMin;
    ::ad::physics::Speed valueObjectVelocitySpeedLatMax(-100.);
    valueObjectVelocity.speedLatMax = valueObjectVelocitySpeedLatMax;
    valueObjectVelocity.speedLonMax = valueObjectVelocity.speedLonMin;
    valueObjectVelocity.speedLatMax = valueObjectVelocity.speedLatMin;
    valueObjectVelocity.speedLonMin = valueObjectVelocity.speedLonMax;
    valueObjectVelocity.speedLatMin = valueObjectVelocity.speedLatMax;
    valueObject.velocity = valueObjectVelocity;
    value.object = valueObject;
    ::ad::rss::world::RssDynamics valueObjectRssDynamics;
    ::ad::rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
    valueObjectRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
    valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
    valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
    valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
    valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
    valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
    ::ad::rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
    valueObjectRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
    valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
    ::ad::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
    valueObjectRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
      0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
    valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
    ::ad::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
    valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
    ::ad::physics::Duration valueObjectRssDynamicsResponseTime(0.);
    valueObjectRssDynamicsResponseTime
      = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
    ::ad::physics::Speed valueObjectRssDynamicsMaxSpeed(-100.);
    valueObjectRssDynamics.maxSpeed = valueObjectRssDynamicsMaxSpeed;
    value.objectRssDynamics = valueObjectRssDynamics;
    ::ad::rss::world::RoadArea valueIntersectingRoad;
    ::ad::rss::world::RoadSegment valueIntersectingRoadElement;
    ::ad::rss::world::LaneSegment valueIntersectingRoadElementElement;
    ::ad::rss::world::LaneSegmentId valueIntersectingRoadElementElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueIntersectingRoadElementElement.id = valueIntersectingRoadElementElementId;
    ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(
      ::ad::rss::world::LaneSegmentType::Normal);
    valueIntersectingRoadElementElement.type = valueIntersectingRoadElementElementType;
    ::ad::rss::world::LaneDrivingDirection valueIntersectingRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueIntersectingRoadElementElement.drivingDirection = valueIntersectingRoadElementElementDrivingDirection;
    ::ad::physics::MetricRange valueIntersectingRoadElementElementLength;
    ::ad::physics::Distance valueIntersectingRoadElementElementLengthMinimum(0.);
    valueIntersectingRoadElementElementLength.minimum = valueIntersectingRoadElementElementLengthMinimum;
    ::ad::physics::Distance valueIntersectingRoadElementElementLengthMaximum(0.);
    valueIntersectingRoadElementElementLength.maximum = valueIntersectingRoadElementElementLengthMaximum;
    valueIntersectingRoadElementElementLength.maximum = valueIntersectingRoadElementElementLength.minimum;
    valueIntersectingRoadElementElementLength.minimum = valueIntersectingRoadElementElementLength.maximum;
    valueIntersectingRoadElementElement.length = valueIntersectingRoadElementElementLength;
    ::ad::physics::MetricRange valueIntersectingRoadElementElementWidth;
    ::ad::physics::Distance valueIntersectingRoadElementElementWidthMinimum(0.);
    valueIntersectingRoadElementElementWidth.minimum = valueIntersectingRoadElementElementWidthMinimum;
    ::ad::physics::Distance valueIntersectingRoadElementElementWidthMaximum(0.);
    valueIntersectingRoadElementElementWidth.maximum = valueIntersectingRoadElementElementWidthMaximum;
    valueIntersectingRoadElementElementWidth.maximum = valueIntersectingRoadElementElementWidth.minimum;
    valueIntersectingRoadElementElementWidth.minimum = valueIntersectingRoadElementElementWidth.maximum;
    valueIntersectingRoadElementElement.width = valueIntersectingRoadElementElementWidth;
    valueIntersectingRoadElement.resize(1, valueIntersectingRoadElementElement);
    valueIntersectingRoad.resize(1, valueIntersectingRoadElement);
    value.intersectingRoad = valueIntersectingRoad;
    ::ad::rss::world::RoadArea valueEgoVehicleRoad;
    ::ad::rss::world::RoadSegment valueEgoVehicleRoadElement;
    ::ad::rss::world::LaneSegment valueEgoVehicleRoadElementElement;
    ::ad::rss::world::LaneSegmentId valueEgoVehicleRoadElementElementId(
      std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
    valueEgoVehicleRoadElementElement.id = valueEgoVehicleRoadElementElementId;
    ::ad::rss::world::LaneSegmentType valueEgoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
    valueEgoVehicleRoadElementElement.type = valueEgoVehicleRoadElementElementType;
    ::ad::rss::world::LaneDrivingDirection valueEgoVehicleRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
    valueEgoVehicleRoadElementElement.drivingDirection = valueEgoVehicleRoadElementElementDrivingDirection;
    ::ad::physics::MetricRange valueEgoVehicleRoadElementElementLength;
    ::ad::physics::Distance valueEgoVehicleRoadElementElementLengthMinimum(0.);
    valueEgoVehicleRoadElementElementLength.minimum = valueEgoVehicleRoadElementElementLengthMinimum;
    ::ad::physics::Distance valueEgoVehicleRoadElementElementLengthMaximum(0.);
    valueEgoVehicleRoadElementElementLength.maximum = valueEgoVehicleRoadElementElementLengthMaximum;
    valueEgoVehicleRoadElementElementLength.maximum = valueEgoVehicleRoadElementElementLength.minimum;
    valueEgoVehicleRoadElementElementLength.minimum = valueEgoVehicleRoadElementElementLength.maximum;
    valueEgoVehicleRoadElementElement.length = valueEgoVehicleRoadElementElementLength;
    ::ad::physics::MetricRange valueEgoVehicleRoadElementElementWidth;
    ::ad::physics::Distance valueEgoVehicleRoadElementElementWidthMinimum(0.);
    valueEgoVehicleRoadElementElementWidth.minimum = valueEgoVehicleRoadElementElementWidthMinimum;
    ::ad::physics::Distance valueEgoVehicleRoadElementElementWidthMaximum(0.);
    valueEgoVehicleRoadElementElementWidth.maximum = valueEgoVehicleRoadElementElementWidthMaximum;
    valueEgoVehicleRoadElementElementWidth.maximum = valueEgoVehicleRoadElementElementWidth.minimum;
    valueEgoVehicleRoadElementElementWidth.minimum = valueEgoVehicleRoadElementElementWidth.maximum;
    valueEgoVehicleRoadElementElement.width = valueEgoVehicleRoadElementElementWidth;
    valueEgoVehicleRoadElement.resize(1, valueEgoVehicleRoadElementElement);
    valueEgoVehicleRoad.resize(1, valueEgoVehicleRoadElement);
    value.egoVehicleRoad = valueEgoVehicleRoad;
    mValue = value;
  }

  ::ad::rss::world::Scene mValue;
};

TEST_F(SceneTests, copyConstruction)
{
  ::ad::rss::world::Scene value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, moveConstruction)
{
  ::ad::rss::world::Scene value(std::move(::ad::rss::world::Scene(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, copyAssignment)
{
  ::ad::rss::world::Scene value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, moveAssignment)
{
  ::ad::rss::world::Scene value;
  value = std::move(::ad::rss::world::Scene(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(SceneTests, comparisonOperatorEqual)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(SceneTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(SceneTests, comparisonOperatorSituationTypeDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::situation::SituationType situationType(::ad::rss::situation::SituationType::IntersectionSamePriority);
  valueA.situationType = situationType;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorEgoVehicleDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::Object egoVehicle;
  ::ad::rss::world::ObjectId egoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  egoVehicle.objectId = egoVehicleObjectId;
  ::ad::rss::world::ObjectType egoVehicleObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  egoVehicle.objectType = egoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector egoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion egoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId egoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  egoVehicleOccupiedRegionsElement.segmentId = egoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange egoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue egoVehicleOccupiedRegionsElementLonRangeMinimum(1.);
  egoVehicleOccupiedRegionsElementLonRange.minimum = egoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue egoVehicleOccupiedRegionsElementLonRangeMaximum(1.);
  egoVehicleOccupiedRegionsElementLonRange.maximum = egoVehicleOccupiedRegionsElementLonRangeMaximum;
  egoVehicleOccupiedRegionsElementLonRange.maximum = egoVehicleOccupiedRegionsElementLonRange.minimum;
  egoVehicleOccupiedRegionsElementLonRange.minimum = egoVehicleOccupiedRegionsElementLonRange.maximum;
  egoVehicleOccupiedRegionsElement.lonRange = egoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange egoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue egoVehicleOccupiedRegionsElementLatRangeMinimum(1.);
  egoVehicleOccupiedRegionsElementLatRange.minimum = egoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue egoVehicleOccupiedRegionsElementLatRangeMaximum(1.);
  egoVehicleOccupiedRegionsElementLatRange.maximum = egoVehicleOccupiedRegionsElementLatRangeMaximum;
  egoVehicleOccupiedRegionsElementLatRange.maximum = egoVehicleOccupiedRegionsElementLatRange.minimum;
  egoVehicleOccupiedRegionsElementLatRange.minimum = egoVehicleOccupiedRegionsElementLatRange.maximum;
  egoVehicleOccupiedRegionsElement.latRange = egoVehicleOccupiedRegionsElementLatRange;
  egoVehicleOccupiedRegions.resize(1 + 1, egoVehicleOccupiedRegionsElement);
  egoVehicle.occupiedRegions = egoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity egoVehicleVelocity;
  ::ad::physics::Speed egoVehicleVelocitySpeedLonMin(100.);
  egoVehicleVelocity.speedLonMin = egoVehicleVelocitySpeedLonMin;
  ::ad::physics::Speed egoVehicleVelocitySpeedLonMax(100.);
  egoVehicleVelocity.speedLonMax = egoVehicleVelocitySpeedLonMax;
  ::ad::physics::Speed egoVehicleVelocitySpeedLatMin(100.);
  egoVehicleVelocity.speedLatMin = egoVehicleVelocitySpeedLatMin;
  ::ad::physics::Speed egoVehicleVelocitySpeedLatMax(100.);
  egoVehicleVelocitySpeedLatMax = ::ad::physics::Speed(10.); // set to valid value within struct
  egoVehicleVelocity.speedLatMax = egoVehicleVelocitySpeedLatMax;
  egoVehicleVelocity.speedLatMax = egoVehicleVelocity.speedLatMin;
  egoVehicleVelocity.speedLonMax = egoVehicleVelocity.speedLonMin;
  egoVehicleVelocity.speedLatMin = egoVehicleVelocity.speedLatMax;
  egoVehicleVelocity.speedLonMin = egoVehicleVelocity.speedLonMax;
  egoVehicle.velocity = egoVehicleVelocity;
  valueA.egoVehicle = egoVehicle;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorEgoVehicleRssDynamicsDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::RssDynamics egoVehicleRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues egoVehicleRssDynamicsAlphaLon;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLonAccelMax(1e2);
  egoVehicleRssDynamicsAlphaLon.accelMax = egoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMax(1e2);
  egoVehicleRssDynamicsAlphaLon.brakeMax = egoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMin(1e2);
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  egoVehicleRssDynamicsAlphaLon.brakeMinCorrect = egoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  egoVehicleRssDynamicsAlphaLon.brakeMax = egoVehicleRssDynamicsAlphaLon.brakeMin;
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  egoVehicleRssDynamicsAlphaLon.brakeMinCorrect = egoVehicleRssDynamicsAlphaLon.brakeMin;
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLon.brakeMax;
  egoVehicleRssDynamics.alphaLon = egoVehicleRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues egoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLatAccelMax(1e2);
  egoVehicleRssDynamicsAlphaLat.accelMax = egoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration egoVehicleRssDynamicsAlphaLatBrakeMin(1e2);
  egoVehicleRssDynamicsAlphaLat.brakeMin = egoVehicleRssDynamicsAlphaLatBrakeMin;
  egoVehicleRssDynamics.alphaLat = egoVehicleRssDynamicsAlphaLat;
  ::ad::physics::Distance egoVehicleRssDynamicsLateralFluctuationMargin(1e9);
  egoVehicleRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  egoVehicleRssDynamics.lateralFluctuationMargin = egoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration egoVehicleRssDynamicsResponseTime(1e6);
  egoVehicleRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  egoVehicleRssDynamics.responseTime = egoVehicleRssDynamicsResponseTime;
  ::ad::physics::Speed egoVehicleRssDynamicsMaxSpeed(100.);
  egoVehicleRssDynamics.maxSpeed = egoVehicleRssDynamicsMaxSpeed;
  valueA.egoVehicleRssDynamics = egoVehicleRssDynamics;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorObjectDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::Object object;
  ::ad::rss::world::ObjectId objectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  object.objectId = objectObjectId;
  ::ad::rss::world::ObjectType objectObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  object.objectType = objectObjectType;
  ::ad::rss::world::OccupiedRegionVector objectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion objectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId objectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  objectOccupiedRegionsElement.segmentId = objectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange objectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue objectOccupiedRegionsElementLonRangeMinimum(1.);
  objectOccupiedRegionsElementLonRange.minimum = objectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue objectOccupiedRegionsElementLonRangeMaximum(1.);
  objectOccupiedRegionsElementLonRange.maximum = objectOccupiedRegionsElementLonRangeMaximum;
  objectOccupiedRegionsElementLonRange.maximum = objectOccupiedRegionsElementLonRange.minimum;
  objectOccupiedRegionsElementLonRange.minimum = objectOccupiedRegionsElementLonRange.maximum;
  objectOccupiedRegionsElement.lonRange = objectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange objectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue objectOccupiedRegionsElementLatRangeMinimum(1.);
  objectOccupiedRegionsElementLatRange.minimum = objectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue objectOccupiedRegionsElementLatRangeMaximum(1.);
  objectOccupiedRegionsElementLatRange.maximum = objectOccupiedRegionsElementLatRangeMaximum;
  objectOccupiedRegionsElementLatRange.maximum = objectOccupiedRegionsElementLatRange.minimum;
  objectOccupiedRegionsElementLatRange.minimum = objectOccupiedRegionsElementLatRange.maximum;
  objectOccupiedRegionsElement.latRange = objectOccupiedRegionsElementLatRange;
  objectOccupiedRegions.resize(1 + 1, objectOccupiedRegionsElement);
  object.occupiedRegions = objectOccupiedRegions;
  ::ad::rss::world::Velocity objectVelocity;
  ::ad::physics::Speed objectVelocitySpeedLonMin(100.);
  objectVelocity.speedLonMin = objectVelocitySpeedLonMin;
  ::ad::physics::Speed objectVelocitySpeedLonMax(100.);
  objectVelocity.speedLonMax = objectVelocitySpeedLonMax;
  ::ad::physics::Speed objectVelocitySpeedLatMin(100.);
  objectVelocity.speedLatMin = objectVelocitySpeedLatMin;
  ::ad::physics::Speed objectVelocitySpeedLatMax(100.);
  objectVelocitySpeedLatMax = ::ad::physics::Speed(10.); // set to valid value within struct
  objectVelocity.speedLatMax = objectVelocitySpeedLatMax;
  objectVelocity.speedLatMax = objectVelocity.speedLatMin;
  objectVelocity.speedLonMax = objectVelocity.speedLonMin;
  objectVelocity.speedLatMin = objectVelocity.speedLatMax;
  objectVelocity.speedLonMin = objectVelocity.speedLonMax;
  object.velocity = objectVelocity;
  valueA.object = object;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorObjectRssDynamicsDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::RssDynamics objectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues objectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLonAccelMax(1e2);
  objectRssDynamicsAlphaLon.accelMax = objectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLonBrakeMax(1e2);
  objectRssDynamicsAlphaLon.brakeMax = objectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLonBrakeMin(1e2);
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  objectRssDynamicsAlphaLon.brakeMinCorrect = objectRssDynamicsAlphaLonBrakeMinCorrect;
  objectRssDynamicsAlphaLon.brakeMax = objectRssDynamicsAlphaLon.brakeMin;
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLon.brakeMinCorrect;
  objectRssDynamicsAlphaLon.brakeMinCorrect = objectRssDynamicsAlphaLon.brakeMin;
  objectRssDynamicsAlphaLon.brakeMin = objectRssDynamicsAlphaLon.brakeMax;
  objectRssDynamics.alphaLon = objectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues objectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLatAccelMax(1e2);
  objectRssDynamicsAlphaLat.accelMax = objectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration objectRssDynamicsAlphaLatBrakeMin(1e2);
  objectRssDynamicsAlphaLat.brakeMin = objectRssDynamicsAlphaLatBrakeMin;
  objectRssDynamics.alphaLat = objectRssDynamicsAlphaLat;
  ::ad::physics::Distance objectRssDynamicsLateralFluctuationMargin(1e9);
  objectRssDynamicsLateralFluctuationMargin = ::ad::physics::Distance(1.); // set to valid value within struct
  objectRssDynamics.lateralFluctuationMargin = objectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration objectRssDynamicsResponseTime(1e6);
  objectRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  objectRssDynamics.responseTime = objectRssDynamicsResponseTime;
  ::ad::physics::Speed objectRssDynamicsMaxSpeed(100.);
  objectRssDynamics.maxSpeed = objectRssDynamicsMaxSpeed;
  valueA.objectRssDynamics = objectRssDynamics;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorIntersectingRoadDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::RoadArea intersectingRoad;
  ::ad::rss::world::RoadSegment intersectingRoadElement;
  ::ad::rss::world::LaneSegment intersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId intersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  intersectingRoadElementElement.id = intersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType intersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Intersection);
  intersectingRoadElementElement.type = intersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection intersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  intersectingRoadElementElement.drivingDirection = intersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange intersectingRoadElementElementLength;
  ::ad::physics::Distance intersectingRoadElementElementLengthMinimum(1e9);
  intersectingRoadElementElementLength.minimum = intersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance intersectingRoadElementElementLengthMaximum(1e9);
  intersectingRoadElementElementLengthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  intersectingRoadElementElementLength.maximum = intersectingRoadElementElementLengthMaximum;
  intersectingRoadElementElementLength.maximum = intersectingRoadElementElementLength.minimum;
  intersectingRoadElementElementLength.minimum = intersectingRoadElementElementLength.maximum;
  intersectingRoadElementElement.length = intersectingRoadElementElementLength;
  ::ad::physics::MetricRange intersectingRoadElementElementWidth;
  ::ad::physics::Distance intersectingRoadElementElementWidthMinimum(1e9);
  intersectingRoadElementElementWidth.minimum = intersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance intersectingRoadElementElementWidthMaximum(1e9);
  intersectingRoadElementElementWidthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  intersectingRoadElementElementWidth.maximum = intersectingRoadElementElementWidthMaximum;
  intersectingRoadElementElementWidth.maximum = intersectingRoadElementElementWidth.minimum;
  intersectingRoadElementElementWidth.minimum = intersectingRoadElementElementWidth.maximum;
  intersectingRoadElementElement.width = intersectingRoadElementElementWidth;
  intersectingRoadElement.resize(1 + 1, intersectingRoadElementElement);
  intersectingRoad.resize(0 + 1, intersectingRoadElement);
  valueA.intersectingRoad = intersectingRoad;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(SceneTests, comparisonOperatorEgoVehicleRoadDiffers)
{
  ::ad::rss::world::Scene valueA = mValue;
  ::ad::rss::world::RoadArea egoVehicleRoad;
  ::ad::rss::world::RoadSegment egoVehicleRoadElement;
  ::ad::rss::world::LaneSegment egoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId egoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  egoVehicleRoadElementElement.id = egoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType egoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Intersection);
  egoVehicleRoadElementElement.type = egoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection egoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  egoVehicleRoadElementElement.drivingDirection = egoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange egoVehicleRoadElementElementLength;
  ::ad::physics::Distance egoVehicleRoadElementElementLengthMinimum(1e9);
  egoVehicleRoadElementElementLength.minimum = egoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance egoVehicleRoadElementElementLengthMaximum(1e9);
  egoVehicleRoadElementElementLengthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  egoVehicleRoadElementElementLength.maximum = egoVehicleRoadElementElementLengthMaximum;
  egoVehicleRoadElementElementLength.maximum = egoVehicleRoadElementElementLength.minimum;
  egoVehicleRoadElementElementLength.minimum = egoVehicleRoadElementElementLength.maximum;
  egoVehicleRoadElementElement.length = egoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange egoVehicleRoadElementElementWidth;
  ::ad::physics::Distance egoVehicleRoadElementElementWidthMinimum(1e9);
  egoVehicleRoadElementElementWidth.minimum = egoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance egoVehicleRoadElementElementWidthMaximum(1e9);
  egoVehicleRoadElementElementWidthMaximum = ::ad::physics::Distance(1e6); // set to valid value within struct
  egoVehicleRoadElementElementWidth.maximum = egoVehicleRoadElementElementWidthMaximum;
  egoVehicleRoadElementElementWidth.maximum = egoVehicleRoadElementElementWidth.minimum;
  egoVehicleRoadElementElementWidth.minimum = egoVehicleRoadElementElementWidth.maximum;
  egoVehicleRoadElementElement.width = egoVehicleRoadElementElementWidth;
  egoVehicleRoadElement.resize(1 + 1, egoVehicleRoadElementElement);
  egoVehicleRoad.resize(0 + 1, egoVehicleRoadElement);
  valueA.egoVehicleRoad = egoVehicleRoad;
  ::ad::rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
