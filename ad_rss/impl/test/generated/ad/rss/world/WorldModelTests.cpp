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
#include "ad/rss/world/WorldModel.hpp"

class WorldModelTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
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
    ::ad::rss::situation::SituationType valueScenesElementSituationType(
      ::ad::rss::situation::SituationType::NotRelevant);
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
    ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLonMin(-100.);
    valueScenesElementEgoVehicleVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueScenesElementEgoVehicleVelocity.speedLonMin = valueScenesElementEgoVehicleVelocitySpeedLonMin;
    ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLonMax(-100.);
    valueScenesElementEgoVehicleVelocity.speedLonMax = valueScenesElementEgoVehicleVelocitySpeedLonMax;
    ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLatMin(-100.);
    valueScenesElementEgoVehicleVelocitySpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
    valueScenesElementEgoVehicleVelocity.speedLatMin = valueScenesElementEgoVehicleVelocitySpeedLatMin;
    ::ad::physics::Speed valueScenesElementEgoVehicleVelocitySpeedLatMax(-100.);
    valueScenesElementEgoVehicleVelocity.speedLatMax = valueScenesElementEgoVehicleVelocitySpeedLatMax;
    valueScenesElementEgoVehicleVelocity.speedLonMax = valueScenesElementEgoVehicleVelocity.speedLonMin;
    valueScenesElementEgoVehicleVelocity.speedLatMax = valueScenesElementEgoVehicleVelocity.speedLatMin;
    valueScenesElementEgoVehicleVelocity.speedLonMin = valueScenesElementEgoVehicleVelocity.speedLonMax;
    valueScenesElementEgoVehicleVelocity.speedLatMin = valueScenesElementEgoVehicleVelocity.speedLatMax;
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
    ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLonMin(-100.);
    valueScenesElementObjectVelocitySpeedLonMin = ::ad::physics::Speed(0.); // set to valid value within struct
    valueScenesElementObjectVelocity.speedLonMin = valueScenesElementObjectVelocitySpeedLonMin;
    ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLonMax(-100.);
    valueScenesElementObjectVelocity.speedLonMax = valueScenesElementObjectVelocitySpeedLonMax;
    ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLatMin(-100.);
    valueScenesElementObjectVelocitySpeedLatMin = ::ad::physics::Speed(-10.); // set to valid value within struct
    valueScenesElementObjectVelocity.speedLatMin = valueScenesElementObjectVelocitySpeedLatMin;
    ::ad::physics::Speed valueScenesElementObjectVelocitySpeedLatMax(-100.);
    valueScenesElementObjectVelocity.speedLatMax = valueScenesElementObjectVelocitySpeedLatMax;
    valueScenesElementObjectVelocity.speedLonMax = valueScenesElementObjectVelocity.speedLonMin;
    valueScenesElementObjectVelocity.speedLatMax = valueScenesElementObjectVelocity.speedLatMin;
    valueScenesElementObjectVelocity.speedLonMin = valueScenesElementObjectVelocity.speedLonMax;
    valueScenesElementObjectVelocity.speedLatMin = valueScenesElementObjectVelocity.speedLatMax;
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
    mValue = value;
  }

  ::ad::rss::world::WorldModel mValue;
};

TEST_F(WorldModelTests, copyConstruction)
{
  ::ad::rss::world::WorldModel value(mValue);
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, moveConstruction)
{
  ::ad::rss::world::WorldModel value(std::move(::ad::rss::world::WorldModel(mValue)));
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, copyAssignment)
{
  ::ad::rss::world::WorldModel value;
  value = mValue;
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, moveAssignment)
{
  ::ad::rss::world::WorldModel value;
  value = std::move(::ad::rss::world::WorldModel(mValue));
  EXPECT_EQ(mValue, value);
}

TEST_F(WorldModelTests, comparisonOperatorEqual)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_TRUE(valueA == valueB);
  EXPECT_FALSE(valueA != valueB);
}

TEST_F(WorldModelTests, stringConversionTest)
{
  std::stringstream stream;
  stream << mValue;
  std::string ostreamStr = stream.str();
  std::string toStr = std::to_string(mValue);
  ASSERT_EQ(ostreamStr, toStr);
}

TEST_F(WorldModelTests, comparisonOperatorTimeIndexDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::TimeIndex timeIndex(std::numeric_limits<::ad::rss::world::TimeIndex>::max());
  valueA.timeIndex = timeIndex;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorEgoVehicleRssDynamicsDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
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
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}

