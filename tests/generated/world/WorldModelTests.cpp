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
#include "ad_rss/world/WorldModel.hpp"

class WorldModelTests : public testing::Test
{
protected:
  virtual void SetUp() override
  {
    // valid initialization
    ::ad_rss::world::WorldModel value;
    ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
    value.timeIndex = valueTimeIndex;
    ::ad_rss::world::Object valueEgoVehicle;
    ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
    valueEgoVehicle.objectId = valueEgoVehicleObjectId;
    ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::EgoVehicle);
    valueEgoVehicle.objectType = valueEgoVehicleObjectType;
    ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
    valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
    ::ad_rss::world::Dynamics valueEgoVehicleDynamics;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleDynamicsAlphaLon;
    ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonAccelMax(-1e2);
    valueEgoVehicleDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleDynamicsAlphaLon.accelMax = valueEgoVehicleDynamicsAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMax(-1e2);
    valueEgoVehicleDynamicsAlphaLon.brakeMax = valueEgoVehicleDynamicsAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMin(-1e2);
    valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect;
    valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect;
    valueEgoVehicleDynamicsAlphaLon.brakeMax = valueEgoVehicleDynamicsAlphaLon.brakeMin;
    valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLon.brakeMax;
    valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleDynamicsAlphaLon.brakeMin;
    valueEgoVehicleDynamics.alphaLon = valueEgoVehicleDynamicsAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleDynamicsAlphaLat;
    ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLatAccelMax(-1e2);
    valueEgoVehicleDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueEgoVehicleDynamicsAlphaLat.accelMax = valueEgoVehicleDynamicsAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLatBrakeMin(-1e2);
    valueEgoVehicleDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicleDynamicsAlphaLat.brakeMin = valueEgoVehicleDynamicsAlphaLatBrakeMin;
    valueEgoVehicleDynamics.alphaLat = valueEgoVehicleDynamicsAlphaLat;
    ::ad_rss::physics::Distance valueEgoVehicleDynamicsLateralFluctuationMargin(0.);
    valueEgoVehicleDynamics.lateralFluctuationMargin = valueEgoVehicleDynamicsLateralFluctuationMargin;
    valueEgoVehicle.dynamics = valueEgoVehicleDynamics;
    ::ad_rss::world::Velocity valueEgoVehicleVelocity;
    ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
    valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
    ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
    valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
    valueEgoVehicle.velocity = valueEgoVehicleVelocity;
    ::ad_rss::physics::Duration valueEgoVehicleResponseTime(0.);
    valueEgoVehicleResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueEgoVehicle.responseTime = valueEgoVehicleResponseTime;
    value.egoVehicle = valueEgoVehicle;
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

TEST_F(WorldModelTests, comparisonOperatorEgoVehicleDiffers)
{
  ::ad_rss::world::WorldModel valueA = mValue;
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
  ::ad_rss::world::Dynamics egoVehicleDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues egoVehicleDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration egoVehicleDynamicsAlphaLonAccelMax(1e2);
  egoVehicleDynamicsAlphaLon.accelMax = egoVehicleDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration egoVehicleDynamicsAlphaLonBrakeMax(1e2);
  egoVehicleDynamicsAlphaLon.brakeMax = egoVehicleDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration egoVehicleDynamicsAlphaLonBrakeMin(1e2);
  egoVehicleDynamicsAlphaLon.brakeMin = egoVehicleDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration egoVehicleDynamicsAlphaLonBrakeMinCorrect(1e2);
  egoVehicleDynamicsAlphaLon.brakeMinCorrect = egoVehicleDynamicsAlphaLonBrakeMinCorrect;
  egoVehicleDynamicsAlphaLon.brakeMax = egoVehicleDynamicsAlphaLon.brakeMin;
  egoVehicleDynamicsAlphaLon.brakeMin = egoVehicleDynamicsAlphaLon.brakeMinCorrect;
  egoVehicleDynamicsAlphaLon.brakeMinCorrect = egoVehicleDynamicsAlphaLon.brakeMin;
  egoVehicleDynamicsAlphaLon.brakeMin = egoVehicleDynamicsAlphaLon.brakeMax;
  egoVehicleDynamics.alphaLon = egoVehicleDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues egoVehicleDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration egoVehicleDynamicsAlphaLatAccelMax(1e2);
  egoVehicleDynamicsAlphaLat.accelMax = egoVehicleDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration egoVehicleDynamicsAlphaLatBrakeMin(1e2);
  egoVehicleDynamicsAlphaLat.brakeMin = egoVehicleDynamicsAlphaLatBrakeMin;
  egoVehicleDynamics.alphaLat = egoVehicleDynamicsAlphaLat;
  ::ad_rss::physics::Distance egoVehicleDynamicsLateralFluctuationMargin(1e6);
  egoVehicleDynamicsLateralFluctuationMargin = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  egoVehicleDynamics.lateralFluctuationMargin = egoVehicleDynamicsLateralFluctuationMargin;
  egoVehicle.dynamics = egoVehicleDynamics;
  ::ad_rss::world::Velocity egoVehicleVelocity;
  ::ad_rss::physics::Speed egoVehicleVelocitySpeedLon(100.);
  egoVehicleVelocity.speedLon = egoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed egoVehicleVelocitySpeedLat(100.);
  egoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  egoVehicleVelocity.speedLat = egoVehicleVelocitySpeedLat;
  egoVehicle.velocity = egoVehicleVelocity;
  ::ad_rss::physics::Duration egoVehicleResponseTime(100.);
  egoVehicleResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  egoVehicle.responseTime = egoVehicleResponseTime;
  valueA.egoVehicle = egoVehicle;
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
  scenesElementEgoVehicleRoadElement.resize(0 + 1, scenesElementEgoVehicleRoadElementElement);
  scenesElementEgoVehicleRoad.resize(0 + 1, scenesElementEgoVehicleRoadElement);
  scenesElement.egoVehicleRoad = scenesElementEgoVehicleRoad;
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
  scenesElementIntersectingRoadElement.resize(0 + 1, scenesElementIntersectingRoadElementElement);
  scenesElementIntersectingRoad.resize(0 + 1, scenesElementIntersectingRoadElement);
  scenesElement.intersectingRoad = scenesElementIntersectingRoad;
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
  ::ad_rss::world::Dynamics scenesElementObjectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues scenesElementObjectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration scenesElementObjectDynamicsAlphaLonAccelMax(1e2);
  scenesElementObjectDynamicsAlphaLon.accelMax = scenesElementObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration scenesElementObjectDynamicsAlphaLonBrakeMax(1e2);
  scenesElementObjectDynamicsAlphaLon.brakeMax = scenesElementObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration scenesElementObjectDynamicsAlphaLonBrakeMin(1e2);
  scenesElementObjectDynamicsAlphaLon.brakeMin = scenesElementObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration scenesElementObjectDynamicsAlphaLonBrakeMinCorrect(1e2);
  scenesElementObjectDynamicsAlphaLon.brakeMinCorrect = scenesElementObjectDynamicsAlphaLonBrakeMinCorrect;
  scenesElementObjectDynamicsAlphaLon.brakeMax = scenesElementObjectDynamicsAlphaLon.brakeMin;
  scenesElementObjectDynamicsAlphaLon.brakeMin = scenesElementObjectDynamicsAlphaLon.brakeMinCorrect;
  scenesElementObjectDynamicsAlphaLon.brakeMinCorrect = scenesElementObjectDynamicsAlphaLon.brakeMin;
  scenesElementObjectDynamicsAlphaLon.brakeMin = scenesElementObjectDynamicsAlphaLon.brakeMax;
  scenesElementObjectDynamics.alphaLon = scenesElementObjectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues scenesElementObjectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration scenesElementObjectDynamicsAlphaLatAccelMax(1e2);
  scenesElementObjectDynamicsAlphaLat.accelMax = scenesElementObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration scenesElementObjectDynamicsAlphaLatBrakeMin(1e2);
  scenesElementObjectDynamicsAlphaLat.brakeMin = scenesElementObjectDynamicsAlphaLatBrakeMin;
  scenesElementObjectDynamics.alphaLat = scenesElementObjectDynamicsAlphaLat;
  ::ad_rss::physics::Distance scenesElementObjectDynamicsLateralFluctuationMargin(1e6);
  scenesElementObjectDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  scenesElementObjectDynamics.lateralFluctuationMargin = scenesElementObjectDynamicsLateralFluctuationMargin;
  scenesElementObject.dynamics = scenesElementObjectDynamics;
  ::ad_rss::world::Velocity scenesElementObjectVelocity;
  ::ad_rss::physics::Speed scenesElementObjectVelocitySpeedLon(100.);
  scenesElementObjectVelocity.speedLon = scenesElementObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed scenesElementObjectVelocitySpeedLat(100.);
  scenesElementObjectVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  scenesElementObjectVelocity.speedLat = scenesElementObjectVelocitySpeedLat;
  scenesElementObject.velocity = scenesElementObjectVelocity;
  ::ad_rss::physics::Duration scenesElementObjectResponseTime(100.);
  scenesElementObjectResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  scenesElementObject.responseTime = scenesElementObjectResponseTime;
  scenesElement.object = scenesElementObject;
  scenes.resize(0 + 1, scenesElement);
  valueA.scenes = scenes;
  ::ad_rss::world::WorldModel valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
