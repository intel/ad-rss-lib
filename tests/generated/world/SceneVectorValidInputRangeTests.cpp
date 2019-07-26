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

#include "ad/rss/world/SceneVectorValidInputRange.hpp"

TEST(SceneVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad::rss::world::SceneVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad::rss::world::SceneVector value;
  ::ad::rss::world::Scene element;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::world::Object elementEgoVehicle;
  ::ad::rss::world::ObjectId elementEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementEgoVehicle.objectId = elementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType elementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
  elementEgoVehicle.objectType = elementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleOccupiedRegionsElement.segmentId = elementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.lonRange = elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.latRange = elementEgoVehicleOccupiedRegionsElementLatRange;
  elementEgoVehicleOccupiedRegions.resize(1, elementEgoVehicleOccupiedRegionsElement);
  elementEgoVehicle.occupiedRegions = elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity elementEgoVehicleVelocity;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLon(-100.);
  elementEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLon = elementEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLat(-100.);
  elementEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLat = elementEgoVehicleVelocitySpeedLat;
  elementEgoVehicle.velocity = elementEgoVehicleVelocity;
  element.egoVehicle = elementEgoVehicle;
  ::ad::rss::world::Object elementObject;
  ::ad::rss::world::ObjectId elementObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject.objectId = elementObjectObjectId;
  ::ad::rss::world::ObjectType elementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
  elementObject.objectType = elementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector elementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementObjectOccupiedRegionsElement.segmentId = elementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRangeMaximum;
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRange.minimum;
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRange.maximum;
  elementObjectOccupiedRegionsElement.lonRange = elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRangeMaximum;
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRange.minimum;
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRange.maximum;
  elementObjectOccupiedRegionsElement.latRange = elementObjectOccupiedRegionsElementLatRange;
  elementObjectOccupiedRegions.resize(1, elementObjectOccupiedRegionsElement);
  elementObject.occupiedRegions = elementObjectOccupiedRegions;
  ::ad::rss::world::Velocity elementObjectVelocity;
  ::ad::physics::Speed elementObjectVelocitySpeedLon(-100.);
  elementObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speedLon = elementObjectVelocitySpeedLon;
  ::ad::physics::Speed elementObjectVelocitySpeedLat(-100.);
  elementObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  elementObjectVelocity.speedLat = elementObjectVelocitySpeedLat;
  elementObject.velocity = elementObjectVelocity;
  element.object = elementObject;
  ::ad::rss::world::RssDynamics elementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.accelMax = elementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMax;
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamics.alphaLon = elementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.accelMax = elementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.brakeMin = elementObjectRssDynamicsAlphaLatBrakeMin;
  elementObjectRssDynamics.alphaLat = elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance elementObjectRssDynamicsLateralFluctuationMargin(0.);
  elementObjectRssDynamics.lateralFluctuationMargin = elementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementObjectRssDynamicsResponseTime(0.);
  elementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamics.responseTime = elementObjectRssDynamicsResponseTime;
  element.objectRssDynamics = elementObjectRssDynamics;
  ::ad::rss::world::RoadArea elementIntersectingRoad;
  ::ad::rss::world::RoadSegment elementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment elementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementIntersectingRoadElementElement.id = elementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  elementIntersectingRoadElementElement.type = elementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementIntersectingRoadElementElement.drivingDirection = elementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementLength;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMinimum(0.);
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMaximum(0.);
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLengthMaximum;
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLength.minimum;
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLength.maximum;
  elementIntersectingRoadElementElement.length = elementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMinimum(0.);
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMaximum(0.);
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidthMaximum;
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidth.minimum;
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidth.maximum;
  elementIntersectingRoadElementElement.width = elementIntersectingRoadElementElementWidth;
  elementIntersectingRoadElement.resize(1, elementIntersectingRoadElementElement);
  elementIntersectingRoad.resize(1, elementIntersectingRoadElement);
  element.intersectingRoad = elementIntersectingRoad;
  ::ad::rss::world::RoadArea elementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment elementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment elementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleRoadElementElement.id = elementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementEgoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementEgoVehicleRoadElementElement.type = elementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementEgoVehicleRoadElementElement.drivingDirection = elementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMinimum(0.);
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMaximum(0.);
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLengthMaximum;
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLength.minimum;
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLength.maximum;
  elementEgoVehicleRoadElementElement.length = elementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMinimum(0.);
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMaximum(0.);
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidthMaximum;
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidth.minimum;
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidth.maximum;
  elementEgoVehicleRoadElementElement.width = elementEgoVehicleRoadElementElementWidth;
  elementEgoVehicleRoadElement.resize(1, elementEgoVehicleRoadElementElement);
  elementEgoVehicleRoad.resize(1, elementEgoVehicleRoadElement);
  element.egoVehicleRoad = elementEgoVehicleRoad;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad::rss::world::SceneVector value;
  ::ad::rss::world::Scene element;
  ::ad::rss::situation::SituationType elementSituationType(::ad::rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad::rss::world::Object elementEgoVehicle;
  ::ad::rss::world::ObjectId elementEgoVehicleObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementEgoVehicle.objectId = elementEgoVehicleObjectId;
  ::ad::rss::world::ObjectType elementEgoVehicleObjectType(::ad::rss::world::ObjectType::Invalid);
  elementEgoVehicle.objectType = elementEgoVehicleObjectType;
  ::ad::rss::world::OccupiedRegionVector elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementEgoVehicleOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleOccupiedRegionsElement.segmentId = elementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLonRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLonRange.maximum = elementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLonRange.minimum = elementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.lonRange = elementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMinimum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementEgoVehicleOccupiedRegionsElementLatRangeMaximum(0.);
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRangeMaximum;
  elementEgoVehicleOccupiedRegionsElementLatRange.maximum = elementEgoVehicleOccupiedRegionsElementLatRange.minimum;
  elementEgoVehicleOccupiedRegionsElementLatRange.minimum = elementEgoVehicleOccupiedRegionsElementLatRange.maximum;
  elementEgoVehicleOccupiedRegionsElement.latRange = elementEgoVehicleOccupiedRegionsElementLatRange;
  elementEgoVehicleOccupiedRegions.resize(1, elementEgoVehicleOccupiedRegionsElement);
  elementEgoVehicle.occupiedRegions = elementEgoVehicleOccupiedRegions;
  ::ad::rss::world::Velocity elementEgoVehicleVelocity;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLon(-100.);
  elementEgoVehicleVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLon = elementEgoVehicleVelocitySpeedLon;
  ::ad::physics::Speed elementEgoVehicleVelocitySpeedLat(-100.);
  elementEgoVehicleVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLat = elementEgoVehicleVelocitySpeedLat;
  elementEgoVehicle.velocity = elementEgoVehicleVelocity;
  element.egoVehicle = elementEgoVehicle;
  ::ad::rss::world::Object elementObject;
  ::ad::rss::world::ObjectId elementObjectObjectId(std::numeric_limits<::ad::rss::world::ObjectId>::lowest());
  elementObject.objectId = elementObjectObjectId;
  ::ad::rss::world::ObjectType elementObjectObjectType(::ad::rss::world::ObjectType::Invalid);
  elementObject.objectType = elementObjectObjectType;
  ::ad::rss::world::OccupiedRegionVector elementObjectOccupiedRegions;
  ::ad::rss::world::OccupiedRegion elementObjectOccupiedRegionsElement;
  ::ad::rss::world::LaneSegmentId elementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementObjectOccupiedRegionsElement.segmentId = elementObjectOccupiedRegionsElementSegmentId;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLonRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRangeMaximum;
  elementObjectOccupiedRegionsElementLonRange.maximum = elementObjectOccupiedRegionsElementLonRange.minimum;
  elementObjectOccupiedRegionsElementLonRange.minimum = elementObjectOccupiedRegionsElementLonRange.maximum;
  elementObjectOccupiedRegionsElement.lonRange = elementObjectOccupiedRegionsElementLonRange;
  ::ad::physics::ParametricRange elementObjectOccupiedRegionsElementLatRange;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMinimum(0.);
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad::physics::ParametricValue elementObjectOccupiedRegionsElementLatRangeMaximum(0.);
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRangeMaximum;
  elementObjectOccupiedRegionsElementLatRange.maximum = elementObjectOccupiedRegionsElementLatRange.minimum;
  elementObjectOccupiedRegionsElementLatRange.minimum = elementObjectOccupiedRegionsElementLatRange.maximum;
  elementObjectOccupiedRegionsElement.latRange = elementObjectOccupiedRegionsElementLatRange;
  elementObjectOccupiedRegions.resize(1, elementObjectOccupiedRegionsElement);
  elementObject.occupiedRegions = elementObjectOccupiedRegions;
  ::ad::rss::world::Velocity elementObjectVelocity;
  ::ad::physics::Speed elementObjectVelocitySpeedLon(-100.);
  elementObjectVelocitySpeedLon = ::ad::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speedLon = elementObjectVelocitySpeedLon;
  ::ad::physics::Speed elementObjectVelocitySpeedLat(-100.);
  elementObjectVelocitySpeedLat = ::ad::physics::Speed(-10.); // set to valid value within struct
  elementObjectVelocity.speedLat = elementObjectVelocitySpeedLat;
  elementObject.velocity = elementObjectVelocity;
  element.object = elementObject;
  ::ad::rss::world::RssDynamics elementObjectRssDynamics;
  ::ad::rss::world::LongitudinalRssAccelerationValues elementObjectRssDynamicsAlphaLon;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLonAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.accelMax = elementObjectRssDynamicsAlphaLonAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMax;
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamics.alphaLon = elementObjectRssDynamicsAlphaLon;
  ::ad::rss::world::LateralRssAccelerationValues elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLatAccelMax = ::ad::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.accelMax = elementObjectRssDynamicsAlphaLatAccelMax;
  ::ad::physics::Acceleration elementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLatBrakeMin = ::ad::physics::Acceleration(
    0. + ::ad::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.brakeMin = elementObjectRssDynamicsAlphaLatBrakeMin;
  elementObjectRssDynamics.alphaLat = elementObjectRssDynamicsAlphaLat;
  ::ad::physics::Distance elementObjectRssDynamicsLateralFluctuationMargin(0.);
  elementObjectRssDynamics.lateralFluctuationMargin = elementObjectRssDynamicsLateralFluctuationMargin;
  ::ad::physics::Duration elementObjectRssDynamicsResponseTime(0.);
  elementObjectRssDynamicsResponseTime
    = ::ad::physics::Duration(0. + ::ad::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamics.responseTime = elementObjectRssDynamicsResponseTime;
  element.objectRssDynamics = elementObjectRssDynamics;
  ::ad::rss::world::RoadArea elementIntersectingRoad;
  ::ad::rss::world::RoadSegment elementIntersectingRoadElement;
  ::ad::rss::world::LaneSegment elementIntersectingRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementIntersectingRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementIntersectingRoadElementElement.id = elementIntersectingRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementIntersectingRoadElementElementType(
    ::ad::rss::world::LaneSegmentType::Normal);
  elementIntersectingRoadElementElement.type = elementIntersectingRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementIntersectingRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementIntersectingRoadElementElement.drivingDirection = elementIntersectingRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementLength;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMinimum(0.);
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementLengthMaximum(0.);
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLengthMaximum;
  elementIntersectingRoadElementElementLength.maximum = elementIntersectingRoadElementElementLength.minimum;
  elementIntersectingRoadElementElementLength.minimum = elementIntersectingRoadElementElementLength.maximum;
  elementIntersectingRoadElementElement.length = elementIntersectingRoadElementElementLength;
  ::ad::physics::MetricRange elementIntersectingRoadElementElementWidth;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMinimum(0.);
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementIntersectingRoadElementElementWidthMaximum(0.);
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidthMaximum;
  elementIntersectingRoadElementElementWidth.maximum = elementIntersectingRoadElementElementWidth.minimum;
  elementIntersectingRoadElementElementWidth.minimum = elementIntersectingRoadElementElementWidth.maximum;
  elementIntersectingRoadElementElement.width = elementIntersectingRoadElementElementWidth;
  elementIntersectingRoadElement.resize(1, elementIntersectingRoadElementElement);
  elementIntersectingRoad.resize(1, elementIntersectingRoadElement);
  element.intersectingRoad = elementIntersectingRoad;
  ::ad::rss::world::RoadArea elementEgoVehicleRoad;
  ::ad::rss::world::RoadSegment elementEgoVehicleRoadElement;
  ::ad::rss::world::LaneSegment elementEgoVehicleRoadElementElement;
  ::ad::rss::world::LaneSegmentId elementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad::rss::world::LaneSegmentId>::lowest());
  elementEgoVehicleRoadElementElement.id = elementEgoVehicleRoadElementElementId;
  ::ad::rss::world::LaneSegmentType elementEgoVehicleRoadElementElementType(::ad::rss::world::LaneSegmentType::Normal);
  elementEgoVehicleRoadElementElement.type = elementEgoVehicleRoadElementElementType;
  ::ad::rss::world::LaneDrivingDirection elementEgoVehicleRoadElementElementDrivingDirection(
    ::ad::rss::world::LaneDrivingDirection::Bidirectional);
  elementEgoVehicleRoadElementElement.drivingDirection = elementEgoVehicleRoadElementElementDrivingDirection;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementLength;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMinimum(0.);
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLengthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementLengthMaximum(0.);
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLengthMaximum;
  elementEgoVehicleRoadElementElementLength.maximum = elementEgoVehicleRoadElementElementLength.minimum;
  elementEgoVehicleRoadElementElementLength.minimum = elementEgoVehicleRoadElementElementLength.maximum;
  elementEgoVehicleRoadElementElement.length = elementEgoVehicleRoadElementElementLength;
  ::ad::physics::MetricRange elementEgoVehicleRoadElementElementWidth;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMinimum(0.);
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidthMinimum;
  ::ad::physics::Distance elementEgoVehicleRoadElementElementWidthMaximum(0.);
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidthMaximum;
  elementEgoVehicleRoadElementElementWidth.maximum = elementEgoVehicleRoadElementElementWidth.minimum;
  elementEgoVehicleRoadElementElementWidth.minimum = elementEgoVehicleRoadElementElementWidth.maximum;
  elementEgoVehicleRoadElementElement.width = elementEgoVehicleRoadElementElementWidth;
  elementEgoVehicleRoadElement.resize(1, elementEgoVehicleRoadElementElement);
  elementEgoVehicleRoad.resize(1, elementEgoVehicleRoadElement);
  element.egoVehicleRoad = elementEgoVehicleRoad;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad::rss::world::SceneVector value;
  ::ad::rss::world::Scene element;
  ::ad::rss::situation::SituationType elementSituationType(static_cast<::ad::rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
