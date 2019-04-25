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
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::world::RssDynamics valueEgoVehicleRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.accelMax = valueEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamics.alphaLon = valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.accelMax = valueEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.brakeMin = valueEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueEgoVehicleRssDynamics.alphaLat = valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueEgoVehicleRssDynamics.lateralFluctuationMargin = valueEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueEgoVehicleRssDynamicsResponseTime(0.);
  valueEgoVehicleRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamics.responseTime = valueEgoVehicleRssDynamicsResponseTime;
  value.egoVehicleRssDynamics = valueEgoVehicleRssDynamics;
  ::ad_rss::world::SceneVector valueScenes;
  value.scenes = valueScenes;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeEgoVehicleRssDynamicsTooSmall)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::world::RssDynamics valueEgoVehicleRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.accelMax = valueEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamics.alphaLon = valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.accelMax = valueEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.brakeMin = valueEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueEgoVehicleRssDynamics.alphaLat = valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueEgoVehicleRssDynamics.lateralFluctuationMargin = valueEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueEgoVehicleRssDynamicsResponseTime(0.);
  valueEgoVehicleRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamics.responseTime = valueEgoVehicleRssDynamicsResponseTime;
  value.egoVehicleRssDynamics = valueEgoVehicleRssDynamics;
  ::ad_rss::world::SceneVector valueScenes;
  value.scenes = valueScenes;

  // override member with invalid value
  ::ad_rss::world::RssDynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.egoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeEgoVehicleRssDynamicsTooBig)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::world::RssDynamics valueEgoVehicleRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.accelMax = valueEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamics.alphaLon = valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.accelMax = valueEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.brakeMin = valueEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueEgoVehicleRssDynamics.alphaLat = valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueEgoVehicleRssDynamics.lateralFluctuationMargin = valueEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueEgoVehicleRssDynamicsResponseTime(0.);
  valueEgoVehicleRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamics.responseTime = valueEgoVehicleRssDynamicsResponseTime;
  value.egoVehicleRssDynamics = valueEgoVehicleRssDynamics;
  ::ad_rss::world::SceneVector valueScenes;
  value.scenes = valueScenes;

  // override member with invalid value
  ::ad_rss::world::RssDynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.egoVehicleRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeScenesTooSmall)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::world::RssDynamics valueEgoVehicleRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.accelMax = valueEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamics.alphaLon = valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.accelMax = valueEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.brakeMin = valueEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueEgoVehicleRssDynamics.alphaLat = valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueEgoVehicleRssDynamics.lateralFluctuationMargin = valueEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueEgoVehicleRssDynamicsResponseTime(0.);
  valueEgoVehicleRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamics.responseTime = valueEgoVehicleRssDynamicsResponseTime;
  value.egoVehicleRssDynamics = valueEgoVehicleRssDynamics;
  ::ad_rss::world::SceneVector valueScenes;
  value.scenes = valueScenes;

  // override member with invalid value
  ::ad_rss::world::SceneVector invalidInitializedMember;
  ::ad_rss::world::Scene invalidInitializedMemberSceneVectorElement;
  ::ad_rss::situation::SituationType invalidInitializedMemberSceneVectorElementSituationType(
    ::ad_rss::situation::SituationType::NotRelevant);
  invalidInitializedMemberSceneVectorElement.situationType = invalidInitializedMemberSceneVectorElementSituationType;
  ::ad_rss::world::Object invalidInitializedMemberSceneVectorElementEgoVehicle;
  ::ad_rss::world::ObjectId invalidInitializedMemberSceneVectorElementEgoVehicleObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  invalidInitializedMemberSceneVectorElementEgoVehicle.objectId
    = invalidInitializedMemberSceneVectorElementEgoVehicleObjectId;
  ::ad_rss::world::ObjectType invalidInitializedMemberSceneVectorElementEgoVehicleObjectType(
    ::ad_rss::world::ObjectType::Invalid);
  invalidInitializedMemberSceneVectorElementEgoVehicle.objectType
    = invalidInitializedMemberSceneVectorElementEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions;
  invalidInitializedMemberSceneVectorElementEgoVehicle.occupiedRegions
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity invalidInitializedMemberSceneVectorElementEgoVehicleVelocity;
  ::ad_rss::physics::Speed invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon(-100.);
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon
    = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocity.speedLon
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat(-100.);
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat
    = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocity.speedLat
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat;
  invalidInitializedMemberSceneVectorElementEgoVehicle.velocity
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocity;
  invalidInitializedMemberSceneVectorElement.egoVehicle = invalidInitializedMemberSceneVectorElementEgoVehicle;
  ::ad_rss::world::Object invalidInitializedMemberSceneVectorElementObject;
  ::ad_rss::world::ObjectId invalidInitializedMemberSceneVectorElementObjectObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  invalidInitializedMemberSceneVectorElementObject.objectId = invalidInitializedMemberSceneVectorElementObjectObjectId;
  ::ad_rss::world::ObjectType invalidInitializedMemberSceneVectorElementObjectObjectType(
    ::ad_rss::world::ObjectType::Invalid);
  invalidInitializedMemberSceneVectorElementObject.objectType
    = invalidInitializedMemberSceneVectorElementObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
  invalidInitializedMemberSceneVectorElementObject.occupiedRegions
    = invalidInitializedMemberSceneVectorElementObjectOccupiedRegions;
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
  invalidInitializedMemberSceneVectorElement.object = invalidInitializedMemberSceneVectorElementObject;
  ::ad_rss::world::RssDynamics invalidInitializedMemberSceneVectorElementObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMinCorrect(
    -1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
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
  ::ad_rss::world::LateralRssAccelerationValues invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax
    = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.alphaLat
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin(0.);
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime(0.);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.responseTime
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime;
  invalidInitializedMemberSceneVectorElement.objectRssDynamics
    = invalidInitializedMemberSceneVectorElementObjectRssDynamics;
  ::ad_rss::world::RoadArea invalidInitializedMemberSceneVectorElementIntersectingRoad;
  invalidInitializedMemberSceneVectorElement.intersectingRoad
    = invalidInitializedMemberSceneVectorElementIntersectingRoad;
  ::ad_rss::world::RoadArea invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  invalidInitializedMemberSceneVectorElement.egoVehicleRoad = invalidInitializedMemberSceneVectorElementEgoVehicleRoad;
  invalidInitializedMember.resize(1001, invalidInitializedMemberSceneVectorElement);
  value.scenes = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(WorldModelValidInputRangeTests, testValidInputRangeScenesTooBig)
{
  ::ad_rss::world::WorldModel value;
  ::ad_rss::physics::TimeIndex valueTimeIndex(std::numeric_limits<::ad_rss::physics::TimeIndex>::lowest());
  valueTimeIndex = ::ad_rss::physics::TimeIndex(1); // set to valid value within struct
  value.timeIndex = valueTimeIndex;
  ::ad_rss::world::RssDynamics valueEgoVehicleRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.accelMax = valueEgoVehicleRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLonBrakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMax = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMin = valueEgoVehicleRssDynamicsAlphaLon.brakeMax;
  valueEgoVehicleRssDynamicsAlphaLon.brakeMinCorrect = valueEgoVehicleRssDynamicsAlphaLon.brakeMin;
  valueEgoVehicleRssDynamics.alphaLon = valueEgoVehicleRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatAccelMax(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.accelMax = valueEgoVehicleRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueEgoVehicleRssDynamicsAlphaLatBrakeMin(-1e2);
  valueEgoVehicleRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamicsAlphaLat.brakeMin = valueEgoVehicleRssDynamicsAlphaLatBrakeMin;
  valueEgoVehicleRssDynamics.alphaLat = valueEgoVehicleRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueEgoVehicleRssDynamicsLateralFluctuationMargin(0.);
  valueEgoVehicleRssDynamics.lateralFluctuationMargin = valueEgoVehicleRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueEgoVehicleRssDynamicsResponseTime(0.);
  valueEgoVehicleRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueEgoVehicleRssDynamics.responseTime = valueEgoVehicleRssDynamicsResponseTime;
  value.egoVehicleRssDynamics = valueEgoVehicleRssDynamics;
  ::ad_rss::world::SceneVector valueScenes;
  value.scenes = valueScenes;

  // override member with invalid value
  ::ad_rss::world::SceneVector invalidInitializedMember;
  ::ad_rss::world::Scene invalidInitializedMemberSceneVectorElement;
  ::ad_rss::situation::SituationType invalidInitializedMemberSceneVectorElementSituationType(
    ::ad_rss::situation::SituationType::IntersectionSamePriority);
  invalidInitializedMemberSceneVectorElement.situationType = invalidInitializedMemberSceneVectorElementSituationType;
  ::ad_rss::world::Object invalidInitializedMemberSceneVectorElementEgoVehicle;
  ::ad_rss::world::ObjectId invalidInitializedMemberSceneVectorElementEgoVehicleObjectId(
    std::numeric_limits<::ad_rss::world::ObjectId>::max());
  invalidInitializedMemberSceneVectorElementEgoVehicle.objectId
    = invalidInitializedMemberSceneVectorElementEgoVehicleObjectId;
  ::ad_rss::world::ObjectType invalidInitializedMemberSceneVectorElementEgoVehicleObjectType(
    ::ad_rss::world::ObjectType::ArtificialObject);
  invalidInitializedMemberSceneVectorElementEgoVehicle.objectType
    = invalidInitializedMemberSceneVectorElementEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegions;
  ::ad_rss::world::OccupiedRegion invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementSegmentId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement.segmentId
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementSegmentId;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMinimum(1.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMinimum;
  ::ad_rss::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMaximum(1.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRangeMaximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange.maximum;
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElement.lonRange
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLonRange;
  ::ad_rss::physics::ParametricRange invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange;
  ::ad_rss::physics::ParametricValue
    invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMinimum(1.);
  invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRange.minimum
    = invalidInitializedMemberSceneVectorElementEgoVehicleOccupiedRegionsElementLatRangeMinimum;
  ::ad_rss::physics::ParametricValue
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
  ::ad_rss::world::Velocity invalidInitializedMemberSceneVectorElementEgoVehicleVelocity;
  ::ad_rss::physics::Speed invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon(100.);
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocity.speedLon
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat(100.);
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat
    = ::ad_rss::physics::Speed(10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementEgoVehicleVelocity.speedLat
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocitySpeedLat;
  invalidInitializedMemberSceneVectorElementEgoVehicle.velocity
    = invalidInitializedMemberSceneVectorElementEgoVehicleVelocity;
  invalidInitializedMemberSceneVectorElement.egoVehicle = invalidInitializedMemberSceneVectorElementEgoVehicle;
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
  invalidInitializedMemberSceneVectorElement.object = invalidInitializedMemberSceneVectorElementObject;
  ::ad_rss::world::RssDynamics invalidInitializedMemberSceneVectorElementObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues
    invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.accelMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMin(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLon.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLonBrakeMinCorrect(
    1e2);
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
  ::ad_rss::world::LateralRssAccelerationValues invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat.accelMax
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin(1e2);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat.brakeMin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLatBrakeMin;
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.alphaLat
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin(1e6);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin
    = ::ad_rss::physics::Distance(1.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.lateralFluctuationMargin
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime(100.);
  invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime
    = ::ad_rss::physics::Duration(10.); // set to valid value within struct
  invalidInitializedMemberSceneVectorElementObjectRssDynamics.responseTime
    = invalidInitializedMemberSceneVectorElementObjectRssDynamicsResponseTime;
  invalidInitializedMemberSceneVectorElement.objectRssDynamics
    = invalidInitializedMemberSceneVectorElementObjectRssDynamics;
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
  invalidInitializedMember.resize(1001, invalidInitializedMemberSceneVectorElement);
  value.scenes = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}
