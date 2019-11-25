/*
 * Copyright (C) 2019 Intel Corporation
 */

/*
 * Note: This file is currently not included in any CMakeLists.txt
 */

#include <gtest/gtest.h>

#include <limits>

#include "ad/rss/world/WorldModelValidInputRange.hpp"

TEST(WorldModelValidInputRangeTests, testValidInputRange)
{
  ::ad::rss::world::WorldModel value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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
  ::ad::rss::world::SceneVector valueScenes;
  ::ad::rss::world::Scene valueScenesElement;
  ::ad::rss::situation::SituationType valueScenesElementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  valueScenesElement.situationType = valueScenesElementSituationType;
  ::ad::rss::world::Object valueScenesElementEgoVehicle;
  ::ad::rss::world::ObjectId valueScenesElementEgoVehicleObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueScenesElementEgoVehicle.objectId = valueScenesElementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType valueScenesElementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
  valueScenesElementEgoVehicle.objectType = valueScenesElementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector valueScenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion valueScenesElementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementEgoVehicleOccupiedRegionsElement.segmentId
    = valueScenesElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange valueScenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  valueScenesElementEgoVehicleOccupiedRegionsElement.lonRange
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange valueScenesElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  valueScenesElementEgoVehicleOccupiedRegionsElement.latRange
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange;
  valueScenesElementEgoVehicleOccupiedRegions.resize(1, valueScenesElementEgoVehicleOccupiedRegionsElement);
  valueScenesElementEgoVehicle.occupiedRegions = valueScenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity valueScenesElementEgoVehicleVelocity;
  ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLon(-100.);
  valueScenesElementEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueScenesElementEgoVehicleVelocity.speedLon = valueScenesElementEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLat(-100.);
  valueScenesElementEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueScenesElementEgoVehicleVelocity.speedLat = valueScenesElementEgoVehicleVelocitySpeedLat;
  valueScenesElementEgoVehicle.velocity = valueScenesElementEgoVehicleVelocity;
  valueScenesElement.egoVehicle = valueScenesElementEgoVehicle;
  ::ad::rss::world::Object valueScenesElementObject;
  ::ad::rss::world::ObjectId valueScenesElementObjectObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueScenesElementObject.objectId = valueScenesElementObjectObjectId;
  ::ad::rss::world::ObjectType valueScenesElementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
  valueScenesElementObject.objectType = valueScenesElementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector valueScenesElementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion valueScenesElementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementObjectOccupiedRegionsElement.segmentId = valueScenesElementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange valueScenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLonRangeMinimum(0.);
  valueScenesElementObjectOccupiedRegionsElementLonRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLonRangeMaximum(0.);
  valueScenesElementObjectOccupiedRegionsElementLonRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLonRangeMaximum;
  valueScenesElementObjectOccupiedRegionsElementLonRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLonRange.minimum;
  valueScenesElementObjectOccupiedRegionsElementLonRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLonRange.maximum;
  valueScenesElementObjectOccupiedRegionsElement.lonRange = valueScenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange valueScenesElementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLatRangeMinimum(0.);
  valueScenesElementObjectOccupiedRegionsElementLatRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLatRangeMaximum(0.);
  valueScenesElementObjectOccupiedRegionsElementLatRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLatRangeMaximum;
  valueScenesElementObjectOccupiedRegionsElementLatRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLatRange.minimum;
  valueScenesElementObjectOccupiedRegionsElementLatRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLatRange.maximum;
  valueScenesElementObjectOccupiedRegionsElement.latRange = valueScenesElementObjectOccupiedRegionsElementLatRange;
  valueScenesElementObjectOccupiedRegions.resize(1, valueScenesElementObjectOccupiedRegionsElement);
  valueScenesElementObject.occupiedRegions = valueScenesElementObjectOccupiedRegions;
  ::ad::rss::world::Velocity valueScenesElementObjectVelocity;
  ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLon(-100.);
  valueScenesElementObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueScenesElementObjectVelocity.speedLon = valueScenesElementObjectVelocitySpeedLon;
  ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLat(-100.);
  valueScenesElementObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueScenesElementObjectVelocity.speedLat = valueScenesElementObjectVelocitySpeedLat;
  valueScenesElementObject.velocity = valueScenesElementObjectVelocity;
  valueScenesElement.object = valueScenesElementObject;
  ::ad::rss::world::RssDynamics valueScenesElementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueScenesElementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLon.accelMax = valueScenesElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMax = valueScenesElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect
    = valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMax = valueScenesElementObjectRssDynamicsAlphaLon.brakeMin;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLon.brakeMax;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = valueScenesElementObjectRssDynamicsAlphaLon.brakeMin;
  valueScenesElementObjectRssDynamics.alphaLon = valueScenesElementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueScenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLat.accelMax = valueScenesElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLat.brakeMin = valueScenesElementObjectRssDynamicsAlphaLatBrakeMin;
  valueScenesElementObjectRssDynamics.alphaLat = valueScenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance valueScenesElementObjectRssDynamicsLateralFluctuationMargin(0.);
  valueScenesElementObjectRssDynamics.lateralFluctuationMargin
    = valueScenesElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueScenesElementObjectRssDynamicsResponseTime(0.);
  valueScenesElementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamics.responseTime = valueScenesElementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed valueScenesElementObjectRssDynamicsMaxSpeed(-100.);
  valueScenesElementObjectRssDynamics.maxSpeed = valueScenesElementObjectRssDynamicsMaxSpeed;
  valueScenesElement.objectRssDynamics = valueScenesElementObjectRssDynamics;
  ::ad::rss::world::RoadArea valueScenesElementIntersectingRoad;
  ::ad::rss::world::RoadSegment valueScenesElementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueScenesElementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementIntersectingRoadElementElement.id = valueScenesElementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueScenesElementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  valueScenesElementIntersectingRoadElementElement.type = valueScenesElementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection valueScenesElementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueScenesElementIntersectingRoadElementElement.drivingDirection
    = valueScenesElementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange valueScenesElementIntersectingRoadElementElementLength;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementLengthMinimum(0.);
  valueScenesElementIntersectingRoadElementElementLength.minimum
    = valueScenesElementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementLengthMaximum(0.);
  valueScenesElementIntersectingRoadElementElementLength.maximum
    = valueScenesElementIntersectingRoadElementElementLengthMaximum;
  valueScenesElementIntersectingRoadElementElementLength.maximum
    = valueScenesElementIntersectingRoadElementElementLength.minimum;
  valueScenesElementIntersectingRoadElementElementLength.minimum
    = valueScenesElementIntersectingRoadElementElementLength.maximum;
  valueScenesElementIntersectingRoadElementElement.length = valueScenesElementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange valueScenesElementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementWidthMinimum(0.);
  valueScenesElementIntersectingRoadElementElementWidth.minimum
    = valueScenesElementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementWidthMaximum(0.);
  valueScenesElementIntersectingRoadElementElementWidth.maximum
    = valueScenesElementIntersectingRoadElementElementWidthMaximum;
  valueScenesElementIntersectingRoadElementElementWidth.maximum
    = valueScenesElementIntersectingRoadElementElementWidth.minimum;
  valueScenesElementIntersectingRoadElementElementWidth.minimum
    = valueScenesElementIntersectingRoadElementElementWidth.maximum;
  valueScenesElementIntersectingRoadElementElement.width = valueScenesElementIntersectingRoadElementElementWidth;
  valueScenesElementIntersectingRoadElement.resize(1, valueScenesElementIntersectingRoadElementElement);
  valueScenesElementIntersectingRoad.resize(1, valueScenesElementIntersectingRoadElement);
  valueScenesElement.intersectingRoad = valueScenesElementIntersectingRoad;
  ::ad::rss::world::RoadArea valueScenesElementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment valueScenesElementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment valueScenesElementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementEgoVehicleRoadElementElement.id = valueScenesElementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueScenesElementEgoVehicleRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  valueScenesElementEgoVehicleRoadElementElement.type = valueScenesElementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection valueScenesElementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueScenesElementEgoVehicleRoadElementElement.drivingDirection
    = valueScenesElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange valueScenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementLengthMinimum(0.);
  valueScenesElementEgoVehicleRoadElementElementLength.minimum
    = valueScenesElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementLengthMaximum(0.);
  valueScenesElementEgoVehicleRoadElementElementLength.maximum
    = valueScenesElementEgoVehicleRoadElementElementLengthMaximum;
  valueScenesElementEgoVehicleRoadElementElementLength.maximum
    = valueScenesElementEgoVehicleRoadElementElementLength.minimum;
  valueScenesElementEgoVehicleRoadElementElementLength.minimum
    = valueScenesElementEgoVehicleRoadElementElementLength.maximum;
  valueScenesElementEgoVehicleRoadElementElement.length = valueScenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange valueScenesElementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementWidthMinimum(0.);
  valueScenesElementEgoVehicleRoadElementElementWidth.minimum
    = valueScenesElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementWidthMaximum(0.);
  valueScenesElementEgoVehicleRoadElementElementWidth.maximum
    = valueScenesElementEgoVehicleRoadElementElementWidthMaximum;
  valueScenesElementEgoVehicleRoadElementElementWidth.maximum
    = valueScenesElementEgoVehicleRoadElementElementWidth.minimum;
  valueScenesElementEgoVehicleRoadElementElementWidth.minimum
    = valueScenesElementEgoVehicleRoadElementElementWidth.maximum;
  valueScenesElementEgoVehicleRoadElementElement.width = valueScenesElementEgoVehicleRoadElementElementWidth;
  valueScenesElementEgoVehicleRoadElement.resize(1, valueScenesElementEgoVehicleRoadElementElement);
  valueScenesElementEgoVehicleRoad.resize(1, valueScenesElementEgoVehicleRoadElement);
  valueScenesElement.egoVehicleRoad = valueScenesElementEgoVehicleRoad;
  valueScenes.resize(1, valueScenesElement);
  value.scenes = valueScenes;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeEgoVehicleRssDynamicsTooSmall)
{
  ::ad::rss::world::WorldModel value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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
  ::ad::rss::world::SceneVector valueScenes;
  ::ad::rss::world::Scene valueScenesElement;
  ::ad::rss::situation::SituationType valueScenesElementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  valueScenesElement.situationType = valueScenesElementSituationType;
  ::ad::rss::world::Object valueScenesElementEgoVehicle;
  ::ad::rss::world::ObjectId valueScenesElementEgoVehicleObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueScenesElementEgoVehicle.objectId = valueScenesElementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType valueScenesElementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
  valueScenesElementEgoVehicle.objectType = valueScenesElementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector valueScenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion valueScenesElementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementEgoVehicleOccupiedRegionsElement.segmentId
    = valueScenesElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange valueScenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  valueScenesElementEgoVehicleOccupiedRegionsElement.lonRange
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange valueScenesElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  valueScenesElementEgoVehicleOccupiedRegionsElement.latRange
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange;
  valueScenesElementEgoVehicleOccupiedRegions.resize(1, valueScenesElementEgoVehicleOccupiedRegionsElement);
  valueScenesElementEgoVehicle.occupiedRegions = valueScenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity valueScenesElementEgoVehicleVelocity;
  ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLon(-100.);
  valueScenesElementEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueScenesElementEgoVehicleVelocity.speedLon = valueScenesElementEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLat(-100.);
  valueScenesElementEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueScenesElementEgoVehicleVelocity.speedLat = valueScenesElementEgoVehicleVelocitySpeedLat;
  valueScenesElementEgoVehicle.velocity = valueScenesElementEgoVehicleVelocity;
  valueScenesElement.egoVehicle = valueScenesElementEgoVehicle;
  ::ad::rss::world::Object valueScenesElementObject;
  ::ad::rss::world::ObjectId valueScenesElementObjectObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueScenesElementObject.objectId = valueScenesElementObjectObjectId;
  ::ad::rss::world::ObjectType valueScenesElementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
  valueScenesElementObject.objectType = valueScenesElementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector valueScenesElementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion valueScenesElementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementObjectOccupiedRegionsElement.segmentId = valueScenesElementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange valueScenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLonRangeMinimum(0.);
  valueScenesElementObjectOccupiedRegionsElementLonRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLonRangeMaximum(0.);
  valueScenesElementObjectOccupiedRegionsElementLonRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLonRangeMaximum;
  valueScenesElementObjectOccupiedRegionsElementLonRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLonRange.minimum;
  valueScenesElementObjectOccupiedRegionsElementLonRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLonRange.maximum;
  valueScenesElementObjectOccupiedRegionsElement.lonRange = valueScenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange valueScenesElementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLatRangeMinimum(0.);
  valueScenesElementObjectOccupiedRegionsElementLatRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLatRangeMaximum(0.);
  valueScenesElementObjectOccupiedRegionsElementLatRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLatRangeMaximum;
  valueScenesElementObjectOccupiedRegionsElementLatRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLatRange.minimum;
  valueScenesElementObjectOccupiedRegionsElementLatRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLatRange.maximum;
  valueScenesElementObjectOccupiedRegionsElement.latRange = valueScenesElementObjectOccupiedRegionsElementLatRange;
  valueScenesElementObjectOccupiedRegions.resize(1, valueScenesElementObjectOccupiedRegionsElement);
  valueScenesElementObject.occupiedRegions = valueScenesElementObjectOccupiedRegions;
  ::ad::rss::world::Velocity valueScenesElementObjectVelocity;
  ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLon(-100.);
  valueScenesElementObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueScenesElementObjectVelocity.speedLon = valueScenesElementObjectVelocitySpeedLon;
  ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLat(-100.);
  valueScenesElementObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueScenesElementObjectVelocity.speedLat = valueScenesElementObjectVelocitySpeedLat;
  valueScenesElementObject.velocity = valueScenesElementObjectVelocity;
  valueScenesElement.object = valueScenesElementObject;
  ::ad::rss::world::RssDynamics valueScenesElementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueScenesElementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLon.accelMax = valueScenesElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMax = valueScenesElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect
    = valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMax = valueScenesElementObjectRssDynamicsAlphaLon.brakeMin;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLon.brakeMax;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = valueScenesElementObjectRssDynamicsAlphaLon.brakeMin;
  valueScenesElementObjectRssDynamics.alphaLon = valueScenesElementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueScenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLat.accelMax = valueScenesElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLat.brakeMin = valueScenesElementObjectRssDynamicsAlphaLatBrakeMin;
  valueScenesElementObjectRssDynamics.alphaLat = valueScenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance valueScenesElementObjectRssDynamicsLateralFluctuationMargin(0.);
  valueScenesElementObjectRssDynamics.lateralFluctuationMargin
    = valueScenesElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueScenesElementObjectRssDynamicsResponseTime(0.);
  valueScenesElementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamics.responseTime = valueScenesElementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed valueScenesElementObjectRssDynamicsMaxSpeed(-100.);
  valueScenesElementObjectRssDynamics.maxSpeed = valueScenesElementObjectRssDynamicsMaxSpeed;
  valueScenesElement.objectRssDynamics = valueScenesElementObjectRssDynamics;
  ::ad::rss::world::RoadArea valueScenesElementIntersectingRoad;
  ::ad::rss::world::RoadSegment valueScenesElementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueScenesElementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementIntersectingRoadElementElement.id = valueScenesElementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueScenesElementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  valueScenesElementIntersectingRoadElementElement.type = valueScenesElementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection valueScenesElementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueScenesElementIntersectingRoadElementElement.drivingDirection
    = valueScenesElementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange valueScenesElementIntersectingRoadElementElementLength;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementLengthMinimum(0.);
  valueScenesElementIntersectingRoadElementElementLength.minimum
    = valueScenesElementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementLengthMaximum(0.);
  valueScenesElementIntersectingRoadElementElementLength.maximum
    = valueScenesElementIntersectingRoadElementElementLengthMaximum;
  valueScenesElementIntersectingRoadElementElementLength.maximum
    = valueScenesElementIntersectingRoadElementElementLength.minimum;
  valueScenesElementIntersectingRoadElementElementLength.minimum
    = valueScenesElementIntersectingRoadElementElementLength.maximum;
  valueScenesElementIntersectingRoadElementElement.length = valueScenesElementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange valueScenesElementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementWidthMinimum(0.);
  valueScenesElementIntersectingRoadElementElementWidth.minimum
    = valueScenesElementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementWidthMaximum(0.);
  valueScenesElementIntersectingRoadElementElementWidth.maximum
    = valueScenesElementIntersectingRoadElementElementWidthMaximum;
  valueScenesElementIntersectingRoadElementElementWidth.maximum
    = valueScenesElementIntersectingRoadElementElementWidth.minimum;
  valueScenesElementIntersectingRoadElementElementWidth.minimum
    = valueScenesElementIntersectingRoadElementElementWidth.maximum;
  valueScenesElementIntersectingRoadElementElement.width = valueScenesElementIntersectingRoadElementElementWidth;
  valueScenesElementIntersectingRoadElement.resize(1, valueScenesElementIntersectingRoadElementElement);
  valueScenesElementIntersectingRoad.resize(1, valueScenesElementIntersectingRoadElement);
  valueScenesElement.intersectingRoad = valueScenesElementIntersectingRoad;
  ::ad::rss::world::RoadArea valueScenesElementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment valueScenesElementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment valueScenesElementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementEgoVehicleRoadElementElement.id = valueScenesElementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueScenesElementEgoVehicleRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  valueScenesElementEgoVehicleRoadElementElement.type = valueScenesElementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection valueScenesElementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueScenesElementEgoVehicleRoadElementElement.drivingDirection
    = valueScenesElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange valueScenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementLengthMinimum(0.);
  valueScenesElementEgoVehicleRoadElementElementLength.minimum
    = valueScenesElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementLengthMaximum(0.);
  valueScenesElementEgoVehicleRoadElementElementLength.maximum
    = valueScenesElementEgoVehicleRoadElementElementLengthMaximum;
  valueScenesElementEgoVehicleRoadElementElementLength.maximum
    = valueScenesElementEgoVehicleRoadElementElementLength.minimum;
  valueScenesElementEgoVehicleRoadElementElementLength.minimum
    = valueScenesElementEgoVehicleRoadElementElementLength.maximum;
  valueScenesElementEgoVehicleRoadElementElement.length = valueScenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange valueScenesElementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementWidthMinimum(0.);
  valueScenesElementEgoVehicleRoadElementElementWidth.minimum
    = valueScenesElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementWidthMaximum(0.);
  valueScenesElementEgoVehicleRoadElementElementWidth.maximum
    = valueScenesElementEgoVehicleRoadElementElementWidthMaximum;
  valueScenesElementEgoVehicleRoadElementElementWidth.maximum
    = valueScenesElementEgoVehicleRoadElementElementWidth.minimum;
  valueScenesElementEgoVehicleRoadElementElementWidth.minimum
    = valueScenesElementEgoVehicleRoadElementElementWidth.maximum;
  valueScenesElementEgoVehicleRoadElementElement.width = valueScenesElementEgoVehicleRoadElementElementWidth;
  valueScenesElementEgoVehicleRoadElement.resize(1, valueScenesElementEgoVehicleRoadElementElement);
  valueScenesElementEgoVehicleRoad.resize(1, valueScenesElementEgoVehicleRoadElement);
  valueScenesElement.egoVehicleRoad = valueScenesElementEgoVehicleRoad;
  valueScenes.resize(1, valueScenesElement);
  value.scenes = valueScenes;

  // override member with invalid value
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.egoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeEgoVehicleRssDynamicsTooBig)
{
  ::ad::rss::world::WorldModel value;
  ::ad::rss::world::TimeIndex valueTimeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::lowest());
  valueTimeIndex = ::ad::rss::world::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
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
  ::ad::rss::world::SceneVector valueScenes;
  ::ad::rss::world::Scene valueScenesElement;
  ::ad::rss::situation::SituationType valueScenesElementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  valueScenesElement.situationType = valueScenesElementSituationType;
  ::ad::rss::world::Object valueScenesElementEgoVehicle;
  ::ad::rss::world::ObjectId valueScenesElementEgoVehicleObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueScenesElementEgoVehicle.objectId = valueScenesElementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType valueScenesElementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
  valueScenesElementEgoVehicle.objectType = valueScenesElementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector valueScenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion valueScenesElementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementEgoVehicleOccupiedRegionsElement.segmentId
    = valueScenesElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange valueScenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  valueScenesElementEgoVehicleOccupiedRegionsElement.lonRange
    = valueScenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange valueScenesElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  valueScenesElementEgoVehicleOccupiedRegionsElement.latRange
    = valueScenesElementEgoVehicleOccupiedRegionsElementLatRange;
  valueScenesElementEgoVehicleOccupiedRegions.resize(1, valueScenesElementEgoVehicleOccupiedRegionsElement);
  valueScenesElementEgoVehicle.occupiedRegions = valueScenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity valueScenesElementEgoVehicleVelocity;
  ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLon(-100.);
  valueScenesElementEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueScenesElementEgoVehicleVelocity.speedLon = valueScenesElementEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLat(-100.);
  valueScenesElementEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueScenesElementEgoVehicleVelocity.speedLat = valueScenesElementEgoVehicleVelocitySpeedLat;
  valueScenesElementEgoVehicle.velocity = valueScenesElementEgoVehicleVelocity;
  valueScenesElement.egoVehicle = valueScenesElementEgoVehicle;
  ::ad::rss::world::Object valueScenesElementObject;
  ::ad::rss::world::ObjectId valueScenesElementObjectObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  valueScenesElementObject.objectId = valueScenesElementObjectObjectId;
  ::ad::rss::world::ObjectType valueScenesElementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
  valueScenesElementObject.objectType = valueScenesElementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector valueScenesElementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion valueScenesElementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementObjectOccupiedRegionsElement.segmentId = valueScenesElementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange valueScenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLonRangeMinimum(0.);
  valueScenesElementObjectOccupiedRegionsElementLonRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLonRangeMaximum(0.);
  valueScenesElementObjectOccupiedRegionsElementLonRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLonRangeMaximum;
  valueScenesElementObjectOccupiedRegionsElementLonRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLonRange.minimum;
  valueScenesElementObjectOccupiedRegionsElementLonRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLonRange.maximum;
  valueScenesElementObjectOccupiedRegionsElement.lonRange = valueScenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange valueScenesElementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLatRangeMinimum(0.);
  valueScenesElementObjectOccupiedRegionsElementLatRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue valueScenesElementObjectOccupiedRegionsElementLatRangeMaximum(0.);
  valueScenesElementObjectOccupiedRegionsElementLatRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLatRangeMaximum;
  valueScenesElementObjectOccupiedRegionsElementLatRange.maximum
    = valueScenesElementObjectOccupiedRegionsElementLatRange.minimum;
  valueScenesElementObjectOccupiedRegionsElementLatRange.minimum
    = valueScenesElementObjectOccupiedRegionsElementLatRange.maximum;
  valueScenesElementObjectOccupiedRegionsElement.latRange = valueScenesElementObjectOccupiedRegionsElementLatRange;
  valueScenesElementObjectOccupiedRegions.resize(1, valueScenesElementObjectOccupiedRegionsElement);
  valueScenesElementObject.occupiedRegions = valueScenesElementObjectOccupiedRegions;
  ::ad::rss::world::Velocity valueScenesElementObjectVelocity;
  ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLon(-100.);
  valueScenesElementObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueScenesElementObjectVelocity.speedLon = valueScenesElementObjectVelocitySpeedLon;
  ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLat(-100.);
  valueScenesElementObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueScenesElementObjectVelocity.speedLat = valueScenesElementObjectVelocitySpeedLat;
  valueScenesElementObject.velocity = valueScenesElementObjectVelocity;
  valueScenesElement.object = valueScenesElementObject;
  ::ad::rss::world::RssDynamics valueScenesElementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues valueScenesElementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLon.accelMax = valueScenesElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMax = valueScenesElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect
    = valueScenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMax = valueScenesElementObjectRssDynamicsAlphaLon.brakeMin;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMin = valueScenesElementObjectRssDynamicsAlphaLon.brakeMax;
  valueScenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = valueScenesElementObjectRssDynamicsAlphaLon.brakeMin;
  valueScenesElementObjectRssDynamics.alphaLon = valueScenesElementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues valueScenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLat.accelMax = valueScenesElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration valueScenesElementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueScenesElementObjectRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamicsAlphaLat.brakeMin = valueScenesElementObjectRssDynamicsAlphaLatBrakeMin;
  valueScenesElementObjectRssDynamics.alphaLat = valueScenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance valueScenesElementObjectRssDynamicsLateralFluctuationMargin(0.);
  valueScenesElementObjectRssDynamics.lateralFluctuationMargin
    = valueScenesElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration valueScenesElementObjectRssDynamicsResponseTime(0.);
  valueScenesElementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueScenesElementObjectRssDynamics.responseTime = valueScenesElementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed valueScenesElementObjectRssDynamicsMaxSpeed(-100.);
  valueScenesElementObjectRssDynamics.maxSpeed = valueScenesElementObjectRssDynamicsMaxSpeed;
  valueScenesElement.objectRssDynamics = valueScenesElementObjectRssDynamics;
  ::ad::rss::world::RoadArea valueScenesElementIntersectingRoad;
  ::ad::rss::world::RoadSegment valueScenesElementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment valueScenesElementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementIntersectingRoadElementElement.id = valueScenesElementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueScenesElementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  valueScenesElementIntersectingRoadElementElement.type = valueScenesElementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection valueScenesElementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueScenesElementIntersectingRoadElementElement.drivingDirection
    = valueScenesElementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange valueScenesElementIntersectingRoadElementElementLength;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementLengthMinimum(0.);
  valueScenesElementIntersectingRoadElementElementLength.minimum
    = valueScenesElementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementLengthMaximum(0.);
  valueScenesElementIntersectingRoadElementElementLength.maximum
    = valueScenesElementIntersectingRoadElementElementLengthMaximum;
  valueScenesElementIntersectingRoadElementElementLength.maximum
    = valueScenesElementIntersectingRoadElementElementLength.minimum;
  valueScenesElementIntersectingRoadElementElementLength.minimum
    = valueScenesElementIntersectingRoadElementElementLength.maximum;
  valueScenesElementIntersectingRoadElementElement.length = valueScenesElementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange valueScenesElementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementWidthMinimum(0.);
  valueScenesElementIntersectingRoadElementElementWidth.minimum
    = valueScenesElementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance valueScenesElementIntersectingRoadElementElementWidthMaximum(0.);
  valueScenesElementIntersectingRoadElementElementWidth.maximum
    = valueScenesElementIntersectingRoadElementElementWidthMaximum;
  valueScenesElementIntersectingRoadElementElementWidth.maximum
    = valueScenesElementIntersectingRoadElementElementWidth.minimum;
  valueScenesElementIntersectingRoadElementElementWidth.minimum
    = valueScenesElementIntersectingRoadElementElementWidth.maximum;
  valueScenesElementIntersectingRoadElementElement.width = valueScenesElementIntersectingRoadElementElementWidth;
  valueScenesElementIntersectingRoadElement.resize(1, valueScenesElementIntersectingRoadElementElement);
  valueScenesElementIntersectingRoad.resize(1, valueScenesElementIntersectingRoadElement);
  valueScenesElement.intersectingRoad = valueScenesElementIntersectingRoad;
  ::ad::rss::world::RoadArea valueScenesElementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment valueScenesElementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment valueScenesElementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId valueScenesElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  valueScenesElementEgoVehicleRoadElementElement.id = valueScenesElementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType valueScenesElementEgoVehicleRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  valueScenesElementEgoVehicleRoadElementElement.type = valueScenesElementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection valueScenesElementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  valueScenesElementEgoVehicleRoadElementElement.drivingDirection
    = valueScenesElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange valueScenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementLengthMinimum(0.);
  valueScenesElementEgoVehicleRoadElementElementLength.minimum
    = valueScenesElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementLengthMaximum(0.);
  valueScenesElementEgoVehicleRoadElementElementLength.maximum
    = valueScenesElementEgoVehicleRoadElementElementLengthMaximum;
  valueScenesElementEgoVehicleRoadElementElementLength.maximum
    = valueScenesElementEgoVehicleRoadElementElementLength.minimum;
  valueScenesElementEgoVehicleRoadElementElementLength.minimum
    = valueScenesElementEgoVehicleRoadElementElementLength.maximum;
  valueScenesElementEgoVehicleRoadElementElement.length = valueScenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange valueScenesElementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementWidthMinimum(0.);
  valueScenesElementEgoVehicleRoadElementElementWidth.minimum
    = valueScenesElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance valueScenesElementEgoVehicleRoadElementElementWidthMaximum(0.);
  valueScenesElementEgoVehicleRoadElementElementWidth.maximum
    = valueScenesElementEgoVehicleRoadElementElementWidthMaximum;
  valueScenesElementEgoVehicleRoadElementElementWidth.maximum
    = valueScenesElementEgoVehicleRoadElementElementWidth.minimum;
  valueScenesElementEgoVehicleRoadElementElementWidth.minimum
    = valueScenesElementEgoVehicleRoadElementElementWidth.maximum;
  valueScenesElementEgoVehicleRoadElementElement.width = valueScenesElementEgoVehicleRoadElementElementWidth;
  valueScenesElementEgoVehicleRoadElement.resize(1, valueScenesElementEgoVehicleRoadElementElement);
  valueScenesElementEgoVehicleRoad.resize(1, valueScenesElementEgoVehicleRoadElement);
  valueScenesElement.egoVehicleRoad = valueScenesElementEgoVehicleRoad;
  valueScenes.resize(1, valueScenesElement);
  value.scenes = valueScenes;

  // override member with invalid value
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.egoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
