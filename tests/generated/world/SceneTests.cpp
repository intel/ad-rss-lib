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
    ::ad_rss::world::RoadArea valueEgoVehicleRoad;
    value.egoVehicleRoad = valueEgoVehicleRoad;
    ::ad_rss::world::RoadArea valueIntersectingRoad;
    value.intersectingRoad = valueIntersectingRoad;
    ::ad_rss::world::Object valueObject;
    ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
    valueObject.objectId = valueObjectObjectId;
    ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::EgoVehicle);
    valueObject.objectType = valueObjectObjectType;
    ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
    valueObject.occupiedRegions = valueObjectOccupiedRegions;
    ::ad_rss::world::Dynamics valueObjectDynamics;
    ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectDynamicsAlphaLon;
    ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonAccelMax(-1e2);
    valueObjectDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueObjectDynamicsAlphaLon.accelMax = valueObjectDynamicsAlphaLonAccelMax;
    ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMax(-1e2);
    valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLonBrakeMax;
    ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMin(-1e2);
    valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLonBrakeMin;
    ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMinCorrect(-1e2);
    valueObjectDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLonBrakeMinCorrect;
    valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMinCorrect;
    valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLon.brakeMin;
    valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMax;
    valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLon.brakeMin;
    valueObjectDynamics.alphaLon = valueObjectDynamicsAlphaLon;
    ::ad_rss::world::LateralRssAccelerationValues valueObjectDynamicsAlphaLat;
    ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatAccelMax(-1e2);
    valueObjectDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
    valueObjectDynamicsAlphaLat.accelMax = valueObjectDynamicsAlphaLatAccelMax;
    ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatBrakeMin(-1e2);
    valueObjectDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
      0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
    valueObjectDynamicsAlphaLat.brakeMin = valueObjectDynamicsAlphaLatBrakeMin;
    valueObjectDynamics.alphaLat = valueObjectDynamicsAlphaLat;
    ::ad_rss::physics::Distance valueObjectDynamicsLateralFluctuationMargin(0.);
    valueObjectDynamics.lateralFluctuationMargin = valueObjectDynamicsLateralFluctuationMargin;
    valueObject.dynamics = valueObjectDynamics;
    ::ad_rss::world::Velocity valueObjectVelocity;
    ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
    valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
    valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
    ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
    valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
    valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
    valueObject.velocity = valueObjectVelocity;
    ::ad_rss::physics::Duration valueObjectResponseTime(0.);
    valueObjectResponseTime = ::ad_rss::physics::Duration(
      0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
    valueObject.responseTime = valueObjectResponseTime;
    value.object = valueObject;
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
  egoVehicleRoadElement.resize(0 + 1, egoVehicleRoadElementElement);
  egoVehicleRoad.resize(0 + 1, egoVehicleRoadElement);
  valueA.egoVehicleRoad = egoVehicleRoad;
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
  intersectingRoadElement.resize(0 + 1, intersectingRoadElementElement);
  intersectingRoad.resize(0 + 1, intersectingRoadElement);
  valueA.intersectingRoad = intersectingRoad;
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
  ::ad_rss::world::Dynamics objectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues objectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration objectDynamicsAlphaLonAccelMax(1e2);
  objectDynamicsAlphaLon.accelMax = objectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration objectDynamicsAlphaLonBrakeMax(1e2);
  objectDynamicsAlphaLon.brakeMax = objectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration objectDynamicsAlphaLonBrakeMin(1e2);
  objectDynamicsAlphaLon.brakeMin = objectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration objectDynamicsAlphaLonBrakeMinCorrect(1e2);
  objectDynamicsAlphaLon.brakeMinCorrect = objectDynamicsAlphaLonBrakeMinCorrect;
  objectDynamicsAlphaLon.brakeMax = objectDynamicsAlphaLon.brakeMin;
  objectDynamicsAlphaLon.brakeMin = objectDynamicsAlphaLon.brakeMinCorrect;
  objectDynamicsAlphaLon.brakeMinCorrect = objectDynamicsAlphaLon.brakeMin;
  objectDynamicsAlphaLon.brakeMin = objectDynamicsAlphaLon.brakeMax;
  objectDynamics.alphaLon = objectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues objectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration objectDynamicsAlphaLatAccelMax(1e2);
  objectDynamicsAlphaLat.accelMax = objectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration objectDynamicsAlphaLatBrakeMin(1e2);
  objectDynamicsAlphaLat.brakeMin = objectDynamicsAlphaLatBrakeMin;
  objectDynamics.alphaLat = objectDynamicsAlphaLat;
  ::ad_rss::physics::Distance objectDynamicsLateralFluctuationMargin(1e6);
  objectDynamicsLateralFluctuationMargin = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  objectDynamics.lateralFluctuationMargin = objectDynamicsLateralFluctuationMargin;
  object.dynamics = objectDynamics;
  ::ad_rss::world::Velocity objectVelocity;
  ::ad_rss::physics::Speed objectVelocitySpeedLon(100.);
  objectVelocity.speedLon = objectVelocitySpeedLon;
  ::ad_rss::physics::Speed objectVelocitySpeedLat(100.);
  objectVelocitySpeedLat = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  objectVelocity.speedLat = objectVelocitySpeedLat;
  object.velocity = objectVelocity;
  ::ad_rss::physics::Duration objectResponseTime(100.);
  objectResponseTime = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  object.responseTime = objectResponseTime;
  valueA.object = object;
  ::ad_rss::world::Scene valueB = mValue;

  EXPECT_FALSE(valueA == valueB);
  EXPECT_TRUE(valueA != valueB);
}
