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
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeSituationTypeTooSmall)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::situation::SituationType invalidInitializedMember(static_cast<::ad_rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeSituationTypeTooBig)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::situation::SituationType invalidInitializedMember(static_cast<::ad_rss::situation::SituationType>(-1));
  value.situationType = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleTooSmall)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::Object invalidInitializedMember;
  ::ad_rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad_rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeEgoVehicleTooBig)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::Object invalidInitializedMember;
  ::ad_rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad_rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.egoVehicle = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectTooSmall)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::Object invalidInitializedMember;
  ::ad_rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad_rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectTooBig)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::Object invalidInitializedMember;
  ::ad_rss::world::ObjectType invalidInitializedMemberObjectType(static_cast<::ad_rss::world::ObjectType>(-1));
  invalidInitializedMember.objectType = invalidInitializedMemberObjectType;
  value.object = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectRssDynamicsTooSmall)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::RssDynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(-1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.objectRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeObjectRssDynamicsTooBig)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::RssDynamics invalidInitializedMember;
  ::ad_rss::world::LongitudinalRssAccelerationValues invalidInitializedMemberAlphaLon;
  ::ad_rss::physics::Acceleration invalidInitializedMemberAlphaLonAccelMax(1e2 * 1.1);
  invalidInitializedMemberAlphaLon.accelMax = invalidInitializedMemberAlphaLonAccelMax;
  invalidInitializedMember.alphaLon = invalidInitializedMemberAlphaLon;
  value.objectRssDynamics = invalidInitializedMember;
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneValidInputRangeTests, testValidInputRangeIntersectingRoadTooSmall)
{
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::RoadArea invalidInitializedMember;
  ::ad_rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  ::ad_rss::world::LaneSegment invalidInitializedMemberRoadAreaElementElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberRoadAreaElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberRoadAreaElementElement.id = invalidInitializedMemberRoadAreaElementElementId;
  ::ad_rss::world::LaneSegmentType invalidInitializedMemberRoadAreaElementElementType(
    ::ad_rss::world::LaneSegmentType::Normal);
  invalidInitializedMemberRoadAreaElementElement.type = invalidInitializedMemberRoadAreaElementElementType;
  ::ad_rss::world::LaneDrivingDirection invalidInitializedMemberRoadAreaElementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Bidirectional);
  invalidInitializedMemberRoadAreaElementElement.drivingDirection
    = invalidInitializedMemberRoadAreaElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange invalidInitializedMemberRoadAreaElementElementLength;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMinimum(0.);
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLengthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMaximum(0.);
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLengthMaximum;
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLength.minimum;
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLength.maximum;
  invalidInitializedMemberRoadAreaElementElement.length = invalidInitializedMemberRoadAreaElementElementLength;
  ::ad_rss::physics::MetricRange invalidInitializedMemberRoadAreaElementElementWidth;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMinimum(0.);
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMaximum(0.);
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
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::RoadArea invalidInitializedMember;
  ::ad_rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  ::ad_rss::world::LaneSegment invalidInitializedMemberRoadAreaElementElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberRoadAreaElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  invalidInitializedMemberRoadAreaElementElement.id = invalidInitializedMemberRoadAreaElementElementId;
  ::ad_rss::world::LaneSegmentType invalidInitializedMemberRoadAreaElementElementType(
    ::ad_rss::world::LaneSegmentType::Intersection);
  invalidInitializedMemberRoadAreaElementElement.type = invalidInitializedMemberRoadAreaElementElementType;
  ::ad_rss::world::LaneDrivingDirection invalidInitializedMemberRoadAreaElementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Negative);
  invalidInitializedMemberRoadAreaElementElement.drivingDirection
    = invalidInitializedMemberRoadAreaElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange invalidInitializedMemberRoadAreaElementElementLength;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMinimum(1e6);
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLengthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMaximum(1e6);
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLengthMaximum;
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLength.minimum;
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLength.maximum;
  invalidInitializedMemberRoadAreaElementElement.length = invalidInitializedMemberRoadAreaElementElementLength;
  ::ad_rss::physics::MetricRange invalidInitializedMemberRoadAreaElementElementWidth;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMinimum(1e6);
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMaximum(1e6);
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
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::RoadArea invalidInitializedMember;
  ::ad_rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  ::ad_rss::world::LaneSegment invalidInitializedMemberRoadAreaElementElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberRoadAreaElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::lowest());
  invalidInitializedMemberRoadAreaElementElement.id = invalidInitializedMemberRoadAreaElementElementId;
  ::ad_rss::world::LaneSegmentType invalidInitializedMemberRoadAreaElementElementType(
    ::ad_rss::world::LaneSegmentType::Normal);
  invalidInitializedMemberRoadAreaElementElement.type = invalidInitializedMemberRoadAreaElementElementType;
  ::ad_rss::world::LaneDrivingDirection invalidInitializedMemberRoadAreaElementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Bidirectional);
  invalidInitializedMemberRoadAreaElementElement.drivingDirection
    = invalidInitializedMemberRoadAreaElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange invalidInitializedMemberRoadAreaElementElementLength;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMinimum(0.);
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLengthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMaximum(0.);
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLengthMaximum;
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLength.minimum;
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLength.maximum;
  invalidInitializedMemberRoadAreaElementElement.length = invalidInitializedMemberRoadAreaElementElementLength;
  ::ad_rss::physics::MetricRange invalidInitializedMemberRoadAreaElementElementWidth;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMinimum(0.);
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMaximum(0.);
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
  ::ad_rss::world::Scene value;
  ::ad_rss::situation::SituationType valueSituationType(::ad_rss::situation::SituationType::NotRelevant);
  value.situationType = valueSituationType;
  ::ad_rss::world::Object valueEgoVehicle;
  ::ad_rss::world::ObjectId valueEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueEgoVehicle.objectId = valueEgoVehicleObjectId;
  ::ad_rss::world::ObjectType valueEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  valueEgoVehicle.objectType = valueEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector valueEgoVehicleOccupiedRegions;
  valueEgoVehicle.occupiedRegions = valueEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity valueEgoVehicleVelocity;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLon(-100.);
  valueEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLon = valueEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed valueEgoVehicleVelocitySpeedLat(-100.);
  valueEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueEgoVehicleVelocity.speedLat = valueEgoVehicleVelocitySpeedLat;
  valueEgoVehicle.velocity = valueEgoVehicleVelocity;
  value.egoVehicle = valueEgoVehicle;
  ::ad_rss::world::Object valueObject;
  ::ad_rss::world::ObjectId valueObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  valueObject.objectId = valueObjectObjectId;
  ::ad_rss::world::ObjectType valueObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  valueObject.objectType = valueObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector valueObjectOccupiedRegions;
  valueObject.occupiedRegions = valueObjectOccupiedRegions;
  ::ad_rss::world::Velocity valueObjectVelocity;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLon(-100.);
  valueObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  valueObjectVelocity.speedLon = valueObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed valueObjectVelocitySpeedLat(-100.);
  valueObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  valueObjectVelocity.speedLat = valueObjectVelocitySpeedLat;
  valueObject.velocity = valueObjectVelocity;
  value.object = valueObject;
  ::ad_rss::world::RssDynamics valueObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues valueObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.accelMax = valueObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  valueObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLonBrakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMinCorrect;
  valueObjectRssDynamicsAlphaLon.brakeMax = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamicsAlphaLon.brakeMin = valueObjectRssDynamicsAlphaLon.brakeMax;
  valueObjectRssDynamicsAlphaLon.brakeMinCorrect = valueObjectRssDynamicsAlphaLon.brakeMin;
  valueObjectRssDynamics.alphaLon = valueObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatAccelMax(-1e2);
  valueObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.accelMax = valueObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration valueObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  valueObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamicsAlphaLat.brakeMin = valueObjectRssDynamicsAlphaLatBrakeMin;
  valueObjectRssDynamics.alphaLat = valueObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance valueObjectRssDynamicsLateralFluctuationMargin(0.);
  valueObjectRssDynamics.lateralFluctuationMargin = valueObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration valueObjectRssDynamicsResponseTime(0.);
  valueObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  valueObjectRssDynamics.responseTime = valueObjectRssDynamicsResponseTime;
  value.objectRssDynamics = valueObjectRssDynamics;
  ::ad_rss::world::RoadArea valueIntersectingRoad;
  value.intersectingRoad = valueIntersectingRoad;
  ::ad_rss::world::RoadArea valueEgoVehicleRoad;
  value.egoVehicleRoad = valueEgoVehicleRoad;

  // override member with invalid value
  ::ad_rss::world::RoadArea invalidInitializedMember;
  ::ad_rss::world::RoadSegment invalidInitializedMemberRoadAreaElement;
  ::ad_rss::world::LaneSegment invalidInitializedMemberRoadAreaElementElement;
  ::ad_rss::world::LaneSegmentId invalidInitializedMemberRoadAreaElementElementId(
    std::numeric_limits<::ad_rss::world::LaneSegmentId>::max());
  invalidInitializedMemberRoadAreaElementElement.id = invalidInitializedMemberRoadAreaElementElementId;
  ::ad_rss::world::LaneSegmentType invalidInitializedMemberRoadAreaElementElementType(
    ::ad_rss::world::LaneSegmentType::Intersection);
  invalidInitializedMemberRoadAreaElementElement.type = invalidInitializedMemberRoadAreaElementElementType;
  ::ad_rss::world::LaneDrivingDirection invalidInitializedMemberRoadAreaElementElementDrivingDirection(
    ::ad_rss::world::LaneDrivingDirection::Negative);
  invalidInitializedMemberRoadAreaElementElement.drivingDirection
    = invalidInitializedMemberRoadAreaElementElementDrivingDirection;
  ::ad_rss::physics::MetricRange invalidInitializedMemberRoadAreaElementElementLength;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMinimum(1e6);
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLengthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementLengthMaximum(1e6);
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLengthMaximum;
  invalidInitializedMemberRoadAreaElementElementLength.maximum
    = invalidInitializedMemberRoadAreaElementElementLength.minimum;
  invalidInitializedMemberRoadAreaElementElementLength.minimum
    = invalidInitializedMemberRoadAreaElementElementLength.maximum;
  invalidInitializedMemberRoadAreaElementElement.length = invalidInitializedMemberRoadAreaElementElementLength;
  ::ad_rss::physics::MetricRange invalidInitializedMemberRoadAreaElementElementWidth;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMinimum(1e6);
  invalidInitializedMemberRoadAreaElementElementWidth.minimum
    = invalidInitializedMemberRoadAreaElementElementWidthMinimum;
  ::ad_rss::physics::Distance invalidInitializedMemberRoadAreaElementElementWidthMaximum(1e6);
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
