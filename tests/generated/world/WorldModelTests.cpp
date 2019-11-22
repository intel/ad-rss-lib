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
#include "ad_rss/world/WorldModel.hpp"

class WorldModelTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::WorldModel value;
    ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
    valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
    value.timeIndex = valueTimeIndex;
    ::ad_rss::world::RssDynamics valueEgoVehicleRssDynamics;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLon;
    ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
    valueEgoVehicleRssDynamicsAlphaLon.accelMax = valueEgoVehicleRssDynamicsAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMax;
    valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
    valueEgoVehicleRssDynamics.alphaLon = valueEgoVehicleRssDynamicsAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLat;
    ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
    valueEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within
                                                                                      // struct
    valueEgoVehicleRssDynamicsAlphaLat.accelMax = valueEgoVehicleRssDynamicsAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
    valueEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleRssDynamicsAlphaLat.brakeMin = valueEgoVehicleRssDynamicsAlphaLatBrakeMin;
    valueEgoVehicleRssDynamics.alphaLat = valueEgoVehicleRssDynamicsAlphaLat;
    ::ad_rss::physics::Distance valueEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
    valueEgoVehicleRssDynamics.lateralFluctuationMargin = valueEgoVehicleRssDynamicsLateralFluctuationMargin;
    ::ad_rss::physics::Duration valueEgoVehicleRssDynamicsResponseTime(0.);
    valueEgoVehicleRssDynamicsResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleRssDynamics.responseTime = valueEgoVehicleRssDynamicsResponseTime;
    value.egoVehicleRssDynamics = valueEgoVehicleRssDynamics;
    ::ad_rss::world::SceneVector valueScenes;
    value.scenes = valueScenes;
    mValue = value;
  }

  ::ad_rss::world::WorldModel mValue;
};

