/*
 * ----------------- BEGIN LICENSE BLOCK ---------------------------------
 *
 * Copyright (c) 2018-2019 Intel Corporation
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 *    may be used to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 *    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 *    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *    IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 *    INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *    BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 *    OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 *    WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *    ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *    POSSIBILITY OF SUCH DAMAGE.
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
  ::ad::rss::world::Object invalidInitializedMember;
  ::ad::rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad::rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
  ::ad::rss::world::RssDynamics invalidInitializedMember;
  ::ad::rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.objectRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeIntersectingRoadTooSmall)
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
  ::ad::rss::world::RoadArea invalidInitializedMember;
  ::ad::rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  ::ad::rss::world::LaneSegment invalidInitializedMemberRoadAreaElementElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberRoadAreaElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberRoadAreaElementElement.id = invalidInitializedMemberRoadAreaElementElementId;
  ::ad::rss::world::LaneSegmentType invalidInitializedMemberRoadAreaElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  invalidInitializedMemberRoadAreaElementElement.type = invalidInitializedMemberRoadAreaElementElementType;
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMemberRoadAreaElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  invalidInitializedMemberRoadAreaElementElement.drivingDirection
    = invalidInitializedMemberRoadAreaElementElementDrivingDirection;
  ::ad::physics::MetricRange invalidInitializedMemberRoadAreaElementElementLength;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMinimum(0.);
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLengthMinimum;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMaximum(0.);
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLengthMaximum;
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLength.minimum;
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLength.maximum;
  invalidInitializedMemberRoadAreaElementElement.length = invalidInitializedMemberRoadAreaElementElementLength;
  ::ad::physics::MetricRange invalidInitializedMemberRoadAreaElementElementWidth;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMinimum(0.);
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidthMinimum;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMaximum(0.);
  invalidInitializedMemberRoadAreaElementElementWidth.maximum
    = invalidInitializedMemberRoadAreaElementElementWidthMaximum;
  invalidInitializedMemberRoadAreaElementElementWidth.maximum
    = invalidInitializedMemberRoadAreaElementElementWidth.minimum;
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidth.maximum;
  invalidInitializedMemberRoadAreaElementElement.width = invalidInitializedMemberRoadAreaElementElementWidth;
  invalidInitializedMemberRoadAreaElement.resize(1, invalidInitializedMemberRoadAreaElementElement);
  invalidInitializedMember.resize(51, invalidInitializedMemberRoadAreaElement);
  value.intersectingRoad = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeIntersectingRoadTooBig)
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
  ::ad::rss::world::RoadArea invalidInitializedMember;
  ::ad::rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  ::ad::rss::world::LaneSegment invalidInitializedMemberRoadAreaElementElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberRoadAreaElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  invalidInitializedMemberRoadAreaElementElement.id = invalidInitializedMemberRoadAreaElementElementId;
  ::ad::rss::world::LaneSegmentType invalidInitializedMemberRoadAreaElementElementType(
    ::ad::rss::world::LaneSegmentType::Intersection);
  invalidInitializedMemberRoadAreaElementElement.type = invalidInitializedMemberRoadAreaElementElementType;
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMemberRoadAreaElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  invalidInitializedMemberRoadAreaElementElement.drivingDirection
    = invalidInitializedMemberRoadAreaElementElementDrivingDirection;
  ::ad::physics::MetricRange invalidInitializedMemberRoadAreaElementElementLength;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMinimum(1e6);
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLengthMinimum;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMaximum(1e6);
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLengthMaximum;
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLength.minimum;
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLength.maximum;
  invalidInitializedMemberRoadAreaElementElement.length = invalidInitializedMemberRoadAreaElementElementLength;
  ::ad::physics::MetricRange invalidInitializedMemberRoadAreaElementElementWidth;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMinimum(1e6);
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidthMinimum;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMaximum(1e6);
  invalidInitializedMemberRoadAreaElementElementWidth.maximum
    = invalidInitializedMemberRoadAreaElementElementWidthMaximum;
  invalidInitializedMemberRoadAreaElementElementWidth.maximum
    = invalidInitializedMemberRoadAreaElementElementWidth.minimum;
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidth.maximum;
  invalidInitializedMemberRoadAreaElementElement.width = invalidInitializedMemberRoadAreaElementElementWidth;
  invalidInitializedMemberRoadAreaElement.resize(1 + 1, invalidInitializedMemberRoadAreaElementElement);
  invalidInitializedMember.resize(51, invalidInitializedMemberRoadAreaElement);
  value.intersectingRoad = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleRoadTooSmall)
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
  ::ad::rss::world::RoadArea invalidInitializedMember;
  ::ad::rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  ::ad::rss::world::LaneSegment invalidInitializedMemberRoadAreaElementElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberRoadAreaElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberRoadAreaElementElement.id = invalidInitializedMemberRoadAreaElementElementId;
  ::ad::rss::world::LaneSegmentType invalidInitializedMemberRoadAreaElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  invalidInitializedMemberRoadAreaElementElement.type = invalidInitializedMemberRoadAreaElementElementType;
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMemberRoadAreaElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  invalidInitializedMemberRoadAreaElementElement.drivingDirection
    = invalidInitializedMemberRoadAreaElementElementDrivingDirection;
  ::ad::physics::MetricRange invalidInitializedMemberRoadAreaElementElementLength;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMinimum(0.);
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLengthMinimum;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMaximum(0.);
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLengthMaximum;
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLength.minimum;
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLength.maximum;
  invalidInitializedMemberRoadAreaElementElement.length = invalidInitializedMemberRoadAreaElementElementLength;
  ::ad::physics::MetricRange invalidInitializedMemberRoadAreaElementElementWidth;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMinimum(0.);
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidthMinimum;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMaximum(0.);
  invalidInitializedMemberRoadAreaElementElementWidth.maximum
    = invalidInitializedMemberRoadAreaElementElementWidthMaximum;
  invalidInitializedMemberRoadAreaElementElementWidth.maximum
    = invalidInitializedMemberRoadAreaElementElementWidth.minimum;
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidth.maximum;
  invalidInitializedMemberRoadAreaElementElement.width = invalidInitializedMemberRoadAreaElementElementWidth;
  invalidInitializedMemberRoadAreaElement.resize(1, invalidInitializedMemberRoadAreaElementElement);
  invalidInitializedMember.resize(51, invalidInitializedMemberRoadAreaElement);
  value.egoVehicleRoad = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleRoadTooBig)
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
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
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
  ::ad::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
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

  // override member with invalid value
  ::ad::rss::world::RoadArea invalidInitializedMember;
  ::ad::rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  ::ad::rss::world::LaneSegment invalidInitializedMemberRoadAreaElementElement;
  ::ad::rss::world::LaneSegmentId invalidInitializedMemberRoadAreaElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::max());
  invalidInitializedMemberRoadAreaElementElement.id = invalidInitializedMemberRoadAreaElementElementId;
  ::ad::rss::world::LaneSegmentType invalidInitializedMemberRoadAreaElementElementType(
    ::ad::rss::world::LaneSegmentType::Intersection);
  invalidInitializedMemberRoadAreaElementElement.type = invalidInitializedMemberRoadAreaElementElementType;
  ::ad::rss::world::LaneDrivingDirection invalidInitializedMemberRoadAreaElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Negative);
  invalidInitializedMemberRoadAreaElementElement.drivingDirection
    = invalidInitializedMemberRoadAreaElementElementDrivingDirection;
  ::ad::physics::MetricRange invalidInitializedMemberRoadAreaElementElementLength;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMinimum(1e6);
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLengthMinimum;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMaximum(1e6);
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLengthMaximum;
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLength.minimum;
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLength.maximum;
  invalidInitializedMemberRoadAreaElementElement.length = invalidInitializedMemberRoadAreaElementElementLength;
  ::ad::physics::MetricRange invalidInitializedMemberRoadAreaElementElementWidth;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMinimum(1e6);
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidthMinimum;
  ::ad::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMaximum(1e6);
  invalidInitializedMemberRoadAreaElementElementWidth.maximum
    = invalidInitializedMemberRoadAreaElementElementWidthMaximum;
  invalidInitializedMemberRoadAreaElementElementWidth.maximum
    = invalidInitializedMemberRoadAreaElementElementWidth.minimum;
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidth.maximum;
  invalidInitializedMemberRoadAreaElementElement.width = invalidInitializedMemberRoadAreaElementElementWidth;
  invalidInitializedMemberRoadAreaElement.resize(1 + 1, invalidInitializedMemberRoadAreaElementElement);
  invalidInitializedMember.resize(51, invalidInitializedMemberRoadAreaElement);
  value.egoVehicleRoad = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
