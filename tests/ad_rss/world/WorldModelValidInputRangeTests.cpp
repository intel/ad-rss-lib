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

#include "ad_rss/world/WorldModelValidInputRange.hpp"

TEST(WorldModelValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex{};
  value.timeIndex = valueTimeIndex;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId{};
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::EgoVehicle);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Dynamics valueEgoVehicleDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonAccelMax(-10);
  valueEgoVehicleDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLon.accelMax = valueEgoVehicleDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMax(-10);
  valueEgoVehicleDynamicsAlphaLon.brakeMax = valueEgoVehicleDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMin(-10);
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect(-10);
  valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect;
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect;
  valueEgoVehicleDynamicsAlphaLon.brakeMax = valueEgoVehicleDynamicsAlphaLon.brakeMin;
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLon.brakeMax;
  valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleDynamicsAlphaLon.brakeMin;
  valueEgoVehicleDynamics.alphaLon = valueEgoVehicleDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLatAccelMax(-10);
  valueEgoVehicleDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLat.accelMax = valueEgoVehicleDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLatBrakeMin(-10);
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
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeEgoVehicleInvalid)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex{};
  value.timeIndex = valueTimeIndex;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId{};
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::EgoVehicle);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Dynamics valueEgoVehicleDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonAccelMax(-10);
  valueEgoVehicleDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLon.accelMax = valueEgoVehicleDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMax(-10);
  valueEgoVehicleDynamicsAlphaLon.brakeMax = valueEgoVehicleDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMin(-10);
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect(-10);
  valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect;
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect;
  valueEgoVehicleDynamicsAlphaLon.brakeMax = valueEgoVehicleDynamicsAlphaLon.brakeMin;
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLon.brakeMax;
  valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleDynamicsAlphaLon.brakeMin;
  valueEgoVehicleDynamics.alphaLon = valueEgoVehicleDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLatAccelMax(-10);
  valueEgoVehicleDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLat.accelMax = valueEgoVehicleDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLatBrakeMin(-10);
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

  // override member with invalid value
  ::ad_rss::world::Object invalidInitializedMember;
  ::ad_rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad_rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeScenesInvalid)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex{};
  value.timeIndex = valueTimeIndex;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId{};
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::EgoVehicle);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Dynamics valueEgoVehicleDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonAccelMax(-10);
  valueEgoVehicleDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLon.accelMax = valueEgoVehicleDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMax(-10);
  valueEgoVehicleDynamicsAlphaLon.brakeMax = valueEgoVehicleDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMin(-10);
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect(-10);
  valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleDynamicsAlphaLonBrakeMinCorrect;
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect;
  valueEgoVehicleDynamicsAlphaLon.brakeMax = valueEgoVehicleDynamicsAlphaLon.brakeMin;
  valueEgoVehicleDynamicsAlphaLon.brakeMin = valueEgoVehicleDynamicsAlphaLon.brakeMax;
  valueEgoVehicleDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleDynamicsAlphaLon.brakeMin;
  valueEgoVehicleDynamics.alphaLon = valueEgoVehicleDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLatAccelMax(-10);
  valueEgoVehicleDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleDynamicsAlphaLat.accelMax = valueEgoVehicleDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleDynamicsAlphaLatBrakeMin(-10);
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

  // override member with invalid value
  ::ad_rss::world::SceneVector invalidInitializedMember;
  ::ad_rss::world::Scene invalidInitializedMemberSceneVectorElement;
  ::ad_rss::situation::SituationType invalidInitializedMemberSceneVectorElementSituationType(
    ::ad_rss::situation::SituationType::NotRelevant);
  invalidInitializedMemberSceneVectorElement.situationType = invalidInitializedMemberSceneVectorElementSituationType;
  ::ad_rss::world::RoadArea invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  invalidInitializedMemberSceneVectorElement.egoVehicleRoad = invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  ::ad_rss::world::RoadArea invalidInitializedMemberSceneVectorElementIntersectingRoad;
  invalidInitializedMemberSceneVectorElement.intersectingRoad
    = invalidInitializedMemberSceneVectorElementIntersectingRoad;
  ::ad_rss::world::Object invalidInitializedMemberSceneVectorElementObject;
  ::ad_rss::world::ObjectId invalidInitializedMemberSceneVectorElementObjectObjectId{};
  invalidInitializedMemberSceneVectorElementObject.objectId = invalidInitializedMemberSceneVectorElementObjectObjectId;
  ::ad_rss::world::ObjectType invalidInitializedMemberSceneVectorElementObjectObjectType(
    ::ad_rss::world::ObjectType::EgoVehicle);
  invalidInitializedMemberSceneVectorElementObject.objectType
    = invalidInitializedMemberSceneVectorElementObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
  invalidInitializedMemberSceneVectorElementObject.occupiedRegions
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
  ::ad_rss::world::Dynamics invalidInitializedMemberSceneVectorElementObjectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonAccelMax(-10);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMax(-10);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMin(-10);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMinCorrect(-10);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMinCorrect;
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMinCorrect;
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMax;
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSceneVectorElementObjectDynamics.alphaLon
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatAccelMax(-10);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatBrakeMin(-10);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSceneVectorElementObjectDynamics.alphaLat
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementObjectDynamicsLateralFluctuationMargin(0.);
  invalidInitializedMemberSceneVectorElementObjectDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsLateralFluctuationMargin;
  invalidInitializedMemberSceneVectorElementObject.dynamics = invalidInitializedMemberSceneVectorElementObjectDynamics;
  ::ad_rss::world::Velocity invalidInitializedMemberSceneVectorElementObjectVelocity;
  ::ad_rss::physics::Speed invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon(-100.);
  invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon
    = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectVelocity.speedLon
    = invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat(-100.);
  invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat
    = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectVelocity.speedLat
    = invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat;
  invalidInitializedMemberSceneVectorElementObject.velocity = invalidInitializedMemberSceneVectorElementObjectVelocity;
  ::ad_rss::physics::Duration invalidInitializedMemberSceneVectorElementObjectResponseTime(0.);
  invalidInitializedMemberSceneVectorElementObjectResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObject.responseTime
    = invalidInitializedMemberSceneVectorElementObjectResponseTime;
  invalidInitializedMemberSceneVectorElement.object = invalidInitializedMemberSceneVectorElementObject;
  invalidInitializedMember.resize(1001, invalidInitializedMemberSceneVectorElement);
  value.scenes = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
