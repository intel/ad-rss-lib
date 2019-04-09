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

class WorldModelValidInputRangeTests : public ::testing::Test
{
public:
  void SetUp() override
  {
    DLT_REGISTER_CONTEXT(mDltContext, "TEST", "WorldModelValidInputRangeTests");
  }

  void TearDown() override
  {
    DLT_UNREGISTER_CONTEXT(mDltContext);
  }

  DltContext mDltContext;
};

TEST_F(WorldModelValidInputRangeTests, testValidInputRange)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
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
  ASSERT_TRUE(withinValidInputRange(value, mDltContext));
}

TEST_F(WorldModelValidInputRangeTests, testValidInputRangeEgoVehicleTooSmall)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
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

  // override member with invalid value
  ::ad_rss::world::Object invalidInitializedMember;
  ::ad_rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad_rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(WorldModelValidInputRangeTests, testValidInputRangeEgoVehicleTooBig)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
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

  // override member with invalid value
  ::ad_rss::world::Object invalidInitializedMember;
  ::ad_rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad_rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(WorldModelValidInputRangeTests, testValidInputRangeScenesTooSmall)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
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
  ::ad_rss::world::ObjectId invalidInitializedMemberSceneVectorElementObjectObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
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
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonAccelMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMin(-1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMinCorrect(-1e2);
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
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatAccelMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatBrakeMin(-1e2);
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
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}

TEST_F(WorldModelValidInputRangeTests, testValidInputRangeScenesTooBig)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
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

  // override member with invalid value
  ::ad_rss::world::SceneVector invalidInitializedMember;
  ::ad_rss::world::Scene invalidInitializedMemberSceneVectorElement;
  ::ad_rss::situation::SituationType invalidInitializedMemberSceneVectorElementSituationType(
    ::ad_rss::situation::SituationType::IntersectionSamePriority);
  invalidInitializedMemberSceneVectorElement.situationType = invalidInitializedMemberSceneVectorElementSituationType;
  ::ad_rss::world::RoadArea invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  ::ad_rss::world::RoadSegment invalidInitializedMemberSceneVectorElementEgoVehicleRoadElement;
  ::ad_rss::world::LaneSegment invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.id
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementId;
  ::ad_rss::world::LaneSegmentType invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementType(
    ::ad_rss::world::LaneSegmentType::Intersection);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.type
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementType;
  ::ad_rss::world::LaneDrivingDirection
    invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementDrivingDirection(
      ::ad_rss::world::LaneDrivingDirection::Negative);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.drivingDirection
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMinimum(1e6);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMaximum(1e6);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLengthMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElement.length
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementLength;
  ::ad_rss::physics::MetricRange invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMinimum(1e6);
  invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementEgoVehicleRoadElementElementWidthMaximum(1e6);
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
  ::ad_rss::world::RoadArea invalidInitializedMemberSceneVectorElementIntersectingRoad;
  ::ad_rss::world::RoadSegment invalidInitializedMemberSceneVectorElementIntersectingRoadElement;
  ::ad_rss::world::LaneSegment invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.id
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementId;
  ::ad_rss::world::LaneSegmentType invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementType(
    ::ad_rss::world::LaneSegmentType::Intersection);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.type
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementType;
  ::ad_rss::world::LaneDrivingDirection
    invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementDrivingDirection(
      ::ad_rss::world::LaneDrivingDirection::Negative);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.drivingDirection
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMinimum(
    1e6);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMaximum(
    1e6);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLengthMaximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength.maximum;
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElement.length
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementLength;
  ::ad_rss::physics::MetricRange invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMinimum(1e6);
  invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidth.minimum
    = invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementIntersectingRoadElementElementWidthMaximum(1e6);
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
  ::ad_rss::world::Object invalidInitializedMemberSceneVectorElementObject;
  ::ad_rss::world::ObjectId invalidInitializedMemberSceneVectorElementObjectObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::max());
  invalidInitializedMemberSceneVectorElementObject.objectId = invalidInitializedMemberSceneVectorElementObjectObjectId;
  ::ad_rss::world::ObjectType invalidInitializedMemberSceneVectorElementObjectObjectType(
    ::ad_rss::world::ObjectType::ArtificialObject);
  invalidInitializedMemberSceneVectorElementObject.objectType
    = invalidInitializedMemberSceneVectorElementObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
  ::ad_rss::world::OccupiedRegion invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement.segmentId
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementSegmentId;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMinimum(1.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMaximum(1.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRangeMaximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange.maximum;
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElement.lonRange
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange;
  ::ad_rss::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMinimum(1.);
  invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementObjectOccupiedRegionsElementLatRangeMaximum(1.);
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
  ::ad_rss::world::Dynamics invalidInitializedMemberSceneVectorElementObjectDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonAccelMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMin(1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMinCorrect(1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLonBrakeMinCorrect;
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMinCorrect;
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMinCorrect
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin;
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon.brakeMax;
  invalidInitializedMemberSceneVectorElementObjectDynamics.alphaLon
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatAccelMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatBrakeMin(1e2);
  invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSceneVectorElementObjectDynamics.alphaLat
    = invalidInitializedMemberSceneVectorElementObjectDynamicsAlphaLat;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementObjectDynamicsLateralFluctuationMargin(1e6);
  invalidInitializedMemberSceneVectorElementObjectDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSceneVectorElementObjectDynamicsLateralFluctuationMargin;
  invalidInitializedMemberSceneVectorElementObject.dynamics = invalidInitializedMemberSceneVectorElementObjectDynamics;
  ::ad_rss::world::Velocity invalidInitializedMemberSceneVectorElementObjectVelocity;
  ::ad_rss::physics::Speed invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon(100.);
  invalidInitializedMemberSceneVectorElementObjectVelocity.speedLon
    = invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat(100.);
  invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat
    = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectVelocity.speedLat
    = invalidInitializedMemberSceneVectorElementObjectVelocitySpeedLat;
  invalidInitializedMemberSceneVectorElementObject.velocity = invalidInitializedMemberSceneVectorElementObjectVelocity;
  ::ad_rss::physics::Duration invalidInitializedMemberSceneVectorElementObjectResponseTime(100.);
  invalidInitializedMemberSceneVectorElementObjectResponseTime
    = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObject.responseTime
    = invalidInitializedMemberSceneVectorElementObjectResponseTime;
  invalidInitializedMemberSceneVectorElement.object = invalidInitializedMemberSceneVectorElementObject;
  invalidInitializedMember.resize(1001, invalidInitializedMemberSceneVectorElement);
  value.scenes = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value, mDltContext));
}