TEST_F(WorldModelTests, comparisonOperatorScenesDiffers)
{
  ::ad::rss::world::WorldModel valueA = mValue;
  ::ad::rss::world::SceneVector scenes;
  ::ad::rss::world::Scene scenesElement;
  ::ad::rss::situation::SituationType scenesElementSituationType(
    ::ad::rss::situation::SituationType::IntersectionSamePriority);
  scenesElement.situationType = scenesElementSituationType;
  ::ad::rss::world::Object scenesElementEgoVehicle;
  ::ad::rss::world::ObjectId scenesElementEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  scenesElementEgoVehicle.objectId = scenesElementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType scenesElementEgoVehicleObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  scenesElementEgoVehicle.objectType = scenesElementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector scenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion scenesElementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId scenesElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  scenesElementEgoVehicleOccupiedRegionsElement.segmentId = scenesElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange scenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  scenesElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  scenesElementEgoVehicleOccupiedRegionsElement.lonRange = scenesElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange scenesElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue scenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum(1.);
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  scenesElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = scenesElementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  scenesElementEgoVehicleOccupiedRegionsElement.latRange = scenesElementEgoVehicleOccupiedRegionsElementLatRange;
  scenesElementEgoVehicleOccupiedRegions.resize(0 + 1, scenesElementEgoVehicleOccupiedRegionsElement);
  scenesElementEgoVehicle.occupiedRegions = scenesElementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity scenesElementEgoVehicleVelocity;
  ::ad::physics::Speed scenesElementEgoVehicleVelocitySpeedLonMin(100.);
  scenesElementEgoVehicleVelocity.speedLonMin = scenesElementEgoVehicleVelocitySpeedLonMin;
  ::ad::physics::Speed scenesElementEgoVehicleVelocitySpeedLonMax(100.);
  scenesElementEgoVehicleVelocity.speedLonMax = scenesElementEgoVehicleVelocitySpeedLonMax;
  ::ad::physics::Speed scenesElementEgoVehicleVelocitySpeedLatMin(100.);
  scenesElementEgoVehicleVelocity.speedLatMin = scenesElementEgoVehicleVelocitySpeedLatMin;
  ::ad::physics::Speed scenesElementEgoVehicleVelocitySpeedLatMax(100.);
  scenesElementEgoVehicleVelocitySpeedLatMax = ::ad::physics::Speed(10.); // set to valid value within struct
  scenesElementEgoVehicleVelocity.speedLatMax = scenesElementEgoVehicleVelocitySpeedLatMax;
  scenesElementEgoVehicleVelocity.speedLatMax = scenesElementEgoVehicleVelocity.speedLatMin;
  scenesElementEgoVehicleVelocity.speedLonMax = scenesElementEgoVehicleVelocity.speedLonMin;
  scenesElementEgoVehicleVelocity.speedLatMin = scenesElementEgoVehicleVelocity.speedLatMax;
  scenesElementEgoVehicleVelocity.speedLonMin = scenesElementEgoVehicleVelocity.speedLonMax;
  scenesElementEgoVehicle.velocity = scenesElementEgoVehicleVelocity;
  scenesElement.egoVehicle = scenesElementEgoVehicle;
  ::ad::rss::world::Object scenesElementObject;
  ::ad::rss::world::ObjectId scenesElementObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::max());
  scenesElementObject.objectId = scenesElementObjectObjectId;
  ::ad::rss::world::ObjectType scenesElementObjectObjectType(::ad::rss::world::ObjectType::ArtificialObject);
  scenesElementObject.objectType = scenesElementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector scenesElementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion scenesElementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId scenesElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  scenesElementObjectOccupiedRegionsElement.segmentId = scenesElementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange scenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLonRangeMinimum(1.);
  scenesElementObjectOccupiedRegionsElementLonRange.minimum = scenesElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLonRangeMaximum(1.);
  scenesElementObjectOccupiedRegionsElementLonRange.maximum = scenesElementObjectOccupiedRegionsElementLonRangeMaximum;
  scenesElementObjectOccupiedRegionsElementLonRange.maximum = scenesElementObjectOccupiedRegionsElementLonRange.minimum;
  scenesElementObjectOccupiedRegionsElementLonRange.minimum = scenesElementObjectOccupiedRegionsElementLonRange.maximum;
  scenesElementObjectOccupiedRegionsElement.lonRange = scenesElementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange scenesElementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLatRangeMinimum(1.);
  scenesElementObjectOccupiedRegionsElementLatRange.minimum = scenesElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue scenesElementObjectOccupiedRegionsElementLatRangeMaximum(1.);
  scenesElementObjectOccupiedRegionsElementLatRange.maximum = scenesElementObjectOccupiedRegionsElementLatRangeMaximum;
  scenesElementObjectOccupiedRegionsElementLatRange.maximum = scenesElementObjectOccupiedRegionsElementLatRange.minimum;
  scenesElementObjectOccupiedRegionsElementLatRange.minimum = scenesElementObjectOccupiedRegionsElementLatRange.maximum;
  scenesElementObjectOccupiedRegionsElement.latRange = scenesElementObjectOccupiedRegionsElementLatRange;
  scenesElementObjectOccupiedRegions.resize(0 + 1, scenesElementObjectOccupiedRegionsElement);
  scenesElementObject.occupiedRegions = scenesElementObjectOccupiedRegions;
  ::ad::rss::world::Velocity scenesElementObjectVelocity;
  ::ad::physics::Speed scenesElementObjectVelocitySpeedLonMin(100.);
  scenesElementObjectVelocity.speedLonMin = scenesElementObjectVelocitySpeedLonMin;
  ::ad::physics::Speed scenesElementObjectVelocitySpeedLonMax(100.);
  scenesElementObjectVelocity.speedLonMax = scenesElementObjectVelocitySpeedLonMax;
  ::ad::physics::Speed scenesElementObjectVelocitySpeedLatMin(100.);
  scenesElementObjectVelocity.speedLatMin = scenesElementObjectVelocitySpeedLatMin;
  ::ad::physics::Speed scenesElementObjectVelocitySpeedLatMax(100.);
  scenesElementObjectVelocitySpeedLatMax = ::ad::physics::Speed(10.); // set to valid value within struct
  scenesElementObjectVelocity.speedLatMax = scenesElementObjectVelocitySpeedLatMax;
  scenesElementObjectVelocity.speedLatMax = scenesElementObjectVelocity.speedLatMin;
  scenesElementObjectVelocity.speedLonMax = scenesElementObjectVelocity.speedLonMin;
  scenesElementObjectVelocity.speedLatMin = scenesElementObjectVelocity.speedLatMax;
  scenesElementObjectVelocity.speedLonMin = scenesElementObjectVelocity.speedLonMax;
  scenesElementObject.velocity = scenesElementObjectVelocity;
  scenesElement.object = scenesElementObject;
  ::ad::rss::world::RssDynamics scenesElementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues scenesElementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonAccelMax(1e2);
  scenesElementObjectRssDynamicsAlphaLon.accelMax = scenesElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMax(1e2);
  scenesElementObjectRssDynamicsAlphaLon.brakeMax = scenesElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMin(1e2);
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect(1e2);
  scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = scenesElementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  scenesElementObjectRssDynamicsAlphaLon.brakeMax = scenesElementObjectRssDynamicsAlphaLon.brakeMin;
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  scenesElementObjectRssDynamicsAlphaLon.brakeMinCorrect = scenesElementObjectRssDynamicsAlphaLon.brakeMin;
  scenesElementObjectRssDynamicsAlphaLon.brakeMin = scenesElementObjectRssDynamicsAlphaLon.brakeMax;
  scenesElementObjectRssDynamics.alphaLon = scenesElementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues scenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLatAccelMax(1e2);
  scenesElementObjectRssDynamicsAlphaLat.accelMax = scenesElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration scenesElementObjectRssDynamicsAlphaLatBrakeMin(1e2);
  scenesElementObjectRssDynamicsAlphaLat.brakeMin = scenesElementObjectRssDynamicsAlphaLatBrakeMin;
  scenesElementObjectRssDynamics.alphaLat = scenesElementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance scenesElementObjectRssDynamicsLateralFluctuationMargin(1e9);
  scenesElementObjectRssDynamicsLateralFluctuationMargin
    = ::ad::physics::Distance(1.); // set to valid value within struct
  scenesElementObjectRssDynamics.lateralFluctuationMargin = scenesElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration scenesElementObjectRssDynamicsResponseTime(1e6);
  scenesElementObjectRssDynamicsResponseTime = ::ad::physics::Duration(10.); // set to valid value within struct
  scenesElementObjectRssDynamics.responseTime = scenesElementObjectRssDynamicsResponseTime;
  ::ad::physics::Speed scenesElementObjectRssDynamicsMaxSpeed(100.);
  scenesElementObjectRssDynamics.maxSpeed = scenesElementObjectRssDynamicsMaxSpeed;
  scenesElement.objectRssDynamics = scenesElementObjectRssDynamics;
  ::ad::rss::world::RoadArea scenesElementIntersectingRoad;
  ::ad::rss::world::RoadSegment scenesElementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment scenesElementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId scenesElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  scenesElementIntersectingRoadElementElement.id = scenesElementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType scenesElementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Intersection);
  scenesElementIntersectingRoadElementElement.type = scenesElementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection scenesElementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  scenesElementIntersectingRoadElementElement.drivingDirection
    = scenesElementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange scenesElementIntersectingRoadElementElementLength;
  ::ad::physics::Distance scenesElementIntersectingRoadElementElementLengthMinimum(1e9);
  scenesElementIntersectingRoadElementElementLength.minimum = scenesElementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance scenesElementIntersectingRoadElementElementLengthMaximum(1e9);
  scenesElementIntersectingRoadElementElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  scenesElementIntersectingRoadElementElementLength.maximum = scenesElementIntersectingRoadElementElementLengthMaximum;
  scenesElementIntersectingRoadElementElementLength.maximum = scenesElementIntersectingRoadElementElementLength.minimum;
  scenesElementIntersectingRoadElementElementLength.minimum = scenesElementIntersectingRoadElementElementLength.maximum;
  scenesElementIntersectingRoadElementElement.length = scenesElementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange scenesElementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance scenesElementIntersectingRoadElementElementWidthMinimum(1e9);
  scenesElementIntersectingRoadElementElementWidth.minimum = scenesElementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance scenesElementIntersectingRoadElementElementWidthMaximum(1e9);
  scenesElementIntersectingRoadElementElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  scenesElementIntersectingRoadElementElementWidth.maximum = scenesElementIntersectingRoadElementElementWidthMaximum;
  scenesElementIntersectingRoadElementElementWidth.maximum = scenesElementIntersectingRoadElementElementWidth.minimum;
  scenesElementIntersectingRoadElementElementWidth.minimum = scenesElementIntersectingRoadElementElementWidth.maximum;
  scenesElementIntersectingRoadElementElement.width = scenesElementIntersectingRoadElementElementWidth;
  scenesElementIntersectingRoadElement.resize(1 + 1, scenesElementIntersectingRoadElementElement);
  scenesElementIntersectingRoad.resize(0 + 1, scenesElementIntersectingRoadElement);
  scenesElement.intersectingRoad = scenesElementIntersectingRoad;
  ::ad::rss::world::RoadArea scenesElementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment scenesElementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment scenesElementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId scenesElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  scenesElementEgoVehicleRoadElementElement.id = scenesElementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType scenesElementEgoVehicleRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Intersection);
  scenesElementEgoVehicleRoadElementElement.type = scenesElementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection scenesElementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  scenesElementEgoVehicleRoadElementElement.drivingDirection
    = scenesElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange scenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance scenesElementEgoVehicleRoadElementElementLengthMinimum(1e9);
  scenesElementEgoVehicleRoadElementElementLength.minimum = scenesElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance scenesElementEgoVehicleRoadElementElementLengthMaximum(1e9);
  scenesElementEgoVehicleRoadElementElementLengthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  scenesElementEgoVehicleRoadElementElementLength.maximum = scenesElementEgoVehicleRoadElementElementLengthMaximum;
  scenesElementEgoVehicleRoadElementElementLength.maximum = scenesElementEgoVehicleRoadElementElementLength.minimum;
  scenesElementEgoVehicleRoadElementElementLength.minimum = scenesElementEgoVehicleRoadElementElementLength.maximum;
  scenesElementEgoVehicleRoadElementElement.length = scenesElementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange scenesElementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance scenesElementEgoVehicleRoadElementElementWidthMinimum(1e9);
  scenesElementEgoVehicleRoadElementElementWidth.minimum = scenesElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance scenesElementEgoVehicleRoadElementElementWidthMaximum(1e9);
  scenesElementEgoVehicleRoadElementElementWidthMaximum
    = ::ad::physics::Distance(1e6); // set to valid value within struct
  scenesElementEgoVehicleRoadElementElementWidth.maximum = scenesElementEgoVehicleRoadElementElementWidthMaximum;
  scenesElementEgoVehicleRoadElementElementWidth.maximum = scenesElementEgoVehicleRoadElementElementWidth.minimum;
  scenesElementEgoVehicleRoadElementElementWidth.minimum = scenesElementEgoVehicleRoadElementElementWidth.maximum;
  scenesElementEgoVehicleRoadElementElement.width = scenesElementEgoVehicleRoadElementElementWidth;
  scenesElementEgoVehicleRoadElement.resize(1 + 1, scenesElementEgoVehicleRoadElementElement);
  scenesElementEgoVehicleRoad.resize(0 + 1, scenesElementEgoVehicleRoadElement);
  scenesElement.egoVehicleRoad = scenesElementEgoVehicleRoad;
  scenes.resize(0 + 1, scenesElement);
  valueA.scenes = scenes;
  ::ad::rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
