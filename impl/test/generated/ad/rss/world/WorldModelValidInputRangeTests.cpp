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

TEST(WorldModelValidInputRangeTests, testValidInputRangeScenesTooSmall)
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
  ::ad::rss::world::SceneVector invalidInitializedMember;
  ::ad::rss::world::Scene invalidInitializedMemberSceneVectorElement;
  ::ad::rss::situation::SituationType invalidInitializedMemberSceneVectorElementSituationType(
    ::ad::rss::situation::SituationType::NotRelevant);
  invalidInitializedMemberSceneVectorElement.situationType = invalidInitializedMemberSceneVectorElementSituationType;
  ::ad::rss::world::Object invalidInitializedMemberSceneVectorElementEgoVehicle;
  ::ad::rss::world::ObjectId invalidInitializedMemberSceneVectorElementEgoVehicleObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  invalidInitializedMemberSceneVectorElementEgoVehicle.objectId
    = invalidInitializedMemberSceneVectorElementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType invalidInitializedMemberSceneVectorElementEgoVehicleObjectType(
    ::ad::rss::world::ObjectType::Invalid);
  invalidInitializedMemberSceneVectorElementEgoVehicle.objectType
    = invalidInitializedMemberSceneVectorElementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement.segmentId
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement.lonRange
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement.latRange
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions.resize(
    1, invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement);
  invalidInitializedMemberSceneVectorElementEgoVehicle.occupiedRegions
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity invalidInitializedMemberSceneVectorElementEgoVehicleVelocity;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon(-100.);
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon
    = ::ad::physics::Speed(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocity.speedLon
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat(-100.);
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat
    = ::ad::physics::Speed(-10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocity.speedLat
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat;
  invalidInitializedMemberSceneVectorElementEgoVehicle.velocity
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocity;
  invalidInitializedMemberSceneVectorElement.egoVehicle = invalidInitializedMemberSceneVectorElementEgoVehicle;
  ::ad::rss::world::Object invalidInitializedMemberSceneVectorElementObject;
  ::ad::rss::world::ObjectId invalidInitializedMemberSceneVectorElementObjectObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  invalidInitializedMemberSceneVectorElementObject.objectId = invalidInitializedMemberSceneVectorElementObjectObjectId;
  ::ad::rss::world::ObjectType invalidInitializedMemberSceneVectorElementObjectObjectType(
    ::ad::rss::world::ObjectType::Invalid);
  invalidInitializedMemberSceneVectorElementObject.objectType
    = invalidInitializedMemberSceneVectorElementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement.segmentId
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMinimum(
    0.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMaximum(
    0.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMaximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement.lonRange
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMinimum(
    0.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMaximum(
    0.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMaximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.minimum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.maximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement.latRange
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegions.resize(
    1, invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement);
  invalidInitializedMemberSceneVectorElementObject.occupiedRegions
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
  ::ad::rss::world::Velocity invalidInitializedMemberSceneVectorElementObjectVelocity;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon(-100.);
  invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon
    = ::ad::physics::Speed(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectVelocity.speedLon
    = invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat(-100.);
  invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat
    = ::ad::physics::Speed(-10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectVelocity.speedLat
    = invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat;
  invalidInitializedMemberSceneVectorElementObject.velocity = invalidInitializedMemberSceneVectorElementObjectVelocity;
  invalidInitializedMemberSceneVectorElement.object = invalidInitializedMemberSceneVectorElementObject;
  ::ad::rss::world::RssDynamics invalidInitializedMemberSceneVectorElementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMax;
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.alphaLon
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax
    = ::ad::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.alphaLat
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin(0.);
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime(0.);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.responseTime
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementObjectRssDynamicsMaxSpeed(-100.);
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.maxSpeed
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsMaxSpeed;
  invalidInitializedMemberSceneVectorElement.objectRssDynamics
    = invalidInitializedMemberSceneVectorElementObjectRssDynamics;
  ::ad::rss::world::RoadArea invalidInitializedMemberSceneVectorElementIntersectingRoad;
  ::ad::rss::world::RoadSegment invalidInitializedMemberSceneVectorElementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.id
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.type
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection
    invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.drivingDirection
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMinimum(0.);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMaximum(0.);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMaximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.length
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMinimum(0.);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMaximum(0.);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMaximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.minimum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.maximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.width
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElement.resize(
    1, invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement);
  invalidInitializedMemberSceneVectorElementIntersectingRoad.resize(
    1, invalidInitializedMemberSceneVectorElementIntersectingRoadElement);
  invalidInitializedMemberSceneVectorElement.intersectingRoad
    = invalidInitializedMemberSceneVectorElementIntersectingRoad;
  ::ad::rss::world::RoadArea invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment invalidInitializedMemberSceneVectorElementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.id
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.type
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection
    invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.drivingDirection
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMinimum(0.);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMaximum(0.);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.length
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMinimum(0.);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMaximum(0.);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.width
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElement.resize(
    1, invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoad.resize(
    1, invalidInitializedMemberSceneVectorElementEgoVehicleRoadElement);
  invalidInitializedMemberSceneVectorElement.egoVehicleRoad = invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  invalidInitializedMember.resize(1001, invalidInitializedMemberSceneVectorElement);
  value.scenes = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeScenesTooBig)
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
  ::ad::rss::world::SceneVector invalidInitializedMember;
  ::ad::rss::world::Scene invalidInitializedMemberSceneVectorElement;
  ::ad::rss::situation::SituationType invalidInitializedMemberSceneVectorElementSituationType(
    ::ad::rss::situation::SituationType::IntersectionSamePriority);
  invalidInitializedMemberSceneVectorElement.situationType = invalidInitializedMemberSceneVectorElementSituationType;
  ::ad::rss::world::Object invalidInitializedMemberSceneVectorElementEgoVehicle;
  ::ad::rss::world::ObjectId invalidInitializedMemberSceneVectorElementEgoVehicleObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  invalidInitializedMemberSceneVectorElementEgoVehicle.objectId
    = invalidInitializedMemberSceneVectorElementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType invalidInitializedMemberSceneVectorElementEgoVehicleObjectType(
    ::ad::rss::world::ObjectType::ArtificialObject);
  invalidInitializedMemberSceneVectorElementEgoVehicle.objectType
    = invalidInitializedMemberSceneVectorElementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement.segmentId
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(1.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(1.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement.lonRange
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(1.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(1.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement.latRange
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions.resize(
    0 + 1, invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement);
  invalidInitializedMemberSceneVectorElementEgoVehicle.occupiedRegions
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity invalidInitializedMemberSceneVectorElementEgoVehicleVelocity;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon(100.);
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocity.speedLon
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat(100.);
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat
    = ::ad::physics::Speed(10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocity.speedLat
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat;
  invalidInitializedMemberSceneVectorElementEgoVehicle.velocity
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocity;
  invalidInitializedMemberSceneVectorElement.egoVehicle = invalidInitializedMemberSceneVectorElementEgoVehicle;
  ::ad::rss::world::Object invalidInitializedMemberSceneVectorElementObject;
  ::ad::rss::world::ObjectId invalidInitializedMemberSceneVectorElementObjectObjectId(
    std::numeric_limits<::ad::rss::world::ObjectId>::max());
  invalidInitializedMemberSceneVectorElementObject.objectId = invalidInitializedMemberSceneVectorElementObjectObjectId;
  ::ad::rss::world::ObjectType invalidInitializedMemberSceneVectorElementObjectObjectType(
    ::ad::rss::world::ObjectType::ArtificialObject);
  invalidInitializedMemberSceneVectorElementObject.objectType
    = invalidInitializedMemberSceneVectorElementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement.segmentId
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMinimum(
    1.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMaximum(
    1.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMaximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement.lonRange
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMinimum(
    1.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMaximum(
    1.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMaximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.minimum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.maximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement.latRange
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegions.resize(
    0 + 1, invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement);
  invalidInitializedMemberSceneVectorElementObject.occupiedRegions
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
  ::ad::rss::world::Velocity invalidInitializedMemberSceneVectorElementObjectVelocity;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon(100.);
  invalidInitializedMemberSceneVectorElementObjectVelocity.speedLon
    = invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat(100.);
  invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat
    = ::ad::physics::Speed(10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectVelocity.speedLat
    = invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat;
  invalidInitializedMemberSceneVectorElementObject.velocity = invalidInitializedMemberSceneVectorElementObjectVelocity;
  invalidInitializedMemberSceneVectorElement.object = invalidInitializedMemberSceneVectorElementObject;
  ::ad::rss::world::RssDynamics invalidInitializedMemberSceneVectorElementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMin(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMax;
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.alphaLon
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.alphaLat
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin(1e9);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime(1e6);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.responseTime
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed invalidInitializedMemberSceneVectorElementObjectRssDynamicsMaxSpeed(100.);
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.maxSpeed
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsMaxSpeed;
  invalidInitializedMemberSceneVectorElement.objectRssDynamics
    = invalidInitializedMemberSceneVectorElementObjectRssDynamics;
  ::ad::rss::world::RoadArea invalidInitializedMemberSceneVectorElementIntersectingRoad;
  ::ad::rss::world::RoadSegment invalidInitializedMemberSceneVectorElementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.id
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Intersection);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.type
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection
    invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Negative);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.drivingDirection
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMinimum(1e9);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMaximum(1e9);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMaximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.length
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMinimum(1e9);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMaximum(1e9);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMaximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.minimum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.maximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.width
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElement.resize(
    1 + 1, invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement);
  invalidInitializedMemberSceneVectorElementIntersectingRoad.resize(
    0 + 1, invalidInitializedMemberSceneVectorElementIntersectingRoadElement);
  invalidInitializedMemberSceneVectorElement.intersectingRoad
    = invalidInitializedMemberSceneVectorElementIntersectingRoad;
  ::ad::rss::world::RoadArea invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment invalidInitializedMemberSceneVectorElementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.id
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Intersection);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.type
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection
    invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementDrivingDirection(
      ::ad::rss::world::LaneDrivingDirection::Negative);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.drivingDirection
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMinimum(1e9);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMaximum(1e9);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.length
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMinimum(1e9);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMaximum(1e9);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.width
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElement.resize(
    1 + 1, invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoad.resize(
    0 + 1, invalidInitializedMemberSceneVectorElementEgoVehicleRoadElement);
  invalidInitializedMemberSceneVectorElement.egoVehicleRoad = invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  invalidInitializedMember.resize(1001, invalidInitializedMemberSceneVectorElement);
  value.scenes = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
