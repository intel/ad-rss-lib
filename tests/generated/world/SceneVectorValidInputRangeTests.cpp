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

#include "ad_rss/world/SceneVectorValidInputRange.hpp"

TEST(SceneVectorValidInputRangeTests, testValidInputRangeValidInputRangeMin)
{
  ::ad_rss::world::SceneVector value;
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeValidInputRangeMax)
{
  ::ad_rss::world::SceneVector value;
  ::ad_rss::world::Scene element;
  ::ad_rss::situation::SituationType elementSituationType(::ad_rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad_rss::world::Object elementEgoVehicle;
  ::ad_rss::world::ObjectId elementEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  elementEgoVehicle.objectId = elementEgoVehicleObjectId;
  ::ad_rss::world::ObjectType elementEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  elementEgoVehicle.objectType = elementEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector elementEgoVehicleOccupiedRegions;
  elementEgoVehicle.occupiedRegions = elementEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity elementEgoVehicleVelocity;
  ::ad_rss::physics::Speed elementEgoVehicleVelocitySpeedLon(-100.);
  elementEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLon = elementEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed elementEgoVehicleVelocitySpeedLat(-100.);
  elementEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLat = elementEgoVehicleVelocitySpeedLat;
  elementEgoVehicle.velocity = elementEgoVehicleVelocity;
  element.egoVehicle = elementEgoVehicle;
  ::ad_rss::world::Object elementObject;
  ::ad_rss::world::ObjectId elementObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  elementObject.objectId = elementObjectObjectId;
  ::ad_rss::world::ObjectType elementObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  elementObject.objectType = elementObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector elementObjectOccupiedRegions;
  elementObject.occupiedRegions = elementObjectOccupiedRegions;
  ::ad_rss::world::Velocity elementObjectVelocity;
  ::ad_rss::physics::Speed elementObjectVelocitySpeedLon(-100.);
  elementObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speedLon = elementObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed elementObjectVelocitySpeedLat(-100.);
  elementObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  elementObjectVelocity.speedLat = elementObjectVelocitySpeedLat;
  elementObject.velocity = elementObjectVelocity;
  element.object = elementObject;
  ::ad_rss::world::RssDynamics elementObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.accelMax = elementObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMax;
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamics.alphaLon = elementObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.accelMax = elementObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.brakeMin = elementObjectRssDynamicsAlphaLatBrakeMin;
  elementObjectRssDynamics.alphaLat = elementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementObjectRssDynamicsLateralFluctuationMargin(0.);
  elementObjectRssDynamics.lateralFluctuationMargin = elementObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration elementObjectRssDynamicsResponseTime(0.);
  elementObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamics.responseTime = elementObjectRssDynamicsResponseTime;
  element.objectRssDynamics = elementObjectRssDynamics;
  ::ad_rss::world::RoadArea elementIntersectingRoad;
  element.intersectingRoad = elementIntersectingRoad;
  ::ad_rss::world::RoadArea elementEgoVehicleRoad;
  element.egoVehicleRoad = elementEgoVehicleRoad;
  value.resize(1000, element);
  ASSERT_TRUE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeHigherThanInputRangeMax)
{
  ::ad_rss::world::SceneVector value;
  ::ad_rss::world::Scene element;
  ::ad_rss::situation::SituationType elementSituationType(::ad_rss::situation::SituationType::NotRelevant);
  element.situationType = elementSituationType;
  ::ad_rss::world::Object elementEgoVehicle;
  ::ad_rss::world::ObjectId elementEgoVehicleObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  elementEgoVehicle.objectId = elementEgoVehicleObjectId;
  ::ad_rss::world::ObjectType elementEgoVehicleObjectType(::ad_rss::world::ObjectType::Invalid);
  elementEgoVehicle.objectType = elementEgoVehicleObjectType;
  ::ad_rss::world::OccupiedRegionVector elementEgoVehicleOccupiedRegions;
  elementEgoVehicle.occupiedRegions = elementEgoVehicleOccupiedRegions;
  ::ad_rss::world::Velocity elementEgoVehicleVelocity;
  ::ad_rss::physics::Speed elementEgoVehicleVelocitySpeedLon(-100.);
  elementEgoVehicleVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLon = elementEgoVehicleVelocitySpeedLon;
  ::ad_rss::physics::Speed elementEgoVehicleVelocitySpeedLat(-100.);
  elementEgoVehicleVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  elementEgoVehicleVelocity.speedLat = elementEgoVehicleVelocitySpeedLat;
  elementEgoVehicle.velocity = elementEgoVehicleVelocity;
  element.egoVehicle = elementEgoVehicle;
  ::ad_rss::world::Object elementObject;
  ::ad_rss::world::ObjectId elementObjectObjectId(std::numeric_limits<::ad_rss::world::ObjectId>::lowest());
  elementObject.objectId = elementObjectObjectId;
  ::ad_rss::world::ObjectType elementObjectObjectType(::ad_rss::world::ObjectType::Invalid);
  elementObject.objectType = elementObjectObjectType;
  ::ad_rss::world::OccupiedRegionVector elementObjectOccupiedRegions;
  elementObject.occupiedRegions = elementObjectOccupiedRegions;
  ::ad_rss::world::Velocity elementObjectVelocity;
  ::ad_rss::physics::Speed elementObjectVelocitySpeedLon(-100.);
  elementObjectVelocitySpeedLon = ::ad_rss::physics::Speed(0.); // set to valid value within struct
  elementObjectVelocity.speedLon = elementObjectVelocitySpeedLon;
  ::ad_rss::physics::Speed elementObjectVelocitySpeedLat(-100.);
  elementObjectVelocitySpeedLat = ::ad_rss::physics::Speed(-10.); // set to valid value within struct
  elementObjectVelocity.speedLat = elementObjectVelocitySpeedLat;
  elementObject.velocity = elementObjectVelocity;
  element.object = elementObject;
  ::ad_rss::world::RssDynamics elementObjectRssDynamics;
  ::ad_rss::world::LongitudinalRssAccelerationValues elementObjectRssDynamicsAlphaLon;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLonAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLonAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.accelMax = elementObjectRssDynamicsAlphaLonAccelMax;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMax(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLonBrakeMax;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLonBrakeMin;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLonBrakeMinCorrect(-1e2);
  elementObjectRssDynamicsAlphaLonBrakeMinCorrect = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLonBrakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMinCorrect;
  elementObjectRssDynamicsAlphaLon.brakeMax = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamicsAlphaLon.brakeMin = elementObjectRssDynamicsAlphaLon.brakeMax;
  elementObjectRssDynamicsAlphaLon.brakeMinCorrect = elementObjectRssDynamicsAlphaLon.brakeMin;
  elementObjectRssDynamics.alphaLon = elementObjectRssDynamicsAlphaLon;
  ::ad_rss::world::LateralRssAccelerationValues elementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLatAccelMax(-1e2);
  elementObjectRssDynamicsAlphaLatAccelMax = ::ad_rss::physics::Acceleration(0.); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.accelMax = elementObjectRssDynamicsAlphaLatAccelMax;
  ::ad_rss::physics::Acceleration elementObjectRssDynamicsAlphaLatBrakeMin(-1e2);
  elementObjectRssDynamicsAlphaLatBrakeMin = ::ad_rss::physics::Acceleration(
    0. + ::ad_rss::physics::Acceleration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamicsAlphaLat.brakeMin = elementObjectRssDynamicsAlphaLatBrakeMin;
  elementObjectRssDynamics.alphaLat = elementObjectRssDynamicsAlphaLat;
  ::ad_rss::physics::Distance elementObjectRssDynamicsLateralFluctuationMargin(0.);
  elementObjectRssDynamics.lateralFluctuationMargin = elementObjectRssDynamicsLateralFluctuationMargin;
  ::ad_rss::physics::Duration elementObjectRssDynamicsResponseTime(0.);
  elementObjectRssDynamicsResponseTime = ::ad_rss::physics::Duration(
    0. + ::ad_rss::physics::Duration::cPrecisionValue); // set to valid value within struct
  elementObjectRssDynamics.responseTime = elementObjectRssDynamicsResponseTime;
  element.objectRssDynamics = elementObjectRssDynamics;
  ::ad_rss::world::RoadArea elementIntersectingRoad;
  element.intersectingRoad = elementIntersectingRoad;
  ::ad_rss::world::RoadArea elementEgoVehicleRoad;
  element.egoVehicleRoad = elementEgoVehicleRoad;
  value.resize(1001, element);
  ASSERT_FALSE(withinValidInputRange(value));
}

TEST(SceneVectorValidInputRangeTests, testValidInputRangeElementTypeInvalid)
{
  ::ad_rss::world::SceneVector value;
  ::ad_rss::world::Scene element;
  ::ad_rss::situation::SituationType elementSituationType(static_cast<::ad_rss::situation::SituationType>(-1));
  element.situationType = elementSituationType;
  value.resize(999, element);
  ASSERT_FALSE(withinValidInputRange(value));
}
