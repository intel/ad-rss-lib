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

#include "ad_rss/world/SceneValidInputRange.hpp"

TEST(SceneValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId{};
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::EgoVehicle);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Dynamics valueObjectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonAccelMax(-10);
  valueObjectDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLon.accelMax = valueObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMax(-10);
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMin(-10);
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMinCorrect(-10);
  valueObjectDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLonBrakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMax;
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamics.alphaLon = valueObjectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatAccelMax(-10);
  valueObjectDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLat.accelMax = valueObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatBrakeMin(-10);
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeSituationTypeInvalid)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId{};
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::EgoVehicle);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Dynamics valueObjectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonAccelMax(-10);
  valueObjectDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLon.accelMax = valueObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMax(-10);
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMin(-10);
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMinCorrect(-10);
  valueObjectDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLonBrakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMax;
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamics.alphaLon = valueObjectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatAccelMax(-10);
  valueObjectDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLat.accelMax = valueObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatBrakeMin(-10);
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

  // override member with invalid value
  ::ad_rss::situation::SituationType invalidInitializedMember(static_cast<::ad_rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleRoadInvalid)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId{};
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::EgoVehicle);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Dynamics valueObjectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonAccelMax(-10);
  valueObjectDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLon.accelMax = valueObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMax(-10);
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMin(-10);
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMinCorrect(-10);
  valueObjectDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLonBrakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMax;
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamics.alphaLon = valueObjectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatAccelMax(-10);
  valueObjectDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLat.accelMax = valueObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatBrakeMin(-10);
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

  // override member with invalid value
  ::ad_rss::world::RoadArea invalidInitializedMember;
  ::ad_rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  invalidInitializedMember.resize(1001, invalidInitializedMemberRoadAreaElement);
  value.egoVehicleRoad = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeIntersectingRoadInvalid)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId{};
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::EgoVehicle);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Dynamics valueObjectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonAccelMax(-10);
  valueObjectDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLon.accelMax = valueObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMax(-10);
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMin(-10);
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMinCorrect(-10);
  valueObjectDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLonBrakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMax;
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamics.alphaLon = valueObjectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatAccelMax(-10);
  valueObjectDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLat.accelMax = valueObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatBrakeMin(-10);
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

  // override member with invalid value
  ::ad_rss::world::RoadArea invalidInitializedMember;
  ::ad_rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  invalidInitializedMember.resize(1001, invalidInitializedMemberRoadAreaElement);
  value.intersectingRoad = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectInvalid)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId{};
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::EgoVehicle);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Dynamics valueObjectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonAccelMax(-10);
  valueObjectDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLon.accelMax = valueObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMax(-10);
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMin(-10);
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLonBrakeMinCorrect(-10);
  valueObjectDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLonBrakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMinCorrect;
  valueObjectDynamicsAlphaLon.brakeMax = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamicsAlphaLon.brakeMin = valueObjectDynamicsAlphaLon.brakeMax;
  valueObjectDynamicsAlphaLon.brakeMinCorrect = valueObjectDynamicsAlphaLon.brakeMin;
  valueObjectDynamics.alphaLon = valueObjectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatAccelMax(-10);
  valueObjectDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectDynamicsAlphaLat.accelMax = valueObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectDynamicsAlphaLatBrakeMin(-10);
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

  // override member with invalid value
  ::ad_rss::world::Object invalidInitializedMember;
  ::ad_rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad_rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