TEST_F(WorldModelTests, copyConstruction)
{
  ::ad_rss::world::WorldModel value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, moveConstruction)
{
  ::ad_rss::world::WorldModel value(std::move(::ad_rss::world::WorldModel(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, copyAssignment)
{
  ::ad_rss::world::WorldModel value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, moveAssignment)
{
  ::ad_rss::world::WorldModel value;
  value = std::move(::ad_rss::world::WorldModel(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, comparisonOperatorEqual)
{
  ::ad_rss::world::WorldModel valueA = mValue;
  ::ad_rss::world::WorldModel valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad_rss::world::WorldModel valueA = mValue;
  ::ad_rss::physics::TimeIndex timeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad_rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorEgoVehicleRssDynamicsDiffers)
{
  ::ad_rss::world::WorldModel valueA = mValue;
  ::ad_rss::world::RssDynamics egoVehicleRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues egoVehicleRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration egoVehicleRssDynamicsAlphaLonAccelMax(1e2);
  egoVehicleRssDynamicsAlphaLon.accelMax = egoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMax(1e2);
  egoVehicleRssDynamicsAlphaLon.brakeMax = egoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMin(1e2);
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration egoVehicleRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  egoVehicleRssDynamicsAlphaLon.brakeMinCorrect = egoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  egoVehicleRssDynamicsAlphaLon.brakeMax = egoVehicleRssDynamicsAlphaLon.brakeMin;
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  egoVehicleRssDynamicsAlphaLon.brakeMinCorrect = egoVehicleRssDynamicsAlphaLon.brakeMin;
  egoVehicleRssDynamicsAlphaLon.brakeMin = egoVehicleRssDynamicsAlphaLon.brakeMax;
  egoVehicleRssDynamics.alphaLon = egoVehicleRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues egoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration egoVehicleRssDynamicsAlphaLatAccelMax(1e2);
  egoVehicleRssDynamicsAlphaLat.accelMax = egoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration egoVehicleRssDynamicsAlphaLatBrakeMin(1e2);
  egoVehicleRssDynamicsAlphaLat.brakeMin = egoVehicleRssDynamicsAlphaLatBrakeMin;
  egoVehicleRssDynamics.alphaLat = egoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance egoVehicleRssDynamicsLateralFluctuationMargin(1e6);
  egoVehicleRssDynamicsLateralFluctuationMargin = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  egoVehicleRssDynamics.lateralFluctuationMargin = egoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration egoVehicleRssDynamicsResponseTime(100.);
  egoVehicleRssDynamicsResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  egoVehicleRssDynamics.responseTime = egoVehicleRssDynamicsResponseTime;
  valueA.egoVehicleRssDynamics = egoVehicleRssDynamics;
  ::ad_rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorScenesDiffers)
{
  ::ad_rss::world::WorldModel valueA = mValue;
  ::ad_rss::world::SceneVector scenes;
  ::ad_rss::world::Scene scenesElement;
  ::ad_rss::situation::SituationType scenesElementSituationType(
    ::ad_rss::situation::SituationType::IntersectionSamePriority);
  scenesElement.situationType = scenesElementSituationType;
  ::ad_rss::world::Object scenesElementEgoVehicle;
  ::ad_rss::world::ObjectId scenesElementEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  scenesElementEgoVehicle.objectId = scenesElementEgoVehicleObjectId;
  ::ad_rss::world::ObjectType scenesElementEgoVehicleObjectType(::ad_rss::world::ObjectType::ArtificialObject);
  scenesElementEgoVehicle.objectType = scenesElementEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector scenesElementEgoVehicleOccupiedRegions;
  ::ad_rss::world::OccupiedRegion scenesElementEgoVehicleOccupiedRegionsElement;
  ::ad_rss::world::LaneSegmentId scenesElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  scenesElementEgoVehicleOccupiedRegionsElement.segmentId = scenesElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad_rss::physics::ParametricRange scenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  scenesElementEgoVehicleOccupiedRegionsElement.lonRange = scenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricRange scenesElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad_rss::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  scenesElementEgoVehicleOccupiedRegionsElement.latRange = scenesElementEgoVehicleOccupiedRegionsElementLatRange;
  scenesElementEgoVehicleOccupiedRegions.resize(0 + 1, scenesElementEgoVehicleOccupiedRegionsElement);
  scenesElementEgoVehicle.occupiedRegions = scenesElementEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity scenesElementEgoVehicleVelocity;
  ::ad_rss::physics::Speed scenesElementEgoVehicleVelocitySpeedLon(100.);
  scenesElementEgoVehicleVelocity.speedLon = scenesElementEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed scenesElementEgoVehicleVelocitySpeedLat(100.);
  scenesElementEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  scenesElementEgoVehicleVelocity.speedLat = scenesElementEgoVehicleVelocitySpeedLat;
  scenesElementEgoVehicle.velocity = scenesElementEgoVehicleVelocity;
  scenesElement.egoVehicle = scenesElementEgoVehicle;
  ::ad_rss::world::Object scenesElementObject;
  ::ad_rss::world::ObjectId scenesElementObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::max());
  scenesElementObject.objectId = scenesElementObjectObjectId;
  ::ad_rss::world::ObjectType scenesElementObjectObjectType(::ad_rss::world::ObjectType::ArtificialObject);
  scenesElementObject.objectType = scenesElementObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector scenesElementObjectOccupiedRegions;
  ::ad_rss::world::OccupiedRegion scenesElementObjectOccupiedRegionsElement;
  ::ad_rss::world::LaneSegmentId scenesElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  scenesElementObjectOccupiedRegionsElement.segmentId = scenesElementObjectOccupiedRegionsElementSegmentId;
  ::ad_rss::physics::ParametricRange scenesElementObjectOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLonRangeMinimum(1.);
  scenesElementObjectOccupiedRegionsElementLonRange.minimum = scenesElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLonRangeMaximum(1.);
  scenesElementObjectOccupiedRegionsElementLonRange.maximum = scenesElementObjectOccupiedRegionsElementLonRangeMaximum;
  scenesElementObjectOccupiedRegionsElementLonRange.maximum = scenesElementObjectOccupiedRegionsElementLonRange.minimum;
  scenesElementObjectOccupiedRegionsElementLonRange.minimum = scenesElementObjectOccupiedRegionsElementLonRange.maximum;
  scenesElementObjectOccupiedRegionsElement.lonRange = scenesElementObjectOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricRange scenesElementObjectOccupiedRegionsElementLatRange;
  ::ad_rss::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLatRangeMinimum(1.);
  scenesElementObjectOccupiedRegionsElementLatRange.minimum = scenesElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLatRangeMaximum(1.);
  scenesElementObjectOccupiedRegionsElementLatRange.maximum = scenesElementObjectOccupiedRegionsElementLatRangeMaximum;
  scenesElementObjectOccupiedRegionsElementLatRange.maximum = scenesElementObjectOccupiedRegionsElementLatRange.minimum;
  scenesElementObjectOccupiedRegionsElementLatRange.minimum = scenesElementObjectOccupiedRegionsElementLatRange.maximum;
  scenesElementObjectOccupiedRegionsElement.latRange = scenesElementObjectOccupiedRegionsElementLatRange;
  scenesElementObjectOccupiedRegions.resize(0 + 1, scenesElementObjectOccupiedRegionsElement);
  scenesElementObject.occupiedRegions = scenesElementObjectOccupiedRegions;
  ::ad_rss::world::Velocity scenesElementObjectVelocity;
  ::ad_rss::physics::Speed scenesElementObjectVelocitySpeedLon(100.);
  scenesElementObjectVelocity.speedLon = scenesElementObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed scenesElementObjectVelocitySpeedLat(100.);
  scenesElementObjectVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  scenesElementObjectVelocity.speedLat = scenesElementObjectVelocitySpeedLat;
  scenesElementObject.velocity = scenesElementObjectVelocity;
  scenesElement.object = scenesElementObject;
  ::ad_rss::world::RssDynamics scenesElementObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues scenesElementObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonAccelMax(1e2);
  scenesElementObjectRssDynamicsAlphaLon.accelMax = scenesElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMax(1e2);
  scenesElementObjectRssDynamicsAlphaLon.brakeMax = scenesElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMin(1e2);
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = scenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  scenesElementObjectRssDynamicsAlphaLon.brakeMax = scenesElementObjectRssDynamicsAlphaLon.brakeMin;
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = scenesElementObjectRssDynamicsAlphaLon.brakeMin;
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLon.brakeMax;
  scenesElementObjectRssDynamics.alphaLon = scenesElementObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues scenesElementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration scenesElementObjectRssDynamicsAlphaLatAccelMax(1e2);
  scenesElementObjectRssDynamicsAlphaLat.accelMax = scenesElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration scenesElementObjectRssDynamicsAlphaLatBrakeMin(1e2);
  scenesElementObjectRssDynamicsAlphaLat.brakeMin = scenesElementObjectRssDynamicsAlphaLatBrakeMin;
  scenesElementObjectRssDynamics.alphaLat = scenesElementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance scenesElementObjectRssDynamicsLateralFluctuationMargin(1e6);
  scenesElementObjectRssDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  scenesElementObjectRssDynamics.lateralFluctuationMargin = scenesElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration scenesElementObjectRssDynamicsResponseTime(100.);
  scenesElementObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  scenesElementObjectRssDynamics.responseTime = scenesElementObjectRssDynamicsResponseTime;
  scenesElement.objectRssDynamics = scenesElementObjectRssDynamics;
  ::ad_rss::world::RoadArea scenesElementIntersectingRoad;
  ::ad_rss::world::RoadSegment scenesElementIntersectingRoadElement;
  ::ad_rss::world::LaneSegment scenesElementIntersectingRoadElementElement;
  ::ad_rss::world::LaneSegmentId scenesElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  scenesElementIntersectingRoadElementElement.id = scenesElementIntersectingRoadElementElementId;
  ::ad_rss::world::LaneSegmentType scenesElementIntersectingRoadElementElementType(
    ::ad_rss::world::LaneSegmentType::Intersection);
  scenesElementIntersectingRoadElementElement.type = scenesElementIntersectingRoadElementElementType;
  ::ad_rss::world::LaneDrivingDirection scenesElementIntersectingRoadElementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Negative);
  scenesElementIntersectingRoadElementElement.drivingDirection
    = scenesElementIntersectingRoadElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange scenesElementIntersectingRoadElementElementLength;
  ::ad_rss::physics::Distance scenesElementIntersectingRoadElementElementLengthMinimum(1e6);
  scenesElementIntersectingRoadElementElementLength.minimum = scenesElementIntersectingRoadElementElementLengthMinimum;
  ::ad_rss::physics::Distance scenesElementIntersectingRoadElementElementLengthMaximum(1e6);
  scenesElementIntersectingRoadElementElementLength.maximum = scenesElementIntersectingRoadElementElementLengthMaximum;
  scenesElementIntersectingRoadElementElementLength.maximum = scenesElementIntersectingRoadElementElementLength.minimum;
  scenesElementIntersectingRoadElementElementLength.minimum = scenesElementIntersectingRoadElementElementLength.maximum;
  scenesElementIntersectingRoadElementElement.length = scenesElementIntersectingRoadElementElementLength;
  ::ad_rss::physics::MetricRange scenesElementIntersectingRoadElementElementWidth;
  ::ad_rss::physics::Distance scenesElementIntersectingRoadElementElementWidthMinimum(1e6);
  scenesElementIntersectingRoadElementElementWidth.minimum = scenesElementIntersectingRoadElementElementWidthMinimum;
  ::ad_rss::physics::Distance scenesElementIntersectingRoadElementElementWidthMaximum(1e6);
  scenesElementIntersectingRoadElementElementWidth.maximum = scenesElementIntersectingRoadElementElementWidthMaximum;
  scenesElementIntersectingRoadElementElementWidth.maximum = scenesElementIntersectingRoadElementElementWidth.minimum;
  scenesElementIntersectingRoadElementElementWidth.minimum = scenesElementIntersectingRoadElementElementWidth.maximum;
  scenesElementIntersectingRoadElementElement.width = scenesElementIntersectingRoadElementElementWidth;
  scenesElementIntersectingRoadElement.resize(1 + 1, scenesElementIntersectingRoadElementElement);
  scenesElementIntersectingRoad.resize(0 + 1, scenesElementIntersectingRoadElement);
  scenesElement.intersectingRoad = scenesElementIntersectingRoad;
  ::ad_rss::world::RoadArea scenesElementEgoVehicleRoad;
  ::ad_rss::world::RoadSegment scenesElementEgoVehicleRoadElement;
  ::ad_rss::world::LaneSegment scenesElementEgoVehicleRoadElementElement;
  ::ad_rss::world::LaneSegmentId scenesElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  scenesElementEgoVehicleRoadElementElement.id = scenesElementEgoVehicleRoadElementElementId;
  ::ad_rss::world::LaneSegmentType scenesElementEgoVehicleRoadElementElementType(
    ::ad_rss::world::LaneSegmentType::Intersection);
  scenesElementEgoVehicleRoadElementElement.type = scenesElementEgoVehicleRoadElementElementType;
  ::ad_rss::world::LaneDrivingDirection scenesElementEgoVehicleRoadElementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Negative);
  scenesElementEgoVehicleRoadElementElement.drivingDirection
    = scenesElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange scenesElementEgoVehicleRoadElementElementLength;
  ::ad_rss::physics::Distance scenesElementEgoVehicleRoadElementElementLengthMinimum(1e6);
  scenesElementEgoVehicleRoadElementElementLength.minimum = scenesElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad_rss::physics::Distance scenesElementEgoVehicleRoadElementElementLengthMaximum(1e6);
  scenesElementEgoVehicleRoadElementElementLength.maximum = scenesElementEgoVehicleRoadElementElementLengthMaximum;
  scenesElementEgoVehicleRoadElementElementLength.maximum = scenesElementEgoVehicleRoadElementElementLength.minimum;
  scenesElementEgoVehicleRoadElementElementLength.minimum = scenesElementEgoVehicleRoadElementElementLength.maximum;
  scenesElementEgoVehicleRoadElementElement.length = scenesElementEgoVehicleRoadElementElementLength;
  ::ad_rss::physics::MetricRange scenesElementEgoVehicleRoadElementElementWidth;
  ::ad_rss::physics::Distance scenesElementEgoVehicleRoadElementElementWidthMinimum(1e6);
  scenesElementEgoVehicleRoadElementElementWidth.minimum = scenesElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad_rss::physics::Distance scenesElementEgoVehicleRoadElementElementWidthMaximum(1e6);
  scenesElementEgoVehicleRoadElementElementWidth.maximum = scenesElementEgoVehicleRoadElementElementWidthMaximum;
  scenesElementEgoVehicleRoadElementElementWidth.maximum = scenesElementEgoVehicleRoadElementElementWidth.minimum;
  scenesElementEgoVehicleRoadElementElementWidth.minimum = scenesElementEgoVehicleRoadElementElementWidth.maximum;
  scenesElementEgoVehicleRoadElementElement.width = scenesElementEgoVehicleRoadElementElementWidth;
  scenesElementEgoVehicleRoadElement.resize(1 + 1, scenesElementEgoVehicleRoadElementElement);
  scenesElementEgoVehicleRoad.resize(0 + 1, scenesElementEgoVehicleRoadElement);
  scenesElement.egoVehicleRoad = scenesElementEgoVehicleRoad;
  scenes.resize(0 + 1, scenesElement);
  valueA.scenes = scenes;
  ::ad_rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
