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

#include "ad/rss/world/SceneValidInputRange.hpp"

TEST(SceneValidInputRangeTests, testValidInputRange)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeSituationTypeTooSmall)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::situation::SituationType invalidInitializedMember(static_cast<::ad::rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeSituationTypeTooBig)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::situation::SituationType invalidInitializedMember(static_cast<::ad::rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleTooSmall)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleTooBig)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleRssDynamicsTooSmall)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.egoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleRssDynamicsTooBig)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.egoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectTooSmall)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectTooBig)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectRssDynamicsTooSmall)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value below input range minimum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.objectRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectRssDynamicsTooBig)
{
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
  ::ad::rss::world::LaneSegmentType valueIntersectingRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
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

  // override member with data type value above input range maximum
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.objectRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
